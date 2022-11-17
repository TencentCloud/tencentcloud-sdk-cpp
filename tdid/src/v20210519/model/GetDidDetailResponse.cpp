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

#include <tencentcloud/tdid/v20210519/model/GetDidDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetDidDetailResponse::GetDidDetailResponse() :
    m_didHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_authorityStateHasBeenSet(false),
    m_consortiumIdHasBeenSet(false),
    m_consortiumNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_resChainIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome GetDidDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Did") && !rsp["Did"].IsNull())
    {
        if (!rsp["Did"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Did` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_did = string(rsp["Did"].GetString());
        m_didHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("PublicKey") && !rsp["PublicKey"].IsNull())
    {
        if (!rsp["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(rsp["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorityState") && !rsp["AuthorityState"].IsNull())
    {
        if (!rsp["AuthorityState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorityState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorityState = rsp["AuthorityState"].GetInt64();
        m_authorityStateHasBeenSet = true;
    }

    if (rsp.HasMember("ConsortiumId") && !rsp["ConsortiumId"].IsNull())
    {
        if (!rsp["ConsortiumId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsortiumId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consortiumId = rsp["ConsortiumId"].GetInt64();
        m_consortiumIdHasBeenSet = true;
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

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = rsp["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
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

    if (rsp.HasMember("ResChainId") && !rsp["ResChainId"].IsNull())
    {
        if (!rsp["ResChainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResChainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resChainId = string(rsp["ResChainId"].GetString());
        m_resChainIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDidDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorityState, allocator);
    }

    if (m_consortiumIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consortiumId, allocator);
    }

    if (m_consortiumNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsortiumName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consortiumName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resChainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResChainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resChainId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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


string GetDidDetailResponse::GetDid() const
{
    return m_did;
}

bool GetDidDetailResponse::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

string GetDidDetailResponse::GetRemark() const
{
    return m_remark;
}

bool GetDidDetailResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string GetDidDetailResponse::GetPublicKey() const
{
    return m_publicKey;
}

bool GetDidDetailResponse::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

int64_t GetDidDetailResponse::GetAuthorityState() const
{
    return m_authorityState;
}

bool GetDidDetailResponse::AuthorityStateHasBeenSet() const
{
    return m_authorityStateHasBeenSet;
}

int64_t GetDidDetailResponse::GetConsortiumId() const
{
    return m_consortiumId;
}

bool GetDidDetailResponse::ConsortiumIdHasBeenSet() const
{
    return m_consortiumIdHasBeenSet;
}

string GetDidDetailResponse::GetConsortiumName() const
{
    return m_consortiumName;
}

bool GetDidDetailResponse::ConsortiumNameHasBeenSet() const
{
    return m_consortiumNameHasBeenSet;
}

int64_t GetDidDetailResponse::GetGroupId() const
{
    return m_groupId;
}

bool GetDidDetailResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GetDidDetailResponse::GetClusterId() const
{
    return m_clusterId;
}

bool GetDidDetailResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetDidDetailResponse::GetResChainId() const
{
    return m_resChainId;
}

bool GetDidDetailResponse::ResChainIdHasBeenSet() const
{
    return m_resChainIdHasBeenSet;
}

string GetDidDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetDidDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


