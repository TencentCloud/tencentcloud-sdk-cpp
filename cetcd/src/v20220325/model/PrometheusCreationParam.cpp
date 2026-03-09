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

#include <tencentcloud/cetcd/v20220325/model/PrometheusCreationParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

PrometheusCreationParam::PrometheusCreationParam() :
    m_subnetIdHasBeenSet(false),
    m_dataRetentionHasBeenSet(false),
    m_grafanaUserNameHasBeenSet(false),
    m_grafanaPasswordHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusCreationParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusCreationParam.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DataRetention") && !value["DataRetention"].IsNull())
    {
        if (!value["DataRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusCreationParam.DataRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetention = value["DataRetention"].GetInt64();
        m_dataRetentionHasBeenSet = true;
    }

    if (value.HasMember("GrafanaUserName") && !value["GrafanaUserName"].IsNull())
    {
        if (!value["GrafanaUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusCreationParam.GrafanaUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaUserName = string(value["GrafanaUserName"].GetString());
        m_grafanaUserNameHasBeenSet = true;
    }

    if (value.HasMember("GrafanaPassword") && !value["GrafanaPassword"].IsNull())
    {
        if (!value["GrafanaPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusCreationParam.GrafanaPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaPassword = string(value["GrafanaPassword"].GetString());
        m_grafanaPasswordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusCreationParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRetention, allocator);
    }

    if (m_grafanaUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_grafanaPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaPassword.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusCreationParam::GetSubnetId() const
{
    return m_subnetId;
}

void PrometheusCreationParam::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PrometheusCreationParam::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t PrometheusCreationParam::GetDataRetention() const
{
    return m_dataRetention;
}

void PrometheusCreationParam::SetDataRetention(const int64_t& _dataRetention)
{
    m_dataRetention = _dataRetention;
    m_dataRetentionHasBeenSet = true;
}

bool PrometheusCreationParam::DataRetentionHasBeenSet() const
{
    return m_dataRetentionHasBeenSet;
}

string PrometheusCreationParam::GetGrafanaUserName() const
{
    return m_grafanaUserName;
}

void PrometheusCreationParam::SetGrafanaUserName(const string& _grafanaUserName)
{
    m_grafanaUserName = _grafanaUserName;
    m_grafanaUserNameHasBeenSet = true;
}

bool PrometheusCreationParam::GrafanaUserNameHasBeenSet() const
{
    return m_grafanaUserNameHasBeenSet;
}

string PrometheusCreationParam::GetGrafanaPassword() const
{
    return m_grafanaPassword;
}

void PrometheusCreationParam::SetGrafanaPassword(const string& _grafanaPassword)
{
    m_grafanaPassword = _grafanaPassword;
    m_grafanaPasswordHasBeenSet = true;
}

bool PrometheusCreationParam::GrafanaPasswordHasBeenSet() const
{
    return m_grafanaPasswordHasBeenSet;
}

