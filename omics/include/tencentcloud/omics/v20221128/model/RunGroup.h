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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUP_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/ApplicationVersion.h>
#include <tencentcloud/omics/v20221128/model/RunOption.h>
#include <tencentcloud/omics/v20221128/model/NFOption.h>
#include <tencentcloud/omics/v20221128/model/VolumeInfo.h>
#include <tencentcloud/omics/v20221128/model/RunStatusCount.h>
#include <tencentcloud/omics/v20221128/model/ExecutionTime.h>


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
                class RunGroup : public AbstractModel
                {
                public:
                    RunGroup();
                    ~RunGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取项目名称。
                     * @return ProjectName 项目名称。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称。
                     * @param _projectName 项目名称。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

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
                     * 获取应用名称。
                     * @return ApplicationName 应用名称。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称。
                     * @param _applicationName 应用名称。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取应用类型。
                     * @return ApplicationType 应用类型。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型。
                     * @param _applicationType 应用类型。
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取应用版本。
                     * @return ApplicationVersion 应用版本。
                     * 
                     */
                    ApplicationVersion GetApplicationVersion() const;

                    /**
                     * 设置应用版本。
                     * @param _applicationVersion 应用版本。
                     * 
                     */
                    void SetApplicationVersion(const ApplicationVersion& _applicationVersion);

                    /**
                     * 判断参数 ApplicationVersion 是否已赋值
                     * @return ApplicationVersion 是否已赋值
                     * 
                     */
                    bool ApplicationVersionHasBeenSet() const;

                    /**
                     * 获取应用访问类型：
- PRIVATE 私有应用
- PUBLIC 公共应用
                     * @return AccessMode 应用访问类型：
- PRIVATE 私有应用
- PUBLIC 公共应用
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置应用访问类型：
- PRIVATE 私有应用
- PUBLIC 公共应用
                     * @param _accessMode 应用访问类型：
- PRIVATE 私有应用
- PUBLIC 公共应用
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

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
                     * 获取环境名称。
                     * @return EnvironmentName 环境名称。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名称。
                     * @param _environmentName 环境名称。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

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
                     * 获取任务名称。
                     * @return Name 任务名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称。
                     * @param _name 任务名称。
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
                     * 获取任务描述。
                     * @return Description 任务描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述。
                     * @param _description 任务描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * 获取任务批次类型 ：
- WDL
- NEXTFLOW
                     * @return Type 任务批次类型 ：
- WDL
- NEXTFLOW
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务批次类型 ：
- WDL
- NEXTFLOW
                     * @param _type 任务批次类型 ：
- WDL
- NEXTFLOW
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取工作目录。
                     * @return WorkDir 工作目录。
                     * 
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置工作目录。
                     * @param _workDir 工作目录。
                     * 
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     * 
                     */
                    bool WorkDirHasBeenSet() const;

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
                     * 获取任务输入类型：
- JSON: 导入JSON
- MANUAL: 手动输入
- COS: COS文件
                     * @return InputType 任务输入类型：
- JSON: 导入JSON
- MANUAL: 手动输入
- COS: COS文件
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置任务输入类型：
- JSON: 导入JSON
- MANUAL: 手动输入
- COS: COS文件
                     * @param _inputType 任务输入类型：
- JSON: 导入JSON
- MANUAL: 手动输入
- COS: COS文件
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取输入COS地址。
                     * @return InputCosUri 输入COS地址。
                     * 
                     */
                    std::string GetInputCosUri() const;

                    /**
                     * 设置输入COS地址。
                     * @param _inputCosUri 输入COS地址。
                     * 
                     */
                    void SetInputCosUri(const std::string& _inputCosUri);

                    /**
                     * 判断参数 InputCosUri 是否已赋值
                     * @return InputCosUri 是否已赋值
                     * 
                     */
                    bool InputCosUriHasBeenSet() const;

                    /**
                     * 获取输入模版ID。
                     * @return InputTemplateId 输入模版ID。
                     * 
                     */
                    std::string GetInputTemplateId() const;

                    /**
                     * 设置输入模版ID。
                     * @param _inputTemplateId 输入模版ID。
                     * 
                     */
                    void SetInputTemplateId(const std::string& _inputTemplateId);

                    /**
                     * 判断参数 InputTemplateId 是否已赋值
                     * @return InputTemplateId 是否已赋值
                     * 
                     */
                    bool InputTemplateIdHasBeenSet() const;

                    /**
                     * 获取WDL运行选项。
                     * @return Option WDL运行选项。
                     * 
                     */
                    RunOption GetOption() const;

                    /**
                     * 设置WDL运行选项。
                     * @param _option WDL运行选项。
                     * 
                     */
                    void SetOption(const RunOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取Nextflow运行选项。
                     * @return NFOption Nextflow运行选项。
                     * 
                     */
                    NFOption GetNFOption() const;

                    /**
                     * 设置Nextflow运行选项。
                     * @param _nFOption Nextflow运行选项。
                     * 
                     */
                    void SetNFOption(const NFOption& _nFOption);

                    /**
                     * 判断参数 NFOption 是否已赋值
                     * @return NFOption 是否已赋值
                     * 
                     */
                    bool NFOptionHasBeenSet() const;

                    /**
                     * 获取使用的缓存卷。
                     * @return Volumes 使用的缓存卷。
                     * 
                     */
                    std::vector<VolumeInfo> GetVolumes() const;

                    /**
                     * 设置使用的缓存卷。
                     * @param _volumes 使用的缓存卷。
                     * 
                     */
                    void SetVolumes(const std::vector<VolumeInfo>& _volumes);

                    /**
                     * 判断参数 Volumes 是否已赋值
                     * @return Volumes 是否已赋值
                     * 
                     */
                    bool VolumesHasBeenSet() const;

                    /**
                     * 获取任务总数量。
                     * @return TotalRun 任务总数量。
                     * 
                     */
                    uint64_t GetTotalRun() const;

                    /**
                     * 设置任务总数量。
                     * @param _totalRun 任务总数量。
                     * 
                     */
                    void SetTotalRun(const uint64_t& _totalRun);

                    /**
                     * 判断参数 TotalRun 是否已赋值
                     * @return TotalRun 是否已赋值
                     * 
                     */
                    bool TotalRunHasBeenSet() const;

                    /**
                     * 获取各状态任务的数量。
                     * @return RunStatusCounts 各状态任务的数量。
                     * 
                     */
                    std::vector<RunStatusCount> GetRunStatusCounts() const;

                    /**
                     * 设置各状态任务的数量。
                     * @param _runStatusCounts 各状态任务的数量。
                     * 
                     */
                    void SetRunStatusCounts(const std::vector<RunStatusCount>& _runStatusCounts);

                    /**
                     * 判断参数 RunStatusCounts 是否已赋值
                     * @return RunStatusCounts 是否已赋值
                     * 
                     */
                    bool RunStatusCountsHasBeenSet() const;

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
                     * 获取运行结果通知方式。
                     * @return ResultNotify 运行结果通知方式。
                     * 
                     */
                    std::string GetResultNotify() const;

                    /**
                     * 设置运行结果通知方式。
                     * @param _resultNotify 运行结果通知方式。
                     * 
                     */
                    void SetResultNotify(const std::string& _resultNotify);

                    /**
                     * 判断参数 ResultNotify 是否已赋值
                     * @return ResultNotify 是否已赋值
                     * 
                     */
                    bool ResultNotifyHasBeenSet() const;

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

                    /**
                     * 获取创建者。
                     * @return Creator 创建者。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者。
                     * @param _creator 创建者。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建者ID。
                     * @return CreatorId 创建者ID。
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建者ID。
                     * @param _creatorId 创建者ID。
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                private:

                    /**
                     * 任务批次ID。
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 应用ID。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用类型。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用版本。
                     */
                    ApplicationVersion m_applicationVersion;
                    bool m_applicationVersionHasBeenSet;

                    /**
                     * 应用访问类型：
- PRIVATE 私有应用
- PUBLIC 公共应用
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 环境名称。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 表格ID，单例运行为空。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 任务名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务批次类型 ：
- WDL
- NEXTFLOW
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 工作目录。
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * 任务输入。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 任务输入类型：
- JSON: 导入JSON
- MANUAL: 手动输入
- COS: COS文件
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 输入COS地址。
                     */
                    std::string m_inputCosUri;
                    bool m_inputCosUriHasBeenSet;

                    /**
                     * 输入模版ID。
                     */
                    std::string m_inputTemplateId;
                    bool m_inputTemplateIdHasBeenSet;

                    /**
                     * WDL运行选项。
                     */
                    RunOption m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * Nextflow运行选项。
                     */
                    NFOption m_nFOption;
                    bool m_nFOptionHasBeenSet;

                    /**
                     * 使用的缓存卷。
                     */
                    std::vector<VolumeInfo> m_volumes;
                    bool m_volumesHasBeenSet;

                    /**
                     * 任务总数量。
                     */
                    uint64_t m_totalRun;
                    bool m_totalRunHasBeenSet;

                    /**
                     * 各状态任务的数量。
                     */
                    std::vector<RunStatusCount> m_runStatusCounts;
                    bool m_runStatusCountsHasBeenSet;

                    /**
                     * 执行时间。
                     */
                    ExecutionTime m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 运行结果通知方式。
                     */
                    std::string m_resultNotify;
                    bool m_resultNotifyHasBeenSet;

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

                    /**
                     * 创建者。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建者ID。
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNGROUP_H_
