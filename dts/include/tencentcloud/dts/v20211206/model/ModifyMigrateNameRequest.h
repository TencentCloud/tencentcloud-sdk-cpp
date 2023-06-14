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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATENAMEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATENAMEREQUEST_H_

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
                * ModifyMigrateName请求参数结构体
                */
                class ModifyMigrateNameRequest : public AbstractModel
                {
                public:
                    ModifyMigrateNameRequest();
                    ~ModifyMigrateNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务id
                     * @return JobId 迁移任务id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务id
                     * @param _jobId 迁移任务id
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
                     * 获取修改后的迁移任务名
                     * @return JobName 修改后的迁移任务名
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置修改后的迁移任务名
                     * @param _jobName 修改后的迁移任务名
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                private:

                    /**
                     * 迁移任务id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 修改后的迁移任务名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATENAMEREQUEST_H_
