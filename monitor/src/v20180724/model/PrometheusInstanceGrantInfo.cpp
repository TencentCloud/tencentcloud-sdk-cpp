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

#include <tencentcloud/monitor/v20180724/model/PrometheusInstanceGrantInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusInstanceGrantInfo::PrometheusInstanceGrantInfo() :
    m_hasChargeOperationHasBeenSet(false),
    m_hasVpcDisplayHasBeenSet(false),
    m_hasGrafanaStatusChangeHasBeenSet(false),
    m_hasAgentManageHasBeenSet(false),
    m_hasTkeManageHasBeenSet(false),
    m_hasApiOperationHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstanceGrantInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HasChargeOperation") && !value["HasChargeOperation"].IsNull())
    {
        if (!value["HasChargeOperation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceGrantInfo.HasChargeOperation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasChargeOperation = value["HasChargeOperation"].GetInt64();
        m_hasChargeOperationHasBeenSet = true;
    }

    if (value.HasMember("HasVpcDisplay") && !value["HasVpcDisplay"].IsNull())
    {
        if (!value["HasVpcDisplay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceGrantInfo.HasVpcDisplay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasVpcDisplay = value["HasVpcDisplay"].GetInt64();
        m_hasVpcDisplayHasBeenSet = true;
    }

    if (value.HasMember("HasGrafanaStatusChange") && !value["HasGrafanaStatusChange"].IsNull())
    {
        if (!value["HasGrafanaStatusChange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceGrantInfo.HasGrafanaStatusChange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasGrafanaStatusChange = value["HasGrafanaStatusChange"].GetInt64();
        m_hasGrafanaStatusChangeHasBeenSet = true;
    }

    if (value.HasMember("HasAgentManage") && !value["HasAgentManage"].IsNull())
    {
        if (!value["HasAgentManage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceGrantInfo.HasAgentManage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasAgentManage = value["HasAgentManage"].GetInt64();
        m_hasAgentManageHasBeenSet = true;
    }

    if (value.HasMember("HasTkeManage") && !value["HasTkeManage"].IsNull())
    {
        if (!value["HasTkeManage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceGrantInfo.HasTkeManage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasTkeManage = value["HasTkeManage"].GetInt64();
        m_hasTkeManageHasBeenSet = true;
    }

    if (value.HasMember("HasApiOperation") && !value["HasApiOperation"].IsNull())
    {
        if (!value["HasApiOperation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceGrantInfo.HasApiOperation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hasApiOperation = value["HasApiOperation"].GetInt64();
        m_hasApiOperationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstanceGrantInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hasChargeOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasChargeOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasChargeOperation, allocator);
    }

    if (m_hasVpcDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasVpcDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasVpcDisplay, allocator);
    }

    if (m_hasGrafanaStatusChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasGrafanaStatusChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasGrafanaStatusChange, allocator);
    }

    if (m_hasAgentManageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAgentManage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAgentManage, allocator);
    }

    if (m_hasTkeManageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasTkeManage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasTkeManage, allocator);
    }

    if (m_hasApiOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasApiOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasApiOperation, allocator);
    }

}


int64_t PrometheusInstanceGrantInfo::GetHasChargeOperation() const
{
    return m_hasChargeOperation;
}

void PrometheusInstanceGrantInfo::SetHasChargeOperation(const int64_t& _hasChargeOperation)
{
    m_hasChargeOperation = _hasChargeOperation;
    m_hasChargeOperationHasBeenSet = true;
}

bool PrometheusInstanceGrantInfo::HasChargeOperationHasBeenSet() const
{
    return m_hasChargeOperationHasBeenSet;
}

int64_t PrometheusInstanceGrantInfo::GetHasVpcDisplay() const
{
    return m_hasVpcDisplay;
}

void PrometheusInstanceGrantInfo::SetHasVpcDisplay(const int64_t& _hasVpcDisplay)
{
    m_hasVpcDisplay = _hasVpcDisplay;
    m_hasVpcDisplayHasBeenSet = true;
}

bool PrometheusInstanceGrantInfo::HasVpcDisplayHasBeenSet() const
{
    return m_hasVpcDisplayHasBeenSet;
}

int64_t PrometheusInstanceGrantInfo::GetHasGrafanaStatusChange() const
{
    return m_hasGrafanaStatusChange;
}

void PrometheusInstanceGrantInfo::SetHasGrafanaStatusChange(const int64_t& _hasGrafanaStatusChange)
{
    m_hasGrafanaStatusChange = _hasGrafanaStatusChange;
    m_hasGrafanaStatusChangeHasBeenSet = true;
}

bool PrometheusInstanceGrantInfo::HasGrafanaStatusChangeHasBeenSet() const
{
    return m_hasGrafanaStatusChangeHasBeenSet;
}

int64_t PrometheusInstanceGrantInfo::GetHasAgentManage() const
{
    return m_hasAgentManage;
}

void PrometheusInstanceGrantInfo::SetHasAgentManage(const int64_t& _hasAgentManage)
{
    m_hasAgentManage = _hasAgentManage;
    m_hasAgentManageHasBeenSet = true;
}

bool PrometheusInstanceGrantInfo::HasAgentManageHasBeenSet() const
{
    return m_hasAgentManageHasBeenSet;
}

int64_t PrometheusInstanceGrantInfo::GetHasTkeManage() const
{
    return m_hasTkeManage;
}

void PrometheusInstanceGrantInfo::SetHasTkeManage(const int64_t& _hasTkeManage)
{
    m_hasTkeManage = _hasTkeManage;
    m_hasTkeManageHasBeenSet = true;
}

bool PrometheusInstanceGrantInfo::HasTkeManageHasBeenSet() const
{
    return m_hasTkeManageHasBeenSet;
}

int64_t PrometheusInstanceGrantInfo::GetHasApiOperation() const
{
    return m_hasApiOperation;
}

void PrometheusInstanceGrantInfo::SetHasApiOperation(const int64_t& _hasApiOperation)
{
    m_hasApiOperation = _hasApiOperation;
    m_hasApiOperationHasBeenSet = true;
}

bool PrometheusInstanceGrantInfo::HasApiOperationHasBeenSet() const
{
    return m_hasApiOperationHasBeenSet;
}

