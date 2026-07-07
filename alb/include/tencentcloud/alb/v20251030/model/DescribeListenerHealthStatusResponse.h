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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RuleHealthStatusInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListenerHealthStatus返回参数结构体
                */
                class DescribeListenerHealthStatusResponse : public AbstractModel
                {
                public:
                    DescribeListenerHealthStatusResponse();
                    ~DescribeListenerHealthStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @return ListenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取监听器端口。
                     * @return ListenerPort 监听器端口。
                     * 
                     */
                    std::string GetListenerPort() const;

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取监听器协议。
                     * @return ListenerProtocol 监听器协议。
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 判断参数 ListenerProtocol 是否已赋值
                     * @return ListenerProtocol 是否已赋值
                     * 
                     */
                    bool ListenerProtocolHasBeenSet() const;

                    /**
                     * 获取下一次查询的令牌（Token）。为空时表示这是最后一页。
                     * @return NextToken 下一次查询的令牌（Token）。为空时表示这是最后一页。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取转发规则健康状态。
                     * @return RuleHealthStatusInfos 转发规则健康状态。
                     * 
                     */
                    std::vector<RuleHealthStatusInfo> GetRuleHealthStatusInfos() const;

                    /**
                     * 判断参数 RuleHealthStatusInfos 是否已赋值
                     * @return RuleHealthStatusInfos 是否已赋值
                     * 
                     */
                    bool RuleHealthStatusInfosHasBeenSet() const;

                private:

                    /**
                     * 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器端口。
                     */
                    std::string m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * 监听器协议。
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * 下一次查询的令牌（Token）。为空时表示这是最后一页。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 转发规则健康状态。
                     */
                    std::vector<RuleHealthStatusInfo> m_ruleHealthStatusInfos;
                    bool m_ruleHealthStatusInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSRESPONSE_H_
