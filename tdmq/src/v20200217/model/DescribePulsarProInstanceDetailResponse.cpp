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

#include <tencentcloud/tdmq/v20200217/model/DescribePulsarProInstanceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribePulsarProInstanceDetailResponse::DescribePulsarProInstanceDetailResponse() :
    m_clusterInfoHasBeenSet(false),
    m_networkAccessPointInfosHasBeenSet(false),
    m_clusterSpecInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribePulsarProInstanceDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterInfo") && !rsp["ClusterInfo"].IsNull())
    {
        if (!rsp["ClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterInfo.Deserialize(rsp["ClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterInfoHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkAccessPointInfos") && !rsp["NetworkAccessPointInfos"].IsNull())
    {
        if (!rsp["NetworkAccessPointInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAccessPointInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NetworkAccessPointInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PulsarNetworkAccessPointInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networkAccessPointInfos.push_back(item);
        }
        m_networkAccessPointInfosHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterSpecInfo") && !rsp["ClusterSpecInfo"].IsNull())
    {
        if (!rsp["ClusterSpecInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSpecInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterSpecInfo.Deserialize(rsp["ClusterSpecInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterSpecInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePulsarProInstanceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_networkAccessPointInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAccessPointInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkAccessPointInfos.begin(); itr != m_networkAccessPointInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterSpecInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterSpecInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterSpecInfo.ToJsonObject(value[key.c_str()], allocator);
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


PulsarProClusterInfo DescribePulsarProInstanceDetailResponse::GetClusterInfo() const
{
    return m_clusterInfo;
}

bool DescribePulsarProInstanceDetailResponse::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

vector<PulsarNetworkAccessPointInfo> DescribePulsarProInstanceDetailResponse::GetNetworkAccessPointInfos() const
{
    return m_networkAccessPointInfos;
}

bool DescribePulsarProInstanceDetailResponse::NetworkAccessPointInfosHasBeenSet() const
{
    return m_networkAccessPointInfosHasBeenSet;
}

PulsarProClusterSpecInfo DescribePulsarProInstanceDetailResponse::GetClusterSpecInfo() const
{
    return m_clusterSpecInfo;
}

bool DescribePulsarProInstanceDetailResponse::ClusterSpecInfoHasBeenSet() const
{
    return m_clusterSpecInfoHasBeenSet;
}


