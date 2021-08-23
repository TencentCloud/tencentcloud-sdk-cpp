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

#include <tencentcloud/ccc/v20200210/model/CallInSkillGroupMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CallInSkillGroupMetrics::CallInSkillGroupMetrics() :
    m_skillGroupIdHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome CallInSkillGroupMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInSkillGroupMetrics.SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = value["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CallInSkillGroupMetrics.Metrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metrics.Deserialize(value["Metrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallInSkillGroupMetrics.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallInSkillGroupMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


int64_t CallInSkillGroupMetrics::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void CallInSkillGroupMetrics::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool CallInSkillGroupMetrics::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

CallInMetrics CallInSkillGroupMetrics::GetMetrics() const
{
    return m_metrics;
}

void CallInSkillGroupMetrics::SetMetrics(const CallInMetrics& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool CallInSkillGroupMetrics::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string CallInSkillGroupMetrics::GetName() const
{
    return m_name;
}

void CallInSkillGroupMetrics::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CallInSkillGroupMetrics::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

