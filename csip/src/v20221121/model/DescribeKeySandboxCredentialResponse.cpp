/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeKeySandboxCredentialResponse::DescribeKeySandboxCredentialResponse() :
    m_credentialIdHasBeenSet(false),
    m_credentialNameHasBeenSet(false),
    m_credentialTypeHasBeenSet(false),
    m_credentialEffectScopeHasBeenSet(false),
    m_accessHasBeenSet(false),
    m_sTSHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKeySandboxCredentialResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CredentialId") && !rsp["CredentialId"].IsNull())
    {
        if (!rsp["CredentialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialId = string(rsp["CredentialId"].GetString());
        m_credentialIdHasBeenSet = true;
    }

    if (rsp.HasMember("CredentialName") && !rsp["CredentialName"].IsNull())
    {
        if (!rsp["CredentialName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialName = string(rsp["CredentialName"].GetString());
        m_credentialNameHasBeenSet = true;
    }

    if (rsp.HasMember("CredentialType") && !rsp["CredentialType"].IsNull())
    {
        if (!rsp["CredentialType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_credentialType = string(rsp["CredentialType"].GetString());
        m_credentialTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CredentialEffectScope") && !rsp["CredentialEffectScope"].IsNull())
    {
        if (!rsp["CredentialEffectScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CredentialEffectScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_credentialEffectScope.Deserialize(rsp["CredentialEffectScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_credentialEffectScopeHasBeenSet = true;
    }

    if (rsp.HasMember("Access") && !rsp["Access"].IsNull())
    {
        if (!rsp["Access"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Access` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Access"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessCredentialOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_access.push_back(item);
        }
        m_accessHasBeenSet = true;
    }

    if (rsp.HasMember("STS") && !rsp["STS"].IsNull())
    {
        if (!rsp["STS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `STS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sTS.Deserialize(rsp["STS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sTSHasBeenSet = true;
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

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKeySandboxCredentialResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialName.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_credentialType.c_str(), allocator).Move(), allocator);
    }

    if (m_credentialEffectScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialEffectScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_credentialEffectScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_access.begin(); itr != m_access.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sTSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sTS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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


string DescribeKeySandboxCredentialResponse::GetCredentialId() const
{
    return m_credentialId;
}

bool DescribeKeySandboxCredentialResponse::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

string DescribeKeySandboxCredentialResponse::GetCredentialName() const
{
    return m_credentialName;
}

bool DescribeKeySandboxCredentialResponse::CredentialNameHasBeenSet() const
{
    return m_credentialNameHasBeenSet;
}

string DescribeKeySandboxCredentialResponse::GetCredentialType() const
{
    return m_credentialType;
}

bool DescribeKeySandboxCredentialResponse::CredentialTypeHasBeenSet() const
{
    return m_credentialTypeHasBeenSet;
}

CredentialEffectScope DescribeKeySandboxCredentialResponse::GetCredentialEffectScope() const
{
    return m_credentialEffectScope;
}

bool DescribeKeySandboxCredentialResponse::CredentialEffectScopeHasBeenSet() const
{
    return m_credentialEffectScopeHasBeenSet;
}

vector<AccessCredentialOutput> DescribeKeySandboxCredentialResponse::GetAccess() const
{
    return m_access;
}

bool DescribeKeySandboxCredentialResponse::AccessHasBeenSet() const
{
    return m_accessHasBeenSet;
}

STSCredentialOutput DescribeKeySandboxCredentialResponse::GetSTS() const
{
    return m_sTS;
}

bool DescribeKeySandboxCredentialResponse::STSHasBeenSet() const
{
    return m_sTSHasBeenSet;
}

string DescribeKeySandboxCredentialResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeKeySandboxCredentialResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeKeySandboxCredentialResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeKeySandboxCredentialResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


