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

#include <tencentcloud/tcr/v20190924/model/SecurityPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

SecurityPolicy::SecurityPolicy() :
    m_policyIndexHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_policyVersionHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyIndex") && !value["PolicyIndex"].IsNull())
    {
        if (!value["PolicyIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.PolicyIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyIndex = value["PolicyIndex"].GetInt64();
        m_policyIndexHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("PolicyVersion") && !value["PolicyVersion"].IsNull())
    {
        if (!value["PolicyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicy.PolicyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyVersion = string(value["PolicyVersion"].GetString());
        m_policyVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyIndex, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_policyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t SecurityPolicy::GetPolicyIndex() const
{
    return m_policyIndex;
}

void SecurityPolicy::SetPolicyIndex(const int64_t& _policyIndex)
{
    m_policyIndex = _policyIndex;
    m_policyIndexHasBeenSet = true;
}

bool SecurityPolicy::PolicyIndexHasBeenSet() const
{
    return m_policyIndexHasBeenSet;
}

string SecurityPolicy::GetDescription() const
{
    return m_description;
}

void SecurityPolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SecurityPolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SecurityPolicy::GetCidrBlock() const
{
    return m_cidrBlock;
}

void SecurityPolicy::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool SecurityPolicy::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string SecurityPolicy::GetPolicyVersion() const
{
    return m_policyVersion;
}

void SecurityPolicy::SetPolicyVersion(const string& _policyVersion)
{
    m_policyVersion = _policyVersion;
    m_policyVersionHasBeenSet = true;
}

bool SecurityPolicy::PolicyVersionHasBeenSet() const
{
    return m_policyVersionHasBeenSet;
}

