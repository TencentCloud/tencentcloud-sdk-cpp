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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TERMINATETASKFLOWBATCHREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TERMINATETASKFLOWBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * TerminateTaskFlowBatch请求参数结构体
                */
                class TerminateTaskFlowBatchRequest : public AbstractModel
                {
                public:
                    TerminateTaskFlowBatchRequest();
                    ~TerminateTaskFlowBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流批次 ID，在[工作流执行记录](https://console.cloud.tencent.com/tsf/tct?rid=1&tab=taskflow)列表页第一列获取。
                     * @return FlowBatchId 工作流批次 ID，在[工作流执行记录](https://console.cloud.tencent.com/tsf/tct?rid=1&tab=taskflow)列表页第一列获取。
                     * 
                     */
                    std::string GetFlowBatchId() const;

                    /**
                     * 设置工作流批次 ID，在[工作流执行记录](https://console.cloud.tencent.com/tsf/tct?rid=1&tab=taskflow)列表页第一列获取。
                     * @param _flowBatchId 工作流批次 ID，在[工作流执行记录](https://console.cloud.tencent.com/tsf/tct?rid=1&tab=taskflow)列表页第一列获取。
                     * 
                     */
                    void SetFlowBatchId(const std::string& _flowBatchId);

                    /**
                     * 判断参数 FlowBatchId 是否已赋值
                     * @return FlowBatchId 是否已赋值
                     * 
                     */
                    bool FlowBatchIdHasBeenSet() const;

                private:

                    /**
                     * 工作流批次 ID，在[工作流执行记录](https://console.cloud.tencent.com/tsf/tct?rid=1&tab=taskflow)列表页第一列获取。
                     */
                    std::string m_flowBatchId;
                    bool m_flowBatchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TERMINATETASKFLOWBATCHREQUEST_H_
