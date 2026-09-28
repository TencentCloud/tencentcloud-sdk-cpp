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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPVERSIONITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPVERSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/StaticConfig.h>
#include <tencentcloud/tcb/v20180608/model/BuildStepStatus.h>
#include <tencentcloud/tcb/v20180608/model/CloudAppResourceItem.h>
#include <tencentcloud/tcb/v20180608/model/BuildArtifactInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 服务版本信息
                */
                class CloudAppVersionItem : public AbstractModel
                {
                public:
                    CloudAppVersionItem();
                    ~CloudAppVersionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本名</p>
                     * @return VersionName <p>版本名</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>版本名</p>
                     * @param _versionName <p>版本名</p>
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
                     * 获取<p>构建方式</p>
                     * @return BuildType <p>构建方式</p>
                     * 
                     */
                    std::string GetBuildType() const;

                    /**
                     * 设置<p>构建方式</p>
                     * @param _buildType <p>构建方式</p>
                     * 
                     */
                    void SetBuildType(const std::string& _buildType);

                    /**
                     * 判断参数 BuildType 是否已赋值
                     * @return BuildType 是否已赋值
                     * 
                     */
                    bool BuildTypeHasBeenSet() const;

                    /**
                     * 获取<p>构建Id</p>
                     * @return BuildId <p>构建Id</p>
                     * 
                     */
                    std::string GetBuildId() const;

                    /**
                     * 设置<p>构建Id</p>
                     * @param _buildId <p>构建Id</p>
                     * 
                     */
                    void SetBuildId(const std::string& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取<p>构建状态</p>
                     * @return Status <p>构建状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>构建状态</p>
                     * @param _status <p>构建状态</p>
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
                     * 获取<p>框架名</p>
                     * @return Framework <p>框架名</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>框架名</p>
                     * @param _framework <p>框架名</p>
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取<p>构建配置</p>
                     * @return StaticConfig <p>构建配置</p>
                     * 
                     */
                    StaticConfig GetStaticConfig() const;

                    /**
                     * 设置<p>构建配置</p>
                     * @param _staticConfig <p>构建配置</p>
                     * 
                     */
                    void SetStaticConfig(const StaticConfig& _staticConfig);

                    /**
                     * 判断参数 StaticConfig 是否已赋值
                     * @return StaticConfig 是否已赋值
                     * 
                     */
                    bool StaticConfigHasBeenSet() const;

                    /**
                     * 获取<p>构建时间</p>
                     * @return BuildTime <p>构建时间</p>
                     * 
                     */
                    std::string GetBuildTime() const;

                    /**
                     * 设置<p>构建时间</p>
                     * @param _buildTime <p>构建时间</p>
                     * 
                     */
                    void SetBuildTime(const std::string& _buildTime);

                    /**
                     * 判断参数 BuildTime 是否已赋值
                     * @return BuildTime 是否已赋值
                     * 
                     */
                    bool BuildTimeHasBeenSet() const;

                    /**
                     * 获取<p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Steps <p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BuildStepStatus> GetSteps() const;

                    /**
                     * 设置<p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _steps <p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSteps(const std::vector<BuildStepStatus>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取<p>服务版本部署快照</p>
                     * @return Snapshot <p>服务版本部署快照</p>
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置<p>服务版本部署快照</p>
                     * @param _snapshot <p>服务版本部署快照</p>
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取<p>服务版本域名</p>
                     * @return VersionDomain <p>服务版本域名</p>
                     * 
                     */
                    std::string GetVersionDomain() const;

                    /**
                     * 设置<p>服务版本域名</p>
                     * @param _versionDomain <p>服务版本域名</p>
                     * 
                     */
                    void SetVersionDomain(const std::string& _versionDomain);

                    /**
                     * 判断参数 VersionDomain 是否已赋值
                     * @return VersionDomain 是否已赋值
                     * 
                     */
                    bool VersionDomainHasBeenSet() const;

                    /**
                     * 获取<p>服务版本流量</p>
                     * @return TrafficPercent <p>服务版本流量</p>
                     * 
                     */
                    uint64_t GetTrafficPercent() const;

                    /**
                     * 设置<p>服务版本流量</p>
                     * @param _trafficPercent <p>服务版本流量</p>
                     * 
                     */
                    void SetTrafficPercent(const uint64_t& _trafficPercent);

                    /**
                     * 判断参数 TrafficPercent 是否已赋值
                     * @return TrafficPercent 是否已赋值
                     * 
                     */
                    bool TrafficPercentHasBeenSet() const;

                    /**
                     * 获取<p>服务资源</p>
                     * @return Resources <p>服务资源</p>
                     * 
                     */
                    std::vector<CloudAppResourceItem> GetResources() const;

                    /**
                     * 设置<p>服务资源</p>
                     * @param _resources <p>服务资源</p>
                     * 
                     */
                    void SetResources(const std::vector<CloudAppResourceItem>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>服务产物列表</p>
                     * @return Artifacts <p>服务产物列表</p>
                     * 
                     */
                    std::vector<BuildArtifactInfo> GetArtifacts() const;

                    /**
                     * 设置<p>服务产物列表</p>
                     * @param _artifacts <p>服务产物列表</p>
                     * 
                     */
                    void SetArtifacts(const std::vector<BuildArtifactInfo>& _artifacts);

                    /**
                     * 判断参数 Artifacts 是否已赋值
                     * @return Artifacts 是否已赋值
                     * 
                     */
                    bool ArtifactsHasBeenSet() const;

                private:

                    /**
                     * <p>版本名</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>构建方式</p>
                     */
                    std::string m_buildType;
                    bool m_buildTypeHasBeenSet;

                    /**
                     * <p>构建Id</p>
                     */
                    std::string m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * <p>构建状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>框架名</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>构建配置</p>
                     */
                    StaticConfig m_staticConfig;
                    bool m_staticConfigHasBeenSet;

                    /**
                     * <p>构建时间</p>
                     */
                    std::string m_buildTime;
                    bool m_buildTimeHasBeenSet;

                    /**
                     * <p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BuildStepStatus> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * <p>服务版本部署快照</p>
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * <p>服务版本域名</p>
                     */
                    std::string m_versionDomain;
                    bool m_versionDomainHasBeenSet;

                    /**
                     * <p>服务版本流量</p>
                     */
                    uint64_t m_trafficPercent;
                    bool m_trafficPercentHasBeenSet;

                    /**
                     * <p>服务资源</p>
                     */
                    std::vector<CloudAppResourceItem> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>服务产物列表</p>
                     */
                    std::vector<BuildArtifactInfo> m_artifacts;
                    bool m_artifactsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPVERSIONITEM_H_
