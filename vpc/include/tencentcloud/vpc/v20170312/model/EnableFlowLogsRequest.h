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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEFLOWLOGSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEFLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * EnableFlowLogs请求参数结构体
                */
                class EnableFlowLogsRequest : public AbstractModel
                {
                public:
                    EnableFlowLogsRequest();
                    ~EnableFlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流日志Id。
                     * @return FlowLogIds 流日志Id。
                     * 
                     */
                    std::vector<std::string> GetFlowLogIds() const;

                    /**
                     * 设置流日志Id。
                     * @param _flowLogIds 流日志Id。
                     * 
                     */
                    void SetFlowLogIds(const std::vector<std::string>& _flowLogIds);

                    /**
                     * 判断参数 FlowLogIds 是否已赋值
                     * @return FlowLogIds 是否已赋值
                     * 
                     */
                    bool FlowLogIdsHasBeenSet() const;

                private:

                    /**
                     * 流日志Id。
                     */
                    std::vector<std::string> m_flowLogIds;
                    bool m_flowLogIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENABLEFLOWLOGSREQUEST_H_
