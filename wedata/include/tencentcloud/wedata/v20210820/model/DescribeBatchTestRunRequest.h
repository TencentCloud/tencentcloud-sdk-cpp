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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHTESTRUNREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHTESTRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TestRunBatchItem.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeBatchTestRun请求参数结构体
                */
                class DescribeBatchTestRunRequest : public AbstractModel
                {
                public:
                    DescribeBatchTestRunRequest();
                    ~DescribeBatchTestRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量任务列表
                     * @return BatchTasks 批量任务列表
                     * 
                     */
                    std::vector<TestRunBatchItem> GetBatchTasks() const;

                    /**
                     * 设置批量任务列表
                     * @param _batchTasks 批量任务列表
                     * 
                     */
                    void SetBatchTasks(const std::vector<TestRunBatchItem>& _batchTasks);

                    /**
                     * 判断参数 BatchTasks 是否已赋值
                     * @return BatchTasks 是否已赋值
                     * 
                     */
                    bool BatchTasksHasBeenSet() const;

                private:

                    /**
                     * 批量任务列表
                     */
                    std::vector<TestRunBatchItem> m_batchTasks;
                    bool m_batchTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBATCHTESTRUNREQUEST_H_
