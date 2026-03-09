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

#include <tencentcloud/cetcd/v20220325/model/EtcdMonitorSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdMonitorSettings::EtcdMonitorSettings() :
    m_prometheusCreationParamHasBeenSet(false),
    m_existedPrometheusInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome EtcdMonitorSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrometheusCreationParam") && !value["PrometheusCreationParam"].IsNull())
    {
        if (!value["PrometheusCreationParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdMonitorSettings.PrometheusCreationParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prometheusCreationParam.Deserialize(value["PrometheusCreationParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prometheusCreationParamHasBeenSet = true;
    }

    if (value.HasMember("ExistedPrometheusInstanceId") && !value["ExistedPrometheusInstanceId"].IsNull())
    {
        if (!value["ExistedPrometheusInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdMonitorSettings.ExistedPrometheusInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_existedPrometheusInstanceId = string(value["ExistedPrometheusInstanceId"].GetString());
        m_existedPrometheusInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdMonitorSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_prometheusCreationParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrometheusCreationParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prometheusCreationParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_existedPrometheusInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistedPrometheusInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_existedPrometheusInstanceId.c_str(), allocator).Move(), allocator);
    }

}


PrometheusCreationParam EtcdMonitorSettings::GetPrometheusCreationParam() const
{
    return m_prometheusCreationParam;
}

void EtcdMonitorSettings::SetPrometheusCreationParam(const PrometheusCreationParam& _prometheusCreationParam)
{
    m_prometheusCreationParam = _prometheusCreationParam;
    m_prometheusCreationParamHasBeenSet = true;
}

bool EtcdMonitorSettings::PrometheusCreationParamHasBeenSet() const
{
    return m_prometheusCreationParamHasBeenSet;
}

string EtcdMonitorSettings::GetExistedPrometheusInstanceId() const
{
    return m_existedPrometheusInstanceId;
}

void EtcdMonitorSettings::SetExistedPrometheusInstanceId(const string& _existedPrometheusInstanceId)
{
    m_existedPrometheusInstanceId = _existedPrometheusInstanceId;
    m_existedPrometheusInstanceIdHasBeenSet = true;
}

bool EtcdMonitorSettings::ExistedPrometheusInstanceIdHasBeenSet() const
{
    return m_existedPrometheusInstanceIdHasBeenSet;
}

