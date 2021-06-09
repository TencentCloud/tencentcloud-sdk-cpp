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

#include <tencentcloud/ocr/v20181119/model/BusinessCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BusinessCardOCRResponse::BusinessCardOCRResponse() :
    m_businessCardInfosHasBeenSet(false),
    m_retImageBase64HasBeenSet(false),
    m_angleHasBeenSet(false)
{
}

CoreInternalOutcome BusinessCardOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("BusinessCardInfos") && !rsp["BusinessCardInfos"].IsNull())
    {
        if (!rsp["BusinessCardInfos"].IsArray())
            return CoreInternalOutcome(Error("response `BusinessCardInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BusinessCardInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BusinessCardInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_businessCardInfos.push_back(item);
        }
        m_businessCardInfosHasBeenSet = true;
    }

    if (rsp.HasMember("RetImageBase64") && !rsp["RetImageBase64"].IsNull())
    {
        if (!rsp["RetImageBase64"].IsString())
        {
            return CoreInternalOutcome(Error("response `RetImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retImageBase64 = string(rsp["RetImageBase64"].GetString());
        m_retImageBase64HasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<BusinessCardInfo> BusinessCardOCRResponse::GetBusinessCardInfos() const
{
    return m_businessCardInfos;
}

bool BusinessCardOCRResponse::BusinessCardInfosHasBeenSet() const
{
    return m_businessCardInfosHasBeenSet;
}

string BusinessCardOCRResponse::GetRetImageBase64() const
{
    return m_retImageBase64;
}

bool BusinessCardOCRResponse::RetImageBase64HasBeenSet() const
{
    return m_retImageBase64HasBeenSet;
}

double BusinessCardOCRResponse::GetAngle() const
{
    return m_angle;
}

bool BusinessCardOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}


