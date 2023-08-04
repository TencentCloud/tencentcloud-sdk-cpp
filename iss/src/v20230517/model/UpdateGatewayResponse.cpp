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

#include <tencentcloud/iss/v20230517/model/UpdateGatewayResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateGatewayResponse::UpdateGatewayResponse() :
    m_gatewayIdHasBeenSet(false),
    m_gwIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome UpdateGatewayResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GatewayId") && !rsp["GatewayId"].IsNull())
    {
        if (!rsp["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(rsp["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (rsp.HasMember("GwId") && !rsp["GwId"].IsNull())
    {
        if (!rsp["GwId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GwId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gwId = string(rsp["GwId"].GetString());
        m_gwIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = rsp["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("Secret") && !rsp["Secret"].IsNull())
    {
        if (!rsp["Secret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Secret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secret = string(rsp["Secret"].GetString());
        m_secretHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UpdateGatewayResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gwIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GwId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gwId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
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


string UpdateGatewayResponse::GetGatewayId() const
{
    return m_gatewayId;
}

bool UpdateGatewayResponse::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string UpdateGatewayResponse::GetGwId() const
{
    return m_gwId;
}

bool UpdateGatewayResponse::GwIdHasBeenSet() const
{
    return m_gwIdHasBeenSet;
}

string UpdateGatewayResponse::GetName() const
{
    return m_name;
}

bool UpdateGatewayResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateGatewayResponse::GetDescription() const
{
    return m_description;
}

bool UpdateGatewayResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateGatewayResponse::GetClusterId() const
{
    return m_clusterId;
}

bool UpdateGatewayResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateGatewayResponse::GetClusterName() const
{
    return m_clusterName;
}

bool UpdateGatewayResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t UpdateGatewayResponse::GetStatus() const
{
    return m_status;
}

bool UpdateGatewayResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t UpdateGatewayResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool UpdateGatewayResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string UpdateGatewayResponse::GetSecret() const
{
    return m_secret;
}

bool UpdateGatewayResponse::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

string UpdateGatewayResponse::GetVersion() const
{
    return m_version;
}

bool UpdateGatewayResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}


