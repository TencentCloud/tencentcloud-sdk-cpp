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

#include <tencentcloud/tdid/v20210519/model/GetDataPanelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

GetDataPanelResponse::GetDataPanelResponse() :
    m_blockNetworkCountHasBeenSet(false),
    m_blockNetworkNameHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_blockNetworkTypeHasBeenSet(false),
    m_didCountHasBeenSet(false),
    m_cptCountHasBeenSet(false),
    m_certificatedAuthCountHasBeenSet(false),
    m_issueCptCountHasBeenSet(false),
    m_newDidCountHasBeenSet(false),
    m_bcosCountHasBeenSet(false),
    m_fabricCountHasBeenSet(false),
    m_chainMakerCountHasBeenSet(false)
{
}

CoreInternalOutcome GetDataPanelResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BlockNetworkCount") && !rsp["BlockNetworkCount"].IsNull())
    {
        if (!rsp["BlockNetworkCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockNetworkCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockNetworkCount = rsp["BlockNetworkCount"].GetInt64();
        m_blockNetworkCountHasBeenSet = true;
    }

    if (rsp.HasMember("BlockNetworkName") && !rsp["BlockNetworkName"].IsNull())
    {
        if (!rsp["BlockNetworkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockNetworkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockNetworkName = string(rsp["BlockNetworkName"].GetString());
        m_blockNetworkNameHasBeenSet = true;
    }

    if (rsp.HasMember("BlockHeight") && !rsp["BlockHeight"].IsNull())
    {
        if (!rsp["BlockHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = rsp["BlockHeight"].GetInt64();
        m_blockHeightHasBeenSet = true;
    }

    if (rsp.HasMember("BlockNetworkType") && !rsp["BlockNetworkType"].IsNull())
    {
        if (!rsp["BlockNetworkType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockNetworkType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockNetworkType = rsp["BlockNetworkType"].GetInt64();
        m_blockNetworkTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DidCount") && !rsp["DidCount"].IsNull())
    {
        if (!rsp["DidCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DidCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_didCount = rsp["DidCount"].GetInt64();
        m_didCountHasBeenSet = true;
    }

    if (rsp.HasMember("CptCount") && !rsp["CptCount"].IsNull())
    {
        if (!rsp["CptCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CptCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cptCount = rsp["CptCount"].GetInt64();
        m_cptCountHasBeenSet = true;
    }

    if (rsp.HasMember("CertificatedAuthCount") && !rsp["CertificatedAuthCount"].IsNull())
    {
        if (!rsp["CertificatedAuthCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertificatedAuthCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certificatedAuthCount = rsp["CertificatedAuthCount"].GetInt64();
        m_certificatedAuthCountHasBeenSet = true;
    }

    if (rsp.HasMember("IssueCptCount") && !rsp["IssueCptCount"].IsNull())
    {
        if (!rsp["IssueCptCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IssueCptCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_issueCptCount = rsp["IssueCptCount"].GetInt64();
        m_issueCptCountHasBeenSet = true;
    }

    if (rsp.HasMember("NewDidCount") && !rsp["NewDidCount"].IsNull())
    {
        if (!rsp["NewDidCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewDidCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newDidCount = rsp["NewDidCount"].GetInt64();
        m_newDidCountHasBeenSet = true;
    }

    if (rsp.HasMember("BcosCount") && !rsp["BcosCount"].IsNull())
    {
        if (!rsp["BcosCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BcosCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bcosCount = rsp["BcosCount"].GetInt64();
        m_bcosCountHasBeenSet = true;
    }

    if (rsp.HasMember("FabricCount") && !rsp["FabricCount"].IsNull())
    {
        if (!rsp["FabricCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FabricCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fabricCount = rsp["FabricCount"].GetInt64();
        m_fabricCountHasBeenSet = true;
    }

    if (rsp.HasMember("ChainMakerCount") && !rsp["ChainMakerCount"].IsNull())
    {
        if (!rsp["ChainMakerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chainMakerCount = rsp["ChainMakerCount"].GetInt64();
        m_chainMakerCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDataPanelResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_blockNetworkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNetworkCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockNetworkCount, allocator);
    }

    if (m_blockNetworkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNetworkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockNetworkName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockHeight, allocator);
    }

    if (m_blockNetworkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockNetworkType, allocator);
    }

    if (m_didCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_didCount, allocator);
    }

    if (m_cptCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cptCount, allocator);
    }

    if (m_certificatedAuthCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificatedAuthCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certificatedAuthCount, allocator);
    }

    if (m_issueCptCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueCptCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_issueCptCount, allocator);
    }

    if (m_newDidCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDidCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newDidCount, allocator);
    }

    if (m_bcosCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BcosCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bcosCount, allocator);
    }

    if (m_fabricCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FabricCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fabricCount, allocator);
    }

    if (m_chainMakerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainMakerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chainMakerCount, allocator);
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


int64_t GetDataPanelResponse::GetBlockNetworkCount() const
{
    return m_blockNetworkCount;
}

bool GetDataPanelResponse::BlockNetworkCountHasBeenSet() const
{
    return m_blockNetworkCountHasBeenSet;
}

string GetDataPanelResponse::GetBlockNetworkName() const
{
    return m_blockNetworkName;
}

bool GetDataPanelResponse::BlockNetworkNameHasBeenSet() const
{
    return m_blockNetworkNameHasBeenSet;
}

int64_t GetDataPanelResponse::GetBlockHeight() const
{
    return m_blockHeight;
}

bool GetDataPanelResponse::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

int64_t GetDataPanelResponse::GetBlockNetworkType() const
{
    return m_blockNetworkType;
}

bool GetDataPanelResponse::BlockNetworkTypeHasBeenSet() const
{
    return m_blockNetworkTypeHasBeenSet;
}

int64_t GetDataPanelResponse::GetDidCount() const
{
    return m_didCount;
}

bool GetDataPanelResponse::DidCountHasBeenSet() const
{
    return m_didCountHasBeenSet;
}

int64_t GetDataPanelResponse::GetCptCount() const
{
    return m_cptCount;
}

bool GetDataPanelResponse::CptCountHasBeenSet() const
{
    return m_cptCountHasBeenSet;
}

int64_t GetDataPanelResponse::GetCertificatedAuthCount() const
{
    return m_certificatedAuthCount;
}

bool GetDataPanelResponse::CertificatedAuthCountHasBeenSet() const
{
    return m_certificatedAuthCountHasBeenSet;
}

int64_t GetDataPanelResponse::GetIssueCptCount() const
{
    return m_issueCptCount;
}

bool GetDataPanelResponse::IssueCptCountHasBeenSet() const
{
    return m_issueCptCountHasBeenSet;
}

int64_t GetDataPanelResponse::GetNewDidCount() const
{
    return m_newDidCount;
}

bool GetDataPanelResponse::NewDidCountHasBeenSet() const
{
    return m_newDidCountHasBeenSet;
}

int64_t GetDataPanelResponse::GetBcosCount() const
{
    return m_bcosCount;
}

bool GetDataPanelResponse::BcosCountHasBeenSet() const
{
    return m_bcosCountHasBeenSet;
}

int64_t GetDataPanelResponse::GetFabricCount() const
{
    return m_fabricCount;
}

bool GetDataPanelResponse::FabricCountHasBeenSet() const
{
    return m_fabricCountHasBeenSet;
}

int64_t GetDataPanelResponse::GetChainMakerCount() const
{
    return m_chainMakerCount;
}

bool GetDataPanelResponse::ChainMakerCountHasBeenSet() const
{
    return m_chainMakerCountHasBeenSet;
}


