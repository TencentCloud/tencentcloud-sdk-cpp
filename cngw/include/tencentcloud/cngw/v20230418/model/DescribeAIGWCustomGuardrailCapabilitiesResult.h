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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILCAPABILITIESRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILCAPABILITIESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailCapabilityLimits.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 查询自定义安全护栏能力结果
                */
                class DescribeAIGWCustomGuardrailCapabilitiesResult : public AbstractModel
                {
                public:
                    DescribeAIGWCustomGuardrailCapabilitiesResult();
                    ~DescribeAIGWCustomGuardrailCapabilitiesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>支持该能力的最低网关版本，当前为 3.9.6</p>
                     * @return MinGatewayVersion <p>支持该能力的最低网关版本，当前为 3.9.6</p>
                     * 
                     */
                    std::string GetMinGatewayVersion() const;

                    /**
                     * 设置<p>支持该能力的最低网关版本，当前为 3.9.6</p>
                     * @param _minGatewayVersion <p>支持该能力的最低网关版本，当前为 3.9.6</p>
                     * 
                     */
                    void SetMinGatewayVersion(const std::string& _minGatewayVersion);

                    /**
                     * 判断参数 MinGatewayVersion 是否已赋值
                     * @return MinGatewayVersion 是否已赋值
                     * 
                     */
                    bool MinGatewayVersionHasBeenSet() const;

                    /**
                     * 获取<p>支持绑定的业务资源类型</p>
                     * @return SupportedResourceTypes <p>支持绑定的业务资源类型</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedResourceTypes() const;

                    /**
                     * 设置<p>支持绑定的业务资源类型</p>
                     * @param _supportedResourceTypes <p>支持绑定的业务资源类型</p>
                     * 
                     */
                    void SetSupportedResourceTypes(const std::vector<std::string>& _supportedResourceTypes);

                    /**
                     * 判断参数 SupportedResourceTypes 是否已赋值
                     * @return SupportedResourceTypes 是否已赋值
                     * 
                     */
                    bool SupportedResourceTypesHasBeenSet() const;

                    /**
                     * 获取<p>当前控制面允许绑定的协议分类，以返回值为准；不表示每种协议变体均可用。目前不开放 Dify、Custom Agent、Legacy SSE MCP。</p>
                     * @return SupportedProtocols <p>当前控制面允许绑定的协议分类，以返回值为准；不表示每种协议变体均可用。目前不开放 Dify、Custom Agent、Legacy SSE MCP。</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedProtocols() const;

                    /**
                     * 设置<p>当前控制面允许绑定的协议分类，以返回值为准；不表示每种协议变体均可用。目前不开放 Dify、Custom Agent、Legacy SSE MCP。</p>
                     * @param _supportedProtocols <p>当前控制面允许绑定的协议分类，以返回值为准；不表示每种协议变体均可用。目前不开放 Dify、Custom Agent、Legacy SSE MCP。</p>
                     * 
                     */
                    void SetSupportedProtocols(const std::vector<std::string>& _supportedProtocols);

                    /**
                     * 判断参数 SupportedProtocols 是否已赋值
                     * @return SupportedProtocols 是否已赋值
                     * 
                     */
                    bool SupportedProtocolsHasBeenSet() const;

                    /**
                     * 获取<p>当前允许配置的审核方向，仅 input（仅输入）和 both（输入加输出）。</p>
                     * @return SupportedDirections <p>当前允许配置的审核方向，仅 input（仅输入）和 both（输入加输出）。</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedDirections() const;

                    /**
                     * 设置<p>当前允许配置的审核方向，仅 input（仅输入）和 both（输入加输出）。</p>
                     * @param _supportedDirections <p>当前允许配置的审核方向，仅 input（仅输入）和 both（输入加输出）。</p>
                     * 
                     */
                    void SetSupportedDirections(const std::vector<std::string>& _supportedDirections);

                    /**
                     * 判断参数 SupportedDirections 是否已赋值
                     * @return SupportedDirections 是否已赋值
                     * 
                     */
                    bool SupportedDirectionsHasBeenSet() const;

                    /**
                     * 获取<p>是否支持流式请求与响应审核</p>
                     * @return SupportsStreaming <p>是否支持流式请求与响应审核</p>
                     * 
                     */
                    bool GetSupportsStreaming() const;

                    /**
                     * 设置<p>是否支持流式请求与响应审核</p>
                     * @param _supportsStreaming <p>是否支持流式请求与响应审核</p>
                     * 
                     */
                    void SetSupportsStreaming(const bool& _supportsStreaming);

                    /**
                     * 判断参数 SupportsStreaming 是否已赋值
                     * @return SupportsStreaming 是否已赋值
                     * 
                     */
                    bool SupportsStreamingHasBeenSet() const;

                    /**
                     * 获取<p>是否支持自定义审核响应字段映射</p>
                     * @return SupportsFieldMapping <p>是否支持自定义审核响应字段映射</p>
                     * 
                     */
                    bool GetSupportsFieldMapping() const;

                    /**
                     * 设置<p>是否支持自定义审核响应字段映射</p>
                     * @param _supportsFieldMapping <p>是否支持自定义审核响应字段映射</p>
                     * 
                     */
                    void SetSupportsFieldMapping(const bool& _supportsFieldMapping);

                    /**
                     * 判断参数 SupportsFieldMapping 是否已赋值
                     * @return SupportsFieldMapping 是否已赋值
                     * 
                     */
                    bool SupportsFieldMappingHasBeenSet() const;

                    /**
                     * 获取<p>系统默认拦截提示</p>
                     * @return DefaultBlockMessage <p>系统默认拦截提示</p>
                     * 
                     */
                    std::string GetDefaultBlockMessage() const;

                    /**
                     * 设置<p>系统默认拦截提示</p>
                     * @param _defaultBlockMessage <p>系统默认拦截提示</p>
                     * 
                     */
                    void SetDefaultBlockMessage(const std::string& _defaultBlockMessage);

                    /**
                     * 判断参数 DefaultBlockMessage 是否已赋值
                     * @return DefaultBlockMessage 是否已赋值
                     * 
                     */
                    bool DefaultBlockMessageHasBeenSet() const;

                    /**
                     * 获取<p>拦截提示最大字符数</p>
                     * @return MaxBlockMessageLength <p>拦截提示最大字符数</p>
                     * 
                     */
                    int64_t GetMaxBlockMessageLength() const;

                    /**
                     * 设置<p>拦截提示最大字符数</p>
                     * @param _maxBlockMessageLength <p>拦截提示最大字符数</p>
                     * 
                     */
                    void SetMaxBlockMessageLength(const int64_t& _maxBlockMessageLength);

                    /**
                     * 判断参数 MaxBlockMessageLength 是否已赋值
                     * @return MaxBlockMessageLength 是否已赋值
                     * 
                     */
                    bool MaxBlockMessageLengthHasBeenSet() const;

                    /**
                     * 获取<p>控制面公布的能力限制/默认值，不是当前请求可修改的配置对象，也不是逐个 DP 实时读取值。窗口大小、并发审核数等未作为策略 API 入参开放。</p>
                     * @return Limits <p>控制面公布的能力限制/默认值，不是当前请求可修改的配置对象，也不是逐个 DP 实时读取值。窗口大小、并发审核数等未作为策略 API 入参开放。</p>
                     * 
                     */
                    CustomGuardrailCapabilityLimits GetLimits() const;

                    /**
                     * 设置<p>控制面公布的能力限制/默认值，不是当前请求可修改的配置对象，也不是逐个 DP 实时读取值。窗口大小、并发审核数等未作为策略 API 入参开放。</p>
                     * @param _limits <p>控制面公布的能力限制/默认值，不是当前请求可修改的配置对象，也不是逐个 DP 实时读取值。窗口大小、并发审核数等未作为策略 API 入参开放。</p>
                     * 
                     */
                    void SetLimits(const CustomGuardrailCapabilityLimits& _limits);

                    /**
                     * 判断参数 Limits 是否已赋值
                     * @return Limits 是否已赋值
                     * 
                     */
                    bool LimitsHasBeenSet() const;

                private:

                    /**
                     * <p>支持该能力的最低网关版本，当前为 3.9.6</p>
                     */
                    std::string m_minGatewayVersion;
                    bool m_minGatewayVersionHasBeenSet;

                    /**
                     * <p>支持绑定的业务资源类型</p>
                     */
                    std::vector<std::string> m_supportedResourceTypes;
                    bool m_supportedResourceTypesHasBeenSet;

                    /**
                     * <p>当前控制面允许绑定的协议分类，以返回值为准；不表示每种协议变体均可用。目前不开放 Dify、Custom Agent、Legacy SSE MCP。</p>
                     */
                    std::vector<std::string> m_supportedProtocols;
                    bool m_supportedProtocolsHasBeenSet;

                    /**
                     * <p>当前允许配置的审核方向，仅 input（仅输入）和 both（输入加输出）。</p>
                     */
                    std::vector<std::string> m_supportedDirections;
                    bool m_supportedDirectionsHasBeenSet;

                    /**
                     * <p>是否支持流式请求与响应审核</p>
                     */
                    bool m_supportsStreaming;
                    bool m_supportsStreamingHasBeenSet;

                    /**
                     * <p>是否支持自定义审核响应字段映射</p>
                     */
                    bool m_supportsFieldMapping;
                    bool m_supportsFieldMappingHasBeenSet;

                    /**
                     * <p>系统默认拦截提示</p>
                     */
                    std::string m_defaultBlockMessage;
                    bool m_defaultBlockMessageHasBeenSet;

                    /**
                     * <p>拦截提示最大字符数</p>
                     */
                    int64_t m_maxBlockMessageLength;
                    bool m_maxBlockMessageLengthHasBeenSet;

                    /**
                     * <p>控制面公布的能力限制/默认值，不是当前请求可修改的配置对象，也不是逐个 DP 实时读取值。窗口大小、并发审核数等未作为策略 API 入参开放。</p>
                     */
                    CustomGuardrailCapabilityLimits m_limits;
                    bool m_limitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILCAPABILITIESRESULT_H_
