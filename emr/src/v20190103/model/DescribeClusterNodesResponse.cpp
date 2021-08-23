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

#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeClusterNodesResponse::DescribeClusterNodesResponse() :
    m_totalCntHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_hardwareResourceTypeListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterNodesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCnt") && !rsp["TotalCnt"].IsNull())
    {
        if (!rsp["TotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = rsp["TotalCnt"].GetInt64();
        m_totalCntHasBeenSet = true;
    }

    if (rsp.HasMember("NodeList") && !rsp["NodeList"].IsNull())
    {
        if (!rsp["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeHardwareInfo item;
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

    if (rsp.HasMember("TagKeys") && !rsp["TagKeys"].IsNull())
    {
        if (!rsp["TagKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagKeys` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagKeys.push_back((*itr).GetString());
        }
        m_tagKeysHasBeenSet = true;
    }

    if (rsp.HasMember("HardwareResourceTypeList") && !rsp["HardwareResourceTypeList"].IsNull())
    {
        if (!rsp["HardwareResourceTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HardwareResourceTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HardwareResourceTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hardwareResourceTypeList.push_back((*itr).GetString());
        }
        m_hardwareResourceTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterNodesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCnt, allocator);
    }

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

    if (m_tagKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagKeys.begin(); itr != m_tagKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hardwareResourceTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareResourceTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hardwareResourceTypeList.begin(); itr != m_hardwareResourceTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t DescribeClusterNodesResponse::GetTotalCnt() const
{
    return m_totalCnt;
}

bool DescribeClusterNodesResponse::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

vector<NodeHardwareInfo> DescribeClusterNodesResponse::GetNodeList() const
{
    return m_nodeList;
}

bool DescribeClusterNodesResponse::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

vector<string> DescribeClusterNodesResponse::GetTagKeys() const
{
    return m_tagKeys;
}

bool DescribeClusterNodesResponse::TagKeysHasBeenSet() const
{
    return m_tagKeysHasBeenSet;
}

vector<string> DescribeClusterNodesResponse::GetHardwareResourceTypeList() const
{
    return m_hardwareResourceTypeList;
}

bool DescribeClusterNodesResponse::HardwareResourceTypeListHasBeenSet() const
{
    return m_hardwareResourceTypeListHasBeenSet;
}


