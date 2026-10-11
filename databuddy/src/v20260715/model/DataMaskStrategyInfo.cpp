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

#include <tencentcloud/databuddy/v20260715/model/DataMaskStrategyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

DataMaskStrategyInfo::DataMaskStrategyInfo() :
    m_strategyNameHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_strategyDescHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome DataMaskStrategyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyInfo.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyInfo.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataMaskGroup item;
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

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyInfo.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("StrategyDesc") && !value["StrategyDesc"].IsNull())
    {
        if (!value["StrategyDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyInfo.StrategyDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyDesc = string(value["StrategyDesc"].GetString());
        m_strategyDescHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyInfo.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataMaskStrategyInfo.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataMaskLabelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataMaskStrategyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
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

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DataMaskStrategyInfo::GetStrategyName() const
{
    return m_strategyName;
}

void DataMaskStrategyInfo::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool DataMaskStrategyInfo::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

vector<DataMaskGroup> DataMaskStrategyInfo::GetGroups() const
{
    return m_groups;
}

void DataMaskStrategyInfo::SetGroups(const vector<DataMaskGroup>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool DataMaskStrategyInfo::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string DataMaskStrategyInfo::GetStrategyType() const
{
    return m_strategyType;
}

void DataMaskStrategyInfo::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool DataMaskStrategyInfo::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string DataMaskStrategyInfo::GetStrategyDesc() const
{
    return m_strategyDesc;
}

void DataMaskStrategyInfo::SetStrategyDesc(const string& _strategyDesc)
{
    m_strategyDesc = _strategyDesc;
    m_strategyDescHasBeenSet = true;
}

bool DataMaskStrategyInfo::StrategyDescHasBeenSet() const
{
    return m_strategyDescHasBeenSet;
}

string DataMaskStrategyInfo::GetStrategyId() const
{
    return m_strategyId;
}

void DataMaskStrategyInfo::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool DataMaskStrategyInfo::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

vector<DataMaskLabelInfo> DataMaskStrategyInfo::GetLabels() const
{
    return m_labels;
}

void DataMaskStrategyInfo::SetLabels(const vector<DataMaskLabelInfo>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DataMaskStrategyInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

