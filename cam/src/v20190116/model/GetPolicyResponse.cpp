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

#include <tencentcloud/cam/v20190116/model/GetPolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

GetPolicyResponse::GetPolicyResponse() :
    m_policyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_presetAliasHasBeenSet(false),
    m_isServiceLinkedRolePolicyHasBeenSet(false)
{
}

CoreInternalOutcome GetPolicyResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("PolicyName") && !rsp["PolicyName"].IsNull())
    {
        if (!rsp["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(rsp["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("AddTime") && !rsp["AddTime"].IsNull())
    {
        if (!rsp["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(rsp["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyDocument") && !rsp["PolicyDocument"].IsNull())
    {
        if (!rsp["PolicyDocument"].IsString())
        {
            return CoreInternalOutcome(Error("response `PolicyDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDocument = string(rsp["PolicyDocument"].GetString());
        m_policyDocumentHasBeenSet = true;
    }

    if (rsp.HasMember("PresetAlias") && !rsp["PresetAlias"].IsNull())
    {
        if (!rsp["PresetAlias"].IsString())
        {
            return CoreInternalOutcome(Error("response `PresetAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presetAlias = string(rsp["PresetAlias"].GetString());
        m_presetAliasHasBeenSet = true;
    }

    if (rsp.HasMember("IsServiceLinkedRolePolicy") && !rsp["IsServiceLinkedRolePolicy"].IsNull())
    {
        if (!rsp["IsServiceLinkedRolePolicy"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `IsServiceLinkedRolePolicy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isServiceLinkedRolePolicy = rsp["IsServiceLinkedRolePolicy"].GetUint64();
        m_isServiceLinkedRolePolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetPolicyResponse::GetPolicyName() const
{
    return m_policyName;
}

bool GetPolicyResponse::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string GetPolicyResponse::GetDescription() const
{
    return m_description;
}

bool GetPolicyResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t GetPolicyResponse::GetType() const
{
    return m_type;
}

bool GetPolicyResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GetPolicyResponse::GetAddTime() const
{
    return m_addTime;
}

bool GetPolicyResponse::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string GetPolicyResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool GetPolicyResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string GetPolicyResponse::GetPolicyDocument() const
{
    return m_policyDocument;
}

bool GetPolicyResponse::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

string GetPolicyResponse::GetPresetAlias() const
{
    return m_presetAlias;
}

bool GetPolicyResponse::PresetAliasHasBeenSet() const
{
    return m_presetAliasHasBeenSet;
}

uint64_t GetPolicyResponse::GetIsServiceLinkedRolePolicy() const
{
    return m_isServiceLinkedRolePolicy;
}

bool GetPolicyResponse::IsServiceLinkedRolePolicyHasBeenSet() const
{
    return m_isServiceLinkedRolePolicyHasBeenSet;
}


