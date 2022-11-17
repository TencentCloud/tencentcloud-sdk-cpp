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

#include <tencentcloud/tdid/v20210519/model/GetDeployInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetDeployInfoResponse::GetDeployInfoResponse() :
    m_hashHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_deployDidHasBeenSet(false),
    m_sdkVersionHasBeenSet(false),
    m_contractVersionHasBeenSet(false),
    m_blockVersionHasBeenSet(false),
    m_blockIpHasBeenSet(false),
    m_didAddressHasBeenSet(false),
    m_cptAddressHasBeenSet(false),
    m_authorityAddressHasBeenSet(false),
    m_evidenceAddressHasBeenSet(false),
    m_specificAddressHasBeenSet(false),
    m_chainIdHasBeenSet(false)
{
}

CoreInternalOutcome GetDeployInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Hash") && !rsp["Hash"].IsNull())
    {
        if (!rsp["Hash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hash = string(rsp["Hash"].GetString());
        m_hashHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("DeployDid") && !rsp["DeployDid"].IsNull())
    {
        if (!rsp["DeployDid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployDid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployDid = string(rsp["DeployDid"].GetString());
        m_deployDidHasBeenSet = true;
    }

    if (rsp.HasMember("SdkVersion") && !rsp["SdkVersion"].IsNull())
    {
        if (!rsp["SdkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkVersion = string(rsp["SdkVersion"].GetString());
        m_sdkVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ContractVersion") && !rsp["ContractVersion"].IsNull())
    {
        if (!rsp["ContractVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractVersion = string(rsp["ContractVersion"].GetString());
        m_contractVersionHasBeenSet = true;
    }

    if (rsp.HasMember("BlockVersion") && !rsp["BlockVersion"].IsNull())
    {
        if (!rsp["BlockVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockVersion = string(rsp["BlockVersion"].GetString());
        m_blockVersionHasBeenSet = true;
    }

    if (rsp.HasMember("BlockIp") && !rsp["BlockIp"].IsNull())
    {
        if (!rsp["BlockIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockIp = string(rsp["BlockIp"].GetString());
        m_blockIpHasBeenSet = true;
    }

    if (rsp.HasMember("DidAddress") && !rsp["DidAddress"].IsNull())
    {
        if (!rsp["DidAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DidAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_didAddress = string(rsp["DidAddress"].GetString());
        m_didAddressHasBeenSet = true;
    }

    if (rsp.HasMember("CptAddress") && !rsp["CptAddress"].IsNull())
    {
        if (!rsp["CptAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cptAddress = string(rsp["CptAddress"].GetString());
        m_cptAddressHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorityAddress") && !rsp["AuthorityAddress"].IsNull())
    {
        if (!rsp["AuthorityAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorityAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorityAddress = string(rsp["AuthorityAddress"].GetString());
        m_authorityAddressHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceAddress") && !rsp["EvidenceAddress"].IsNull())
    {
        if (!rsp["EvidenceAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EvidenceAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceAddress = string(rsp["EvidenceAddress"].GetString());
        m_evidenceAddressHasBeenSet = true;
    }

    if (rsp.HasMember("SpecificAddress") && !rsp["SpecificAddress"].IsNull())
    {
        if (!rsp["SpecificAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecificAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specificAddress = string(rsp["SpecificAddress"].GetString());
        m_specificAddressHasBeenSet = true;
    }

    if (rsp.HasMember("ChainId") && !rsp["ChainId"].IsNull())
    {
        if (!rsp["ChainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainId = string(rsp["ChainId"].GetString());
        m_chainIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDeployInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_hashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hash.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployDidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployDid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployDid.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_contractVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_blockVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockIp.c_str(), allocator).Move(), allocator);
    }

    if (m_didAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DidAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_didAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_cptAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cptAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorityAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_evidenceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_evidenceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_specificAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecificAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specificAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_chainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chainId.c_str(), allocator).Move(), allocator);
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


string GetDeployInfoResponse::GetHash() const
{
    return m_hash;
}

bool GetDeployInfoResponse::HashHasBeenSet() const
{
    return m_hashHasBeenSet;
}

string GetDeployInfoResponse::GetGroupId() const
{
    return m_groupId;
}

bool GetDeployInfoResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GetDeployInfoResponse::GetDeployDid() const
{
    return m_deployDid;
}

bool GetDeployInfoResponse::DeployDidHasBeenSet() const
{
    return m_deployDidHasBeenSet;
}

string GetDeployInfoResponse::GetSdkVersion() const
{
    return m_sdkVersion;
}

bool GetDeployInfoResponse::SdkVersionHasBeenSet() const
{
    return m_sdkVersionHasBeenSet;
}

string GetDeployInfoResponse::GetContractVersion() const
{
    return m_contractVersion;
}

bool GetDeployInfoResponse::ContractVersionHasBeenSet() const
{
    return m_contractVersionHasBeenSet;
}

string GetDeployInfoResponse::GetBlockVersion() const
{
    return m_blockVersion;
}

bool GetDeployInfoResponse::BlockVersionHasBeenSet() const
{
    return m_blockVersionHasBeenSet;
}

string GetDeployInfoResponse::GetBlockIp() const
{
    return m_blockIp;
}

bool GetDeployInfoResponse::BlockIpHasBeenSet() const
{
    return m_blockIpHasBeenSet;
}

string GetDeployInfoResponse::GetDidAddress() const
{
    return m_didAddress;
}

bool GetDeployInfoResponse::DidAddressHasBeenSet() const
{
    return m_didAddressHasBeenSet;
}

string GetDeployInfoResponse::GetCptAddress() const
{
    return m_cptAddress;
}

bool GetDeployInfoResponse::CptAddressHasBeenSet() const
{
    return m_cptAddressHasBeenSet;
}

string GetDeployInfoResponse::GetAuthorityAddress() const
{
    return m_authorityAddress;
}

bool GetDeployInfoResponse::AuthorityAddressHasBeenSet() const
{
    return m_authorityAddressHasBeenSet;
}

string GetDeployInfoResponse::GetEvidenceAddress() const
{
    return m_evidenceAddress;
}

bool GetDeployInfoResponse::EvidenceAddressHasBeenSet() const
{
    return m_evidenceAddressHasBeenSet;
}

string GetDeployInfoResponse::GetSpecificAddress() const
{
    return m_specificAddress;
}

bool GetDeployInfoResponse::SpecificAddressHasBeenSet() const
{
    return m_specificAddressHasBeenSet;
}

string GetDeployInfoResponse::GetChainId() const
{
    return m_chainId;
}

bool GetDeployInfoResponse::ChainIdHasBeenSet() const
{
    return m_chainIdHasBeenSet;
}


