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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENODEHEALTHOPTRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENODEHEALTHOPTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeNodeHealthOpt返回参数结构体
                */
                class DescribeNodeHealthOptResponse : public AbstractModel
                {
                public:
                    DescribeNodeHealthOptResponse();
                    ~DescribeNodeHealthOptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0-异常；1-正常
                     * @return NodeState 0-异常；1-正常
                     * 
                     */
                    int64_t GetNodeState() const;

                    /**
                     * 判断参数 NodeState 是否已赋值
                     * @return NodeState 是否已赋值
                     * 
                     */
                    bool NodeStateHasBeenSet() const;

                    /**
                     * 获取最近一次健康检查的时间
                     * @return LatestHealthCheckTime 最近一次健康检查的时间
                     * 
                     */
                    std::string GetLatestHealthCheckTime() const;

                    /**
                     * 判断参数 LatestHealthCheckTime 是否已赋值
                     * @return LatestHealthCheckTime 是否已赋值
                     * 
                     */
                    bool LatestHealthCheckTimeHasBeenSet() const;

                private:

                    /**
                     * 0-异常；1-正常
                     */
                    int64_t m_nodeState;
                    bool m_nodeStateHasBeenSet;

                    /**
                     * 最近一次健康检查的时间
                     */
                    std::string m_latestHealthCheckTime;
                    bool m_latestHealthCheckTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENODEHEALTHOPTRESPONSE_H_
