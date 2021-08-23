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

#include <tencentcloud/bmeip/v20180625/model/EipAcl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

EipAcl::EipAcl() :
    m_aclIdHasBeenSet(false),
    m_aclNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_eipNumHasBeenSet(false),
    m_outRulesHasBeenSet(false),
    m_inRulesHasBeenSet(false)
{
}

CoreInternalOutcome EipAcl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AclId") && !value["AclId"].IsNull())
    {
        if (!value["AclId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAcl.AclId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclId = string(value["AclId"].GetString());
        m_aclIdHasBeenSet = true;
    }

    if (value.HasMember("AclName") && !value["AclName"].IsNull())
    {
        if (!value["AclName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAcl.AclName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclName = string(value["AclName"].GetString());
        m_aclNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAcl.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipAcl.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("EipNum") && !value["EipNum"].IsNull())
    {
        if (!value["EipNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EipAcl.EipNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eipNum = value["EipNum"].GetInt64();
        m_eipNumHasBeenSet = true;
    }

    if (value.HasMember("OutRules") && !value["OutRules"].IsNull())
    {
        if (!value["OutRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EipAcl.OutRules` is not array type"));

        const rapidjson::Value &tmpValue = value["OutRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EipAclRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outRules.push_back(item);
        }
        m_outRulesHasBeenSet = true;
    }

    if (value.HasMember("InRules") && !value["InRules"].IsNull())
    {
        if (!value["InRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EipAcl.InRules` is not array type"));

        const rapidjson::Value &tmpValue = value["InRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EipAclRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inRules.push_back(item);
        }
        m_inRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipAcl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclId.c_str(), allocator).Move(), allocator);
    }

    if (m_aclNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_eipNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eipNum, allocator);
    }

    if (m_outRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outRules.begin(); itr != m_outRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inRules.begin(); itr != m_inRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EipAcl::GetAclId() const
{
    return m_aclId;
}

void EipAcl::SetAclId(const string& _aclId)
{
    m_aclId = _aclId;
    m_aclIdHasBeenSet = true;
}

bool EipAcl::AclIdHasBeenSet() const
{
    return m_aclIdHasBeenSet;
}

string EipAcl::GetAclName() const
{
    return m_aclName;
}

void EipAcl::SetAclName(const string& _aclName)
{
    m_aclName = _aclName;
    m_aclNameHasBeenSet = true;
}

bool EipAcl::AclNameHasBeenSet() const
{
    return m_aclNameHasBeenSet;
}

string EipAcl::GetStatus() const
{
    return m_status;
}

void EipAcl::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EipAcl::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EipAcl::GetCreatedAt() const
{
    return m_createdAt;
}

void EipAcl::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool EipAcl::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t EipAcl::GetEipNum() const
{
    return m_eipNum;
}

void EipAcl::SetEipNum(const int64_t& _eipNum)
{
    m_eipNum = _eipNum;
    m_eipNumHasBeenSet = true;
}

bool EipAcl::EipNumHasBeenSet() const
{
    return m_eipNumHasBeenSet;
}

vector<EipAclRule> EipAcl::GetOutRules() const
{
    return m_outRules;
}

void EipAcl::SetOutRules(const vector<EipAclRule>& _outRules)
{
    m_outRules = _outRules;
    m_outRulesHasBeenSet = true;
}

bool EipAcl::OutRulesHasBeenSet() const
{
    return m_outRulesHasBeenSet;
}

vector<EipAclRule> EipAcl::GetInRules() const
{
    return m_inRules;
}

void EipAcl::SetInRules(const vector<EipAclRule>& _inRules)
{
    m_inRules = _inRules;
    m_inRulesHasBeenSet = true;
}

bool EipAcl::InRulesHasBeenSet() const
{
    return m_inRulesHasBeenSet;
}

