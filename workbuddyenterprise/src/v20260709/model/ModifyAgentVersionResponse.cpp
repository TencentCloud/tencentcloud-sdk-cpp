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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ModifyAgentVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ModifyAgentVersionResponse::ModifyAgentVersionResponse() :
    m_versionIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_versionTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_sandboxTemplateIdHasBeenSet(false)
{
}

CoreInternalOutcome ModifyAgentVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VersionId") && !rsp["VersionId"].IsNull())
    {
        if (!rsp["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(rsp["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (rsp.HasMember("AgentId") && !rsp["AgentId"].IsNull())
    {
        if (!rsp["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(rsp["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (rsp.HasMember("VersionName") && !rsp["VersionName"].IsNull())
    {
        if (!rsp["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(rsp["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (rsp.HasMember("VersionType") && !rsp["VersionType"].IsNull())
    {
        if (!rsp["VersionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionType = string(rsp["VersionType"].GetString());
        m_versionTypeHasBeenSet = true;
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

    if (rsp.HasMember("Model") && !rsp["Model"].IsNull())
    {
        if (!rsp["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(rsp["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (rsp.HasMember("Manifest") && !rsp["Manifest"].IsNull())
    {
        if (!rsp["Manifest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Manifest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifest = string(rsp["Manifest"].GetString());
        m_manifestHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifiedTime") && !rsp["ModifiedTime"].IsNull())
    {
        if (!rsp["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(rsp["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SandboxTemplateId") && !rsp["SandboxTemplateId"].IsNull())
    {
        if (!rsp["SandboxTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sandboxTemplateId = string(rsp["SandboxTemplateId"].GetString());
        m_sandboxTemplateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyAgentVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manifest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifest.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sandboxTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SandboxTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sandboxTemplateId.c_str(), allocator).Move(), allocator);
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


string ModifyAgentVersionResponse::GetVersionId() const
{
    return m_versionId;
}

bool ModifyAgentVersionResponse::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string ModifyAgentVersionResponse::GetAgentId() const
{
    return m_agentId;
}

bool ModifyAgentVersionResponse::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string ModifyAgentVersionResponse::GetVersionName() const
{
    return m_versionName;
}

bool ModifyAgentVersionResponse::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string ModifyAgentVersionResponse::GetVersionType() const
{
    return m_versionType;
}

bool ModifyAgentVersionResponse::VersionTypeHasBeenSet() const
{
    return m_versionTypeHasBeenSet;
}

string ModifyAgentVersionResponse::GetDescription() const
{
    return m_description;
}

bool ModifyAgentVersionResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyAgentVersionResponse::GetModel() const
{
    return m_model;
}

bool ModifyAgentVersionResponse::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string ModifyAgentVersionResponse::GetManifest() const
{
    return m_manifest;
}

bool ModifyAgentVersionResponse::ManifestHasBeenSet() const
{
    return m_manifestHasBeenSet;
}

string ModifyAgentVersionResponse::GetStatus() const
{
    return m_status;
}

bool ModifyAgentVersionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyAgentVersionResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool ModifyAgentVersionResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ModifyAgentVersionResponse::GetModifiedTime() const
{
    return m_modifiedTime;
}

bool ModifyAgentVersionResponse::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ModifyAgentVersionResponse::GetSandboxTemplateId() const
{
    return m_sandboxTemplateId;
}

bool ModifyAgentVersionResponse::SandboxTemplateIdHasBeenSet() const
{
    return m_sandboxTemplateIdHasBeenSet;
}


