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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_LISTPGUSERMIGRATIONSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_LISTPGUSERMIGRATIONSRESPONSE_H_

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
                * ListPGUserMigrations返回参数结构体
                */
                class ListPGUserMigrationsResponse : public AbstractModel
                {
                public:
                    ListPGUserMigrationsResponse();
                    ~ListPGUserMigrationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数量</p>
                     * @return Total <p>总数量</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>已应用最新版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @return LatestVersion <p>已应用最新版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取<p>已应用migration列表</p>
                     * @return Migrations <p>已应用migration列表</p>
                     * 
                     */
                    std::vector<MigrationSummary> GetMigrations() const;

                    /**
                     * 判断参数 Migrations 是否已赋值
                     * @return Migrations 是否已赋值
                     * 
                     */
                    bool MigrationsHasBeenSet() const;

                private:

                    /**
                     * <p>总数量</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>已应用最新版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * <p>已应用migration列表</p>
                     */
                    std::vector<MigrationSummary> m_migrations;
                    bool m_migrationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_LISTPGUSERMIGRATIONSRESPONSE_H_
