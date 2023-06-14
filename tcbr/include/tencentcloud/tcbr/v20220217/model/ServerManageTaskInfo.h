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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERMANAGETASKINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERMANAGETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/TaskStepInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 服务管理任务信息
                */
                class ServerManageTaskInfo : public AbstractModel
                {
                public:
                    ServerManageTaskInfo();
                    ~ServerManageTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return Id 任务Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务Id
                     * @param _id 任务Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取环境Id
                     * @return EnvId 环境Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _envId 环境Id
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
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取变更类型
                     * @return ChangeType 变更类型
                     * 
                     */
                    std::string GetChangeType() const;

                    /**
                     * 设置变更类型
                     * @param _changeType 变更类型
                     * 
                     */
                    void SetChangeType(const std::string& _changeType);

                    /**
                     * 判断参数 ChangeType 是否已赋值
                     * @return ChangeType 是否已赋值
                     * 
                     */
                    bool ChangeTypeHasBeenSet() const;

                    /**
                     * 获取发布类型
                     * @return ReleaseType 发布类型
                     * 
                     */
                    std::string GetReleaseType() const;

                    /**
                     * 设置发布类型
                     * @param _releaseType 发布类型
                     * 
                     */
                    void SetReleaseType(const std::string& _releaseType);

                    /**
                     * 判断参数 ReleaseType 是否已赋值
                     * @return ReleaseType 是否已赋值
                     * 
                     */
                    bool ReleaseTypeHasBeenSet() const;

                    /**
                     * 获取部署类型
                     * @return DeployType 部署类型
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置部署类型
                     * @param _deployType 部署类型
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取上一个版本名
                     * @return PreVersionName 上一个版本名
                     * 
                     */
                    std::string GetPreVersionName() const;

                    /**
                     * 设置上一个版本名
                     * @param _preVersionName 上一个版本名
                     * 
                     */
                    void SetPreVersionName(const std::string& _preVersionName);

                    /**
                     * 判断参数 PreVersionName 是否已赋值
                     * @return PreVersionName 是否已赋值
                     * 
                     */
                    bool PreVersionNameHasBeenSet() const;

                    /**
                     * 获取版本名
                     * @return VersionName 版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
                     * @param _versionName 版本名
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取流水线Id
                     * @return PipelineId 流水线Id
                     * 
                     */
                    int64_t GetPipelineId() const;

                    /**
                     * 设置流水线Id
                     * @param _pipelineId 流水线Id
                     * 
                     */
                    void SetPipelineId(const int64_t& _pipelineId);

                    /**
                     * 判断参数 PipelineId 是否已赋值
                     * @return PipelineId 是否已赋值
                     * 
                     */
                    bool PipelineIdHasBeenSet() const;

                    /**
                     * 获取流水线任务Id
                     * @return PipelineTaskId 流水线任务Id
                     * 
                     */
                    int64_t GetPipelineTaskId() const;

                    /**
                     * 设置流水线任务Id
                     * @param _pipelineTaskId 流水线任务Id
                     * 
                     */
                    void SetPipelineTaskId(const int64_t& _pipelineTaskId);

                    /**
                     * 判断参数 PipelineTaskId 是否已赋值
                     * @return PipelineTaskId 是否已赋值
                     * 
                     */
                    bool PipelineTaskIdHasBeenSet() const;

                    /**
                     * 获取发布单Id
                     * @return ReleaseId 发布单Id
                     * 
                     */
                    int64_t GetReleaseId() const;

                    /**
                     * 设置发布单Id
                     * @param _releaseId 发布单Id
                     * 
                     */
                    void SetReleaseId(const int64_t& _releaseId);

                    /**
                     * 判断参数 ReleaseId 是否已赋值
                     * @return ReleaseId 是否已赋值
                     * 
                     */
                    bool ReleaseIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取步骤信息
                     * @return Steps 步骤信息
                     * 
                     */
                    std::vector<TaskStepInfo> GetSteps() const;

                    /**
                     * 设置步骤信息
                     * @param _steps 步骤信息
                     * 
                     */
                    void SetSteps(const std::vector<TaskStepInfo>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailReason 失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因
                     * @param _failReason 失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取操作标识
                     * @return OperatorRemark 操作标识
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作标识
                     * @param _operatorRemark 操作标识
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 环境Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 变更类型
                     */
                    std::string m_changeType;
                    bool m_changeTypeHasBeenSet;

                    /**
                     * 发布类型
                     */
                    std::string m_releaseType;
                    bool m_releaseTypeHasBeenSet;

                    /**
                     * 部署类型
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * 上一个版本名
                     */
                    std::string m_preVersionName;
                    bool m_preVersionNameHasBeenSet;

                    /**
                     * 版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 流水线Id
                     */
                    int64_t m_pipelineId;
                    bool m_pipelineIdHasBeenSet;

                    /**
                     * 流水线任务Id
                     */
                    int64_t m_pipelineTaskId;
                    bool m_pipelineTaskIdHasBeenSet;

                    /**
                     * 发布单Id
                     */
                    int64_t m_releaseId;
                    bool m_releaseIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 步骤信息
                     */
                    std::vector<TaskStepInfo> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 操作标识
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERMANAGETASKINFO_H_
