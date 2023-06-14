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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_COMPLETEEXPANSIONRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_COMPLETEEXPANSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CompleteExpansion返回参数结构体
                */
                class CompleteExpansionResponse : public AbstractModel
                {
                public:
                    CompleteExpansionResponse();
                    ~CompleteExpansionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流程ID，可通过接口DescribeFlowStatus查询立即切换升级任务的状态。
                     * @return FlowId 流程ID，可通过接口DescribeFlowStatus查询立即切换升级任务的状态。
                     * 
                     */
                    uint64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 流程ID，可通过接口DescribeFlowStatus查询立即切换升级任务的状态。
                     */
                    uint64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_COMPLETEEXPANSIONRESPONSE_H_
