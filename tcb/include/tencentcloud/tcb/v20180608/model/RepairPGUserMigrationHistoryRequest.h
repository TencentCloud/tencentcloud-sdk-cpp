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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_REPAIRPGUSERMIGRATIONHISTORYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_REPAIRPGUSERMIGRATIONHISTORYREQUEST_H_

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
                * RepairPGUserMigrationHistory请求参数结构体
                */
                class RepairPGUserMigrationHistoryRequest : public AbstractModel
                {
                public:
                    RepairPGUserMigrationHistoryRequest();
                    ~RepairPGUserMigrationHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云开发环境ID</p>
                     * @return EnvId <p>云开发环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>云开发环境ID</p>
                     * @param _envId <p>云开发环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>migration版本</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * @return MigrationVersion <p>migration版本</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * 
                     */
                    std::string GetMigrationVersion() const;

                    /**
                     * 设置<p>migration版本</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * @param _migrationVersion <p>migration版本</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * 
                     */
                    void SetMigrationVersion(const std::string& _migrationVersion);

                    /**
                     * 判断参数 MigrationVersion 是否已赋值
                     * @return MigrationVersion 是否已赋值
                     * 
                     */
                    bool MigrationVersionHasBeenSet() const;

                    /**
                     * 获取<p>migration 版本名</p><p>入参限制：限制小写字母和下划线</p>
                     * @return Name <p>migration 版本名</p><p>入参限制：限制小写字母和下划线</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>migration 版本名</p><p>入参限制：限制小写字母和下划线</p>
                     * @param _name <p>migration 版本名</p><p>入参限制：限制小写字母和下划线</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>applied： 已应用</li><li>reverted： 表示删除 history 记录</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>applied： 已应用</li><li>reverted： 表示删除 history 记录</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>applied： 已应用</li><li>reverted： 表示删除 history 记录</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>applied： 已应用</li><li>reverted： 表示删除 history 记录</li></ul>
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
                     * 获取<p>修复原因</p>
                     * @return Reason <p>修复原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>修复原因</p>
                     * @param _reason <p>修复原因</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>applied的时候填写，记录应用的sql语句</p>
                     * @return Query <p>applied的时候填写，记录应用的sql语句</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>applied的时候填写，记录应用的sql语句</p>
                     * @param _query <p>applied的时候填写，记录应用的sql语句</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>云开发环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>migration版本</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     */
                    std::string m_migrationVersion;
                    bool m_migrationVersionHasBeenSet;

                    /**
                     * <p>migration 版本名</p><p>入参限制：限制小写字母和下划线</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>applied： 已应用</li><li>reverted： 表示删除 history 记录</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>修复原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>applied的时候填写，记录应用的sql语句</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_REPAIRPGUSERMIGRATIONHISTORYREQUEST_H_
