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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEVERSIONBRIEF_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEVERSIONBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/LogOutputConf.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 服务版本信息列表
                */
                class ServiceVersionBrief : public AbstractModel
                {
                public:
                    ServiceVersionBrief();
                    ~ServiceVersionBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名称
                     * @return VersionName 版本名称
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
                     * @param VersionName 版本名称
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param Status 状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否启动弹性 -- 已废弃
                     * @return EnableEs 是否启动弹性 -- 已废弃
                     */
                    int64_t GetEnableEs() const;

                    /**
                     * 设置是否启动弹性 -- 已废弃
                     * @param EnableEs 是否启动弹性 -- 已废弃
                     */
                    void SetEnableEs(const int64_t& _enableEs);

                    /**
                     * 判断参数 EnableEs 是否已赋值
                     * @return EnableEs 是否已赋值
                     */
                    bool EnableEsHasBeenSet() const;

                    /**
                     * 获取当前实例
                     * @return CurrentInstances 当前实例
                     */
                    int64_t GetCurrentInstances() const;

                    /**
                     * 设置当前实例
                     * @param CurrentInstances 当前实例
                     */
                    void SetCurrentInstances(const int64_t& _currentInstances);

                    /**
                     * 判断参数 CurrentInstances 是否已赋值
                     * @return CurrentInstances 是否已赋值
                     */
                    bool CurrentInstancesHasBeenSet() const;

                    /**
                     * 获取version的id
                     * @return VersionId version的id
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置version的id
                     * @param VersionId version的id
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取日志输出配置 -- 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogOutputConf 日志输出配置 -- 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogOutputConf GetLogOutputConf() const;

                    /**
                     * 设置日志输出配置 -- 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogOutputConf 日志输出配置 -- 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogOutputConf(const LogOutputConf& _logOutputConf);

                    /**
                     * 判断参数 LogOutputConf 是否已赋值
                     * @return LogOutputConf 是否已赋值
                     */
                    bool LogOutputConfHasBeenSet() const;

                    /**
                     * 获取期望实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpectedInstances 期望实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetExpectedInstances() const;

                    /**
                     * 设置期望实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpectedInstances 期望实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpectedInstances(const int64_t& _expectedInstances);

                    /**
                     * 判断参数 ExpectedInstances 是否已赋值
                     * @return ExpectedInstances 是否已赋值
                     */
                    bool ExpectedInstancesHasBeenSet() const;

                    /**
                     * 获取部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployMode 部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeployMode() const;

                    /**
                     * 设置部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeployMode 部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeployMode(const std::string& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取建构任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildTaskId 建构任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBuildTaskId() const;

                    /**
                     * 设置建构任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BuildTaskId 建构任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBuildTaskId(const std::string& _buildTaskId);

                    /**
                     * 判断参数 BuildTaskId 是否已赋值
                     * @return BuildTaskId 是否已赋值
                     */
                    bool BuildTaskIdHasBeenSet() const;

                    /**
                     * 获取环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentId 环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnvironmentId 环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取环境name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentName 环境name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnvironmentName 环境name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationId 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取服务name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 服务name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置服务name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationName 服务name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取是否正在发布中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnderDeploying 是否正在发布中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetUnderDeploying() const;

                    /**
                     * 设置是否正在发布中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnderDeploying 是否正在发布中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnderDeploying(const bool& _underDeploying);

                    /**
                     * 判断参数 UnderDeploying 是否已赋值
                     * @return UnderDeploying 是否已赋值
                     */
                    bool UnderDeployingHasBeenSet() const;

                private:

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否启动弹性 -- 已废弃
                     */
                    int64_t m_enableEs;
                    bool m_enableEsHasBeenSet;

                    /**
                     * 当前实例
                     */
                    int64_t m_currentInstances;
                    bool m_currentInstancesHasBeenSet;

                    /**
                     * version的id
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 日志输出配置 -- 已废弃
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogOutputConf m_logOutputConf;
                    bool m_logOutputConfHasBeenSet;

                    /**
                     * 期望实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expectedInstances;
                    bool m_expectedInstancesHasBeenSet;

                    /**
                     * 部署方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 建构任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buildTaskId;
                    bool m_buildTaskIdHasBeenSet;

                    /**
                     * 环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 环境name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 服务name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 是否正在发布中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_underDeploying;
                    bool m_underDeployingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEVERSIONBRIEF_H_
