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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTTYPESUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTTYPESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeEscapeEventTypeSummary返回参数结构体
                */
                class DescribeEscapeEventTypeSummaryResponse : public AbstractModel
                {
                public:
                    DescribeEscapeEventTypeSummaryResponse();
                    ~DescribeEscapeEventTypeSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取容器逃逸事件数
                     * @return ContainerEscapeEventCount 容器逃逸事件数
                     * 
                     */
                    int64_t GetContainerEscapeEventCount() const;

                    /**
                     * 判断参数 ContainerEscapeEventCount 是否已赋值
                     * @return ContainerEscapeEventCount 是否已赋值
                     * 
                     */
                    bool ContainerEscapeEventCountHasBeenSet() const;

                    /**
                     * 获取程序提权事件数
                     * @return ProcessPrivilegeEventCount 程序提权事件数
                     * 
                     */
                    int64_t GetProcessPrivilegeEventCount() const;

                    /**
                     * 判断参数 ProcessPrivilegeEventCount 是否已赋值
                     * @return ProcessPrivilegeEventCount 是否已赋值
                     * 
                     */
                    bool ProcessPrivilegeEventCountHasBeenSet() const;

                    /**
                     * 获取风险容器事件数
                     * @return RiskContainerEventCount 风险容器事件数
                     * 
                     */
                    int64_t GetRiskContainerEventCount() const;

                    /**
                     * 判断参数 RiskContainerEventCount 是否已赋值
                     * @return RiskContainerEventCount 是否已赋值
                     * 
                     */
                    bool RiskContainerEventCountHasBeenSet() const;

                    /**
                     * 获取逃逸事件待处理数
                     * @return PendingEscapeEventCount 逃逸事件待处理数
                     * 
                     */
                    int64_t GetPendingEscapeEventCount() const;

                    /**
                     * 判断参数 PendingEscapeEventCount 是否已赋值
                     * @return PendingEscapeEventCount 是否已赋值
                     * 
                     */
                    bool PendingEscapeEventCountHasBeenSet() const;

                private:

                    /**
                     * 容器逃逸事件数
                     */
                    int64_t m_containerEscapeEventCount;
                    bool m_containerEscapeEventCountHasBeenSet;

                    /**
                     * 程序提权事件数
                     */
                    int64_t m_processPrivilegeEventCount;
                    bool m_processPrivilegeEventCountHasBeenSet;

                    /**
                     * 风险容器事件数
                     */
                    int64_t m_riskContainerEventCount;
                    bool m_riskContainerEventCountHasBeenSet;

                    /**
                     * 逃逸事件待处理数
                     */
                    int64_t m_pendingEscapeEventCount;
                    bool m_pendingEscapeEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTTYPESUMMARYRESPONSE_H_
