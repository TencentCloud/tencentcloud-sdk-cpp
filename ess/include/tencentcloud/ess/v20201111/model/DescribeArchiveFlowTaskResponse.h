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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEARCHIVEFLOWTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEARCHIVEFLOWTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ArchiveFlowResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeArchiveFlowTask返回参数结构体
                */
                class DescribeArchiveFlowTaskResponse : public AbstractModel
                {
                public:
                    DescribeArchiveFlowTaskResponse();
                    ~DescribeArchiveFlowTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 任务完成</li><li>3： 任务完成(存在失败)</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 任务完成</li><li>3： 任务完成(存在失败)</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>每条合同的处理结果，与创建任务的archive_flows列表顺序一致</p>
                     * @return ArchiveFlowResults <p>每条合同的处理结果，与创建任务的archive_flows列表顺序一致</p>
                     * 
                     */
                    std::vector<ArchiveFlowResult> GetArchiveFlowResults() const;

                    /**
                     * 判断参数 ArchiveFlowResults 是否已赋值
                     * @return ArchiveFlowResults 是否已赋值
                     * 
                     */
                    bool ArchiveFlowResultsHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 任务完成</li><li>3： 任务完成(存在失败)</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>每条合同的处理结果，与创建任务的archive_flows列表顺序一致</p>
                     */
                    std::vector<ArchiveFlowResult> m_archiveFlowResults;
                    bool m_archiveFlowResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEARCHIVEFLOWTASKRESPONSE_H_
