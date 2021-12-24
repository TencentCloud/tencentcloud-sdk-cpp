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

#include <tencentcloud/es/v20180416/model/DescribeViewsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeViewsResponse::DescribeViewsResponse() :
    m_clusterViewHasBeenSet(false),
    m_nodesViewHasBeenSet(false),
    m_kibanasViewHasBeenSet(false)
{
}

CoreInternalOutcome DescribeViewsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterView") && !rsp["ClusterView"].IsNull())
    {
        if (!rsp["ClusterView"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterView.Deserialize(rsp["ClusterView"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterViewHasBeenSet = true;
    }

    if (rsp.HasMember("NodesView") && !rsp["NodesView"].IsNull())
    {
        if (!rsp["NodesView"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodesView` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodesView"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeView item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodesView.push_back(item);
        }
        m_nodesViewHasBeenSet = true;
    }

    if (rsp.HasMember("KibanasView") && !rsp["KibanasView"].IsNull())
    {
        if (!rsp["KibanasView"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KibanasView` is not array type"));

        const rapidjson::Value &tmpValue = rsp["KibanasView"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KibanaView item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kibanasView.push_back(item);
        }
        m_kibanasViewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeViewsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterView.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nodesViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodesView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodesView.begin(); itr != m_nodesView.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kibanasViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanasView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kibanasView.begin(); itr != m_kibanasView.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


ClusterView DescribeViewsResponse::GetClusterView() const
{
    return m_clusterView;
}

bool DescribeViewsResponse::ClusterViewHasBeenSet() const
{
    return m_clusterViewHasBeenSet;
}

vector<NodeView> DescribeViewsResponse::GetNodesView() const
{
    return m_nodesView;
}

bool DescribeViewsResponse::NodesViewHasBeenSet() const
{
    return m_nodesViewHasBeenSet;
}

vector<KibanaView> DescribeViewsResponse::GetKibanasView() const
{
    return m_kibanasView;
}

bool DescribeViewsResponse::KibanasViewHasBeenSet() const
{
    return m_kibanasViewHasBeenSet;
}


