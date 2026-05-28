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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ROLLBACKPGUSERMIGRATIONSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ROLLBACKPGUSERMIGRATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MigrationSummary.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * RollbackPGUserMigrations返回参数结构体
                */
                class RollbackPGUserMigrationsResponse : public AbstractModel
                {
                public:
                    RollbackPGUserMigrationsResponse();
                    ~RollbackPGUserMigrationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p><p>可通过DescribeTaskResult 接口查询进度</p>
                     * @return TaskId <p>任务ID</p><p>可通过DescribeTaskResult 接口查询进度</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>已成功回滚并删除 history 的 migration</p>
                     * @return RolledBack <p>已成功回滚并删除 history 的 migration</p>
                     * 
                     */
                    std::vector<MigrationSummary> GetRolledBack() const;

                    /**
                     * 判断参数 RolledBack 是否已赋值
                     * @return RolledBack 是否已赋值
                     * 
                     */
                    bool RolledBackHasBeenSet() const;

                    /**
                     * 获取<p>未提供 Rollback SQL、视为成功并删除 history 的 migration</p>
                     * @return SkippedRollbackSql <p>未提供 Rollback SQL、视为成功并删除 history 的 migration</p>
                     * 
                     */
                    std::vector<MigrationSummary> GetSkippedRollbackSql() const;

                    /**
                     * 判断参数 SkippedRollbackSql 是否已赋值
                     * @return SkippedRollbackSql 是否已赋值
                     * 
                     */
                    bool SkippedRollbackSqlHasBeenSet() const;

                    /**
                     * 获取<p>执行 Rollback SQL 失败的 migration，可为空</p>
                     * @return Failed <p>执行 Rollback SQL 失败的 migration，可为空</p>
                     * 
                     */
                    MigrationSummary GetFailed() const;

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p><p>可通过DescribeTaskResult 接口查询进度</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>已成功回滚并删除 history 的 migration</p>
                     */
                    std::vector<MigrationSummary> m_rolledBack;
                    bool m_rolledBackHasBeenSet;

                    /**
                     * <p>未提供 Rollback SQL、视为成功并删除 history 的 migration</p>
                     */
                    std::vector<MigrationSummary> m_skippedRollbackSql;
                    bool m_skippedRollbackSqlHasBeenSet;

                    /**
                     * <p>执行 Rollback SQL 失败的 migration，可为空</p>
                     */
                    MigrationSummary m_failed;
                    bool m_failedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ROLLBACKPGUSERMIGRATIONSRESPONSE_H_
