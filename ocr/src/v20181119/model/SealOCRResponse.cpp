/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ocr/v20181119/model/SealOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

SealOCRResponse::SealOCRResponse() :
    m_sealBodyHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_otherTextsHasBeenSet(false)
{
}

CoreInternalOutcome SealOCRResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SealBody") && !rsp["SealBody"].IsNull())
    {
        if (!rsp["SealBody"].IsString())
        {
            return CoreInternalOutcome(Error("response `SealBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealBody = string(rsp["SealBody"].GetString());
        m_sealBodyHasBeenSet = true;
    }

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(rsp["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (rsp.HasMember("OtherTexts") && !rsp["OtherTexts"].IsNull())
    {
        if (!rsp["OtherTexts"].IsArray())
            return CoreInternalOutcome(Error("response `OtherTexts` is not array type"));

        const Value &tmpValue = rsp["OtherTexts"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_otherTexts.push_back((*itr).GetString());
        }
        m_otherTextsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string SealOCRResponse::GetSealBody() const
{
    return m_sealBody;
}

bool SealOCRResponse::SealBodyHasBeenSet() const
{
    return m_sealBodyHasBeenSet;
}

Rect SealOCRResponse::GetLocation() const
{
    return m_location;
}

bool SealOCRResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<string> SealOCRResponse::GetOtherTexts() const
{
    return m_otherTexts;
}

bool SealOCRResponse::OtherTextsHasBeenSet() const
{
    return m_otherTextsHasBeenSet;
}


