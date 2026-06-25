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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELAPI_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELAPI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/DefaultKongRoute.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRoute.h>
#include <tencentcloud/cngw/v20230418/model/AIGWKVMatch.h>
#include <tencentcloud/cngw/v20230418/model/AIGWCrossServiceFallbackConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWTagFilter.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLogConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLogDesensitizeConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWForwardDesensitizeConfig.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * LLM 模型 API
                */
                class CloudNativeAPIGatewayLLMModelAPI : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayLLMModelAPI();
                    ~CloudNativeAPIGatewayLLMModelAPI() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型 API ID。</p>
                     * @return Id <p>模型 API ID。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>模型 API ID。</p>
                     * @param _id <p>模型 API ID。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>AI 网关 LLM 模型 API 的唯一标识名称，格式规则：2-50 字符，支持英文、数字、下划线。</p>
                     * @return Name <p>AI 网关 LLM 模型 API 的唯一标识名称，格式规则：2-50 字符，支持英文、数字、下划线。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>AI 网关 LLM 模型 API 的唯一标识名称，格式规则：2-50 字符，支持英文、数字、下划线。</p>
                     * @param _name <p>AI 网关 LLM 模型 API 的唯一标识名称，格式规则：2-50 字符，支持英文、数字、下划线。</p>
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
                     * 获取<p>选择业务场景,xa0 选项：Chat（聊天）。</p>
                     * @return SceneType <p>选择业务场景,xa0 选项：Chat（聊天）。</p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>选择业务场景,xa0 选项：Chat（聊天）。</p>
                     * @param _sceneType <p>选择业务场景,xa0 选项：Chat（聊天）。</p>
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
                     * 获取<p>业务场景对应的请求协议，选项：OpenAI（目前只支持 OpenAI）。</p>
                     * @return RequestProtocol <p>业务场景对应的请求协议，选项：OpenAI（目前只支持 OpenAI）。</p>
                     * 
                     */
                    std::string GetRequestProtocol() const;

                    /**
                     * 设置<p>业务场景对应的请求协议，选项：OpenAI（目前只支持 OpenAI）。</p>
                     * @param _requestProtocol <p>业务场景对应的请求协议，选项：OpenAI（目前只支持 OpenAI）。</p>
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
                     * 获取<p>路由列表</p>
                     * @return RouteList <p>路由列表</p>
                     * 
                     */
                    std::vector<DefaultKongRoute> GetRouteList() const;

                    /**
                     * 设置<p>路由列表</p>
                     * @param _routeList <p>路由列表</p>
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
                     * 获取<p>路径简化，<br>启用时：客户端请求路径 → 移除Base Path → 后端接收简洁路径<br>禁用时：客户端请求路径 → 完整传递给后端。</p>
                     * @return StripPath <p>路径简化，<br>启用时：客户端请求路径 → 移除Base Path → 后端接收简洁路径<br>禁用时：客户端请求路径 → 完整传递给后端。</p>
                     * 
                     */
                    bool GetStripPath() const;

                    /**
                     * 设置<p>路径简化，<br>启用时：客户端请求路径 → 移除Base Path → 后端接收简洁路径<br>禁用时：客户端请求路径 → 完整传递给后端。</p>
                     * @param _stripPath <p>路径简化，<br>启用时：客户端请求路径 → 移除Base Path → 后端接收简洁路径<br>禁用时：客户端请求路径 → 完整传递给后端。</p>
                     * 
                     */
                    void SetStripPath(const bool& _stripPath);

                    /**
                     * 判断参数 StripPath 是否已赋值
                     * @return StripPath 是否已赋值
                     * 
                     */
                    bool StripPathHasBeenSet() const;

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
                     * 获取<p>模型服务Id</p>
                     * @return ModelServiceId <p>模型服务Id</p>
                     * 
                     */
                    std::string GetModelServiceId() const;

                    /**
                     * 设置<p>模型服务Id</p>
                     * @param _modelServiceId <p>模型服务Id</p>
                     * 
                     */
                    void SetModelServiceId(const std::string& _modelServiceId);

                    /**
                     * 判断参数 ModelServiceId 是否已赋值
                     * @return ModelServiceId 是否已赋值
                     * 
                     */
                    bool ModelServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>模型服务名称</p>
                     * @return ModelServiceName <p>模型服务名称</p>
                     * 
                     */
                    std::string GetModelServiceName() const;

                    /**
                     * 设置<p>模型服务名称</p>
                     * @param _modelServiceName <p>模型服务名称</p>
                     * 
                     */
                    void SetModelServiceName(const std::string& _modelServiceName);

                    /**
                     * 判断参数 ModelServiceName 是否已赋值
                     * @return ModelServiceName 是否已赋值
                     * 
                     */
                    bool ModelServiceNameHasBeenSet() const;

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
                     * 获取<p>无</p>
                     * @return MatchHeaders <p>无</p>
                     * 
                     */
                    std::vector<AIGWKVMatch> GetMatchHeaders() const;

                    /**
                     * 设置<p>无</p>
                     * @param _matchHeaders <p>无</p>
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
                     * 获取<p>是否开启跨服务fallback</p>
                     * @return EnableCrossServiceFallback <p>是否开启跨服务fallback</p>
                     * 
                     */
                    bool GetEnableCrossServiceFallback() const;

                    /**
                     * 设置<p>是否开启跨服务fallback</p>
                     * @param _enableCrossServiceFallback <p>是否开启跨服务fallback</p>
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
                     * 获取<p>跨服务fallback配置详情</p>
                     * @return CrossServiceFallbackConfig <p>跨服务fallback配置详情</p>
                     * 
                     */
                    AIGWCrossServiceFallbackConfig GetCrossServiceFallbackConfig() const;

                    /**
                     * 设置<p>跨服务fallback配置详情</p>
                     * @param _crossServiceFallbackConfig <p>跨服务fallback配置详情</p>
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
                     * 获取<p>是否展示模型API</p>
                     * @return DescribeCloudNativeAPIGatewayLLMModelAPI <p>是否展示模型API</p>
                     * 
                     */
                    bool GetDescribeCloudNativeAPIGatewayLLMModelAPI() const;

                    /**
                     * 设置<p>是否展示模型API</p>
                     * @param _describeCloudNativeAPIGatewayLLMModelAPI <p>是否展示模型API</p>
                     * 
                     */
                    void SetDescribeCloudNativeAPIGatewayLLMModelAPI(const bool& _describeCloudNativeAPIGatewayLLMModelAPI);

                    /**
                     * 判断参数 DescribeCloudNativeAPIGatewayLLMModelAPI 是否已赋值
                     * @return DescribeCloudNativeAPIGatewayLLMModelAPI 是否已赋值
                     * 
                     */
                    bool DescribeCloudNativeAPIGatewayLLMModelAPIHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return TagFilter <p>标签</p>
                     * 
                     */
                    AIGWTagFilter GetTagFilter() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tagFilter <p>标签</p>
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
                     * 获取<p>日志显示相关开关</p>
                     * @return LogConfig <p>日志显示相关开关</p>
                     * 
                     */
                    AIGWLogConfig GetLogConfig() const;

                    /**
                     * 设置<p>日志显示相关开关</p>
                     * @param _logConfig <p>日志显示相关开关</p>
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
                     * 获取<p>日志脱敏规则</p>
                     * @return LogDesensitizeConfig <p>日志脱敏规则</p>
                     * 
                     */
                    AIGWLogDesensitizeConfig GetLogDesensitizeConfig() const;

                    /**
                     * 设置<p>日志脱敏规则</p>
                     * @param _logDesensitizeConfig <p>日志脱敏规则</p>
                     * 
                     */
                    void SetLogDesensitizeConfig(const AIGWLogDesensitizeConfig& _logDesensitizeConfig);

                    /**
                     * 判断参数 LogDesensitizeConfig 是否已赋值
                     * @return LogDesensitizeConfig 是否已赋值
                     * 
                     */
                    bool LogDesensitizeConfigHasBeenSet() const;

                    /**
                     * 获取<p>转发脱敏规则</p>
                     * @return ForwardDesensitizeConfig <p>转发脱敏规则</p>
                     * 
                     */
                    AIGWForwardDesensitizeConfig GetForwardDesensitizeConfig() const;

                    /**
                     * 设置<p>转发脱敏规则</p>
                     * @param _forwardDesensitizeConfig <p>转发脱敏规则</p>
                     * 
                     */
                    void SetForwardDesensitizeConfig(const AIGWForwardDesensitizeConfig& _forwardDesensitizeConfig);

                    /**
                     * 判断参数 ForwardDesensitizeConfig 是否已赋值
                     * @return ForwardDesensitizeConfig 是否已赋值
                     * 
                     */
                    bool ForwardDesensitizeConfigHasBeenSet() const;

                private:

                    /**
                     * <p>模型 API ID。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>AI 网关 LLM 模型 API 的唯一标识名称，格式规则：2-50 字符，支持英文、数字、下划线。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>选择业务场景,xa0 选项：Chat（聊天）。</p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>业务场景对应的请求协议，选项：OpenAI（目前只支持 OpenAI）。</p>
                     */
                    std::string m_requestProtocol;
                    bool m_requestProtocolHasBeenSet;

                    /**
                     * <p>路由列表</p>
                     */
                    std::vector<DefaultKongRoute> m_routeList;
                    bool m_routeListHasBeenSet;

                    /**
                     * <p>为API设置统一的前缀，格式：以/开头，支持字母、数字、短横线。</p>
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * <p>路径简化，<br>启用时：客户端请求路径 → 移除Base Path → 后端接收简洁路径<br>禁用时：客户端请求路径 → 完整传递给后端。</p>
                     */
                    bool m_stripPath;
                    bool m_stripPathHasBeenSet;

                    /**
                     * <p>模型 API 的相关描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模型服务Id</p>
                     */
                    std::string m_modelServiceId;
                    bool m_modelServiceIdHasBeenSet;

                    /**
                     * <p>模型服务名称</p>
                     */
                    std::string m_modelServiceName;
                    bool m_modelServiceNameHasBeenSet;

                    /**
                     * <p>模型服务路由策略（是指如何路由到模型服务）</p>
                     */
                    CloudNativeAPIGatewayLLMModelServiceRoute m_modelServiceRoute;
                    bool m_modelServiceRouteHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::vector<AIGWKVMatch> m_matchHeaders;
                    bool m_matchHeadersHasBeenSet;

                    /**
                     * <p>是否开启跨服务fallback</p>
                     */
                    bool m_enableCrossServiceFallback;
                    bool m_enableCrossServiceFallbackHasBeenSet;

                    /**
                     * <p>跨服务fallback配置详情</p>
                     */
                    AIGWCrossServiceFallbackConfig m_crossServiceFallbackConfig;
                    bool m_crossServiceFallbackConfigHasBeenSet;

                    /**
                     * <p>是否展示模型API</p>
                     */
                    bool m_describeCloudNativeAPIGatewayLLMModelAPI;
                    bool m_describeCloudNativeAPIGatewayLLMModelAPIHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    AIGWTagFilter m_tagFilter;
                    bool m_tagFilterHasBeenSet;

                    /**
                     * <p>日志显示相关开关</p>
                     */
                    AIGWLogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>日志脱敏规则</p>
                     */
                    AIGWLogDesensitizeConfig m_logDesensitizeConfig;
                    bool m_logDesensitizeConfigHasBeenSet;

                    /**
                     * <p>转发脱敏规则</p>
                     */
                    AIGWForwardDesensitizeConfig m_forwardDesensitizeConfig;
                    bool m_forwardDesensitizeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELAPI_H_
