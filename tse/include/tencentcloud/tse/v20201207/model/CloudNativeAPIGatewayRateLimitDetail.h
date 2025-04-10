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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYRATELIMITDETAIL_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYRATELIMITDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/QpsThreshold.h>
#include <tencentcloud/tse/v20201207/model/ExternalRedis.h>
#include <tencentcloud/tse/v20201207/model/RateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/LimitRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关Tse 限流插件配置
                */
                class CloudNativeAPIGatewayRateLimitDetail : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayRateLimitDetail();
                    ~CloudNativeAPIGatewayRateLimitDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件启用状态
                     * @return Enabled 插件启用状态
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置插件启用状态
                     * @param _enabled 插件启用状态
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取qps阈值
                     * @return QpsThresholds qps阈值
                     * 
                     */
                    std::vector<QpsThreshold> GetQpsThresholds() const;

                    /**
                     * 设置qps阈值
                     * @param _qpsThresholds qps阈值
                     * 
                     */
                    void SetQpsThresholds(const std::vector<QpsThreshold>& _qpsThresholds);

                    /**
                     * 判断参数 QpsThresholds 是否已赋值
                     * @return QpsThresholds 是否已赋值
                     * 
                     */
                    bool QpsThresholdsHasBeenSet() const;

                    /**
                     * 获取需要进行流量控制的请求路径
                     * @return Path 需要进行流量控制的请求路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置需要进行流量控制的请求路径
                     * @param _path 需要进行流量控制的请求路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取需要进行流量控制的请求头Key
                     * @return Header 需要进行流量控制的请求头Key
                     * 
                     */
                    std::string GetHeader() const;

                    /**
                     * 设置需要进行流量控制的请求头Key
                     * @param _header 需要进行流量控制的请求头Key
                     * 
                     */
                    void SetHeader(const std::string& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取限流依据
ip service consumer credential path header
                     * @return LimitBy 限流依据
ip service consumer credential path header
                     * 
                     */
                    std::string GetLimitBy() const;

                    /**
                     * 设置限流依据
ip service consumer credential path header
                     * @param _limitBy 限流依据
ip service consumer credential path header
                     * 
                     */
                    void SetLimitBy(const std::string& _limitBy);

                    /**
                     * 判断参数 LimitBy 是否已赋值
                     * @return LimitBy 是否已赋值
                     * 
                     */
                    bool LimitByHasBeenSet() const;

                    /**
                     * 获取外部redis配置
                     * @return ExternalRedis 外部redis配置
                     * 
                     */
                    ExternalRedis GetExternalRedis() const;

                    /**
                     * 设置外部redis配置
                     * @param _externalRedis 外部redis配置
                     * 
                     */
                    void SetExternalRedis(const ExternalRedis& _externalRedis);

                    /**
                     * 判断参数 ExternalRedis 是否已赋值
                     * @return ExternalRedis 是否已赋值
                     * 
                     */
                    bool ExternalRedisHasBeenSet() const;

                    /**
                     * 获取计数器策略 
local 单机
redis  默认redis
external_redis 外部redis

                     * @return Policy 计数器策略 
local 单机
redis  默认redis
external_redis 外部redis

                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置计数器策略 
local 单机
redis  默认redis
external_redis 外部redis

                     * @param _policy 计数器策略 
local 单机
redis  默认redis
external_redis 外部redis

                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取响应配置，响应策略为text

                     * @return RateLimitResponse 响应配置，响应策略为text

                     * 
                     */
                    RateLimitResponse GetRateLimitResponse() const;

                    /**
                     * 设置响应配置，响应策略为text

                     * @param _rateLimitResponse 响应配置，响应策略为text

                     * 
                     */
                    void SetRateLimitResponse(const RateLimitResponse& _rateLimitResponse);

                    /**
                     * 判断参数 RateLimitResponse 是否已赋值
                     * @return RateLimitResponse 是否已赋值
                     * 
                     */
                    bool RateLimitResponseHasBeenSet() const;

                    /**
                     * 获取请求转发地址
                     * @return RateLimitResponseUrl 请求转发地址
                     * 
                     */
                    std::string GetRateLimitResponseUrl() const;

                    /**
                     * 设置请求转发地址
                     * @param _rateLimitResponseUrl 请求转发地址
                     * 
                     */
                    void SetRateLimitResponseUrl(const std::string& _rateLimitResponseUrl);

                    /**
                     * 判断参数 RateLimitResponseUrl 是否已赋值
                     * @return RateLimitResponseUrl 是否已赋值
                     * 
                     */
                    bool RateLimitResponseUrlHasBeenSet() const;

                    /**
                     * 获取响应策略
url请求转发
text 响应配置
default 直接返回

                     * @return ResponseType 响应策略
url请求转发
text 响应配置
default 直接返回

                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置响应策略
url请求转发
text 响应配置
default 直接返回

                     * @param _responseType 响应策略
url请求转发
text 响应配置
default 直接返回

                     * 
                     */
                    void SetResponseType(const std::string& _responseType);

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取是否隐藏限流客户端响应头
                     * @return HideClientHeaders 是否隐藏限流客户端响应头
                     * 
                     */
                    bool GetHideClientHeaders() const;

                    /**
                     * 设置是否隐藏限流客户端响应头
                     * @param _hideClientHeaders 是否隐藏限流客户端响应头
                     * 
                     */
                    void SetHideClientHeaders(const bool& _hideClientHeaders);

                    /**
                     * 判断参数 HideClientHeaders 是否已赋值
                     * @return HideClientHeaders 是否已赋值
                     * 
                     */
                    bool HideClientHeadersHasBeenSet() const;

                    /**
                     * 获取排队时间
                     * @return LineUpTime 排队时间
                     * 
                     */
                    int64_t GetLineUpTime() const;

                    /**
                     * 设置排队时间
                     * @param _lineUpTime 排队时间
                     * 
                     */
                    void SetLineUpTime(const int64_t& _lineUpTime);

                    /**
                     * 判断参数 LineUpTime 是否已赋值
                     * @return LineUpTime 是否已赋值
                     * 
                     */
                    bool LineUpTimeHasBeenSet() const;

                    /**
                     * 获取是否开启请求排队
                     * @return IsDelay 是否开启请求排队
                     * 
                     */
                    bool GetIsDelay() const;

                    /**
                     * 设置是否开启请求排队
                     * @param _isDelay 是否开启请求排队
                     * 
                     */
                    void SetIsDelay(const bool& _isDelay);

                    /**
                     * 判断参数 IsDelay 是否已赋值
                     * @return IsDelay 是否已赋值
                     * 
                     */
                    bool IsDelayHasBeenSet() const;

                    /**
                     * 获取基础限流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicLimitQpsThresholds 基础限流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QpsThreshold> GetBasicLimitQpsThresholds() const;

                    /**
                     * 设置基础限流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basicLimitQpsThresholds 基础限流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasicLimitQpsThresholds(const std::vector<QpsThreshold>& _basicLimitQpsThresholds);

                    /**
                     * 判断参数 BasicLimitQpsThresholds 是否已赋值
                     * @return BasicLimitQpsThresholds 是否已赋值
                     * 
                     */
                    bool BasicLimitQpsThresholdsHasBeenSet() const;

                    /**
                     * 获取参数限流的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitRules 参数限流的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LimitRule> GetLimitRules() const;

                    /**
                     * 设置参数限流的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitRules 参数限流的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitRules(const std::vector<LimitRule>& _limitRules);

                    /**
                     * 判断参数 LimitRules 是否已赋值
                     * @return LimitRules 是否已赋值
                     * 
                     */
                    bool LimitRulesHasBeenSet() const;

                private:

                    /**
                     * 插件启用状态
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * qps阈值
                     */
                    std::vector<QpsThreshold> m_qpsThresholds;
                    bool m_qpsThresholdsHasBeenSet;

                    /**
                     * 需要进行流量控制的请求路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 需要进行流量控制的请求头Key
                     */
                    std::string m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 限流依据
ip service consumer credential path header
                     */
                    std::string m_limitBy;
                    bool m_limitByHasBeenSet;

                    /**
                     * 外部redis配置
                     */
                    ExternalRedis m_externalRedis;
                    bool m_externalRedisHasBeenSet;

                    /**
                     * 计数器策略 
local 单机
redis  默认redis
external_redis 外部redis

                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 响应配置，响应策略为text

                     */
                    RateLimitResponse m_rateLimitResponse;
                    bool m_rateLimitResponseHasBeenSet;

                    /**
                     * 请求转发地址
                     */
                    std::string m_rateLimitResponseUrl;
                    bool m_rateLimitResponseUrlHasBeenSet;

                    /**
                     * 响应策略
url请求转发
text 响应配置
default 直接返回

                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * 是否隐藏限流客户端响应头
                     */
                    bool m_hideClientHeaders;
                    bool m_hideClientHeadersHasBeenSet;

                    /**
                     * 排队时间
                     */
                    int64_t m_lineUpTime;
                    bool m_lineUpTimeHasBeenSet;

                    /**
                     * 是否开启请求排队
                     */
                    bool m_isDelay;
                    bool m_isDelayHasBeenSet;

                    /**
                     * 基础限流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QpsThreshold> m_basicLimitQpsThresholds;
                    bool m_basicLimitQpsThresholdsHasBeenSet;

                    /**
                     * 参数限流的规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LimitRule> m_limitRules;
                    bool m_limitRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYRATELIMITDETAIL_H_
