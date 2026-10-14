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

#include <tencentcloud/adp/v20260520/model/NodeRunDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

NodeRunDetail::NodeRunDetail() :
    m_nodeRunHasBeenSet(false),
    m_nodeRunContentHasBeenSet(false),
    m_nodeRunExecutionHasBeenSet(false),
    m_nodeRunLogHasBeenSet(false),
    m_statisticListHasBeenSet(false)
{
}

CoreInternalOutcome NodeRunDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeRun") && !value["NodeRun"].IsNull())
    {
        if (!value["NodeRun"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeRun` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeRun.Deserialize(value["NodeRun"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeRunHasBeenSet = true;
    }

    if (value.HasMember("NodeRunContent") && !value["NodeRunContent"].IsNull())
    {
        if (!value["NodeRunContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeRunContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeRunContent.Deserialize(value["NodeRunContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeRunContentHasBeenSet = true;
    }

    if (value.HasMember("NodeRunExecution") && !value["NodeRunExecution"].IsNull())
    {
        if (!value["NodeRunExecution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeRunExecution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeRunExecution.Deserialize(value["NodeRunExecution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeRunExecutionHasBeenSet = true;
    }

    if (value.HasMember("NodeRunLog") && !value["NodeRunLog"].IsNull())
    {
        if (!value["NodeRunLog"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.NodeRunLog` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeRunLog.Deserialize(value["NodeRunLog"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeRunLogHasBeenSet = true;
    }

    if (value.HasMember("StatisticList") && !value["StatisticList"].IsNull())
    {
        if (!value["StatisticList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeRunDetail.StatisticList` is not array type"));

        const rapidjson::Value &tmpValue = value["StatisticList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Statistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statisticList.push_back(item);
        }
        m_statisticListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeRunDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeRun.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeRunContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRunContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeRunContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeRunExecutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRunExecution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeRunExecution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodeRunLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRunLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeRunLog.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statisticListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statisticList.begin(); itr != m_statisticList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


NodeRun NodeRunDetail::GetNodeRun() const
{
    return m_nodeRun;
}

void NodeRunDetail::SetNodeRun(const NodeRun& _nodeRun)
{
    m_nodeRun = _nodeRun;
    m_nodeRunHasBeenSet = true;
}

bool NodeRunDetail::NodeRunHasBeenSet() const
{
    return m_nodeRunHasBeenSet;
}

NodeRunContent NodeRunDetail::GetNodeRunContent() const
{
    return m_nodeRunContent;
}

void NodeRunDetail::SetNodeRunContent(const NodeRunContent& _nodeRunContent)
{
    m_nodeRunContent = _nodeRunContent;
    m_nodeRunContentHasBeenSet = true;
}

bool NodeRunDetail::NodeRunContentHasBeenSet() const
{
    return m_nodeRunContentHasBeenSet;
}

NodeRunExecution NodeRunDetail::GetNodeRunExecution() const
{
    return m_nodeRunExecution;
}

void NodeRunDetail::SetNodeRunExecution(const NodeRunExecution& _nodeRunExecution)
{
    m_nodeRunExecution = _nodeRunExecution;
    m_nodeRunExecutionHasBeenSet = true;
}

bool NodeRunDetail::NodeRunExecutionHasBeenSet() const
{
    return m_nodeRunExecutionHasBeenSet;
}

NodeRunLog NodeRunDetail::GetNodeRunLog() const
{
    return m_nodeRunLog;
}

void NodeRunDetail::SetNodeRunLog(const NodeRunLog& _nodeRunLog)
{
    m_nodeRunLog = _nodeRunLog;
    m_nodeRunLogHasBeenSet = true;
}

bool NodeRunDetail::NodeRunLogHasBeenSet() const
{
    return m_nodeRunLogHasBeenSet;
}

vector<Statistic> NodeRunDetail::GetStatisticList() const
{
    return m_statisticList;
}

void NodeRunDetail::SetStatisticList(const vector<Statistic>& _statisticList)
{
    m_statisticList = _statisticList;
    m_statisticListHasBeenSet = true;
}

bool NodeRunDetail::StatisticListHasBeenSet() const
{
    return m_statisticListHasBeenSet;
}

