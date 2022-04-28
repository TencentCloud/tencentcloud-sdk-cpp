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

#include <tencentcloud/tem/v20210701/model/UseDefaultRepoParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

UseDefaultRepoParameters::UseDefaultRepoParameters() :
    m_enterpriseInstanceNameHasBeenSet(false),
    m_enterpriseInstanceChargeTypeHasBeenSet(false),
    m_enterpriseInstanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome UseDefaultRepoParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnterpriseInstanceName") && !value["EnterpriseInstanceName"].IsNull())
    {
        if (!value["EnterpriseInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UseDefaultRepoParameters.EnterpriseInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseInstanceName = string(value["EnterpriseInstanceName"].GetString());
        m_enterpriseInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseInstanceChargeType") && !value["EnterpriseInstanceChargeType"].IsNull())
    {
        if (!value["EnterpriseInstanceChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UseDefaultRepoParameters.EnterpriseInstanceChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseInstanceChargeType = value["EnterpriseInstanceChargeType"].GetInt64();
        m_enterpriseInstanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseInstanceType") && !value["EnterpriseInstanceType"].IsNull())
    {
        if (!value["EnterpriseInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UseDefaultRepoParameters.EnterpriseInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseInstanceType = string(value["EnterpriseInstanceType"].GetString());
        m_enterpriseInstanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UseDefaultRepoParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enterpriseInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseInstanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseInstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enterpriseInstanceChargeType, allocator);
    }

    if (m_enterpriseInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseInstanceType.c_str(), allocator).Move(), allocator);
    }

}


string UseDefaultRepoParameters::GetEnterpriseInstanceName() const
{
    return m_enterpriseInstanceName;
}

void UseDefaultRepoParameters::SetEnterpriseInstanceName(const string& _enterpriseInstanceName)
{
    m_enterpriseInstanceName = _enterpriseInstanceName;
    m_enterpriseInstanceNameHasBeenSet = true;
}

bool UseDefaultRepoParameters::EnterpriseInstanceNameHasBeenSet() const
{
    return m_enterpriseInstanceNameHasBeenSet;
}

int64_t UseDefaultRepoParameters::GetEnterpriseInstanceChargeType() const
{
    return m_enterpriseInstanceChargeType;
}

void UseDefaultRepoParameters::SetEnterpriseInstanceChargeType(const int64_t& _enterpriseInstanceChargeType)
{
    m_enterpriseInstanceChargeType = _enterpriseInstanceChargeType;
    m_enterpriseInstanceChargeTypeHasBeenSet = true;
}

bool UseDefaultRepoParameters::EnterpriseInstanceChargeTypeHasBeenSet() const
{
    return m_enterpriseInstanceChargeTypeHasBeenSet;
}

string UseDefaultRepoParameters::GetEnterpriseInstanceType() const
{
    return m_enterpriseInstanceType;
}

void UseDefaultRepoParameters::SetEnterpriseInstanceType(const string& _enterpriseInstanceType)
{
    m_enterpriseInstanceType = _enterpriseInstanceType;
    m_enterpriseInstanceTypeHasBeenSet = true;
}

bool UseDefaultRepoParameters::EnterpriseInstanceTypeHasBeenSet() const
{
    return m_enterpriseInstanceTypeHasBeenSet;
}

