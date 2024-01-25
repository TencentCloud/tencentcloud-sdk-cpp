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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITPYSPARKTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITPYSPARKTASKREQUEST_H_

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
                * SubmitPySparkTask请求参数结构体
                */
                class SubmitPySparkTaskRequest : public AbstractModel
                {
                public:
                    SubmitPySparkTaskRequest();
                    ~SubmitPySparkTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组Id
                     * @return GroupId 资源组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置资源组Id
                     * @param _groupId 资源组Id
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
                     * 获取脚本名称(PYTHON2/PYTHON3)
                     * @return PythonType 脚本名称(PYTHON2/PYTHON3)
                     * 
                     */
                    std::string GetPythonType() const;

                    /**
                     * 设置脚本名称(PYTHON2/PYTHON3)
                     * @param _pythonType 脚本名称(PYTHON2/PYTHON3)
                     * 
                     */
                    void SetPythonType(const std::string& _pythonType);

                    /**
                     * 判断参数 PythonType 是否已赋值
                     * @return PythonType 是否已赋值
                     * 
                     */
                    bool PythonTypeHasBeenSet() const;

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
                     * 获取脚本id（资源id）
                     * @return ScriptId 脚本id（资源id）
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本id（资源id）
                     * @param _scriptId 脚本id（资源id）
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
                     * 获取资源队列
                     * @return ResourceQueue 资源队列
                     * 
                     */
                    std::string GetResourceQueue() const;

                    /**
                     * 设置资源队列
                     * @param _resourceQueue 资源队列
                     * 
                     */
                    void SetResourceQueue(const std::string& _resourceQueue);

                    /**
                     * 判断参数 ResourceQueue 是否已赋值
                     * @return ResourceQueue 是否已赋值
                     * 
                     */
                    bool ResourceQueueHasBeenSet() const;

                    /**
                     * 获取高级设置
                     * @return ConfigParams 高级设置
                     * 
                     */
                    std::string GetConfigParams() const;

                    /**
                     * 设置高级设置
                     * @param _configParams 高级设置
                     * 
                     */
                    void SetConfigParams(const std::string& _configParams);

                    /**
                     * 判断参数 ConfigParams 是否已赋值
                     * @return ConfigParams 是否已赋值
                     * 
                     */
                    bool ConfigParamsHasBeenSet() const;

                    /**
                     * 获取脚本是否需要加密
                     * @return ScriptEncryption 脚本是否需要加密
                     * 
                     */
                    bool GetScriptEncryption() const;

                    /**
                     * 设置脚本是否需要加密
                     * @param _scriptEncryption 脚本是否需要加密
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
                     * 资源组Id
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
                     * 脚本名称(PYTHON2/PYTHON3)
                     */
                    std::string m_pythonType;
                    bool m_pythonTypeHasBeenSet;

                    /**
                     * 脚本文件路径
                     */
                    std::string m_scriptPath;
                    bool m_scriptPathHasBeenSet;

                    /**
                     * 高级运行参数
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * 脚本id（资源id）
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 资源队列
                     */
                    std::string m_resourceQueue;
                    bool m_resourceQueueHasBeenSet;

                    /**
                     * 高级设置
                     */
                    std::string m_configParams;
                    bool m_configParamsHasBeenSet;

                    /**
                     * 脚本是否需要加密
                     */
                    bool m_scriptEncryption;
                    bool m_scriptEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITPYSPARKTASKREQUEST_H_
