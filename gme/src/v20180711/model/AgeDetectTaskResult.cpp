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

#include <tencentcloud/gme/v20180711/model/AgeDetectTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

AgeDetectTaskResult::AgeDetectTaskResult() :
    m_dataIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ageHasBeenSet(false)
{
}

CoreInternalOutcome AgeDetectTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataId") && !value["DataId"].IsNull())
    {
        if (!value["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgeDetectTaskResult.DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(value["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgeDetectTaskResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgeDetectTaskResult.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgeDetectTaskResult.Age` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetUint64();
        m_ageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgeDetectTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

}


string AgeDetectTaskResult::GetDataId() const
{
    return m_dataId;
}

void AgeDetectTaskResult::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool AgeDetectTaskResult::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string AgeDetectTaskResult::GetUrl() const
{
    return m_url;
}

void AgeDetectTaskResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AgeDetectTaskResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t AgeDetectTaskResult::GetStatus() const
{
    return m_status;
}

void AgeDetectTaskResult::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgeDetectTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AgeDetectTaskResult::GetAge() const
{
    return m_age;
}

void AgeDetectTaskResult::SetAge(const uint64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool AgeDetectTaskResult::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

