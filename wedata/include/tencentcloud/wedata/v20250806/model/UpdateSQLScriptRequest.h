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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/SQLScriptConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateSQLScript请求参数结构体
                */
                class UpdateSQLScriptRequest : public AbstractModel
                {
                public:
                    UpdateSQLScriptRequest();
                    ~UpdateSQLScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取探索脚本Id
                     * @return ScriptId 探索脚本Id
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置探索脚本Id
                     * @param _scriptId 探索脚本Id
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据探索脚本配置
                     * @return ScriptConfig 数据探索脚本配置
                     * 
                     */
                    SQLScriptConfig GetScriptConfig() const;

                    /**
                     * 设置数据探索脚本配置
                     * @param _scriptConfig 数据探索脚本配置
                     * 
                     */
                    void SetScriptConfig(const SQLScriptConfig& _scriptConfig);

                    /**
                     * 判断参数 ScriptConfig 是否已赋值
                     * @return ScriptConfig 是否已赋值
                     * 
                     */
                    bool ScriptConfigHasBeenSet() const;

                    /**
                     * 获取脚本内容, 需要用Base64编码
                     * @return ScriptContent 脚本内容, 需要用Base64编码
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容, 需要用Base64编码
                     * @param _scriptContent 脚本内容, 需要用Base64编码
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                private:

                    /**
                     * 探索脚本Id
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据探索脚本配置
                     */
                    SQLScriptConfig m_scriptConfig;
                    bool m_scriptConfigHasBeenSet;

                    /**
                     * 脚本内容, 需要用Base64编码
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATESQLSCRIPTREQUEST_H_
