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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLSCRIPTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLSCRIPTREQUEST_H_

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
                * CreateSQLScript请求参数结构体
                */
                class CreateSQLScriptRequest : public AbstractModel
                {
                public:
                    CreateSQLScriptRequest();
                    ~CreateSQLScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本名称
                     * @return ScriptName 脚本名称
                     * 
                     */
                    std::string GetScriptName() const;

                    /**
                     * 设置脚本名称
                     * @param _scriptName 脚本名称
                     * 
                     */
                    void SetScriptName(const std::string& _scriptName);

                    /**
                     * 判断参数 ScriptName 是否已赋值
                     * @return ScriptName 是否已赋值
                     * 
                     */
                    bool ScriptNameHasBeenSet() const;

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
                     * 获取父文件夹path，/aaa/bbb/ccc，根目录为空字符串或/
                     * @return ParentFolderPath 父文件夹path，/aaa/bbb/ccc，根目录为空字符串或/
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置父文件夹path，/aaa/bbb/ccc，根目录为空字符串或/
                     * @param _parentFolderPath 父文件夹path，/aaa/bbb/ccc，根目录为空字符串或/
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

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
                     * 获取脚本内容，如有值，则要将内容进行base64编码
                     * @return ScriptContent 脚本内容，如有值，则要将内容进行base64编码
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容，如有值，则要将内容进行base64编码
                     * @param _scriptContent 脚本内容，如有值，则要将内容进行base64编码
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取权限范围：SHARED, PRIVATE
                     * @return AccessScope 权限范围：SHARED, PRIVATE
                     * 
                     */
                    std::string GetAccessScope() const;

                    /**
                     * 设置权限范围：SHARED, PRIVATE
                     * @param _accessScope 权限范围：SHARED, PRIVATE
                     * 
                     */
                    void SetAccessScope(const std::string& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * 脚本名称
                     */
                    std::string m_scriptName;
                    bool m_scriptNameHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 父文件夹path，/aaa/bbb/ccc，根目录为空字符串或/
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * 数据探索脚本配置
                     */
                    SQLScriptConfig m_scriptConfig;
                    bool m_scriptConfigHasBeenSet;

                    /**
                     * 脚本内容，如有值，则要将内容进行base64编码
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 权限范围：SHARED, PRIVATE
                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATESQLSCRIPTREQUEST_H_
