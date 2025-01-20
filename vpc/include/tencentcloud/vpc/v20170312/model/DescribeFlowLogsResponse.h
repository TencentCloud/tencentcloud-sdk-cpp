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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/FlowLog.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeFlowLogs返回参数结构体
                */
                class DescribeFlowLogsResponse : public AbstractModel
                {
                public:
                    DescribeFlowLogsResponse();
                    ~DescribeFlowLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流日志实例集合。
                     * @return FlowLog 流日志实例集合。
                     * 
                     */
                    std::vector<FlowLog> GetFlowLog() const;

                    /**
                     * 判断参数 FlowLog 是否已赋值
                     * @return FlowLog 是否已赋值
                     * 
                     */
                    bool FlowLogHasBeenSet() const;

                    /**
                     * 获取流日志总数目。
                     * @return TotalNum 流日志总数目。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * 流日志实例集合。
                     */
                    std::vector<FlowLog> m_flowLog;
                    bool m_flowLogHasBeenSet;

                    /**
                     * 流日志总数目。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSRESPONSE_H_
