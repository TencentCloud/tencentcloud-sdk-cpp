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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILHIT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILHIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 自定义安全护栏审核记录
                */
                class CustomGuardrailHit : public AbstractModel
                {
                public:
                    CustomGuardrailHit();
                    ~CustomGuardrailHit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>业务网关请求 ID；不是本次云 API 响应的 RequestId。流式同一业务请求可产生多条审核记录。</p>
                     * @return RequestId <p>业务网关请求 ID；不是本次云 API 响应的 RequestId。流式同一业务请求可产生多条审核记录。</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>业务网关请求 ID；不是本次云 API 响应的 RequestId。流式同一业务请求可产生多条审核记录。</p>
                     * @param _requestId <p>业务网关请求 ID；不是本次云 API 响应的 RequestId。流式同一业务请求可产生多条审核记录。</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<p>审核记录 Unix 毫秒级时间戳；注意查询入参 StartTime/EndTime 为秒级。</p>
                     * @return Timestamp <p>审核记录 Unix 毫秒级时间戳；注意查询入参 StartTime/EndTime 为秒级。</p>
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>审核记录 Unix 毫秒级时间戳；注意查询入参 StartTime/EndTime 为秒级。</p>
                     * @param _timestamp <p>审核记录 Unix 毫秒级时间戳；注意查询入参 StartTime/EndTime 为秒级。</p>
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>网关实例 ID</p>
                     * @return GatewayId <p>网关实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例 ID</p>
                     * @param _gatewayId <p>网关实例 ID</p>
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
                     * 获取<p>策略 ID</p>
                     * @return PolicyId <p>策略 ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>策略 ID</p>
                     * @param _policyId <p>策略 ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>策略名称</p>
                     * @return PolicyName <p>策略名称</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _policyName <p>策略名称</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>业务资源类型</p>
                     * @return ResourceType <p>业务资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>业务资源类型</p>
                     * @param _resourceType <p>业务资源类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>业务资源 ID</p>
                     * @return ResourceId <p>业务资源 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>业务资源 ID</p>
                     * @param _resourceId <p>业务资源 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Kong Route ID</p>
                     * @return RouteId <p>Kong Route ID</p>
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置<p>Kong Route ID</p>
                     * @param _routeId <p>Kong Route ID</p>
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取<p>业务协议</p>
                     * @return Protocol <p>业务协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>业务协议</p>
                     * @param _protocol <p>业务协议</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>审核方向：request 或 response</p>
                     * @return Direction <p>审核方向：request 或 response</p>
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置<p>审核方向：request 或 response</p>
                     * @param _direction <p>审核方向：request 或 response</p>
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取<p>是否为流式审核</p>
                     * @return Streaming <p>是否为流式审核</p>
                     * 
                     */
                    bool GetStreaming() const;

                    /**
                     * 设置<p>是否为流式审核</p>
                     * @param _streaming <p>是否为流式审核</p>
                     * 
                     */
                    void SetStreaming(const bool& _streaming);

                    /**
                     * 判断参数 Streaming 是否已赋值
                     * @return Streaming 是否已赋值
                     * 
                     */
                    bool StreamingHasBeenSet() const;

                    /**
                     * 获取<p>该审核单元是否标记为最终单元；不是是否命中/是否连接正常结束的判断依据。</p>
                     * @return Final <p>该审核单元是否标记为最终单元；不是是否命中/是否连接正常结束的判断依据。</p>
                     * 
                     */
                    bool GetFinal() const;

                    /**
                     * 设置<p>该审核单元是否标记为最终单元；不是是否命中/是否连接正常结束的判断依据。</p>
                     * @param _final <p>该审核单元是否标记为最终单元；不是是否命中/是否连接正常结束的判断依据。</p>
                     * 
                     */
                    void SetFinal(const bool& _final);

                    /**
                     * 判断参数 Final 是否已赋值
                     * @return Final 是否已赋值
                     * 
                     */
                    bool FinalHasBeenSet() const;

                    /**
                     * 获取<p>归一化后的审核判定，可能为 allow、block、replace、error；不是原始自定义字段的任意值。观察模式仍可记录命中判定。</p>
                     * @return Decision <p>归一化后的审核判定，可能为 allow、block、replace、error；不是原始自定义字段的任意值。观察模式仍可记录命中判定。</p>
                     * 
                     */
                    std::string GetDecision() const;

                    /**
                     * 设置<p>归一化后的审核判定，可能为 allow、block、replace、error；不是原始自定义字段的任意值。观察模式仍可记录命中判定。</p>
                     * @param _decision <p>归一化后的审核判定，可能为 allow、block、replace、error；不是原始自定义字段的任意值。观察模式仍可记录命中判定。</p>
                     * 
                     */
                    void SetDecision(const std::string& _decision);

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                    /**
                     * 获取<p>策略配置动作</p>
                     * @return ConfiguredAction <p>策略配置动作</p>
                     * 
                     */
                    std::string GetConfiguredAction() const;

                    /**
                     * 设置<p>策略配置动作</p>
                     * @param _configuredAction <p>策略配置动作</p>
                     * 
                     */
                    void SetConfiguredAction(const std::string& _configuredAction);

                    /**
                     * 判断参数 ConfiguredAction 是否已赋值
                     * @return ConfiguredAction 是否已赋值
                     * 
                     */
                    bool ConfiguredActionHasBeenSet() const;

                    /**
                     * 获取<p>该审核记录的策略处理结果，如 allow、block、replace、error。需与 Decision、ConfiguredAction、ErrorCode 联合分析；记录不等于客户端已成功收到全部响应。</p>
                     * @return EffectiveAction <p>该审核记录的策略处理结果，如 allow、block、replace、error。需与 Decision、ConfiguredAction、ErrorCode 联合分析；记录不等于客户端已成功收到全部响应。</p>
                     * 
                     */
                    std::string GetEffectiveAction() const;

                    /**
                     * 设置<p>该审核记录的策略处理结果，如 allow、block、replace、error。需与 Decision、ConfiguredAction、ErrorCode 联合分析；记录不等于客户端已成功收到全部响应。</p>
                     * @param _effectiveAction <p>该审核记录的策略处理结果，如 allow、block、replace、error。需与 Decision、ConfiguredAction、ErrorCode 联合分析；记录不等于客户端已成功收到全部响应。</p>
                     * 
                     */
                    void SetEffectiveAction(const std::string& _effectiveAction);

                    /**
                     * 判断参数 EffectiveAction 是否已赋值
                     * @return EffectiveAction 是否已赋值
                     * 
                     */
                    bool EffectiveActionHasBeenSet() const;

                    /**
                     * 获取<p>内容是否被改写</p>
                     * @return Rewritten <p>内容是否被改写</p>
                     * 
                     */
                    bool GetRewritten() const;

                    /**
                     * 设置<p>内容是否被改写</p>
                     * @param _rewritten <p>内容是否被改写</p>
                     * 
                     */
                    void SetRewritten(const bool& _rewritten);

                    /**
                     * 判断参数 Rewritten 是否已赋值
                     * @return Rewritten 是否已赋值
                     * 
                     */
                    bool RewrittenHasBeenSet() const;

                    /**
                     * 获取<p>请求或响应是否被拦截</p>
                     * @return Blocked <p>请求或响应是否被拦截</p>
                     * 
                     */
                    bool GetBlocked() const;

                    /**
                     * 设置<p>请求或响应是否被拦截</p>
                     * @param _blocked <p>请求或响应是否被拦截</p>
                     * 
                     */
                    void SetBlocked(const bool& _blocked);

                    /**
                     * 判断参数 Blocked 是否已赋值
                     * @return Blocked 是否已赋值
                     * 
                     */
                    bool BlockedHasBeenSet() const;

                    /**
                     * 获取<p>本审核记录是否因失败放行发生降级；为 true 时不能认为内容已经审核通过。</p>
                     * @return Downgraded <p>本审核记录是否因失败放行发生降级；为 true 时不能认为内容已经审核通过。</p>
                     * 
                     */
                    bool GetDowngraded() const;

                    /**
                     * 设置<p>本审核记录是否因失败放行发生降级；为 true 时不能认为内容已经审核通过。</p>
                     * @param _downgraded <p>本审核记录是否因失败放行发生降级；为 true 时不能认为内容已经审核通过。</p>
                     * 
                     */
                    void SetDowngraded(const bool& _downgraded);

                    /**
                     * 判断参数 Downgraded 是否已赋值
                     * @return Downgraded 是否已赋值
                     * 
                     */
                    bool DowngradedHasBeenSet() const;

                    /**
                     * 获取<p>审核服务 HTTP 状态码</p>
                     * @return ProviderStatusCode <p>审核服务 HTTP 状态码</p>
                     * 
                     */
                    int64_t GetProviderStatusCode() const;

                    /**
                     * 设置<p>审核服务 HTTP 状态码</p>
                     * @param _providerStatusCode <p>审核服务 HTTP 状态码</p>
                     * 
                     */
                    void SetProviderStatusCode(const int64_t& _providerStatusCode);

                    /**
                     * 判断参数 ProviderStatusCode 是否已赋值
                     * @return ProviderStatusCode 是否已赋值
                     * 
                     */
                    bool ProviderStatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>该审核调用耗时，单位毫秒，可含小数；不是完整模型请求时长或客户端首字延迟。</p>
                     * @return LatencyMs <p>该审核调用耗时，单位毫秒，可含小数；不是完整模型请求时长或客户端首字延迟。</p>
                     * 
                     */
                    double GetLatencyMs() const;

                    /**
                     * 设置<p>该审核调用耗时，单位毫秒，可含小数；不是完整模型请求时长或客户端首字延迟。</p>
                     * @param _latencyMs <p>该审核调用耗时，单位毫秒，可含小数；不是完整模型请求时长或客户端首字延迟。</p>
                     * 
                     */
                    void SetLatencyMs(const double& _latencyMs);

                    /**
                     * 判断参数 LatencyMs 是否已赋值
                     * @return LatencyMs 是否已赋值
                     * 
                     */
                    bool LatencyMsHasBeenSet() const;

                    /**
                     * 获取<p>稳定错误码</p>
                     * @return ErrorCode <p>稳定错误码</p>
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置<p>稳定错误码</p>
                     * @param _errorCode <p>稳定错误码</p>
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>审核原因或错误摘要</p>
                     * @return Reason <p>审核原因或错误摘要</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>审核原因或错误摘要</p>
                     * @param _reason <p>审核原因或错误摘要</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>业务网关请求 ID；不是本次云 API 响应的 RequestId。流式同一业务请求可产生多条审核记录。</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>审核记录 Unix 毫秒级时间戳；注意查询入参 StartTime/EndTime 为秒级。</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>网关实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>策略 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>业务资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>业务资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Kong Route ID</p>
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>业务协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>审核方向：request 或 response</p>
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * <p>是否为流式审核</p>
                     */
                    bool m_streaming;
                    bool m_streamingHasBeenSet;

                    /**
                     * <p>该审核单元是否标记为最终单元；不是是否命中/是否连接正常结束的判断依据。</p>
                     */
                    bool m_final;
                    bool m_finalHasBeenSet;

                    /**
                     * <p>归一化后的审核判定，可能为 allow、block、replace、error；不是原始自定义字段的任意值。观察模式仍可记录命中判定。</p>
                     */
                    std::string m_decision;
                    bool m_decisionHasBeenSet;

                    /**
                     * <p>策略配置动作</p>
                     */
                    std::string m_configuredAction;
                    bool m_configuredActionHasBeenSet;

                    /**
                     * <p>该审核记录的策略处理结果，如 allow、block、replace、error。需与 Decision、ConfiguredAction、ErrorCode 联合分析；记录不等于客户端已成功收到全部响应。</p>
                     */
                    std::string m_effectiveAction;
                    bool m_effectiveActionHasBeenSet;

                    /**
                     * <p>内容是否被改写</p>
                     */
                    bool m_rewritten;
                    bool m_rewrittenHasBeenSet;

                    /**
                     * <p>请求或响应是否被拦截</p>
                     */
                    bool m_blocked;
                    bool m_blockedHasBeenSet;

                    /**
                     * <p>本审核记录是否因失败放行发生降级；为 true 时不能认为内容已经审核通过。</p>
                     */
                    bool m_downgraded;
                    bool m_downgradedHasBeenSet;

                    /**
                     * <p>审核服务 HTTP 状态码</p>
                     */
                    int64_t m_providerStatusCode;
                    bool m_providerStatusCodeHasBeenSet;

                    /**
                     * <p>该审核调用耗时，单位毫秒，可含小数；不是完整模型请求时长或客户端首字延迟。</p>
                     */
                    double m_latencyMs;
                    bool m_latencyMsHasBeenSet;

                    /**
                     * <p>稳定错误码</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>审核原因或错误摘要</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILHIT_H_
