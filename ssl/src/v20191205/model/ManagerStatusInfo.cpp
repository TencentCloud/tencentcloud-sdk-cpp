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

#include <tencentcloud/ssl/v20191205/model/ManagerStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ManagerStatusInfo::ManagerStatusInfo() :
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_managerPreAuditDomainsHasBeenSet(false)
{
}

CoreInternalOutcome ManagerStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerStatusInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerStatusInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerStatusInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagerStatusInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ManagerPreAuditDomains") && !value["ManagerPreAuditDomains"].IsNull())
    {
        if (!value["ManagerPreAuditDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagerStatusInfo.ManagerPreAuditDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagerPreAuditDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagerPreAuditDomain item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managerPreAuditDomains.push_back(item);
        }
        m_managerPreAuditDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagerStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_managerPreAuditDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerPreAuditDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managerPreAuditDomains.begin(); itr != m_managerPreAuditDomains.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ManagerStatusInfo::GetType() const
{
    return m_type;
}

void ManagerStatusInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ManagerStatusInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ManagerStatusInfo::GetStatus() const
{
    return m_status;
}

void ManagerStatusInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ManagerStatusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ManagerStatusInfo::GetCreateTime() const
{
    return m_createTime;
}

void ManagerStatusInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ManagerStatusInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ManagerStatusInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ManagerStatusInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ManagerStatusInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<ManagerPreAuditDomain> ManagerStatusInfo::GetManagerPreAuditDomains() const
{
    return m_managerPreAuditDomains;
}

void ManagerStatusInfo::SetManagerPreAuditDomains(const vector<ManagerPreAuditDomain>& _managerPreAuditDomains)
{
    m_managerPreAuditDomains = _managerPreAuditDomains;
    m_managerPreAuditDomainsHasBeenSet = true;
}

bool ManagerStatusInfo::ManagerPreAuditDomainsHasBeenSet() const
{
    return m_managerPreAuditDomainsHasBeenSet;
}

