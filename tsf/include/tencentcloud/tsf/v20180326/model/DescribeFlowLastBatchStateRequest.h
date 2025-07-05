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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEFLOWLASTBATCHSTATEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEFLOWLASTBATCHSTATEREQUEST_H_

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
                * DescribeFlowLastBatchState请求参数结构体
                */
                class DescribeFlowLastBatchStateRequest : public AbstractModel
                {
                public:
                    DescribeFlowLastBatchStateRequest();
                    ~DescribeFlowLastBatchStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流 ID
                     * @return FlowId 工作流 ID
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置工作流 ID
                     * @param _flowId 工作流 ID
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 工作流 ID
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEFLOWLASTBATCHSTATEREQUEST_H_
