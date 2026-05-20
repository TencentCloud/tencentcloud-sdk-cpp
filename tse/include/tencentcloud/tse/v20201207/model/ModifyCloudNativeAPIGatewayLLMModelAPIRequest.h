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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYLLMMODELAPIREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYLLMMODELAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayLLMModelServiceRoute.h>
#include <tencentcloud/tse/v20201207/model/AIGWKVMatch.h>
#include <tencentcloud/tse/v20201207/model/AIGWCrossServiceFallbackConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayLLMModelAPI请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayLLMModelAPIRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayLLMModelAPIRequest();
                    ~ModifyCloudNativeAPIGatewayLLMModelAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关 id。</p>
                     * @return GatewayId <p>网关 id。</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关 id。</p>
                     * @param _gatewayId <p>网关 id。</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>模型 API ID，全局唯一标识。</p>
                     * @return ModelAPIId <p>模型 API ID，全局唯一标识。</p>
                     * 
                     */
                    std::string GetModelAPIId() const;

                    /**
                     * 设置<p>模型 API ID，全局唯一标识。</p>
                     * @param _modelAPIId <p>模型 API ID，全局唯一标识。</p>
                     * 
                     */
                    void SetModelAPIId(const std::string& _modelAPIId);

                    /**
                     * 判断参数 ModelAPIId 是否已赋值
                     * @return ModelAPIId 是否已赋值
                     * 
                     */
                    bool ModelAPIIdHasBeenSet() const;

                    /**
                     * 获取<p>修改模型 API 名称</p>
                     * @return Name <p>修改模型 API 名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>修改模型 API 名称</p>
                     * @param _name <p>修改模型 API 名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>为API设置统一的前缀，格式：以/开头，支持字母、数字、短横线。</p>
                     * @return BasePath <p>为API设置统一的前缀，格式：以/开头，支持字母、数字、短横线。</p>
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置<p>为API设置统一的前缀，格式：以/开头，支持字母、数字、短横线。</p>
                     * @param _basePath <p>为API设置统一的前缀，格式：以/开头，支持字母、数字、短横线。</p>
                     * 
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     * 
                     */
                    bool BasePathHasBeenSet() const;

                    /**
                     * 获取<p>模型 API 的相关描述。</p>
                     * @return Description <p>模型 API 的相关描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型 API 的相关描述。</p>
                     * @param _description <p>模型 API 的相关描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型服务列表（支持填多个模型服务）</p>
                     * @return ListModelServiceId <p>关联的模型服务列表（支持填多个模型服务）</p>
                     * 
                     */
                    std::vector<std::string> GetListModelServiceId() const;

                    /**
                     * 设置<p>关联的模型服务列表（支持填多个模型服务）</p>
                     * @param _listModelServiceId <p>关联的模型服务列表（支持填多个模型服务）</p>
                     * 
                     */
                    void SetListModelServiceId(const std::vector<std::string>& _listModelServiceId);

                    /**
                     * 判断参数 ListModelServiceId 是否已赋值
                     * @return ListModelServiceId 是否已赋值
                     * 
                     */
                    bool ListModelServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>模型服务路由策略（是指如何路由到模型服务）</p>
                     * @return ModelServiceRoute <p>模型服务路由策略（是指如何路由到模型服务）</p>
                     * 
                     */
                    CloudNativeAPIGatewayLLMModelServiceRoute GetModelServiceRoute() const;

                    /**
                     * 设置<p>模型服务路由策略（是指如何路由到模型服务）</p>
                     * @param _modelServiceRoute <p>模型服务路由策略（是指如何路由到模型服务）</p>
                     * 
                     */
                    void SetModelServiceRoute(const CloudNativeAPIGatewayLLMModelServiceRoute& _modelServiceRoute);

                    /**
                     * 判断参数 ModelServiceRoute 是否已赋值
                     * @return ModelServiceRoute 是否已赋值
                     * 
                     */
                    bool ModelServiceRouteHasBeenSet() const;

                    /**
                     * 获取<p>headers 路由匹配</p>
                     * @return MatchHeaders <p>headers 路由匹配</p>
                     * 
                     */
                    std::vector<AIGWKVMatch> GetMatchHeaders() const;

                    /**
                     * 设置<p>headers 路由匹配</p>
                     * @param _matchHeaders <p>headers 路由匹配</p>
                     * 
                     */
                    void SetMatchHeaders(const std::vector<AIGWKVMatch>& _matchHeaders);

                    /**
                     * 判断参数 MatchHeaders 是否已赋值
                     * @return MatchHeaders 是否已赋值
                     * 
                     */
                    bool MatchHeadersHasBeenSet() const;

                    /**
                     * 获取<p>跨服务 fallback</p>
                     * @return EnableCrossServiceFallback <p>跨服务 fallback</p>
                     * 
                     */
                    bool GetEnableCrossServiceFallback() const;

                    /**
                     * 设置<p>跨服务 fallback</p>
                     * @param _enableCrossServiceFallback <p>跨服务 fallback</p>
                     * 
                     */
                    void SetEnableCrossServiceFallback(const bool& _enableCrossServiceFallback);

                    /**
                     * 判断参数 EnableCrossServiceFallback 是否已赋值
                     * @return EnableCrossServiceFallback 是否已赋值
                     * 
                     */
                    bool EnableCrossServiceFallbackHasBeenSet() const;

                    /**
                     * 获取<p>跨服务 fallback 配置</p>
                     * @return CrossServiceFallbackConfig <p>跨服务 fallback 配置</p>
                     * 
                     */
                    AIGWCrossServiceFallbackConfig GetCrossServiceFallbackConfig() const;

                    /**
                     * 设置<p>跨服务 fallback 配置</p>
                     * @param _crossServiceFallbackConfig <p>跨服务 fallback 配置</p>
                     * 
                     */
                    void SetCrossServiceFallbackConfig(const AIGWCrossServiceFallbackConfig& _crossServiceFallbackConfig);

                    /**
                     * 判断参数 CrossServiceFallbackConfig 是否已赋值
                     * @return CrossServiceFallbackConfig 是否已赋值
                     * 
                     */
                    bool CrossServiceFallbackConfigHasBeenSet() const;

                private:

                    /**
                     * <p>网关 id。</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>模型 API ID，全局唯一标识。</p>
                     */
                    std::string m_modelAPIId;
                    bool m_modelAPIIdHasBeenSet;

                    /**
                     * <p>修改模型 API 名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>为API设置统一的前缀，格式：以/开头，支持字母、数字、短横线。</p>
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * <p>模型 API 的相关描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>关联的模型服务列表（支持填多个模型服务）</p>
                     */
                    std::vector<std::string> m_listModelServiceId;
                    bool m_listModelServiceIdHasBeenSet;

                    /**
                     * <p>模型服务路由策略（是指如何路由到模型服务）</p>
                     */
                    CloudNativeAPIGatewayLLMModelServiceRoute m_modelServiceRoute;
                    bool m_modelServiceRouteHasBeenSet;

                    /**
                     * <p>headers 路由匹配</p>
                     */
                    std::vector<AIGWKVMatch> m_matchHeaders;
                    bool m_matchHeadersHasBeenSet;

                    /**
                     * <p>跨服务 fallback</p>
                     */
                    bool m_enableCrossServiceFallback;
                    bool m_enableCrossServiceFallbackHasBeenSet;

                    /**
                     * <p>跨服务 fallback 配置</p>
                     */
                    AIGWCrossServiceFallbackConfig m_crossServiceFallbackConfig;
                    bool m_crossServiceFallbackConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYLLMMODELAPIREQUEST_H_
