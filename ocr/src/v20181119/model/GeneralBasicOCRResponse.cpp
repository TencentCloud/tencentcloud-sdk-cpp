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

#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

GeneralBasicOCRResponse::GeneralBasicOCRResponse() :
    m_textDetectionsHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_angelHasBeenSet(false)
{
}

CoreInternalOutcome GeneralBasicOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TextDetections") && !rsp["TextDetections"].IsNull())
    {
        if (!rsp["TextDetections"].IsArray())
            return CoreInternalOutcome(Error("response `TextDetections` is not array type"));

        const Value &tmpValue = rsp["TextDetections"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextDetection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textDetections.push_back(item);
        }
        m_textDetectionsHasBeenSet = true;
    }

    if (rsp.HasMember("Language") && !rsp["Language"].IsNull())
    {
        if (!rsp["Language"].IsString())
        {
            return CoreInternalOutcome(Error("response `Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(rsp["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (rsp.HasMember("Angel") && !rsp["Angel"].IsNull())
    {
        if (!rsp["Angel"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Angel` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angel = rsp["Angel"].GetDouble();
        m_angelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<TextDetection> GeneralBasicOCRResponse::GetTextDetections() const
{
    return m_textDetections;
}

bool GeneralBasicOCRResponse::TextDetectionsHasBeenSet() const
{
    return m_textDetectionsHasBeenSet;
}

string GeneralBasicOCRResponse::GetLanguage() const
{
    return m_language;
}

bool GeneralBasicOCRResponse::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

double GeneralBasicOCRResponse::GetAngel() const
{
    return m_angel;
}

bool GeneralBasicOCRResponse::AngelHasBeenSet() const
{
    return m_angelHasBeenSet;
}


