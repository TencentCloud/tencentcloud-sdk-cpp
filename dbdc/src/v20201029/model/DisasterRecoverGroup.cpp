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

#include <tencentcloud/dbdc/v20201029/model/DisasterRecoverGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DisasterRecoverGroup::DisasterRecoverGroup() :
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeQuotaTotalHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nodeIdsHasBeenSet(false)
{
}

CoreInternalOutcome DisasterRecoverGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisasterRecoverGroupId") && !value["DisasterRecoverGroupId"].IsNull())
    {
        if (!value["DisasterRecoverGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.DisasterRecoverGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoverGroupId = string(value["DisasterRecoverGroupId"].GetString());
        m_disasterRecoverGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NodeQuotaTotal") && !value["NodeQuotaTotal"].IsNull())
    {
        if (!value["NodeQuotaTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.NodeQuotaTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeQuotaTotal = value["NodeQuotaTotal"].GetUint64();
        m_nodeQuotaTotalHasBeenSet = true;
    }

    if (value.HasMember("CurrentNum") && !value["CurrentNum"].IsNull())
    {
        if (!value["CurrentNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.CurrentNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = value["CurrentNum"].GetUint64();
        m_currentNumHasBeenSet = true;
    }

    if (value.HasMember("Affinity") && !value["Affinity"].IsNull())
    {
        if (!value["Affinity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Affinity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affinity = value["Affinity"].GetUint64();
        m_affinityHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Strategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = string(value["Strategy"].GetString());
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("NodeIds") && !value["NodeIds"].IsNull())
    {
        if (!value["NodeIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.NodeIds` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodeIds.push_back((*itr).GetString());
        }
        m_nodeIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisasterRecoverGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disasterRecoverGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

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

    if (m_nodeQuotaTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeQuotaTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeQuotaTotal, allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_affinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Affinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affinity, allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIds.begin(); itr != m_nodeIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DisasterRecoverGroup::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

void DisasterRecoverGroup::SetDisasterRecoverGroupId(const string& _disasterRecoverGroupId)
{
    m_disasterRecoverGroupId = _disasterRecoverGroupId;
    m_disasterRecoverGroupIdHasBeenSet = true;
}

bool DisasterRecoverGroup::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

string DisasterRecoverGroup::GetName() const
{
    return m_name;
}

void DisasterRecoverGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DisasterRecoverGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DisasterRecoverGroup::GetType() const
{
    return m_type;
}

void DisasterRecoverGroup::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DisasterRecoverGroup::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DisasterRecoverGroup::GetStatus() const
{
    return m_status;
}

void DisasterRecoverGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisasterRecoverGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DisasterRecoverGroup::GetNodeQuotaTotal() const
{
    return m_nodeQuotaTotal;
}

void DisasterRecoverGroup::SetNodeQuotaTotal(const uint64_t& _nodeQuotaTotal)
{
    m_nodeQuotaTotal = _nodeQuotaTotal;
    m_nodeQuotaTotalHasBeenSet = true;
}

bool DisasterRecoverGroup::NodeQuotaTotalHasBeenSet() const
{
    return m_nodeQuotaTotalHasBeenSet;
}

uint64_t DisasterRecoverGroup::GetCurrentNum() const
{
    return m_currentNum;
}

void DisasterRecoverGroup::SetCurrentNum(const uint64_t& _currentNum)
{
    m_currentNum = _currentNum;
    m_currentNumHasBeenSet = true;
}

bool DisasterRecoverGroup::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

uint64_t DisasterRecoverGroup::GetAffinity() const
{
    return m_affinity;
}

void DisasterRecoverGroup::SetAffinity(const uint64_t& _affinity)
{
    m_affinity = _affinity;
    m_affinityHasBeenSet = true;
}

bool DisasterRecoverGroup::AffinityHasBeenSet() const
{
    return m_affinityHasBeenSet;
}

string DisasterRecoverGroup::GetStrategy() const
{
    return m_strategy;
}

void DisasterRecoverGroup::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool DisasterRecoverGroup::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

string DisasterRecoverGroup::GetCreatedTime() const
{
    return m_createdTime;
}

void DisasterRecoverGroup::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DisasterRecoverGroup::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Tag> DisasterRecoverGroup::GetTags() const
{
    return m_tags;
}

void DisasterRecoverGroup::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DisasterRecoverGroup::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> DisasterRecoverGroup::GetNodeIds() const
{
    return m_nodeIds;
}

void DisasterRecoverGroup::SetNodeIds(const vector<string>& _nodeIds)
{
    m_nodeIds = _nodeIds;
    m_nodeIdsHasBeenSet = true;
}

bool DisasterRecoverGroup::NodeIdsHasBeenSet() const
{
    return m_nodeIdsHasBeenSet;
}

