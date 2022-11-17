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

#include <tencentcloud/tdid/v20210519/model/GetDidClusterDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetDidClusterDetailResponse::GetDidClusterDetailResponse() :
    m_clusterIdHasBeenSet(false),
    m_consortiumNameHasBeenSet(false),
    m_chainAgencyHasBeenSet(false)
{
}

CoreInternalOutcome GetDidClusterDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("ConsortiumName") && !rsp["ConsortiumName"].IsNull())
    {
        if (!rsp["ConsortiumName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsortiumName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumName = string(rsp["ConsortiumName"].GetString());
        m_consortiumNameHasBeenSet = true;
    }

    if (rsp.HasMember("ChainAgency") && !rsp["ChainAgency"].IsNull())
    {
        if (!rsp["ChainAgency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainAgency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainAgency = string(rsp["ChainAgency"].GetString());
        m_chainAgencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDidClusterDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_consortiumNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consortiumName.c_str(), allocator).Move(), allocator);
    }

    if (m_chainAgencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainAgency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chainAgency.c_str(), allocator).Move(), allocator);
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


string GetDidClusterDetailResponse::GetClusterId() const
{
    return m_clusterId;
}

bool GetDidClusterDetailResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetDidClusterDetailResponse::GetConsortiumName() const
{
    return m_consortiumName;
}

bool GetDidClusterDetailResponse::ConsortiumNameHasBeenSet() const
{
    return m_consortiumNameHasBeenSet;
}

string GetDidClusterDetailResponse::GetChainAgency() const
{
    return m_chainAgency;
}

bool GetDidClusterDetailResponse::ChainAgencyHasBeenSet() const
{
    return m_chainAgencyHasBeenSet;
}


