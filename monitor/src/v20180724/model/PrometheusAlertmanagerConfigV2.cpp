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

#include <tencentcloud/monitor/v20180724/model/PrometheusAlertmanagerConfigV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusAlertmanagerConfigV2::PrometheusAlertmanagerConfigV2() :
    m_inhibitRulesHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertmanagerConfigV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InhibitRules") && !value["InhibitRules"].IsNull())
    {
        if (!value["InhibitRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertmanagerConfigV2.InhibitRules` is not array type"));

        const rapidjson::Value &tmpValue = value["InhibitRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusAlertmanagerConfigInhibitRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inhibitRules.push_back(item);
        }
        m_inhibitRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertmanagerConfigV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inhibitRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InhibitRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inhibitRules.begin(); itr != m_inhibitRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PrometheusAlertmanagerConfigInhibitRule> PrometheusAlertmanagerConfigV2::GetInhibitRules() const
{
    return m_inhibitRules;
}

void PrometheusAlertmanagerConfigV2::SetInhibitRules(const vector<PrometheusAlertmanagerConfigInhibitRule>& _inhibitRules)
{
    m_inhibitRules = _inhibitRules;
    m_inhibitRulesHasBeenSet = true;
}

bool PrometheusAlertmanagerConfigV2::InhibitRulesHasBeenSet() const
{
    return m_inhibitRulesHasBeenSet;
}

