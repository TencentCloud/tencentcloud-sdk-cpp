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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSQLTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSQLTASKREQUEST_H_

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
                * SubmitSqlTask请求参数结构体
                */
                class SubmitSqlTaskRequest : public AbstractModel
                {
                public:
                    SubmitSqlTaskRequest();
                    ~SubmitSqlTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库类型
                     * @return DatabaseType 数据库类型
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置数据库类型
                     * @param _databaseType 数据库类型
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取数据源Id
                     * @return DatasourceId 数据源Id
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源Id
                     * @param _datasourceId 数据源Id
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

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
                     * 获取脚本文件id
                     * @return ScriptId 脚本文件id
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本文件id
                     * @param _scriptId 脚本文件id
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
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取执行引擎实例ID
                     * @return EngineId 执行引擎实例ID
                     * 
                     */
                    std::string GetEngineId() const;

                    /**
                     * 设置执行引擎实例ID
                     * @param _engineId 执行引擎实例ID
                     * 
                     */
                    void SetEngineId(const std::string& _engineId);

                    /**
                     * 判断参数 EngineId 是否已赋值
                     * @return EngineId 是否已赋值
                     * 
                     */
                    bool EngineIdHasBeenSet() const;

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
                     * 获取数据库类型
                     * @return DatasourceType 数据库类型
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置数据库类型
                     * @param _datasourceType 数据库类型
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取计算资源名称
                     * @return ComputeResource 计算资源名称
                     * 
                     */
                    std::string GetComputeResource() const;

                    /**
                     * 设置计算资源名称
                     * @param _computeResource 计算资源名称
                     * 
                     */
                    void SetComputeResource(const std::string& _computeResource);

                    /**
                     * 判断参数 ComputeResource 是否已赋值
                     * @return ComputeResource 是否已赋值
                     * 
                     */
                    bool ComputeResourceHasBeenSet() const;

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
                     * 获取高级设置
                     * @return ConfParams 高级设置
                     * 
                     */
                    std::string GetConfParams() const;

                    /**
                     * 设置高级设置
                     * @param _confParams 高级设置
                     * 
                     */
                    void SetConfParams(const std::string& _confParams);

                    /**
                     * 判断参数 ConfParams 是否已赋值
                     * @return ConfParams 是否已赋值
                     * 
                     */
                    bool ConfParamsHasBeenSet() const;

                    /**
                     * 获取脚本内容是否base64加密
                     * @return ScriptEncryption 脚本内容是否base64加密
                     * 
                     */
                    bool GetScriptEncryption() const;

                    /**
                     * 设置脚本内容是否base64加密
                     * @param _scriptEncryption 脚本内容是否base64加密
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
                     * 数据库类型
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * 数据源Id
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 资源组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 脚本文件id
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 执行引擎实例ID
                     */
                    std::string m_engineId;
                    bool m_engineIdHasBeenSet;

                    /**
                     * 脚本内容
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 资源队列
                     */
                    std::string m_resourceQueue;
                    bool m_resourceQueueHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * 计算资源名称
                     */
                    std::string m_computeResource;
                    bool m_computeResourceHasBeenSet;

                    /**
                     * 高级运行参数
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                    /**
                     * 高级设置
                     */
                    std::string m_confParams;
                    bool m_confParamsHasBeenSet;

                    /**
                     * 脚本内容是否base64加密
                     */
                    bool m_scriptEncryption;
                    bool m_scriptEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITSQLTASKREQUEST_H_
