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

#include <tencentcloud/thpc/v20220401/model/QueueConfigOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

QueueConfigOverview::QueueConfigOverview() :
    m_queueNameHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_enableAutoExpansionHasBeenSet(false),
    m_enableAutoShrinkHasBeenSet(false),
    m_expansionNodeConfigsHasBeenSet(false)
{
}

CoreInternalOutcome QueueConfigOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfigOverview.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfigOverview.MinSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetInt64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfigOverview.MaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetInt64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("EnableAutoExpansion") && !value["EnableAutoExpansion"].IsNull())
    {
        if (!value["EnableAutoExpansion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfigOverview.EnableAutoExpansion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoExpansion = value["EnableAutoExpansion"].GetBool();
        m_enableAutoExpansionHasBeenSet = true;
    }

    if (value.HasMember("EnableAutoShrink") && !value["EnableAutoShrink"].IsNull())
    {
        if (!value["EnableAutoShrink"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfigOverview.EnableAutoShrink` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoShrink = value["EnableAutoShrink"].GetBool();
        m_enableAutoShrinkHasBeenSet = true;
    }

    if (value.HasMember("ExpansionNodeConfigs") && !value["ExpansionNodeConfigs"].IsNull())
    {
        if (!value["ExpansionNodeConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueueConfigOverview.ExpansionNodeConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["ExpansionNodeConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExpansionNodeConfigOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_expansionNodeConfigs.push_back(item);
        }
        m_expansionNodeConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueueConfigOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_enableAutoExpansionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoExpansion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoExpansion, allocator);
    }

    if (m_enableAutoShrinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoShrink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoShrink, allocator);
    }

    if (m_expansionNodeConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpansionNodeConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_expansionNodeConfigs.begin(); itr != m_expansionNodeConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QueueConfigOverview::GetQueueName() const
{
    return m_queueName;
}

void QueueConfigOverview::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool QueueConfigOverview::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

int64_t QueueConfigOverview::GetMinSize() const
{
    return m_minSize;
}

void QueueConfigOverview::SetMinSize(const int64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool QueueConfigOverview::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

int64_t QueueConfigOverview::GetMaxSize() const
{
    return m_maxSize;
}

void QueueConfigOverview::SetMaxSize(const int64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool QueueConfigOverview::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

bool QueueConfigOverview::GetEnableAutoExpansion() const
{
    return m_enableAutoExpansion;
}

void QueueConfigOverview::SetEnableAutoExpansion(const bool& _enableAutoExpansion)
{
    m_enableAutoExpansion = _enableAutoExpansion;
    m_enableAutoExpansionHasBeenSet = true;
}

bool QueueConfigOverview::EnableAutoExpansionHasBeenSet() const
{
    return m_enableAutoExpansionHasBeenSet;
}

bool QueueConfigOverview::GetEnableAutoShrink() const
{
    return m_enableAutoShrink;
}

void QueueConfigOverview::SetEnableAutoShrink(const bool& _enableAutoShrink)
{
    m_enableAutoShrink = _enableAutoShrink;
    m_enableAutoShrinkHasBeenSet = true;
}

bool QueueConfigOverview::EnableAutoShrinkHasBeenSet() const
{
    return m_enableAutoShrinkHasBeenSet;
}

vector<ExpansionNodeConfigOverview> QueueConfigOverview::GetExpansionNodeConfigs() const
{
    return m_expansionNodeConfigs;
}

void QueueConfigOverview::SetExpansionNodeConfigs(const vector<ExpansionNodeConfigOverview>& _expansionNodeConfigs)
{
    m_expansionNodeConfigs = _expansionNodeConfigs;
    m_expansionNodeConfigsHasBeenSet = true;
}

bool QueueConfigOverview::ExpansionNodeConfigsHasBeenSet() const
{
    return m_expansionNodeConfigsHasBeenSet;
}

