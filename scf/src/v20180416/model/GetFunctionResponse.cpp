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
    m_onsEnableHasBeenSet(false),
    m_cfsConfigHasBeenSet(false),
    m_availableStatusHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_initTimeoutHasBeenSet(false),
    m_statusReasonsHasBeenSet(false),
    m_asyncRunEnableHasBeenSet(false),
    m_traceEnableHasBeenSet(false),
    m_imageConfigHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_protocolParamsHasBeenSet(false),
    m_dnsCacheHasBeenSet(false),
    m_intranetConfigHasBeenSet(false)
{
}

CoreInternalOutcome GetFunctionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ModTime") && !rsp["ModTime"].IsNull())
    {
        if (!rsp["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(rsp["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CodeInfo") && !rsp["CodeInfo"].IsNull())
    {
        if (!rsp["CodeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeInfo = string(rsp["CodeInfo"].GetString());
        m_codeInfoHasBeenSet = true;
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

    if (rsp.HasMember("Triggers") && !rsp["Triggers"].IsNull())
    {
        if (!rsp["Triggers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Triggers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Triggers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `Handler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handler = string(rsp["Handler"].GetString());
        m_handlerHasBeenSet = true;
    }

    if (rsp.HasMember("CodeSize") && !rsp["CodeSize"].IsNull())
    {
        if (!rsp["CodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_codeSize = rsp["CodeSize"].GetInt64();
        m_codeSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (rsp.HasMember("FunctionVersion") && !rsp["FunctionVersion"].IsNull())
    {
        if (!rsp["FunctionVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionVersion = string(rsp["FunctionVersion"].GetString());
        m_functionVersionHasBeenSet = true;
    }

    if (rsp.HasMember("MemorySize") && !rsp["MemorySize"].IsNull())
    {
        if (!rsp["MemorySize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemorySize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySize = rsp["MemorySize"].GetInt64();
        m_memorySizeHasBeenSet = true;
    }

    if (rsp.HasMember("Runtime") && !rsp["Runtime"].IsNull())
    {
        if (!rsp["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(rsp["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (rsp.HasMember("FunctionName") && !rsp["FunctionName"].IsNull())
    {
        if (!rsp["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(rsp["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (rsp.HasMember("VpcConfig") && !rsp["VpcConfig"].IsNull())
    {
        if (!rsp["VpcConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpcConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `UseGpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_useGpu = string(rsp["UseGpu"].GetString());
        m_useGpuHasBeenSet = true;
    }

    if (rsp.HasMember("Environment") && !rsp["Environment"].IsNull())
    {
        if (!rsp["Environment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Environment` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CodeResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeResult = string(rsp["CodeResult"].GetString());
        m_codeResultHasBeenSet = true;
    }

    if (rsp.HasMember("CodeError") && !rsp["CodeError"].IsNull())
    {
        if (!rsp["CodeError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeError = string(rsp["CodeError"].GetString());
        m_codeErrorHasBeenSet = true;
    }

    if (rsp.HasMember("ErrNo") && !rsp["ErrNo"].IsNull())
    {
        if (!rsp["ErrNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errNo = rsp["ErrNo"].GetInt64();
        m_errNoHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (rsp.HasMember("Role") && !rsp["Role"].IsNull())
    {
        if (!rsp["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(rsp["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (rsp.HasMember("InstallDependency") && !rsp["InstallDependency"].IsNull())
    {
        if (!rsp["InstallDependency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstallDependency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installDependency = string(rsp["InstallDependency"].GetString());
        m_installDependencyHasBeenSet = true;
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

    if (rsp.HasMember("StatusDesc") && !rsp["StatusDesc"].IsNull())
    {
        if (!rsp["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("ClsLogsetId") && !rsp["ClsLogsetId"].IsNull())
    {
        if (!rsp["ClsLogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetId = string(rsp["ClsLogsetId"].GetString());
        m_clsLogsetIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClsTopicId") && !rsp["ClsTopicId"].IsNull())
    {
        if (!rsp["ClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsTopicId = string(rsp["ClsTopicId"].GetString());
        m_clsTopicIdHasBeenSet = true;
    }

    if (rsp.HasMember("FunctionId") && !rsp["FunctionId"].IsNull())
    {
        if (!rsp["FunctionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionId = string(rsp["FunctionId"].GetString());
        m_functionIdHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `EipConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AccessInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("L5Enable") && !rsp["L5Enable"].IsNull())
    {
        if (!rsp["L5Enable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L5Enable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_l5Enable = string(rsp["L5Enable"].GetString());
        m_l5EnableHasBeenSet = true;
    }

    if (rsp.HasMember("Layers") && !rsp["Layers"].IsNull())
    {
        if (!rsp["Layers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Layers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Layers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `DeadLetterConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(rsp["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PublicNetConfig") && !rsp["PublicNetConfig"].IsNull())
    {
        if (!rsp["PublicNetConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `OnsEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onsEnable = string(rsp["OnsEnable"].GetString());
        m_onsEnableHasBeenSet = true;
    }

    if (rsp.HasMember("CfsConfig") && !rsp["CfsConfig"].IsNull())
    {
        if (!rsp["CfsConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CfsConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cfsConfig.Deserialize(rsp["CfsConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cfsConfigHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableStatus") && !rsp["AvailableStatus"].IsNull())
    {
        if (!rsp["AvailableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableStatus = string(rsp["AvailableStatus"].GetString());
        m_availableStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Qualifier") && !rsp["Qualifier"].IsNull())
    {
        if (!rsp["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(rsp["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }

    if (rsp.HasMember("InitTimeout") && !rsp["InitTimeout"].IsNull())
    {
        if (!rsp["InitTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InitTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initTimeout = rsp["InitTimeout"].GetInt64();
        m_initTimeoutHasBeenSet = true;
    }

    if (rsp.HasMember("StatusReasons") && !rsp["StatusReasons"].IsNull())
    {
        if (!rsp["StatusReasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatusReasons` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StatusReasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatusReason item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statusReasons.push_back(item);
        }
        m_statusReasonsHasBeenSet = true;
    }

    if (rsp.HasMember("AsyncRunEnable") && !rsp["AsyncRunEnable"].IsNull())
    {
        if (!rsp["AsyncRunEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncRunEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRunEnable = string(rsp["AsyncRunEnable"].GetString());
        m_asyncRunEnableHasBeenSet = true;
    }

    if (rsp.HasMember("TraceEnable") && !rsp["TraceEnable"].IsNull())
    {
        if (!rsp["TraceEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceEnable = string(rsp["TraceEnable"].GetString());
        m_traceEnableHasBeenSet = true;
    }

    if (rsp.HasMember("ImageConfig") && !rsp["ImageConfig"].IsNull())
    {
        if (!rsp["ImageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageConfig.Deserialize(rsp["ImageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageConfigHasBeenSet = true;
    }

    if (rsp.HasMember("ProtocolType") && !rsp["ProtocolType"].IsNull())
    {
        if (!rsp["ProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = string(rsp["ProtocolType"].GetString());
        m_protocolTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ProtocolParams") && !rsp["ProtocolParams"].IsNull())
    {
        if (!rsp["ProtocolParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_protocolParams.Deserialize(rsp["ProtocolParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_protocolParamsHasBeenSet = true;
    }

    if (rsp.HasMember("DnsCache") && !rsp["DnsCache"].IsNull())
    {
        if (!rsp["DnsCache"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsCache` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsCache = string(rsp["DnsCache"].GetString());
        m_dnsCacheHasBeenSet = true;
    }

    if (rsp.HasMember("IntranetConfig") && !rsp["IntranetConfig"].IsNull())
    {
        if (!rsp["IntranetConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IntranetConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intranetConfig.Deserialize(rsp["IntranetConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intranetConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetFunctionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_codeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_triggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Triggers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggers.begin(); itr != m_triggers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_handlerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handler.c_str(), allocator).Move(), allocator);
    }

    if (m_codeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeSize, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_functionVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_memorySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memorySize, allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_useGpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseGpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_useGpu.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_environment.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeResult.c_str(), allocator).Move(), allocator);
    }

    if (m_codeErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeError.c_str(), allocator).Move(), allocator);
    }

    if (m_errNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errNo, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_installDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallDependency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installDependency.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eipConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eipConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_l5EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L5Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_l5Enable.c_str(), allocator).Move(), allocator);
    }

    if (m_layersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_layers.begin(); itr != m_layers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deadLetterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deadLetterConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicNetConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onsEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_cfsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cfsConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_availableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_initTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initTimeout, allocator);
    }

    if (m_statusReasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statusReasons.begin(); itr != m_statusReasons.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_asyncRunEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRunEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncRunEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_traceEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_imageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protocolParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dnsCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsCache.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intranetConfig.ToJsonObject(value[key.c_str()], allocator);
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

CfsConfig GetFunctionResponse::GetCfsConfig() const
{
    return m_cfsConfig;
}

bool GetFunctionResponse::CfsConfigHasBeenSet() const
{
    return m_cfsConfigHasBeenSet;
}

string GetFunctionResponse::GetAvailableStatus() const
{
    return m_availableStatus;
}

bool GetFunctionResponse::AvailableStatusHasBeenSet() const
{
    return m_availableStatusHasBeenSet;
}

string GetFunctionResponse::GetQualifier() const
{
    return m_qualifier;
}

bool GetFunctionResponse::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

int64_t GetFunctionResponse::GetInitTimeout() const
{
    return m_initTimeout;
}

bool GetFunctionResponse::InitTimeoutHasBeenSet() const
{
    return m_initTimeoutHasBeenSet;
}

vector<StatusReason> GetFunctionResponse::GetStatusReasons() const
{
    return m_statusReasons;
}

bool GetFunctionResponse::StatusReasonsHasBeenSet() const
{
    return m_statusReasonsHasBeenSet;
}

string GetFunctionResponse::GetAsyncRunEnable() const
{
    return m_asyncRunEnable;
}

bool GetFunctionResponse::AsyncRunEnableHasBeenSet() const
{
    return m_asyncRunEnableHasBeenSet;
}

string GetFunctionResponse::GetTraceEnable() const
{
    return m_traceEnable;
}

bool GetFunctionResponse::TraceEnableHasBeenSet() const
{
    return m_traceEnableHasBeenSet;
}

ImageConfig GetFunctionResponse::GetImageConfig() const
{
    return m_imageConfig;
}

bool GetFunctionResponse::ImageConfigHasBeenSet() const
{
    return m_imageConfigHasBeenSet;
}

string GetFunctionResponse::GetProtocolType() const
{
    return m_protocolType;
}

bool GetFunctionResponse::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

ProtocolParams GetFunctionResponse::GetProtocolParams() const
{
    return m_protocolParams;
}

bool GetFunctionResponse::ProtocolParamsHasBeenSet() const
{
    return m_protocolParamsHasBeenSet;
}

string GetFunctionResponse::GetDnsCache() const
{
    return m_dnsCache;
}

bool GetFunctionResponse::DnsCacheHasBeenSet() const
{
    return m_dnsCacheHasBeenSet;
}

IntranetConfigOut GetFunctionResponse::GetIntranetConfig() const
{
    return m_intranetConfig;
}

bool GetFunctionResponse::IntranetConfigHasBeenSet() const
{
    return m_intranetConfigHasBeenSet;
}


