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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ModifySyncJob请求参数结构体
                */
                class ModifySyncJobRequest : public AbstractModel
                {
                public:
                    ModifySyncJobRequest();
                    ~ModifySyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的灾备同步任务ID
                     * @return JobId 待修改的灾备同步任务ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置待修改的灾备同步任务ID
                     * @param JobId 待修改的灾备同步任务ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取灾备同步任务名称
                     * @return JobName 灾备同步任务名称
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置灾备同步任务名称
                     * @param JobName 灾备同步任务名称
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取灾备同步任务配置选项
                     * @return SyncOption 灾备同步任务配置选项
                     */
                    SyncOption GetSyncOption() const;

                    /**
                     * 设置灾备同步任务配置选项
                     * @param SyncOption 灾备同步任务配置选项
                     */
                    void SetSyncOption(const SyncOption& _syncOption);

                    /**
                     * 判断参数 SyncOption 是否已赋值
                     * @return SyncOption 是否已赋值
                     */
                    bool SyncOptionHasBeenSet() const;

                    /**
                     * 获取当选择'指定库表'灾备同步的时候, 需要设置待同步的源数据库表信息,用符合json数组格式的字符串描述, 如下所例。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     * @return DatabaseInfo 当选择'指定库表'灾备同步的时候, 需要设置待同步的源数据库表信息,用符合json数组格式的字符串描述, 如下所例。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置当选择'指定库表'灾备同步的时候, 需要设置待同步的源数据库表信息,用符合json数组格式的字符串描述, 如下所例。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     * @param DatabaseInfo 当选择'指定库表'灾备同步的时候, 需要设置待同步的源数据库表信息,用符合json数组格式的字符串描述, 如下所例。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     */
                    bool DatabaseInfoHasBeenSet() const;

                private:

                    /**
                     * 待修改的灾备同步任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 灾备同步任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 灾备同步任务配置选项
                     */
                    SyncOption m_syncOption;
                    bool m_syncOptionHasBeenSet;

                    /**
                     * 当选择'指定库表'灾备同步的时候, 需要设置待同步的源数据库表信息,用符合json数组格式的字符串描述, 如下所例。
对于database-table两级结构的数据库：
[{"Database":"db1","Table":["table1","table2"]},{"Database":"db2"}]
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSYNCJOBREQUEST_H_
