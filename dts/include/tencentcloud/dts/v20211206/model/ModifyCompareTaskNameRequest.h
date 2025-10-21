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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKNAMEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyCompareTaskName请求参数结构体
                */
                class ModifyCompareTaskNameRequest : public AbstractModel
                {
                public:
                    ModifyCompareTaskNameRequest();
                    ~ModifyCompareTaskNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务 Id，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * @return JobId 迁移任务 Id，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务 Id，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * @param _jobId 迁移任务 Id，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * @return CompareTaskId 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * @param _compareTaskId 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取一致性校验任务名称
                     * @return TaskName 一致性校验任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置一致性校验任务名称
                     * @param _taskName 一致性校验任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                private:

                    /**
                     * 迁移任务 Id，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9，可通过[DescribeMigrationJobs](https://cloud.tencent.com/document/product/571/82084)接口获取。

                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 一致性校验任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKNAMEREQUEST_H_
