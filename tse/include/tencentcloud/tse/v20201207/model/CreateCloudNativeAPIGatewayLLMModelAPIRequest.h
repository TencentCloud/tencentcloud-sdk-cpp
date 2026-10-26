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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYLLMMODELAPIREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYLLMMODELAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/DefaultKongRoute.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayLLMModelServiceRoute.h>
#include <tencentcloud/tse/v20201207/model/AIGWKVMatch.h>
#include <tencentcloud/tse/v20201207/model/AIGWCrossServiceFallbackConfig.h>
#include <tencentcloud/tse/v20201207/model/AIGWTagFilter.h>
#include <tencentcloud/tse/v20201207/model/AIGWLogConfig.h>
#include <tencentcloud/tse/v20201207/model/AIGWRerankMaxDocumentsConfig.h>
#include <tencentcloud/tse/v20201207/model/AIGWSensitiveWordRoute.h>
#include <tencentcloud/tse/v20201207/model/AIGWPriorityScheduleConfig.h>
#include <tencentcloud/tse/v20201207/model/AIGWModelNameRoute.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayLLMModelAPI请求参数结构体
                */
                class CreateCloudNativeAPIGatewayLLMModelAPIRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayLLMModelAPIRequest();
                    ~CreateCloudNativeAPIGatewayLLMModelAPIRequest() = default;
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
                     * 获取<p>模型 API 名称，最长 60 字符。同一网关下唯一。</p>
                     * @return Name <p>模型 API 名称，最长 60 字符。同一网关下唯一。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型 API 名称，最长 60 字符。同一网关下唯一。</p>
                     * @param _name <p>模型 API 名称，最长 60 字符。同一网关下唯一。</p>
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
                     * 获取<p>业务场景。</p><p>枚举值：</p><ul><li>Chat：聊天</li><li>Image：图像（需要网关版本 ≥ 3.9.3）</li></ul>
                     * @return SceneType <p>业务场景。</p><p>枚举值：</p><ul><li>Chat：聊天</li><li>Image：图像（需要网关版本 ≥ 3.9.3）</li></ul>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>业务场景。</p><p>枚举值：</p><ul><li>Chat：聊天</li><li>Image：图像（需要网关版本 ≥ 3.9.3）</li></ul>
                     * @param _sceneType <p>业务场景。</p><p>枚举值：</p><ul><li>Chat：聊天</li><li>Image：图像（需要网关版本 ≥ 3.9.3）</li></ul>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>请求协议（小写）。当前仅支持：</p><ul><li>openai</li></ul>
                     * @return RequestProtocol <p>请求协议（小写）。当前仅支持：</p><ul><li>openai</li></ul>
                     * 
                     */
                    std::string GetRequestProtocol() const;

                    /**
                     * 设置<p>请求协议（小写）。当前仅支持：</p><ul><li>openai</li></ul>
                     * @param _requestProtocol <p>请求协议（小写）。当前仅支持：</p><ul><li>openai</li></ul>
                     * 
                     */
                    void SetRequestProtocol(const std::string& _requestProtocol);

                    /**
                     * 判断参数 RequestProtocol 是否已赋值
                     * @return RequestProtocol 是否已赋值
                     * 
                     */
                    bool RequestProtocolHasBeenSet() const;

                    /**
                     * 获取<p>关联的模型服务 ID 列表，长度 1-10。</p><p>注：字段名建议改为 ModelServiceIds，当前保留用于兼容。</p>
                     * @return ListModelServiceId <p>关联的模型服务 ID 列表，长度 1-10。</p><p>注：字段名建议改为 ModelServiceIds，当前保留用于兼容。</p>
                     * 
                     */
                    std::vector<std::string> GetListModelServiceId() const;

                    /**
                     * 设置<p>关联的模型服务 ID 列表，长度 1-10。</p><p>注：字段名建议改为 ModelServiceIds，当前保留用于兼容。</p>
                     * @param _listModelServiceId <p>关联的模型服务 ID 列表，长度 1-10。</p><p>注：字段名建议改为 ModelServiceIds，当前保留用于兼容。</p>
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
                     * 获取<p>路由列表，至少 1 条。每条包含 Methods/Paths/Hosts 等 Kong 路由属性。</p>
                     * @return RouteList <p>路由列表，至少 1 条。每条包含 Methods/Paths/Hosts 等 Kong 路由属性。</p>
                     * 
                     */
                    std::vector<DefaultKongRoute> GetRouteList() const;

                    /**
                     * 设置<p>路由列表，至少 1 条。每条包含 Methods/Paths/Hosts 等 Kong 路由属性。</p>
                     * @param _routeList <p>路由列表，至少 1 条。每条包含 Methods/Paths/Hosts 等 Kong 路由属性。</p>
                     * 
                     */
                    void SetRouteList(const std::vector<DefaultKongRoute>& _routeList);

                    /**
                     * 判断参数 RouteList 是否已赋值
                     * @return RouteList 是否已赋值
                     * 
                     */
                    bool RouteListHasBeenSet() const;

                    /**
                     * 获取<p>统一前缀路径（可选）。例如 /v1/openai。</p>
                     * @return BasePath <p>统一前缀路径（可选）。例如 /v1/openai。</p>
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置<p>统一前缀路径（可选）。例如 /v1/openai。</p>
                     * @param _basePath <p>统一前缀路径（可选）。例如 /v1/openai。</p>
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
                     * 获取<p>模型 API 描述。最长 200 字符。</p>
                     * @return Description <p>模型 API 描述。最长 200 字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型 API 描述。最长 200 字符。</p>
                     * @param _description <p>模型 API 描述。最长 200 字符。</p>
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
                     * 获取<p>多模型服务路由策略。ListModelServiceId 多于 1 项时必填。</p>
                     * @return ModelServiceRoute <p>多模型服务路由策略。ListModelServiceId 多于 1 项时必填。</p>
                     * 
                     */
                    CloudNativeAPIGatewayLLMModelServiceRoute GetModelServiceRoute() const;

                    /**
                     * 设置<p>多模型服务路由策略。ListModelServiceId 多于 1 项时必填。</p>
                     * @param _modelServiceRoute <p>多模型服务路由策略。ListModelServiceId 多于 1 项时必填。</p>
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
                     * 获取<p>Header 路由匹配规则。当前仅支持 Operator=exact。</p>
                     * @return MatchHeaders <p>Header 路由匹配规则。当前仅支持 Operator=exact。</p>
                     * 
                     */
                    std::vector<AIGWKVMatch> GetMatchHeaders() const;

                    /**
                     * 设置<p>Header 路由匹配规则。当前仅支持 Operator=exact。</p>
                     * @param _matchHeaders <p>Header 路由匹配规则。当前仅支持 Operator=exact。</p>
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
                     * 获取<p>是否启用跨服务 Fallback。开启后需提供 CrossServiceFallbackConfig。</p>
                     * @return EnableCrossServiceFallback <p>是否启用跨服务 Fallback。开启后需提供 CrossServiceFallbackConfig。</p>
                     * 
                     */
                    bool GetEnableCrossServiceFallback() const;

                    /**
                     * 设置<p>是否启用跨服务 Fallback。开启后需提供 CrossServiceFallbackConfig。</p>
                     * @param _enableCrossServiceFallback <p>是否启用跨服务 Fallback。开启后需提供 CrossServiceFallbackConfig。</p>
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
                     * 获取<p>跨服务 Fallback 配置。EnableCrossServiceFallback=true 时必填。</p>
                     * @return CrossServiceFallbackConfig <p>跨服务 Fallback 配置。EnableCrossServiceFallback=true 时必填。</p>
                     * 
                     */
                    AIGWCrossServiceFallbackConfig GetCrossServiceFallbackConfig() const;

                    /**
                     * 设置<p>跨服务 Fallback 配置。EnableCrossServiceFallback=true 时必填。</p>
                     * @param _crossServiceFallbackConfig <p>跨服务 Fallback 配置。EnableCrossServiceFallback=true 时必填。</p>
                     * 
                     */
                    void SetCrossServiceFallbackConfig(const AIGWCrossServiceFallbackConfig& _crossServiceFallbackConfig);

                    /**
                     * 判断参数 CrossServiceFallbackConfig 是否已赋值
                     * @return CrossServiceFallbackConfig 是否已赋值
                     * 
                     */
                    bool CrossServiceFallbackConfigHasBeenSet() const;

                    /**
                     * 获取<p>标签过滤策略。需要网关版本 ≥ 3.9.4。</p>
                     * @return TagFilter <p>标签过滤策略。需要网关版本 ≥ 3.9.4。</p>
                     * 
                     */
                    AIGWTagFilter GetTagFilter() const;

                    /**
                     * 设置<p>标签过滤策略。需要网关版本 ≥ 3.9.4。</p>
                     * @param _tagFilter <p>标签过滤策略。需要网关版本 ≥ 3.9.4。</p>
                     * 
                     */
                    void SetTagFilter(const AIGWTagFilter& _tagFilter);

                    /**
                     * 判断参数 TagFilter 是否已赋值
                     * @return TagFilter 是否已赋值
                     * 
                     */
                    bool TagFilterHasBeenSet() const;

                    /**
                     * 获取<p>日志输出配置（请求/响应 payload 落 LLM Log）。需要网关版本 ≥ 3.9.4。</p>
                     * @return LogConfig <p>日志输出配置（请求/响应 payload 落 LLM Log）。需要网关版本 ≥ 3.9.4。</p>
                     * 
                     */
                    AIGWLogConfig GetLogConfig() const;

                    /**
                     * 设置<p>日志输出配置（请求/响应 payload 落 LLM Log）。需要网关版本 ≥ 3.9.4。</p>
                     * @param _logConfig <p>日志输出配置（请求/响应 payload 落 LLM Log）。需要网关版本 ≥ 3.9.4。</p>
                     * 
                     */
                    void SetLogConfig(const AIGWLogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取<p>Rerank场景最大文档数高级配置</p>
                     * @return MaxDocumentsConfig <p>Rerank场景最大文档数高级配置</p>
                     * 
                     */
                    AIGWRerankMaxDocumentsConfig GetMaxDocumentsConfig() const;

                    /**
                     * 设置<p>Rerank场景最大文档数高级配置</p>
                     * @param _maxDocumentsConfig <p>Rerank场景最大文档数高级配置</p>
                     * 
                     */
                    void SetMaxDocumentsConfig(const AIGWRerankMaxDocumentsConfig& _maxDocumentsConfig);

                    /**
                     * 判断参数 MaxDocumentsConfig 是否已赋值
                     * @return MaxDocumentsConfig 是否已赋值
                     * 
                     */
                    bool MaxDocumentsConfigHasBeenSet() const;

                    /**
                     * 获取<p>敏感词路由配置</p>
                     * @return SensitiveWordRoute <p>敏感词路由配置</p>
                     * 
                     */
                    AIGWSensitiveWordRoute GetSensitiveWordRoute() const;

                    /**
                     * 设置<p>敏感词路由配置</p>
                     * @param _sensitiveWordRoute <p>敏感词路由配置</p>
                     * 
                     */
                    void SetSensitiveWordRoute(const AIGWSensitiveWordRoute& _sensitiveWordRoute);

                    /**
                     * 判断参数 SensitiveWordRoute 是否已赋值
                     * @return SensitiveWordRoute 是否已赋值
                     * 
                     */
                    bool SensitiveWordRouteHasBeenSet() const;

                    /**
                     * 获取<p>请求优先级调度配置</p>
                     * @return PriorityScheduleConfig <p>请求优先级调度配置</p>
                     * 
                     */
                    AIGWPriorityScheduleConfig GetPriorityScheduleConfig() const;

                    /**
                     * 设置<p>请求优先级调度配置</p>
                     * @param _priorityScheduleConfig <p>请求优先级调度配置</p>
                     * 
                     */
                    void SetPriorityScheduleConfig(const AIGWPriorityScheduleConfig& _priorityScheduleConfig);

                    /**
                     * 判断参数 PriorityScheduleConfig 是否已赋值
                     * @return PriorityScheduleConfig 是否已赋值
                     * 
                     */
                    bool PriorityScheduleConfigHasBeenSet() const;

                    /**
                     * 获取<p>按请求体顶层 model 字段选择模型 API 的入口路由配置。传入对象即启用，ModelNames 须为非空列表；不传表示不启用。仅用于 Chat 场景下受支持的 POST 路由：openai 协议的 /v1/chat/completions、/v1/responses，或 anthropic 协议的 /v1/messages。公有云要求网关版本不低于 3.9.8，TCS 要求不低于 3.9.6。</p>
                     * @return ModelNameRoute <p>按请求体顶层 model 字段选择模型 API 的入口路由配置。传入对象即启用，ModelNames 须为非空列表；不传表示不启用。仅用于 Chat 场景下受支持的 POST 路由：openai 协议的 /v1/chat/completions、/v1/responses，或 anthropic 协议的 /v1/messages。公有云要求网关版本不低于 3.9.8，TCS 要求不低于 3.9.6。</p>
                     * 
                     */
                    AIGWModelNameRoute GetModelNameRoute() const;

                    /**
                     * 设置<p>按请求体顶层 model 字段选择模型 API 的入口路由配置。传入对象即启用，ModelNames 须为非空列表；不传表示不启用。仅用于 Chat 场景下受支持的 POST 路由：openai 协议的 /v1/chat/completions、/v1/responses，或 anthropic 协议的 /v1/messages。公有云要求网关版本不低于 3.9.8，TCS 要求不低于 3.9.6。</p>
                     * @param _modelNameRoute <p>按请求体顶层 model 字段选择模型 API 的入口路由配置。传入对象即启用，ModelNames 须为非空列表；不传表示不启用。仅用于 Chat 场景下受支持的 POST 路由：openai 协议的 /v1/chat/completions、/v1/responses，或 anthropic 协议的 /v1/messages。公有云要求网关版本不低于 3.9.8，TCS 要求不低于 3.9.6。</p>
                     * 
                     */
                    void SetModelNameRoute(const AIGWModelNameRoute& _modelNameRoute);

                    /**
                     * 判断参数 ModelNameRoute 是否已赋值
                     * @return ModelNameRoute 是否已赋值
                     * 
                     */
                    bool ModelNameRouteHasBeenSet() const;

                    /**
                     * 获取<p>单模型 API 的顶层标准模型名称。仅当 ListModelServiceId 包含一个模型服务且未配置 ModelServiceRoute 时可设置；多模型场景应在对应路由或降级条目中配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @return StandardModelName <p>单模型 API 的顶层标准模型名称。仅当 ListModelServiceId 包含一个模型服务且未配置 ModelServiceRoute 时可设置；多模型场景应在对应路由或降级条目中配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    std::string GetStandardModelName() const;

                    /**
                     * 设置<p>单模型 API 的顶层标准模型名称。仅当 ListModelServiceId 包含一个模型服务且未配置 ModelServiceRoute 时可设置；多模型场景应在对应路由或降级条目中配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @param _standardModelName <p>单模型 API 的顶层标准模型名称。仅当 ListModelServiceId 包含一个模型服务且未配置 ModelServiceRoute 时可设置；多模型场景应在对应路由或降级条目中配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    void SetStandardModelName(const std::string& _standardModelName);

                    /**
                     * 判断参数 StandardModelName 是否已赋值
                     * @return StandardModelName 是否已赋值
                     * 
                     */
                    bool StandardModelNameHasBeenSet() const;

                private:

                    /**
                     * <p>网关 id。</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>模型 API 名称，最长 60 字符。同一网关下唯一。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>业务场景。</p><p>枚举值：</p><ul><li>Chat：聊天</li><li>Image：图像（需要网关版本 ≥ 3.9.3）</li></ul>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>请求协议（小写）。当前仅支持：</p><ul><li>openai</li></ul>
                     */
                    std::string m_requestProtocol;
                    bool m_requestProtocolHasBeenSet;

                    /**
                     * <p>关联的模型服务 ID 列表，长度 1-10。</p><p>注：字段名建议改为 ModelServiceIds，当前保留用于兼容。</p>
                     */
                    std::vector<std::string> m_listModelServiceId;
                    bool m_listModelServiceIdHasBeenSet;

                    /**
                     * <p>路由列表，至少 1 条。每条包含 Methods/Paths/Hosts 等 Kong 路由属性。</p>
                     */
                    std::vector<DefaultKongRoute> m_routeList;
                    bool m_routeListHasBeenSet;

                    /**
                     * <p>统一前缀路径（可选）。例如 /v1/openai。</p>
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * <p>模型 API 描述。最长 200 字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>多模型服务路由策略。ListModelServiceId 多于 1 项时必填。</p>
                     */
                    CloudNativeAPIGatewayLLMModelServiceRoute m_modelServiceRoute;
                    bool m_modelServiceRouteHasBeenSet;

                    /**
                     * <p>Header 路由匹配规则。当前仅支持 Operator=exact。</p>
                     */
                    std::vector<AIGWKVMatch> m_matchHeaders;
                    bool m_matchHeadersHasBeenSet;

                    /**
                     * <p>是否启用跨服务 Fallback。开启后需提供 CrossServiceFallbackConfig。</p>
                     */
                    bool m_enableCrossServiceFallback;
                    bool m_enableCrossServiceFallbackHasBeenSet;

                    /**
                     * <p>跨服务 Fallback 配置。EnableCrossServiceFallback=true 时必填。</p>
                     */
                    AIGWCrossServiceFallbackConfig m_crossServiceFallbackConfig;
                    bool m_crossServiceFallbackConfigHasBeenSet;

                    /**
                     * <p>标签过滤策略。需要网关版本 ≥ 3.9.4。</p>
                     */
                    AIGWTagFilter m_tagFilter;
                    bool m_tagFilterHasBeenSet;

                    /**
                     * <p>日志输出配置（请求/响应 payload 落 LLM Log）。需要网关版本 ≥ 3.9.4。</p>
                     */
                    AIGWLogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>Rerank场景最大文档数高级配置</p>
                     */
                    AIGWRerankMaxDocumentsConfig m_maxDocumentsConfig;
                    bool m_maxDocumentsConfigHasBeenSet;

                    /**
                     * <p>敏感词路由配置</p>
                     */
                    AIGWSensitiveWordRoute m_sensitiveWordRoute;
                    bool m_sensitiveWordRouteHasBeenSet;

                    /**
                     * <p>请求优先级调度配置</p>
                     */
                    AIGWPriorityScheduleConfig m_priorityScheduleConfig;
                    bool m_priorityScheduleConfigHasBeenSet;

                    /**
                     * <p>按请求体顶层 model 字段选择模型 API 的入口路由配置。传入对象即启用，ModelNames 须为非空列表；不传表示不启用。仅用于 Chat 场景下受支持的 POST 路由：openai 协议的 /v1/chat/completions、/v1/responses，或 anthropic 协议的 /v1/messages。公有云要求网关版本不低于 3.9.8，TCS 要求不低于 3.9.6。</p>
                     */
                    AIGWModelNameRoute m_modelNameRoute;
                    bool m_modelNameRouteHasBeenSet;

                    /**
                     * <p>单模型 API 的顶层标准模型名称。仅当 ListModelServiceId 包含一个模型服务且未配置 ModelServiceRoute 时可设置；多模型场景应在对应路由或降级条目中配置。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     */
                    std::string m_standardModelName;
                    bool m_standardModelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYLLMMODELAPIREQUEST_H_
