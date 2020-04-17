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

#include <tencentcloud/scf/v20180416/model/GetFunctionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetFunctionResponse::GetFunctionResponse() :
    m_modTimeHasBeenSet(false),
    m_codeInfoHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_handlerHasBeenSet(false),
    m_codeSizeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_functionVersionHasBeenSet(false),
    m_memorySizeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_useGpuHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_codeResultHasBeenSet(false),
    m_codeErrorHasBeenSet(false),
    m_errNoHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_installDependencyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_eipConfigHasBeenSet(false),
    m_accessInfoHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_l5EnableHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_publicNetConfigHasBeenSet(false),
    m_onsEnableHasBeenSet(false)
{
}

CoreInternalOutcome GetFunctionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ModTime") && !rsp["ModTime"].IsNull())
    {
        if (!rsp["ModTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(rsp["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CodeInfo") && !rsp["CodeInfo"].IsNull())
    {
        if (!rsp["CodeInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `CodeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeInfo = string(rsp["CodeInfo"].GetString());
        m_codeInfoHasBeenSet = true;
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

    if (rsp.HasMember("Triggers") && !rsp["Triggers"].IsNull())
    {
        if (!rsp["Triggers"].IsArray())
            return CoreInternalOutcome(Error("response `Triggers` is not array type"));

        const Value &tmpValue = rsp["Triggers"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Trigger item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggers.push_back(item);
        }
        m_triggersHasBeenSet = true;
    }

    if (rsp.HasMember("Handler") && !rsp["Handler"].IsNull())
    {
        if (!rsp["Handler"].IsString())
        {
            return CoreInternalOutcome(Error("response `Handler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handler = string(rsp["Handler"].GetString());
        m_handlerHasBeenSet = true;
    }

    if (rsp.HasMember("CodeSize") && !rsp["CodeSize"].IsNull())
    {
        if (!rsp["CodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_codeSize = rsp["CodeSize"].GetInt64();
        m_codeSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (rsp.HasMember("FunctionVersion") && !rsp["FunctionVersion"].IsNull())
    {
        if (!rsp["FunctionVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `FunctionVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionVersion = string(rsp["FunctionVersion"].GetString());
        m_functionVersionHasBeenSet = true;
    }

    if (rsp.HasMember("MemorySize") && !rsp["MemorySize"].IsNull())
    {
        if (!rsp["MemorySize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MemorySize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySize = rsp["MemorySize"].GetInt64();
        m_memorySizeHasBeenSet = true;
    }

    if (rsp.HasMember("Runtime") && !rsp["Runtime"].IsNull())
    {
        if (!rsp["Runtime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(rsp["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (rsp.HasMember("FunctionName") && !rsp["FunctionName"].IsNull())
    {
        if (!rsp["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(rsp["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (rsp.HasMember("VpcConfig") && !rsp["VpcConfig"].IsNull())
    {
        if (!rsp["VpcConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VpcConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcConfig.Deserialize(rsp["VpcConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcConfigHasBeenSet = true;
    }

    if (rsp.HasMember("UseGpu") && !rsp["UseGpu"].IsNull())
    {
        if (!rsp["UseGpu"].IsString())
        {
            return CoreInternalOutcome(Error("response `UseGpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_useGpu = string(rsp["UseGpu"].GetString());
        m_useGpuHasBeenSet = true;
    }

    if (rsp.HasMember("Environment") && !rsp["Environment"].IsNull())
    {
        if (!rsp["Environment"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Environment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_environment.Deserialize(rsp["Environment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_environmentHasBeenSet = true;
    }

    if (rsp.HasMember("CodeResult") && !rsp["CodeResult"].IsNull())
    {
        if (!rsp["CodeResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `CodeResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeResult = string(rsp["CodeResult"].GetString());
        m_codeResultHasBeenSet = true;
    }

    if (rsp.HasMember("CodeError") && !rsp["CodeError"].IsNull())
    {
        if (!rsp["CodeError"].IsString())
        {
            return CoreInternalOutcome(Error("response `CodeError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeError = string(rsp["CodeError"].GetString());
        m_codeErrorHasBeenSet = true;
    }

    if (rsp.HasMember("ErrNo") && !rsp["ErrNo"].IsNull())
    {
        if (!rsp["ErrNo"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ErrNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errNo = rsp["ErrNo"].GetInt64();
        m_errNoHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (rsp.HasMember("Role") && !rsp["Role"].IsNull())
    {
        if (!rsp["Role"].IsString())
        {
            return CoreInternalOutcome(Error("response `Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(rsp["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (rsp.HasMember("InstallDependency") && !rsp["InstallDependency"].IsNull())
    {
        if (!rsp["InstallDependency"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstallDependency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installDependency = string(rsp["InstallDependency"].GetString());
        m_installDependencyHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StatusDesc") && !rsp["StatusDesc"].IsNull())
    {
        if (!rsp["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("ClsLogsetId") && !rsp["ClsLogsetId"].IsNull())
    {
        if (!rsp["ClsLogsetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClsLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetId = string(rsp["ClsLogsetId"].GetString());
        m_clsLogsetIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClsTopicId") && !rsp["ClsTopicId"].IsNull())
    {
        if (!rsp["ClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsTopicId = string(rsp["ClsTopicId"].GetString());
        m_clsTopicIdHasBeenSet = true;
    }

    if (rsp.HasMember("FunctionId") && !rsp["FunctionId"].IsNull())
    {
        if (!rsp["FunctionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `FunctionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionId = string(rsp["FunctionId"].GetString());
        m_functionIdHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `Tags` is not array type"));

        const Value &tmpValue = rsp["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("EipConfig") && !rsp["EipConfig"].IsNull())
    {
        if (!rsp["EipConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EipConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eipConfig.Deserialize(rsp["EipConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eipConfigHasBeenSet = true;
    }

    if (rsp.HasMember("AccessInfo") && !rsp["AccessInfo"].IsNull())
    {
        if (!rsp["AccessInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AccessInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessInfo.Deserialize(rsp["AccessInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("L5Enable") && !rsp["L5Enable"].IsNull())
    {
        if (!rsp["L5Enable"].IsString())
        {
            return CoreInternalOutcome(Error("response `L5Enable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l5Enable = string(rsp["L5Enable"].GetString());
        m_l5EnableHasBeenSet = true;
    }

    if (rsp.HasMember("Layers") && !rsp["Layers"].IsNull())
    {
        if (!rsp["Layers"].IsArray())
            return CoreInternalOutcome(Error("response `Layers` is not array type"));

        const Value &tmpValue = rsp["Layers"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LayerVersionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_layers.push_back(item);
        }
        m_layersHasBeenSet = true;
    }

    if (rsp.HasMember("DeadLetterConfig") && !rsp["DeadLetterConfig"].IsNull())
    {
        if (!rsp["DeadLetterConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DeadLetterConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deadLetterConfig.Deserialize(rsp["DeadLetterConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deadLetterConfigHasBeenSet = true;
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

    if (rsp.HasMember("PublicNetConfig") && !rsp["PublicNetConfig"].IsNull())
    {
        if (!rsp["PublicNetConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PublicNetConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_publicNetConfig.Deserialize(rsp["PublicNetConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_publicNetConfigHasBeenSet = true;
    }

    if (rsp.HasMember("OnsEnable") && !rsp["OnsEnable"].IsNull())
    {
        if (!rsp["OnsEnable"].IsString())
        {
            return CoreInternalOutcome(Error("response `OnsEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onsEnable = string(rsp["OnsEnable"].GetString());
        m_onsEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetFunctionResponse::GetModTime() const
{
    return m_modTime;
}

bool GetFunctionResponse::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string GetFunctionResponse::GetCodeInfo() const
{
    return m_codeInfo;
}

bool GetFunctionResponse::CodeInfoHasBeenSet() const
{
    return m_codeInfoHasBeenSet;
}

string GetFunctionResponse::GetDescription() const
{
    return m_description;
}

bool GetFunctionResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Trigger> GetFunctionResponse::GetTriggers() const
{
    return m_triggers;
}

bool GetFunctionResponse::TriggersHasBeenSet() const
{
    return m_triggersHasBeenSet;
}

string GetFunctionResponse::GetHandler() const
{
    return m_handler;
}

bool GetFunctionResponse::HandlerHasBeenSet() const
{
    return m_handlerHasBeenSet;
}

int64_t GetFunctionResponse::GetCodeSize() const
{
    return m_codeSize;
}

bool GetFunctionResponse::CodeSizeHasBeenSet() const
{
    return m_codeSizeHasBeenSet;
}

int64_t GetFunctionResponse::GetTimeout() const
{
    return m_timeout;
}

bool GetFunctionResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string GetFunctionResponse::GetFunctionVersion() const
{
    return m_functionVersion;
}

bool GetFunctionResponse::FunctionVersionHasBeenSet() const
{
    return m_functionVersionHasBeenSet;
}

int64_t GetFunctionResponse::GetMemorySize() const
{
    return m_memorySize;
}

bool GetFunctionResponse::MemorySizeHasBeenSet() const
{
    return m_memorySizeHasBeenSet;
}

string GetFunctionResponse::GetRuntime() const
{
    return m_runtime;
}

bool GetFunctionResponse::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string GetFunctionResponse::GetFunctionName() const
{
    return m_functionName;
}

bool GetFunctionResponse::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

VpcConfig GetFunctionResponse::GetVpcConfig() const
{
    return m_vpcConfig;
}

bool GetFunctionResponse::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string GetFunctionResponse::GetUseGpu() const
{
    return m_useGpu;
}

bool GetFunctionResponse::UseGpuHasBeenSet() const
{
    return m_useGpuHasBeenSet;
}

Environment GetFunctionResponse::GetEnvironment() const
{
    return m_environment;
}

bool GetFunctionResponse::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string GetFunctionResponse::GetCodeResult() const
{
    return m_codeResult;
}

bool GetFunctionResponse::CodeResultHasBeenSet() const
{
    return m_codeResultHasBeenSet;
}

string GetFunctionResponse::GetCodeError() const
{
    return m_codeError;
}

bool GetFunctionResponse::CodeErrorHasBeenSet() const
{
    return m_codeErrorHasBeenSet;
}

int64_t GetFunctionResponse::GetErrNo() const
{
    return m_errNo;
}

bool GetFunctionResponse::ErrNoHasBeenSet() const
{
    return m_errNoHasBeenSet;
}

string GetFunctionResponse::GetNamespace() const
{
    return m_namespace;
}

bool GetFunctionResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GetFunctionResponse::GetRole() const
{
    return m_role;
}

bool GetFunctionResponse::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string GetFunctionResponse::GetInstallDependency() const
{
    return m_installDependency;
}

bool GetFunctionResponse::InstallDependencyHasBeenSet() const
{
    return m_installDependencyHasBeenSet;
}

string GetFunctionResponse::GetStatus() const
{
    return m_status;
}

bool GetFunctionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetFunctionResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool GetFunctionResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string GetFunctionResponse::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

bool GetFunctionResponse::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string GetFunctionResponse::GetClsTopicId() const
{
    return m_clsTopicId;
}

bool GetFunctionResponse::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string GetFunctionResponse::GetFunctionId() const
{
    return m_functionId;
}

bool GetFunctionResponse::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

vector<Tag> GetFunctionResponse::GetTags() const
{
    return m_tags;
}

bool GetFunctionResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

EipOutConfig GetFunctionResponse::GetEipConfig() const
{
    return m_eipConfig;
}

bool GetFunctionResponse::EipConfigHasBeenSet() const
{
    return m_eipConfigHasBeenSet;
}

AccessInfo GetFunctionResponse::GetAccessInfo() const
{
    return m_accessInfo;
}

bool GetFunctionResponse::AccessInfoHasBeenSet() const
{
    return m_accessInfoHasBeenSet;
}

string GetFunctionResponse::GetType() const
{
    return m_type;
}

bool GetFunctionResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GetFunctionResponse::GetL5Enable() const
{
    return m_l5Enable;
}

bool GetFunctionResponse::L5EnableHasBeenSet() const
{
    return m_l5EnableHasBeenSet;
}

vector<LayerVersionInfo> GetFunctionResponse::GetLayers() const
{
    return m_layers;
}

bool GetFunctionResponse::LayersHasBeenSet() const
{
    return m_layersHasBeenSet;
}

DeadLetterConfig GetFunctionResponse::GetDeadLetterConfig() const
{
    return m_deadLetterConfig;
}

bool GetFunctionResponse::DeadLetterConfigHasBeenSet() const
{
    return m_deadLetterConfigHasBeenSet;
}

string GetFunctionResponse::GetAddTime() const
{
    return m_addTime;
}

bool GetFunctionResponse::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

PublicNetConfigOut GetFunctionResponse::GetPublicNetConfig() const
{
    return m_publicNetConfig;
}

bool GetFunctionResponse::PublicNetConfigHasBeenSet() const
{
    return m_publicNetConfigHasBeenSet;
}

string GetFunctionResponse::GetOnsEnable() const
{
    return m_onsEnable;
}

bool GetFunctionResponse::OnsEnableHasBeenSet() const
{
    return m_onsEnableHasBeenSet;
}


