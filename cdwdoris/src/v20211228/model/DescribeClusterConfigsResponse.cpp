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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeClusterConfigsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeClusterConfigsResponse::DescribeClusterConfigsResponse() :
    m_clusterConfListHasBeenSet(false),
    m_buildVersionHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_hasCNHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterConfigsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterConfList") && !rsp["ClusterConfList"].IsNull())
    {
        if (!rsp["ClusterConfList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterConfList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClusterConfList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterConfigsInfoFromEMR item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterConfList.push_back(item);
        }
        m_clusterConfListHasBeenSet = true;
    }

    if (rsp.HasMember("BuildVersion") && !rsp["BuildVersion"].IsNull())
    {
        if (!rsp["BuildVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildVersion = string(rsp["BuildVersion"].GetString());
        m_buildVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("HasCN") && !rsp["HasCN"].IsNull())
    {
        if (!rsp["HasCN"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasCN` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasCN = rsp["HasCN"].GetBool();
        m_hasCNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterConfigsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterConfListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterConfList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterConfList.begin(); itr != m_clusterConfList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_buildVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_hasCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasCN, allocator);
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


vector<ClusterConfigsInfoFromEMR> DescribeClusterConfigsResponse::GetClusterConfList() const
{
    return m_clusterConfList;
}

bool DescribeClusterConfigsResponse::ClusterConfListHasBeenSet() const
{
    return m_clusterConfListHasBeenSet;
}

string DescribeClusterConfigsResponse::GetBuildVersion() const
{
    return m_buildVersion;
}

bool DescribeClusterConfigsResponse::BuildVersionHasBeenSet() const
{
    return m_buildVersionHasBeenSet;
}

string DescribeClusterConfigsResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool DescribeClusterConfigsResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

bool DescribeClusterConfigsResponse::GetHasCN() const
{
    return m_hasCN;
}

bool DescribeClusterConfigsResponse::HasCNHasBeenSet() const
{
    return m_hasCNHasBeenSet;
}


