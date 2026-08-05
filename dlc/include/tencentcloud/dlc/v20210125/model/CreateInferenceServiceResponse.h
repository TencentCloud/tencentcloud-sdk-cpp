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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCESERVICERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCESERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CpuSummaryItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateInferenceService返回参数结构体
                */
                class CreateInferenceServiceResponse : public AbstractModel
                {
                public:
                    CreateInferenceServiceResponse();
                    ~CreateInferenceServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId <p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetModelId() const;

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型UID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelUid <p>关联的模型UID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 判断参数 ModelUid 是否已赋值
                     * @return ModelUid 是否已赋值
                     * 
                     */
                    bool ModelUidHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName <p>关联的模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelVersion <p>关联的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelIdentifier <p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelIdentifier() const;

                    /**
                     * 判断参数 ModelIdentifier 是否已赋值
                     * @return ModelIdentifier 是否已赋值
                     * 
                     */
                    bool ModelIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>关联模型的类型（LLM / VLM / Embedding / Reranker / TTS / ASR / CV / NLP / ML）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType <p>关联模型的类型（LLM / VLM / Embedding / Reranker / TTS / ASR / CV / NLP / ML）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>服务状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>服务状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>服务端点URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndpointUrl <p>服务端点URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpointUrl() const;

                    /**
                     * 判断参数 EndpointUrl 是否已赋值
                     * @return EndpointUrl 是否已赋值
                     * 
                     */
                    bool EndpointUrlHasBeenSet() const;

                    /**
                     * 获取<p>OpenAI 兼容统一入口 URL（通过 API-Key 路由，适用于 LLM/Embedding/Reranker）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnifiedEndpointUrl <p>OpenAI 兼容统一入口 URL（通过 API-Key 路由，适用于 LLM/Embedding/Reranker）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnifiedEndpointUrl() const;

                    /**
                     * 判断参数 UnifiedEndpointUrl 是否已赋值
                     * @return UnifiedEndpointUrl 是否已赋值
                     * 
                     */
                    bool UnifiedEndpointUrlHasBeenSet() const;

                    /**
                     * 获取<p>KServe V2 协议统一入口 URL（通过 API-Key + model name 路由，适用于 XGBoost 等传统 ML 模型）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnifiedV2EndpointUrl <p>KServe V2 协议统一入口 URL（通过 API-Key + model name 路由，适用于 XGBoost 等传统 ML 模型）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnifiedV2EndpointUrl() const;

                    /**
                     * 判断参数 UnifiedV2EndpointUrl 是否已赋值
                     * @return UnifiedV2EndpointUrl 是否已赋值
                     * 
                     */
                    bool UnifiedV2EndpointUrlHasBeenSet() const;

                    /**
                     * 获取<p>ray head 是否开启高可用</p>
                     * @return HeadHighAvailabilityEnabled <p>ray head 是否开启高可用</p>
                     * 
                     */
                    bool GetHeadHighAvailabilityEnabled() const;

                    /**
                     * 判断参数 HeadHighAvailabilityEnabled 是否已赋值
                     * @return HeadHighAvailabilityEnabled 是否已赋值
                     * 
                     */
                    bool HeadHighAvailabilityEnabledHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>主账号UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin <p>主账号UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（Unix 时间戳，毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（Unix 时间戳，毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（Unix 时间戳，毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间（Unix 时间戳，毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>部署数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeploymentCount <p>部署数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeploymentCount() const;

                    /**
                     * 判断参数 DeploymentCount 是否已赋值
                     * @return DeploymentCount 是否已赋值
                     * 
                     */
                    bool DeploymentCountHasBeenSet() const;

                    /**
                     * 获取<p>是否存在至少一个运行中的部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasRunningDeployment <p>是否存在至少一个运行中的部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasRunningDeployment() const;

                    /**
                     * 判断参数 HasRunningDeployment 是否已赋值
                     * @return HasRunningDeployment 是否已赋值
                     * 
                     */
                    bool HasRunningDeploymentHasBeenSet() const;

                    /**
                     * 获取<p>是否启用 API-Key 鉴权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiKeyAuthEnabled <p>是否启用 API-Key 鉴权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetApiKeyAuthEnabled() const;

                    /**
                     * 判断参数 ApiKeyAuthEnabled 是否已赋值
                     * @return ApiKeyAuthEnabled 是否已赋值
                     * 
                     */
                    bool ApiKeyAuthEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否强制开启 API-Key 鉴权（生产环境为 true，不允许关闭）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiKeyAuthForceEnabled <p>是否强制开启 API-Key 鉴权（生产环境为 true，不允许关闭）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetApiKeyAuthForceEnabled() const;

                    /**
                     * 判断参数 ApiKeyAuthForceEnabled 是否已赋值
                     * @return ApiKeyAuthForceEnabled 是否已赋值
                     * 
                     */
                    bool ApiKeyAuthForceEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否跳过 TLS 证书验证（自签证书场景，前端 curl 命令需加 -k 参数）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkipTlsVerify <p>是否跳过 TLS 证书验证（自签证书场景，前端 curl 命令需加 -k 参数）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSkipTlsVerify() const;

                    /**
                     * 判断参数 SkipTlsVerify 是否已赋值
                     * @return SkipTlsVerify 是否已赋值
                     * 
                     */
                    bool SkipTlsVerifyHasBeenSet() const;

                    /**
                     * 获取<p>API Key 绑定结果（success 表示成功，其他为错误信息）</p>
                     * @return ApiKeyBindMessage <p>API Key 绑定结果（success 表示成功，其他为错误信息）</p>
                     * 
                     */
                    std::string GetApiKeyBindMessage() const;

                    /**
                     * 判断参数 ApiKeyBindMessage 是否已赋值
                     * @return ApiKeyBindMessage 是否已赋值
                     * 
                     */
                    bool ApiKeyBindMessageHasBeenSet() const;

                    /**
                     * 获取<p>子账号UIN（实际操作者）</p>
                     * @return SubAccountUin <p>子账号UIN（实际操作者）</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>运行中部署的 CPU 资源汇总</p>
                     * @return CpuResourceSummary <p>运行中部署的 CPU 资源汇总</p>
                     * 
                     */
                    CpuSummaryItem GetCpuResourceSummary() const;

                    /**
                     * 判断参数 CpuResourceSummary 是否已赋值
                     * @return CpuResourceSummary 是否已赋值
                     * 
                     */
                    bool CpuResourceSummaryHasBeenSet() const;

                    /**
                     * 获取<p>资源配置（JSON 字符串，取自第一个部署）</p>
                     * @return ResourceConfig <p>资源配置（JSON 字符串，取自第一个部署）</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                private:

                    /**
                     * <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>关联的模型ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>关联的模型UID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                    /**
                     * <p>关联的模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>关联的模型版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>模型标识符（OpenAI 兼容 API 中的 model 字段）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelIdentifier;
                    bool m_modelIdentifierHasBeenSet;

                    /**
                     * <p>关联模型的类型（LLM / VLM / Embedding / Reranker / TTS / ASR / CV / NLP / ML）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>服务状态（Running/Stopped/Deploying/Failed）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>服务端点URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpointUrl;
                    bool m_endpointUrlHasBeenSet;

                    /**
                     * <p>OpenAI 兼容统一入口 URL（通过 API-Key 路由，适用于 LLM/Embedding/Reranker）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unifiedEndpointUrl;
                    bool m_unifiedEndpointUrlHasBeenSet;

                    /**
                     * <p>KServe V2 协议统一入口 URL（通过 API-Key + model name 路由，适用于 XGBoost 等传统 ML 模型）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unifiedV2EndpointUrl;
                    bool m_unifiedV2EndpointUrlHasBeenSet;

                    /**
                     * <p>ray head 是否开启高可用</p>
                     */
                    bool m_headHighAvailabilityEnabled;
                    bool m_headHighAvailabilityEnabledHasBeenSet;

                    /**
                     * <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>主账号UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>创建时间（Unix 时间戳，毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（Unix 时间戳，毫秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>部署数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deploymentCount;
                    bool m_deploymentCountHasBeenSet;

                    /**
                     * <p>是否存在至少一个运行中的部署</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasRunningDeployment;
                    bool m_hasRunningDeploymentHasBeenSet;

                    /**
                     * <p>是否启用 API-Key 鉴权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_apiKeyAuthEnabled;
                    bool m_apiKeyAuthEnabledHasBeenSet;

                    /**
                     * <p>是否强制开启 API-Key 鉴权（生产环境为 true，不允许关闭）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_apiKeyAuthForceEnabled;
                    bool m_apiKeyAuthForceEnabledHasBeenSet;

                    /**
                     * <p>是否跳过 TLS 证书验证（自签证书场景，前端 curl 命令需加 -k 参数）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_skipTlsVerify;
                    bool m_skipTlsVerifyHasBeenSet;

                    /**
                     * <p>API Key 绑定结果（success 表示成功，其他为错误信息）</p>
                     */
                    std::string m_apiKeyBindMessage;
                    bool m_apiKeyBindMessageHasBeenSet;

                    /**
                     * <p>子账号UIN（实际操作者）</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>运行中部署的 CPU 资源汇总</p>
                     */
                    CpuSummaryItem m_cpuResourceSummary;
                    bool m_cpuResourceSummaryHasBeenSet;

                    /**
                     * <p>资源配置（JSON 字符串，取自第一个部署）</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCESERVICERESPONSE_H_
