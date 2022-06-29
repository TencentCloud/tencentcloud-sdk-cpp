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

#include <tencentcloud/tsf/v20180326/model/DeliveryConfigBindGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DeliveryConfigBindGroup::DeliveryConfigBindGroup() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_collectPathHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeliveryConfigBindGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("CollectPath") && !value["CollectPath"].IsNull())
    {
        if (!value["CollectPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.CollectPath` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_collectPath.push_back((*itr).GetString());
        }
        m_collectPathHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groups.push_back(item);
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryConfigBindGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliveryConfigBindGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_collectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collectPath.begin(); itr != m_collectPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string DeliveryConfigBindGroup::GetConfigId() const
{
    return m_configId;
}

void DeliveryConfigBindGroup::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool DeliveryConfigBindGroup::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string DeliveryConfigBindGroup::GetConfigName() const
{
    return m_configName;
}

void DeliveryConfigBindGroup::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool DeliveryConfigBindGroup::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

vector<string> DeliveryConfigBindGroup::GetCollectPath() const
{
    return m_collectPath;
}

void DeliveryConfigBindGroup::SetCollectPath(const vector<string>& _collectPath)
{
    m_collectPath = _collectPath;
    m_collectPathHasBeenSet = true;
}

bool DeliveryConfigBindGroup::CollectPathHasBeenSet() const
{
    return m_collectPathHasBeenSet;
}

vector<GroupInfo> DeliveryConfigBindGroup::GetGroups() const
{
    return m_groups;
}

void DeliveryConfigBindGroup::SetGroups(const vector<GroupInfo>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool DeliveryConfigBindGroup::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string DeliveryConfigBindGroup::GetCreateTime() const
{
    return m_createTime;
}

void DeliveryConfigBindGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeliveryConfigBindGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

