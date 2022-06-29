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

#include <tencentcloud/cam/v20190116/model/DescribeOIDCConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

DescribeOIDCConfigResponse::DescribeOIDCConfigResponse() :
    m_providerTypeHasBeenSet(false),
    m_identityUrlHasBeenSet(false),
    m_identityKeyHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOIDCConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProviderType") && !rsp["ProviderType"].IsNull())
    {
        if (!rsp["ProviderType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_providerType = rsp["ProviderType"].GetUint64();
        m_providerTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IdentityUrl") && !rsp["IdentityUrl"].IsNull())
    {
        if (!rsp["IdentityUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityUrl = string(rsp["IdentityUrl"].GetString());
        m_identityUrlHasBeenSet = true;
    }

    if (rsp.HasMember("IdentityKey") && !rsp["IdentityKey"].IsNull())
    {
        if (!rsp["IdentityKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityKey = string(rsp["IdentityKey"].GetString());
        m_identityKeyHasBeenSet = true;
    }

    if (rsp.HasMember("ClientId") && !rsp["ClientId"].IsNull())
    {
        if (!rsp["ClientId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClientId` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClientId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clientId.push_back((*itr).GetString());
        }
        m_clientIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
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

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOIDCConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerType, allocator);
    }

    if (m_identityUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_identityKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityKey.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientId.begin(); itr != m_clientId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeOIDCConfigResponse::GetProviderType() const
{
    return m_providerType;
}

bool DescribeOIDCConfigResponse::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

string DescribeOIDCConfigResponse::GetIdentityUrl() const
{
    return m_identityUrl;
}

bool DescribeOIDCConfigResponse::IdentityUrlHasBeenSet() const
{
    return m_identityUrlHasBeenSet;
}

string DescribeOIDCConfigResponse::GetIdentityKey() const
{
    return m_identityKey;
}

bool DescribeOIDCConfigResponse::IdentityKeyHasBeenSet() const
{
    return m_identityKeyHasBeenSet;
}

vector<string> DescribeOIDCConfigResponse::GetClientId() const
{
    return m_clientId;
}

bool DescribeOIDCConfigResponse::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

uint64_t DescribeOIDCConfigResponse::GetStatus() const
{
    return m_status;
}

bool DescribeOIDCConfigResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeOIDCConfigResponse::GetDescription() const
{
    return m_description;
}

bool DescribeOIDCConfigResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeOIDCConfigResponse::GetName() const
{
    return m_name;
}

bool DescribeOIDCConfigResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


