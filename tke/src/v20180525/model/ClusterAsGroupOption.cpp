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

#include <tencentcloud/tke/v20180525/model/ClusterAsGroupOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

ClusterAsGroupOption::ClusterAsGroupOption() :
    m_isScaleDownEnabledHasBeenSet(false),
    m_expanderHasBeenSet(false),
    m_maxEmptyBulkDeleteHasBeenSet(false),
    m_scaleDownDelayHasBeenSet(false),
    m_scaleDownUnneededTimeHasBeenSet(false),
    m_scaleDownUtilizationThresholdHasBeenSet(false),
    m_skipNodesWithLocalStorageHasBeenSet(false),
    m_skipNodesWithSystemPodsHasBeenSet(false),
    m_ignoreDaemonSetsUtilizationHasBeenSet(false)
{
}

CoreInternalOutcome ClusterAsGroupOption::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("IsScaleDownEnabled") && !value["IsScaleDownEnabled"].IsNull())
    {
        if (!value["IsScaleDownEnabled"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.IsScaleDownEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isScaleDownEnabled = value["IsScaleDownEnabled"].GetBool();
        m_isScaleDownEnabledHasBeenSet = true;
    }

    if (value.HasMember("Expander") && !value["Expander"].IsNull())
    {
        if (!value["Expander"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.Expander` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expander = string(value["Expander"].GetString());
        m_expanderHasBeenSet = true;
    }

    if (value.HasMember("MaxEmptyBulkDelete") && !value["MaxEmptyBulkDelete"].IsNull())
    {
        if (!value["MaxEmptyBulkDelete"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.MaxEmptyBulkDelete` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxEmptyBulkDelete = value["MaxEmptyBulkDelete"].GetInt64();
        m_maxEmptyBulkDeleteHasBeenSet = true;
    }

    if (value.HasMember("ScaleDownDelay") && !value["ScaleDownDelay"].IsNull())
    {
        if (!value["ScaleDownDelay"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.ScaleDownDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleDownDelay = value["ScaleDownDelay"].GetInt64();
        m_scaleDownDelayHasBeenSet = true;
    }

    if (value.HasMember("ScaleDownUnneededTime") && !value["ScaleDownUnneededTime"].IsNull())
    {
        if (!value["ScaleDownUnneededTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.ScaleDownUnneededTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleDownUnneededTime = value["ScaleDownUnneededTime"].GetInt64();
        m_scaleDownUnneededTimeHasBeenSet = true;
    }

    if (value.HasMember("ScaleDownUtilizationThreshold") && !value["ScaleDownUtilizationThreshold"].IsNull())
    {
        if (!value["ScaleDownUtilizationThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.ScaleDownUtilizationThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleDownUtilizationThreshold = value["ScaleDownUtilizationThreshold"].GetInt64();
        m_scaleDownUtilizationThresholdHasBeenSet = true;
    }

    if (value.HasMember("SkipNodesWithLocalStorage") && !value["SkipNodesWithLocalStorage"].IsNull())
    {
        if (!value["SkipNodesWithLocalStorage"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.SkipNodesWithLocalStorage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipNodesWithLocalStorage = value["SkipNodesWithLocalStorage"].GetBool();
        m_skipNodesWithLocalStorageHasBeenSet = true;
    }

    if (value.HasMember("SkipNodesWithSystemPods") && !value["SkipNodesWithSystemPods"].IsNull())
    {
        if (!value["SkipNodesWithSystemPods"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.SkipNodesWithSystemPods` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipNodesWithSystemPods = value["SkipNodesWithSystemPods"].GetBool();
        m_skipNodesWithSystemPodsHasBeenSet = true;
    }

    if (value.HasMember("IgnoreDaemonSetsUtilization") && !value["IgnoreDaemonSetsUtilization"].IsNull())
    {
        if (!value["IgnoreDaemonSetsUtilization"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ClusterAsGroupOption.IgnoreDaemonSetsUtilization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreDaemonSetsUtilization = value["IgnoreDaemonSetsUtilization"].GetBool();
        m_ignoreDaemonSetsUtilizationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterAsGroupOption::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_isScaleDownEnabledHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsScaleDownEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isScaleDownEnabled, allocator);
    }

    if (m_expanderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Expander";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expander.c_str(), allocator).Move(), allocator);
    }

    if (m_maxEmptyBulkDeleteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxEmptyBulkDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxEmptyBulkDelete, allocator);
    }

    if (m_scaleDownDelayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScaleDownDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleDownDelay, allocator);
    }

    if (m_scaleDownUnneededTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScaleDownUnneededTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleDownUnneededTime, allocator);
    }

    if (m_scaleDownUtilizationThresholdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScaleDownUtilizationThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleDownUtilizationThreshold, allocator);
    }

    if (m_skipNodesWithLocalStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SkipNodesWithLocalStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipNodesWithLocalStorage, allocator);
    }

    if (m_skipNodesWithSystemPodsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SkipNodesWithSystemPods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipNodesWithSystemPods, allocator);
    }

    if (m_ignoreDaemonSetsUtilizationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IgnoreDaemonSetsUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreDaemonSetsUtilization, allocator);
    }

}


bool ClusterAsGroupOption::GetIsScaleDownEnabled() const
{
    return m_isScaleDownEnabled;
}

void ClusterAsGroupOption::SetIsScaleDownEnabled(const bool& _isScaleDownEnabled)
{
    m_isScaleDownEnabled = _isScaleDownEnabled;
    m_isScaleDownEnabledHasBeenSet = true;
}

bool ClusterAsGroupOption::IsScaleDownEnabledHasBeenSet() const
{
    return m_isScaleDownEnabledHasBeenSet;
}

string ClusterAsGroupOption::GetExpander() const
{
    return m_expander;
}

void ClusterAsGroupOption::SetExpander(const string& _expander)
{
    m_expander = _expander;
    m_expanderHasBeenSet = true;
}

bool ClusterAsGroupOption::ExpanderHasBeenSet() const
{
    return m_expanderHasBeenSet;
}

int64_t ClusterAsGroupOption::GetMaxEmptyBulkDelete() const
{
    return m_maxEmptyBulkDelete;
}

void ClusterAsGroupOption::SetMaxEmptyBulkDelete(const int64_t& _maxEmptyBulkDelete)
{
    m_maxEmptyBulkDelete = _maxEmptyBulkDelete;
    m_maxEmptyBulkDeleteHasBeenSet = true;
}

bool ClusterAsGroupOption::MaxEmptyBulkDeleteHasBeenSet() const
{
    return m_maxEmptyBulkDeleteHasBeenSet;
}

int64_t ClusterAsGroupOption::GetScaleDownDelay() const
{
    return m_scaleDownDelay;
}

void ClusterAsGroupOption::SetScaleDownDelay(const int64_t& _scaleDownDelay)
{
    m_scaleDownDelay = _scaleDownDelay;
    m_scaleDownDelayHasBeenSet = true;
}

bool ClusterAsGroupOption::ScaleDownDelayHasBeenSet() const
{
    return m_scaleDownDelayHasBeenSet;
}

int64_t ClusterAsGroupOption::GetScaleDownUnneededTime() const
{
    return m_scaleDownUnneededTime;
}

void ClusterAsGroupOption::SetScaleDownUnneededTime(const int64_t& _scaleDownUnneededTime)
{
    m_scaleDownUnneededTime = _scaleDownUnneededTime;
    m_scaleDownUnneededTimeHasBeenSet = true;
}

bool ClusterAsGroupOption::ScaleDownUnneededTimeHasBeenSet() const
{
    return m_scaleDownUnneededTimeHasBeenSet;
}

int64_t ClusterAsGroupOption::GetScaleDownUtilizationThreshold() const
{
    return m_scaleDownUtilizationThreshold;
}

void ClusterAsGroupOption::SetScaleDownUtilizationThreshold(const int64_t& _scaleDownUtilizationThreshold)
{
    m_scaleDownUtilizationThreshold = _scaleDownUtilizationThreshold;
    m_scaleDownUtilizationThresholdHasBeenSet = true;
}

bool ClusterAsGroupOption::ScaleDownUtilizationThresholdHasBeenSet() const
{
    return m_scaleDownUtilizationThresholdHasBeenSet;
}

bool ClusterAsGroupOption::GetSkipNodesWithLocalStorage() const
{
    return m_skipNodesWithLocalStorage;
}

void ClusterAsGroupOption::SetSkipNodesWithLocalStorage(const bool& _skipNodesWithLocalStorage)
{
    m_skipNodesWithLocalStorage = _skipNodesWithLocalStorage;
    m_skipNodesWithLocalStorageHasBeenSet = true;
}

bool ClusterAsGroupOption::SkipNodesWithLocalStorageHasBeenSet() const
{
    return m_skipNodesWithLocalStorageHasBeenSet;
}

bool ClusterAsGroupOption::GetSkipNodesWithSystemPods() const
{
    return m_skipNodesWithSystemPods;
}

void ClusterAsGroupOption::SetSkipNodesWithSystemPods(const bool& _skipNodesWithSystemPods)
{
    m_skipNodesWithSystemPods = _skipNodesWithSystemPods;
    m_skipNodesWithSystemPodsHasBeenSet = true;
}

bool ClusterAsGroupOption::SkipNodesWithSystemPodsHasBeenSet() const
{
    return m_skipNodesWithSystemPodsHasBeenSet;
}

bool ClusterAsGroupOption::GetIgnoreDaemonSetsUtilization() const
{
    return m_ignoreDaemonSetsUtilization;
}

void ClusterAsGroupOption::SetIgnoreDaemonSetsUtilization(const bool& _ignoreDaemonSetsUtilization)
{
    m_ignoreDaemonSetsUtilization = _ignoreDaemonSetsUtilization;
    m_ignoreDaemonSetsUtilizationHasBeenSet = true;
}

bool ClusterAsGroupOption::IgnoreDaemonSetsUtilizationHasBeenSet() const
{
    return m_ignoreDaemonSetsUtilizationHasBeenSet;
}

