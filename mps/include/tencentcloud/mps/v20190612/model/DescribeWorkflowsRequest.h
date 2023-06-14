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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORKFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeWorkflows请求参数结构体
                */
                class DescribeWorkflowsRequest : public AbstractModel
                {
                public:
                    DescribeWorkflowsRequest();
                    ~DescribeWorkflowsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作流 ID 过滤条件，数组长度限制：100。
                     * @return WorkflowIds 工作流 ID 过滤条件，数组长度限制：100。
                     * 
                     */
                    std::vector<int64_t> GetWorkflowIds() const;

                    /**
                     * 设置工作流 ID 过滤条件，数组长度限制：100。
                     * @param _workflowIds 工作流 ID 过滤条件，数组长度限制：100。
                     * 
                     */
                    void SetWorkflowIds(const std::vector<int64_t>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区分工作流状态。
                     * @return Status 工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区分工作流状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区分工作流状态。
                     * @param _status 工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区分工作流状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：100。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：100。
                     * @param _limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 工作流 ID 过滤条件，数组长度限制：100。
                     */
                    std::vector<int64_t> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * 工作流状态，取值范围：
<li>Enabled：已启用，</li>
<li>Disabled：已禁用。</li>
不填此参数，则不区分工作流状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEWORKFLOWSREQUEST_H_
