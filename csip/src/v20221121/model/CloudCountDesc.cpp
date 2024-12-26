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

#include <tencentcloud/csip/v20221121/model/CloudCountDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CloudCountDesc::CloudCountDesc() :
    m_cloudTypeHasBeenSet(false),
    m_cloudCountHasBeenSet(false),
    m_cloudDescHasBeenSet(false)
{
}

CoreInternalOutcome CloudCountDesc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudCountDesc.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("CloudCount") && !value["CloudCount"].IsNull())
    {
        if (!value["CloudCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudCountDesc.CloudCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCount = value["CloudCount"].GetInt64();
        m_cloudCountHasBeenSet = true;
    }

    if (value.HasMember("CloudDesc") && !value["CloudDesc"].IsNull())
    {
        if (!value["CloudDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudCountDesc.CloudDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudDesc = string(value["CloudDesc"].GetString());
        m_cloudDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudCountDesc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_cloudCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudCount, allocator);
    }

    if (m_cloudDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudDesc.c_str(), allocator).Move(), allocator);
    }

}


int64_t CloudCountDesc::GetCloudType() const
{
    return m_cloudType;
}

void CloudCountDesc::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool CloudCountDesc::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

int64_t CloudCountDesc::GetCloudCount() const
{
    return m_cloudCount;
}

void CloudCountDesc::SetCloudCount(const int64_t& _cloudCount)
{
    m_cloudCount = _cloudCount;
    m_cloudCountHasBeenSet = true;
}

bool CloudCountDesc::CloudCountHasBeenSet() const
{
    return m_cloudCountHasBeenSet;
}

string CloudCountDesc::GetCloudDesc() const
{
    return m_cloudDesc;
}

void CloudCountDesc::SetCloudDesc(const string& _cloudDesc)
{
    m_cloudDesc = _cloudDesc;
    m_cloudDescHasBeenSet = true;
}

bool CloudCountDesc::CloudDescHasBeenSet() const
{
    return m_cloudDescHasBeenSet;
}

