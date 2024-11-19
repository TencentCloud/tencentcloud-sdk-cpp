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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUN_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/ExecutionTime.h>
#include <tencentcloud/omics/v20221128/model/CacheInfo.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 任务。
                */
                class Run : public AbstractModel
                {
                public:
                    Run();
                    ~Run() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务UUID。
                     * @return RunUuid 任务UUID。
                     * 
                     */
                    std::string GetRunUuid() const;

                    /**
                     * 设置任务UUID。
                     * @param _runUuid 任务UUID。
                     * 
                     */
                    void SetRunUuid(const std::string& _runUuid);

                    /**
                     * 判断参数 RunUuid 是否已赋值
                     * @return RunUuid 是否已赋值
                     * 
                     */
                    bool RunUuidHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
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
                     * 获取应用ID。
                     * @return ApplicationId 应用ID。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID。
                     * @param _applicationId 应用ID。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取任务批次ID。
                     * @return RunGroupId 任务批次ID。
                     * 
                     */
                    std::string GetRunGroupId() const;

                    /**
                     * 设置任务批次ID。
                     * @param _runGroupId 任务批次ID。
                     * 
                     */
                    void SetRunGroupId(const std::string& _runGroupId);

                    /**
                     * 判断参数 RunGroupId 是否已赋值
                     * @return RunGroupId 是否已赋值
                     * 
                     */
                    bool RunGroupIdHasBeenSet() const;

                    /**
                     * 获取环境ID。
                     * @return EnvironmentId 环境ID。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID。
                     * @param _environmentId 环境ID。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取用户定义ID，单例运行为空。
                     * @return UserDefinedId 用户定义ID，单例运行为空。
                     * 
                     */
                    std::string GetUserDefinedId() const;

                    /**
                     * 设置用户定义ID，单例运行为空。
                     * @param _userDefinedId 用户定义ID，单例运行为空。
                     * 
                     */
                    void SetUserDefinedId(const std::string& _userDefinedId);

                    /**
                     * 判断参数 UserDefinedId 是否已赋值
                     * @return UserDefinedId 是否已赋值
                     * 
                     */
                    bool UserDefinedIdHasBeenSet() const;

                    /**
                     * 获取表格ID，单例运行为空。
                     * @return TableId 表格ID，单例运行为空。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表格ID，单例运行为空。
                     * @param _tableId 表格ID，单例运行为空。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取表格行UUID，单例运行为空。
                     * @return TableRowUuid 表格行UUID，单例运行为空。
                     * 
                     */
                    std::string GetTableRowUuid() const;

                    /**
                     * 设置表格行UUID，单例运行为空。
                     * @param _tableRowUuid 表格行UUID，单例运行为空。
                     * 
                     */
                    void SetTableRowUuid(const std::string& _tableRowUuid);

                    /**
                     * 判断参数 TableRowUuid 是否已赋值
                     * @return TableRowUuid 是否已赋值
                     * 
                     */
                    bool TableRowUuidHasBeenSet() const;

                    /**
                     * 获取任务状态。
                     * @return Status 任务状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态。
                     * @param _status 任务状态。
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
                     * 获取任务输入。
                     * @return Input 任务输入。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置任务输入。
                     * @param _input 任务输入。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取运行选项。
                     * @return Option 运行选项。
                     * @deprecated
                     */
                    RunOption GetOption() const;

                    /**
                     * 设置运行选项。
                     * @param _option 运行选项。
                     * @deprecated
                     */
                    void SetOption(const RunOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * @deprecated
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取执行时间。
                     * @return ExecutionTime 执行时间。
                     * 
                     */
                    ExecutionTime GetExecutionTime() const;

                    /**
                     * 设置执行时间。
                     * @param _executionTime 执行时间。
                     * 
                     */
                    void SetExecutionTime(const ExecutionTime& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取缓存信息。
                     * @return Cache 缓存信息。
                     * 
                     */
                    CacheInfo GetCache() const;

                    /**
                     * 设置缓存信息。
                     * @param _cache 缓存信息。
                     * 
                     */
                    void SetCache(const CacheInfo& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return ErrorMessage 错误信息。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误信息。
                     * @param _errorMessage 错误信息。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务UUID。
                     */
                    std::string m_runUuid;
                    bool m_runUuidHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 应用ID。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 任务批次ID。
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                    /**
                     * 环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 用户定义ID，单例运行为空。
                     */
                    std::string m_userDefinedId;
                    bool m_userDefinedIdHasBeenSet;

                    /**
                     * 表格ID，单例运行为空。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 表格行UUID，单例运行为空。
                     */
                    std::string m_tableRowUuid;
                    bool m_tableRowUuidHasBeenSet;

                    /**
                     * 任务状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务输入。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 运行选项。
                     */
                    RunOption m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * 执行时间。
                     */
                    ExecutionTime m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 缓存信息。
                     */
                    CacheInfo m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUN_H_
