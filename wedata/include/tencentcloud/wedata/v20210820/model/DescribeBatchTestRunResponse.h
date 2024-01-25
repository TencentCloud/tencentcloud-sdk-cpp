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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHTESTRUNRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHTESTRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DescribeTestRunBatchItem.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeBatchTestRun返回参数结构体
                */
                class DescribeBatchTestRunResponse : public AbstractModel
                {
                public:
                    DescribeBatchTestRunResponse();
                    ~DescribeBatchTestRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务批量详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchTaskResult 任务批量详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeTestRunBatchItem> GetBatchTaskResult() const;

                    /**
                     * 判断参数 BatchTaskResult 是否已赋值
                     * @return BatchTaskResult 是否已赋值
                     * 
                     */
                    bool BatchTaskResultHasBeenSet() const;

                private:

                    /**
                     * 任务批量详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeTestRunBatchItem> m_batchTaskResult;
                    bool m_batchTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHTESTRUNRESPONSE_H_
