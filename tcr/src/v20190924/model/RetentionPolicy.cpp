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

#include <tencentcloud/tcr/v20190924/model/RetentionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RetentionPolicy::RetentionPolicy() :
    m_retentionIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_retentionRuleListHasBeenSet(false),
    m_cronSettingHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_nextExecutionTimeHasBeenSet(false)
{
}

CoreInternalOutcome RetentionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetentionId") && !value["RetentionId"].IsNull())
    {
        if (!value["RetentionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.RetentionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionId = value["RetentionId"].GetInt64();
        m_retentionIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("RetentionRuleList") && !value["RetentionRuleList"].IsNull())
    {
        if (!value["RetentionRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.RetentionRuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["RetentionRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RetentionRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_retentionRuleList.push_back(item);
        }
        m_retentionRuleListHasBeenSet = true;
    }

    if (value.HasMember("CronSetting") && !value["CronSetting"].IsNull())
    {
        if (!value["CronSetting"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.CronSetting` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronSetting = string(value["CronSetting"].GetString());
        m_cronSettingHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = value["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }

    if (value.HasMember("NextExecutionTime") && !value["NextExecutionTime"].IsNull())
    {
        if (!value["NextExecutionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.NextExecutionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextExecutionTime = string(value["NextExecutionTime"].GetString());
        m_nextExecutionTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetentionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retentionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionId, allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_retentionRuleList.begin(); itr != m_retentionRuleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cronSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronSetting.c_str(), allocator).Move(), allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

    if (m_nextExecutionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextExecutionTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t RetentionPolicy::GetRetentionId() const
{
    return m_retentionId;
}

void RetentionPolicy::SetRetentionId(const int64_t& _retentionId)
{
    m_retentionId = _retentionId;
    m_retentionIdHasBeenSet = true;
}

bool RetentionPolicy::RetentionIdHasBeenSet() const
{
    return m_retentionIdHasBeenSet;
}

string RetentionPolicy::GetNamespaceName() const
{
    return m_namespaceName;
}

void RetentionPolicy::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool RetentionPolicy::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

vector<RetentionRule> RetentionPolicy::GetRetentionRuleList() const
{
    return m_retentionRuleList;
}

void RetentionPolicy::SetRetentionRuleList(const vector<RetentionRule>& _retentionRuleList)
{
    m_retentionRuleList = _retentionRuleList;
    m_retentionRuleListHasBeenSet = true;
}

bool RetentionPolicy::RetentionRuleListHasBeenSet() const
{
    return m_retentionRuleListHasBeenSet;
}

string RetentionPolicy::GetCronSetting() const
{
    return m_cronSetting;
}

void RetentionPolicy::SetCronSetting(const string& _cronSetting)
{
    m_cronSetting = _cronSetting;
    m_cronSettingHasBeenSet = true;
}

bool RetentionPolicy::CronSettingHasBeenSet() const
{
    return m_cronSettingHasBeenSet;
}

bool RetentionPolicy::GetDisabled() const
{
    return m_disabled;
}

void RetentionPolicy::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool RetentionPolicy::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

string RetentionPolicy::GetNextExecutionTime() const
{
    return m_nextExecutionTime;
}

void RetentionPolicy::SetNextExecutionTime(const string& _nextExecutionTime)
{
    m_nextExecutionTime = _nextExecutionTime;
    m_nextExecutionTimeHasBeenSet = true;
}

bool RetentionPolicy::NextExecutionTimeHasBeenSet() const
{
    return m_nextExecutionTimeHasBeenSet;
}

