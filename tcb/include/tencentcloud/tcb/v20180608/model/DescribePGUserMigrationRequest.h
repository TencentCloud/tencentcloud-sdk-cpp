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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPGUSERMIGRATIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPGUSERMIGRATIONREQUEST_H_

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
                * DescribePGUserMigration请求参数结构体
                */
                class DescribePGUserMigrationRequest : public AbstractModel
                {
                public:
                    DescribePGUserMigrationRequest();
                    ~DescribePGUserMigrationRequest() = default;
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
                     * 获取<p>版本号</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * @return MigrationVersion <p>版本号</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * 
                     */
                    std::string GetMigrationVersion() const;

                    /**
                     * 设置<p>版本号</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * @param _migrationVersion <p>版本号</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     * 
                     */
                    void SetMigrationVersion(const std::string& _migrationVersion);

                    /**
                     * 判断参数 MigrationVersion 是否已赋值
                     * @return MigrationVersion 是否已赋值
                     * 
                     */
                    bool MigrationVersionHasBeenSet() const;

                private:

                    /**
                     * <p>云开发环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>版本号</p><p>参数格式：14位时间格式</p><p>入参限制：纯数字</p>
                     */
                    std::string m_migrationVersion;
                    bool m_migrationVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPGUSERMIGRATIONREQUEST_H_
