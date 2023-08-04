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

#include <tencentcloud/iss/v20230517/model/DescribeDomainResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeDomainResponse::DescribeDomainResponse() :
    m_idHasBeenSet(false),
    m_playDomainHasBeenSet(false),
    m_internalDomainHasBeenSet(false),
    m_haveCertHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDomainResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("PlayDomain") && !rsp["PlayDomain"].IsNull())
    {
        if (!rsp["PlayDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playDomain = string(rsp["PlayDomain"].GetString());
        m_playDomainHasBeenSet = true;
    }

    if (rsp.HasMember("InternalDomain") && !rsp["InternalDomain"].IsNull())
    {
        if (!rsp["InternalDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalDomain = string(rsp["InternalDomain"].GetString());
        m_internalDomainHasBeenSet = true;
    }

    if (rsp.HasMember("HaveCert") && !rsp["HaveCert"].IsNull())
    {
        if (!rsp["HaveCert"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HaveCert` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_haveCert = rsp["HaveCert"].GetInt64();
        m_haveCertHasBeenSet = true;
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

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDomainResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_internalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_haveCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaveCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_haveCert, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
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


string DescribeDomainResponse::GetId() const
{
    return m_id;
}

bool DescribeDomainResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDomainResponse::GetPlayDomain() const
{
    return m_playDomain;
}

bool DescribeDomainResponse::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

string DescribeDomainResponse::GetInternalDomain() const
{
    return m_internalDomain;
}

bool DescribeDomainResponse::InternalDomainHasBeenSet() const
{
    return m_internalDomainHasBeenSet;
}

int64_t DescribeDomainResponse::GetHaveCert() const
{
    return m_haveCert;
}

bool DescribeDomainResponse::HaveCertHasBeenSet() const
{
    return m_haveCertHasBeenSet;
}

string DescribeDomainResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeDomainResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeDomainResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeDomainResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t DescribeDomainResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeDomainResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}


