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

#include <tencentcloud/apm/v20210622/model/DescribeTopologyNewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeTopologyNewResponse::DescribeTopologyNewResponse() :
    m_nodesHasBeenSet(false),
    m_edgesHasBeenSet(false),
    m_topologyModifyFlagHasBeenSet(false),
    m_selectorsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTopologyNewResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Nodes") && !rsp["Nodes"].IsNull())
    {
        if (!rsp["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Nodes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopologyNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodes.push_back(item);
        }
        m_nodesHasBeenSet = true;
    }

    if (rsp.HasMember("Edges") && !rsp["Edges"].IsNull())
    {
        if (!rsp["Edges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Edges` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Edges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopologyEdgeNew item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_edges.push_back(item);
        }
        m_edgesHasBeenSet = true;
    }

    if (rsp.HasMember("TopologyModifyFlag") && !rsp["TopologyModifyFlag"].IsNull())
    {
        if (!rsp["TopologyModifyFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyModifyFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topologyModifyFlag = rsp["TopologyModifyFlag"].GetInt64();
        m_topologyModifyFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Selectors") && !rsp["Selectors"].IsNull())
    {
        if (!rsp["Selectors"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Selectors` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectors.Deserialize(rsp["Selectors"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectorsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTopologyNewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_edgesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_edges.begin(); itr != m_edges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topologyModifyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopologyModifyFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topologyModifyFlag, allocator);
    }

    if (m_selectorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selectors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectors.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<TopologyNode> DescribeTopologyNewResponse::GetNodes() const
{
    return m_nodes;
}

bool DescribeTopologyNewResponse::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

vector<TopologyEdgeNew> DescribeTopologyNewResponse::GetEdges() const
{
    return m_edges;
}

bool DescribeTopologyNewResponse::EdgesHasBeenSet() const
{
    return m_edgesHasBeenSet;
}

int64_t DescribeTopologyNewResponse::GetTopologyModifyFlag() const
{
    return m_topologyModifyFlag;
}

bool DescribeTopologyNewResponse::TopologyModifyFlagHasBeenSet() const
{
    return m_topologyModifyFlagHasBeenSet;
}

SelectorView DescribeTopologyNewResponse::GetSelectors() const
{
    return m_selectors;
}

bool DescribeTopologyNewResponse::SelectorsHasBeenSet() const
{
    return m_selectorsHasBeenSet;
}


