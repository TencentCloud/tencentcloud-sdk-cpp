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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeInstanceNodesInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeInstanceNodesInfoResponse::DescribeInstanceNodesInfoResponse() :
    m_beNodesHasBeenSet(false),
    m_feNodesHasBeenSet(false),
    m_feMasterHasBeenSet(false),
    m_beNodeInfosHasBeenSet(false),
    m_feNodeInfosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceNodesInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BeNodes") && !rsp["BeNodes"].IsNull())
    {
        if (!rsp["BeNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BeNodes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BeNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_beNodes.push_back((*itr).GetString());
        }
        m_beNodesHasBeenSet = true;
    }

    if (rsp.HasMember("FeNodes") && !rsp["FeNodes"].IsNull())
    {
        if (!rsp["FeNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeNodes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FeNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_feNodes.push_back((*itr).GetString());
        }
        m_feNodesHasBeenSet = true;
    }

    if (rsp.HasMember("FeMaster") && !rsp["FeMaster"].IsNull())
    {
        if (!rsp["FeMaster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeMaster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feMaster = string(rsp["FeMaster"].GetString());
        m_feMasterHasBeenSet = true;
    }

    if (rsp.HasMember("BeNodeInfos") && !rsp["BeNodeInfos"].IsNull())
    {
        if (!rsp["BeNodeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BeNodeInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BeNodeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_beNodeInfos.push_back(item);
        }
        m_beNodeInfosHasBeenSet = true;
    }

    if (rsp.HasMember("FeNodeInfos") && !rsp["FeNodeInfos"].IsNull())
    {
        if (!rsp["FeNodeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeNodeInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FeNodeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_feNodeInfos.push_back(item);
        }
        m_feNodeInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceNodesInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_beNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_beNodes.begin(); itr != m_beNodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_feNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_feNodes.begin(); itr != m_feNodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_feMasterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeMaster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feMaster.c_str(), allocator).Move(), allocator);
    }

    if (m_beNodeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeNodeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_beNodeInfos.begin(); itr != m_beNodeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_feNodeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeNodeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_feNodeInfos.begin(); itr != m_feNodeInfos.end(); ++itr, ++i)
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


vector<string> DescribeInstanceNodesInfoResponse::GetBeNodes() const
{
    return m_beNodes;
}

bool DescribeInstanceNodesInfoResponse::BeNodesHasBeenSet() const
{
    return m_beNodesHasBeenSet;
}

vector<string> DescribeInstanceNodesInfoResponse::GetFeNodes() const
{
    return m_feNodes;
}

bool DescribeInstanceNodesInfoResponse::FeNodesHasBeenSet() const
{
    return m_feNodesHasBeenSet;
}

string DescribeInstanceNodesInfoResponse::GetFeMaster() const
{
    return m_feMaster;
}

bool DescribeInstanceNodesInfoResponse::FeMasterHasBeenSet() const
{
    return m_feMasterHasBeenSet;
}

vector<NodeInfo> DescribeInstanceNodesInfoResponse::GetBeNodeInfos() const
{
    return m_beNodeInfos;
}

bool DescribeInstanceNodesInfoResponse::BeNodeInfosHasBeenSet() const
{
    return m_beNodeInfosHasBeenSet;
}

vector<NodeInfo> DescribeInstanceNodesInfoResponse::GetFeNodeInfos() const
{
    return m_feNodeInfos;
}

bool DescribeInstanceNodesInfoResponse::FeNodeInfosHasBeenSet() const
{
    return m_feNodeInfosHasBeenSet;
}


