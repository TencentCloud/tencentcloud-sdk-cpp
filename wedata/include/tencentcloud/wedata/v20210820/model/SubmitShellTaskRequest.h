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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSHELLTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSHELLTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SubmitShellTask请求参数结构体
                */
                class SubmitShellTaskRequest : public AbstractModel
                {
                public:
                    SubmitShellTaskRequest();
                    ~SubmitShellTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行资源组id
                     * @return GroupId 执行资源组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置执行资源组id
                     * @param _groupId 执行资源组id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取脚本内容
                     * @return ScriptContent 脚本内容
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容
                     * @param _scriptContent 脚本内容
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取脚本文件路径
                     * @return ScriptPath 脚本文件路径
                     * 
                     */
                    std::string GetScriptPath() const;

                    /**
                     * 设置脚本文件路径
                     * @param _scriptPath 脚本文件路径
                     * 
                     */
                    void SetScriptPath(const std::string& _scriptPath);

                    /**
                     * 判断参数 ScriptPath 是否已赋值
                     * @return ScriptPath 是否已赋值
                     * 
                     */
                    bool ScriptPathHasBeenSet() const;

                    /**
                     * 获取脚本类型
                     * @return ScriptType 脚本类型
                     * 
                     */
                    std::string GetScriptType() const;

                    /**
                     * 设置脚本类型
                     * @param _scriptType 脚本类型
                     * 
                     */
                    void SetScriptType(const std::string& _scriptType);

                    /**
                     * 判断参数 ScriptType 是否已赋值
                     * @return ScriptType 是否已赋值
                     * 
                     */
                    bool ScriptTypeHasBeenSet() const;

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
                     * 获取高级运行参数
                     * @return RunParams 高级运行参数
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置高级运行参数
                     * @param _runParams 高级运行参数
                     * 
                     */
                    void SetRunParams(const std::string& _runParams);

                    /**
                     * 判断参数 RunParams 是否已赋值
                     * @return RunParams 是否已赋值
                     * 
                     */
                    bool RunParamsHasBeenSet() const;

                    /**
                     * 获取脚本Id
                     * @return ScriptId 脚本Id
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本Id
                     * @param _scriptId 脚本Id
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
                     * 获取脚本内容是否加密，默认不加膜
                     * @return ScriptEncryption 脚本内容是否加密，默认不加膜
                     * 
                     */
                    bool GetScriptEncryption() const;

                    /**
                     * 设置脚本内容是否加密，默认不加膜
                     * @param _scriptEncryption 脚本内容是否加密，默认不加膜
                     * 
                     */
                    void SetScriptEncryption(const bool& _scriptEncryption);

                    /**
                     * 判断参数 ScriptEncryption 是否已赋值
                     * @return ScriptEncryption 是否已赋值
                     * 
                     */
                    bool ScriptEncryptionHasBeenSet() const;

                private:

                    /**
                     * 执行资源组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 脚本内容
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 脚本文件路径
                     */
                    std::string m_scriptPath;
                    bool m_scriptPathHasBeenSet;

                    /**
                     * 脚本类型
                     */
                    std::string m_scriptType;
                    bool m_scriptTypeHasBeenSet;

                    /**
                     * 脚本名称
                     */
                    std::string m_scriptName;
                    bool m_scriptNameHasBeenSet;

                    /**
                     * 高级运行参数
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * 脚本Id
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 脚本内容是否加密，默认不加膜
                     */
                    bool m_scriptEncryption;
                    bool m_scriptEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSHELLTASKREQUEST_H_
