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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCONTRACTREVIEWTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCONTRACTREVIEWTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateBatchContractReviewTask返回参数结构体
                */
                class CreateBatchContractReviewTaskResponse : public AbstractModel
                {
                public:
                    CreateBatchContractReviewTaskResponse();
                    ~CreateBatchContractReviewTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同审查的任务ID列表，每个任务ID为32位字符串。
建议开发者保存此任务ID，后续[查询合同审查任务取详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask/)需要此任务ID。

注意：`返回的索引和ResourceIds数组一致`
                     * @return TaskIds 合同审查的任务ID列表，每个任务ID为32位字符串。
建议开发者保存此任务ID，后续[查询合同审查任务取详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask/)需要此任务ID。

注意：`返回的索引和ResourceIds数组一致`
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * 合同审查的任务ID列表，每个任务ID为32位字符串。
建议开发者保存此任务ID，后续[查询合同审查任务取详情](https://qian.tencent.com/developers/companyApis/%E5%90%88%E5%90%8C%E6%99%BA%E8%83%BD%E7%9B%B8%E5%85%B3%E6%8E%A5%E5%8F%A3/DescribeContractReviewTask/)需要此任务ID。

注意：`返回的索引和ResourceIds数组一致`
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCONTRACTREVIEWTASKRESPONSE_H_
