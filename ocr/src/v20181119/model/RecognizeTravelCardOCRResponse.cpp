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

#include <tencentcloud/ocr/v20181119/model/RecognizeTravelCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeTravelCardOCRResponse::RecognizeTravelCardOCRResponse() :
    m_timeHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_reachedCityHasBeenSet(false),
    m_riskAreaHasBeenSet(false),
    m_telephoneHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeTravelCardOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Time") && !rsp["Time"].IsNull())
    {
        if (!rsp["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(rsp["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (rsp.HasMember("Color") && !rsp["Color"].IsNull())
    {
        if (!rsp["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(rsp["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (rsp.HasMember("ReachedCity") && !rsp["ReachedCity"].IsNull())
    {
        if (!rsp["ReachedCity"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReachedCity` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReachedCity"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reachedCity.push_back((*itr).GetString());
        }
        m_reachedCityHasBeenSet = true;
    }

    if (rsp.HasMember("RiskArea") && !rsp["RiskArea"].IsNull())
    {
        if (!rsp["RiskArea"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskArea` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskArea"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskArea.push_back((*itr).GetString());
        }
        m_riskAreaHasBeenSet = true;
    }

    if (rsp.HasMember("Telephone") && !rsp["Telephone"].IsNull())
    {
        if (!rsp["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(rsp["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeTravelCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_reachedCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReachedCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reachedCity.begin(); itr != m_reachedCity.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskArea.begin(); itr != m_riskArea.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string RecognizeTravelCardOCRResponse::GetTime() const
{
    return m_time;
}

bool RecognizeTravelCardOCRResponse::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string RecognizeTravelCardOCRResponse::GetColor() const
{
    return m_color;
}

bool RecognizeTravelCardOCRResponse::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

vector<string> RecognizeTravelCardOCRResponse::GetReachedCity() const
{
    return m_reachedCity;
}

bool RecognizeTravelCardOCRResponse::ReachedCityHasBeenSet() const
{
    return m_reachedCityHasBeenSet;
}

vector<string> RecognizeTravelCardOCRResponse::GetRiskArea() const
{
    return m_riskArea;
}

bool RecognizeTravelCardOCRResponse::RiskAreaHasBeenSet() const
{
    return m_riskAreaHasBeenSet;
}

string RecognizeTravelCardOCRResponse::GetTelephone() const
{
    return m_telephone;
}

bool RecognizeTravelCardOCRResponse::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}


