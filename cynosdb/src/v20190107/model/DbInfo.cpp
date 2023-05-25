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

#include <tencentcloud/cynosdb/v20190107/model/DbInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DbInfo::DbInfo() :
    m_dbNameHasBeenSet(false),
    m_characterSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_collateRuleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userHostPrivilegesHasBeenSet(false),
    m_dbIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

CoreInternalOutcome DbInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("CharacterSet") && !value["CharacterSet"].IsNull())
    {
        if (!value["CharacterSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.CharacterSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_characterSet = string(value["CharacterSet"].GetString());
        m_characterSetHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CollateRule") && !value["CollateRule"].IsNull())
    {
        if (!value["CollateRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.CollateRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collateRule = string(value["CollateRule"].GetString());
        m_collateRuleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UserHostPrivileges") && !value["UserHostPrivileges"].IsNull())
    {
        if (!value["UserHostPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DbInfo.UserHostPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["UserHostPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserHostPrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userHostPrivileges.push_back(item);
        }
        m_userHostPrivilegesHasBeenSet = true;
    }

    if (value.HasMember("DbId") && !value["DbId"].IsNull())
    {
        if (!value["DbId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.DbId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbId = value["DbId"].GetInt64();
        m_dbIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DbInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_characterSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharacterSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_characterSet.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_collateRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollateRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collateRule.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_userHostPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserHostPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userHostPrivileges.begin(); itr != m_userHostPrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

}


string DbInfo::GetDbName() const
{
    return m_dbName;
}

void DbInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DbInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DbInfo::GetCharacterSet() const
{
    return m_characterSet;
}

void DbInfo::SetCharacterSet(const string& _characterSet)
{
    m_characterSet = _characterSet;
    m_characterSetHasBeenSet = true;
}

bool DbInfo::CharacterSetHasBeenSet() const
{
    return m_characterSetHasBeenSet;
}

string DbInfo::GetStatus() const
{
    return m_status;
}

void DbInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DbInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DbInfo::GetCollateRule() const
{
    return m_collateRule;
}

void DbInfo::SetCollateRule(const string& _collateRule)
{
    m_collateRule = _collateRule;
    m_collateRuleHasBeenSet = true;
}

bool DbInfo::CollateRuleHasBeenSet() const
{
    return m_collateRuleHasBeenSet;
}

string DbInfo::GetDescription() const
{
    return m_description;
}

void DbInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DbInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<UserHostPrivilege> DbInfo::GetUserHostPrivileges() const
{
    return m_userHostPrivileges;
}

void DbInfo::SetUserHostPrivileges(const vector<UserHostPrivilege>& _userHostPrivileges)
{
    m_userHostPrivileges = _userHostPrivileges;
    m_userHostPrivilegesHasBeenSet = true;
}

bool DbInfo::UserHostPrivilegesHasBeenSet() const
{
    return m_userHostPrivilegesHasBeenSet;
}

int64_t DbInfo::GetDbId() const
{
    return m_dbId;
}

void DbInfo::SetDbId(const int64_t& _dbId)
{
    m_dbId = _dbId;
    m_dbIdHasBeenSet = true;
}

bool DbInfo::DbIdHasBeenSet() const
{
    return m_dbIdHasBeenSet;
}

string DbInfo::GetCreateTime() const
{
    return m_createTime;
}

void DbInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DbInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DbInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DbInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DbInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DbInfo::GetAppId() const
{
    return m_appId;
}

void DbInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DbInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DbInfo::GetUin() const
{
    return m_uin;
}

void DbInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DbInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DbInfo::GetClusterId() const
{
    return m_clusterId;
}

void DbInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DbInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

