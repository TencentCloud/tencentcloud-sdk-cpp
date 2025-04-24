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

#include <tencentcloud/cat/v20180409/model/DescribeNodeGroupsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeNodeGroupsResponse::DescribeNodeGroupsResponse() :
    m_nodeListHasBeenSet(false),
    m_districtListHasBeenSet(false),
    m_netServiceListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNodeGroupsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NodeList") && !rsp["NodeList"].IsNull())
    {
        if (!rsp["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeTree item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeList.push_back(item);
        }
        m_nodeListHasBeenSet = true;
    }

    if (rsp.HasMember("DistrictList") && !rsp["DistrictList"].IsNull())
    {
        if (!rsp["DistrictList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DistrictList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DistrictList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DistinctOrNetServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_districtList.push_back(item);
        }
        m_districtListHasBeenSet = true;
    }

    if (rsp.HasMember("NetServiceList") && !rsp["NetServiceList"].IsNull())
    {
        if (!rsp["NetServiceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetServiceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NetServiceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DistinctOrNetServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_netServiceList.push_back(item);
        }
        m_netServiceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNodeGroupsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeList.begin(); itr != m_nodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_districtListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistrictList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_districtList.begin(); itr != m_districtList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_netServiceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetServiceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netServiceList.begin(); itr != m_netServiceList.end(); ++itr, ++i)
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


vector<NodeTree> DescribeNodeGroupsResponse::GetNodeList() const
{
    return m_nodeList;
}

bool DescribeNodeGroupsResponse::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

vector<DistinctOrNetServiceInfo> DescribeNodeGroupsResponse::GetDistrictList() const
{
    return m_districtList;
}

bool DescribeNodeGroupsResponse::DistrictListHasBeenSet() const
{
    return m_districtListHasBeenSet;
}

vector<DistinctOrNetServiceInfo> DescribeNodeGroupsResponse::GetNetServiceList() const
{
    return m_netServiceList;
}

bool DescribeNodeGroupsResponse::NetServiceListHasBeenSet() const
{
    return m_netServiceListHasBeenSet;
}


