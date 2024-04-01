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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayCanaryRules请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayCanaryRulesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayCanaryRulesRequest();
                    ~DescribeCloudNativeAPIGatewayCanaryRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
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
                     * 获取服务 ID
                     * @return ServiceId 服务 ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务 ID
                     * @param _serviceId 服务 ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取灰度规则类别 Standard｜Lane
                     * @return RuleType 灰度规则类别 Standard｜Lane
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置灰度规则类别 Standard｜Lane
                     * @param _ruleType 灰度规则类别 Standard｜Lane
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取列表数量
                     * @return Limit 列表数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置列表数量
                     * @param _limit 列表数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取列表offset
                     * @return Offset 列表offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置列表offset
                     * @param _offset 列表offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 服务 ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 灰度规则类别 Standard｜Lane
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 列表数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 列表offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCANARYRULESREQUEST_H_
