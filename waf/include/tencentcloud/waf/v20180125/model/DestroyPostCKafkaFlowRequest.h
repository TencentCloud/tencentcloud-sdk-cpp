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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESTROYPOSTCKAFKAFLOWREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESTROYPOSTCKAFKAFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DestroyPostCKafkaFlow请求参数结构体
                */
                class DestroyPostCKafkaFlowRequest : public AbstractModel
                {
                public:
                    DestroyPostCKafkaFlowRequest();
                    ~DestroyPostCKafkaFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>投递流的流ID，可以通过DescribePostCKafkaFlows接口获取</p>
                     * @return FlowId <p>投递流的流ID，可以通过DescribePostCKafkaFlows接口获取</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>投递流的流ID，可以通过DescribePostCKafkaFlows接口获取</p>
                     * @param _flowId <p>投递流的流ID，可以通过DescribePostCKafkaFlows接口获取</p>
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>1-访问日志，2-攻击日志，默认为访问日志。</p>
                     * @return LogType <p>1-访问日志，2-攻击日志，默认为访问日志。</p>
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置<p>1-访问日志，2-攻击日志，默认为访问日志。</p>
                     * @param _logType <p>1-访问日志，2-攻击日志，默认为访问日志。</p>
                     * 
                     */
                    void SetLogType(const int64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * <p>投递流的流ID，可以通过DescribePostCKafkaFlows接口获取</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>1-访问日志，2-攻击日志，默认为访问日志。</p>
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESTROYPOSTCKAFKAFLOWREQUEST_H_
