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

#include <tencentcloud/alb/v20251030/model/TargetGroupHealthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

TargetGroupHealthInfo::TargetGroupHealthInfo() :
    m_healthCheckEnabledHasBeenSet(false),
    m_targetGroupIdHasBeenSet(false),
    m_targetHealthStatusInfosHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome TargetGroupHealthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthCheckEnabled") && !value["HealthCheckEnabled"].IsNull())
    {
        if (!value["HealthCheckEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthInfo.HealthCheckEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckEnabled = value["HealthCheckEnabled"].GetBool();
        m_healthCheckEnabledHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthInfo.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TargetHealthStatusInfos") && !value["TargetHealthStatusInfos"].IsNull())
    {
        if (!value["TargetHealthStatusInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthInfo.TargetHealthStatusInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetHealthStatusInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetHealthStatusInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetHealthStatusInfos.push_back(item);
        }
        m_targetHealthStatusInfosHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetGroupHealthInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetGroupHealthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthCheckEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckEnabled, allocator);
    }

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHealthStatusInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHealthStatusInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetHealthStatusInfos.begin(); itr != m_targetHealthStatusInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


bool TargetGroupHealthInfo::GetHealthCheckEnabled() const
{
    return m_healthCheckEnabled;
}

void TargetGroupHealthInfo::SetHealthCheckEnabled(const bool& _healthCheckEnabled)
{
    m_healthCheckEnabled = _healthCheckEnabled;
    m_healthCheckEnabledHasBeenSet = true;
}

bool TargetGroupHealthInfo::HealthCheckEnabledHasBeenSet() const
{
    return m_healthCheckEnabledHasBeenSet;
}

string TargetGroupHealthInfo::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void TargetGroupHealthInfo::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool TargetGroupHealthInfo::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

vector<TargetHealthStatusInfo> TargetGroupHealthInfo::GetTargetHealthStatusInfos() const
{
    return m_targetHealthStatusInfos;
}

void TargetGroupHealthInfo::SetTargetHealthStatusInfos(const vector<TargetHealthStatusInfo>& _targetHealthStatusInfos)
{
    m_targetHealthStatusInfos = _targetHealthStatusInfos;
    m_targetHealthStatusInfosHasBeenSet = true;
}

bool TargetGroupHealthInfo::TargetHealthStatusInfosHasBeenSet() const
{
    return m_targetHealthStatusInfosHasBeenSet;
}

string TargetGroupHealthInfo::GetType() const
{
    return m_type;
}

void TargetGroupHealthInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TargetGroupHealthInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

