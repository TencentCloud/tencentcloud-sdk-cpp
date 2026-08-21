/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/CloudAssetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CloudAssetInfo::CloudAssetInfo() :
    m_cloudTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome CloudAssetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAssetInfo.CloudType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = string(value["CloudType"].GetString());
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAssetInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAssetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string CloudAssetInfo::GetCloudType() const
{
    return m_cloudType;
}

void CloudAssetInfo::SetCloudType(const string& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool CloudAssetInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

int64_t CloudAssetInfo::GetCount() const
{
    return m_count;
}

void CloudAssetInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CloudAssetInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

