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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPGUSERMIGRATIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPGUSERMIGRATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribePGUserMigration返回参数结构体
                */
                class DescribePGUserMigrationResponse : public AbstractModel
                {
                public:
                    DescribePGUserMigrationResponse();
                    ~DescribePGUserMigrationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @return Version <p>版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>版本名</p><p>参数格式：只允许小写字母和下划线</p>
                     * @return Name <p>版本名</p><p>参数格式：只允许小写字母和下划线</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>要执行的migration sql 语句</p>
                     * @return Query <p>要执行的migration sql 语句</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>回滚的sql 语句</p>
                     * @return Rollback <p>回滚的sql 语句</p>
                     * 
                     */
                    std::string GetRollback() const;

                    /**
                     * 判断参数 Rollback 是否已赋值
                     * @return Rollback 是否已赋值
                     * 
                     */
                    bool RollbackHasBeenSet() const;

                    /**
                     * 获取<p>migration query 语句的checksum值</p><p>由服务端自动生成，同版本 checksum 不一致会拒绝执行</p>
                     * @return Checksum <p>migration query 语句的checksum值</p><p>由服务端自动生成，同版本 checksum 不一致会拒绝执行</p>
                     * 
                     */
                    std::string GetChecksum() const;

                    /**
                     * 判断参数 Checksum 是否已赋值
                     * @return Checksum 是否已赋值
                     * 
                     */
                    bool ChecksumHasBeenSet() const;

                    /**
                     * 获取<p>用于标记调用来源</p>
                     * @return Source <p>用于标记调用来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>用于标记该条migration由谁创建，目前默认调用的用户uin</p>
                     * @return CreatedBy <p>用于标记该条migration由谁创建，目前默认调用的用户uin</p>
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取<p>该migration创建时间</p>
                     * @return CreatedAt <p>该migration创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>该migration应用时间</p>
                     * @return AppliedAt <p>该migration应用时间</p>
                     * 
                     */
                    std::string GetAppliedAt() const;

                    /**
                     * 判断参数 AppliedAt 是否已赋值
                     * @return AppliedAt 是否已赋值
                     * 
                     */
                    bool AppliedAtHasBeenSet() const;

                    /**
                     * 获取<p>该migration执行耗时</p><p>单位：毫秒</p>
                     * @return DurationMs <p>该migration执行耗时</p><p>单位：毫秒</p>
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                private:

                    /**
                     * <p>版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>版本名</p><p>参数格式：只允许小写字母和下划线</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>要执行的migration sql 语句</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>回滚的sql 语句</p>
                     */
                    std::string m_rollback;
                    bool m_rollbackHasBeenSet;

                    /**
                     * <p>migration query 语句的checksum值</p><p>由服务端自动生成，同版本 checksum 不一致会拒绝执行</p>
                     */
                    std::string m_checksum;
                    bool m_checksumHasBeenSet;

                    /**
                     * <p>用于标记调用来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>用于标记该条migration由谁创建，目前默认调用的用户uin</p>
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * <p>该migration创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>该migration应用时间</p>
                     */
                    std::string m_appliedAt;
                    bool m_appliedAtHasBeenSet;

                    /**
                     * <p>该migration执行耗时</p><p>单位：毫秒</p>
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPGUSERMIGRATIONRESPONSE_H_
