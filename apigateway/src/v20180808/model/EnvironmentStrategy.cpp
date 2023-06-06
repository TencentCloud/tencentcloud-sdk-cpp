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

#include <tencentcloud/apigateway/v20180808/model/EnvironmentStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

EnvironmentStrategy::EnvironmentStrategy() :
    m_environmentNameHasBeenSet(false),
    m_quotaHasBeenSet(false)
{
}

CoreInternalOutcome EnvironmentStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentStrategy.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentStrategy.Quota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetInt64();
        m_quotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvironmentStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

}


string EnvironmentStrategy::GetEnvironmentName() const
{
    return m_environmentName;
}

void EnvironmentStrategy::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool EnvironmentStrategy::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

int64_t EnvironmentStrategy::GetQuota() const
{
    return m_quota;
}

void EnvironmentStrategy::SetQuota(const int64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool EnvironmentStrategy::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

