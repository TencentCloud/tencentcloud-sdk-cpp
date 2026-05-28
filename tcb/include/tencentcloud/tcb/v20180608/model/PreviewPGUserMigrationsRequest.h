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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PREVIEWPGUSERMIGRATIONSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PREVIEWPGUSERMIGRATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MigrationInput.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * PreviewPGUserMigrations请求参数结构体
                */
                class PreviewPGUserMigrationsRequest : public AbstractModel
                {
                public:
                    PreviewPGUserMigrationsRequest();
                    ~PreviewPGUserMigrationsRequest() = default;
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
                     * 获取<p>预览要执行的migration 列表</p>
                     * @return Migrations <p>预览要执行的migration 列表</p>
                     * 
                     */
                    std::vector<MigrationInput> GetMigrations() const;

                    /**
                     * 设置<p>预览要执行的migration 列表</p>
                     * @param _migrations <p>预览要执行的migration 列表</p>
                     * 
                     */
                    void SetMigrations(const std::vector<MigrationInput>& _migrations);

                    /**
                     * 判断参数 Migrations 是否已赋值
                     * @return Migrations 是否已赋值
                     * 
                     */
                    bool MigrationsHasBeenSet() const;

                    /**
                     * 获取<p>标记请求来源</p>
                     * @return Source <p>标记请求来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>标记请求来源</p>
                     * @param _source <p>标记请求来源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * <p>云开发环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>预览要执行的migration 列表</p>
                     */
                    std::vector<MigrationInput> m_migrations;
                    bool m_migrationsHasBeenSet;

                    /**
                     * <p>标记请求来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PREVIEWPGUSERMIGRATIONSREQUEST_H_
