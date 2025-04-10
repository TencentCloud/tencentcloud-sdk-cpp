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
                     * 获取投递流的流ID
                     * @return FlowId 投递流的流ID
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置投递流的流ID
                     * @param _flowId 投递流的流ID
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
                     * 获取1-访问日志，2-攻击日志，默认为访问日志。
                     * @return LogType 1-访问日志，2-攻击日志，默认为访问日志。
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置1-访问日志，2-攻击日志，默认为访问日志。
                     * @param _logType 1-访问日志，2-攻击日志，默认为访问日志。
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
                     * 投递流的流ID
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 1-访问日志，2-攻击日志，默认为访问日志。
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESTROYPOSTCKAFKAFLOWREQUEST_H_
