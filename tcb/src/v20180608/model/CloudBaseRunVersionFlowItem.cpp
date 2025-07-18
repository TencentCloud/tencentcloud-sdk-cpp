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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVersionFlowItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunVersionFlowItem::CloudBaseRunVersionFlowItem() :
    m_versionNameHasBeenSet(false),
    m_flowRatioHasBeenSet(false),
    m_urlParamHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_isDefaultPriorityHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunVersionFlowItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVersionFlowItem.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("FlowRatio") && !value["FlowRatio"].IsNull())
    {
        if (!value["FlowRatio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVersionFlowItem.FlowRatio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowRatio = value["FlowRatio"].GetInt64();
        m_flowRatioHasBeenSet = true;
    }

    if (value.HasMember("UrlParam") && !value["UrlParam"].IsNull())
    {
        if (!value["UrlParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVersionFlowItem.UrlParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urlParam.Deserialize(value["UrlParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urlParamHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVersionFlowItem.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultPriority") && !value["IsDefaultPriority"].IsNull())
    {
        if (!value["IsDefaultPriority"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVersionFlowItem.IsDefaultPriority` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultPriority = value["IsDefaultPriority"].GetBool();
        m_isDefaultPriorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunVersionFlowItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowRatio, allocator);
    }

    if (m_urlParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_isDefaultPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultPriority, allocator);
    }

}


string CloudBaseRunVersionFlowItem::GetVersionName() const
{
    return m_versionName;
}

void CloudBaseRunVersionFlowItem::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CloudBaseRunVersionFlowItem::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t CloudBaseRunVersionFlowItem::GetFlowRatio() const
{
    return m_flowRatio;
}

void CloudBaseRunVersionFlowItem::SetFlowRatio(const int64_t& _flowRatio)
{
    m_flowRatio = _flowRatio;
    m_flowRatioHasBeenSet = true;
}

bool CloudBaseRunVersionFlowItem::FlowRatioHasBeenSet() const
{
    return m_flowRatioHasBeenSet;
}

ObjectKV CloudBaseRunVersionFlowItem::GetUrlParam() const
{
    return m_urlParam;
}

void CloudBaseRunVersionFlowItem::SetUrlParam(const ObjectKV& _urlParam)
{
    m_urlParam = _urlParam;
    m_urlParamHasBeenSet = true;
}

bool CloudBaseRunVersionFlowItem::UrlParamHasBeenSet() const
{
    return m_urlParamHasBeenSet;
}

int64_t CloudBaseRunVersionFlowItem::GetPriority() const
{
    return m_priority;
}

void CloudBaseRunVersionFlowItem::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CloudBaseRunVersionFlowItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

bool CloudBaseRunVersionFlowItem::GetIsDefaultPriority() const
{
    return m_isDefaultPriority;
}

void CloudBaseRunVersionFlowItem::SetIsDefaultPriority(const bool& _isDefaultPriority)
{
    m_isDefaultPriority = _isDefaultPriority;
    m_isDefaultPriorityHasBeenSet = true;
}

bool CloudBaseRunVersionFlowItem::IsDefaultPriorityHasBeenSet() const
{
    return m_isDefaultPriorityHasBeenSet;
}

