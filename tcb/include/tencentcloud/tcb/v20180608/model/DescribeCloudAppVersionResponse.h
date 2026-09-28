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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPVERSIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCloudAppVersion返回参数结构体
                */
                class DescribeCloudAppVersionResponse : public AbstractModel
                {
                public:
                    DescribeCloudAppVersionResponse();
                    ~DescribeCloudAppVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>构建类型</p>
                     * @return BuildType <p>构建类型</p>
                     * 
                     */
                    std::string GetBuildType() const;

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
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>框架</p>
                     * @return Framework <p>框架</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取<p>静态托管配置信息</p>
                     * @return StaticConfig <p>静态托管配置信息</p>
                     * 
                     */
                    StaticConfig GetStaticConfig() const;

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
                     * 判断参数 BuildTime 是否已赋值
                     * @return BuildTime 是否已赋值
                     * 
                     */
                    bool BuildTimeHasBeenSet() const;

                    /**
                     * 获取<p>[]BuildStepStatus 的 JSON 序列化</p>
                     * @return Steps <p>[]BuildStepStatus 的 JSON 序列化</p>
                     * 
                     */
                    std::vector<BuildStepStatus> GetSteps() const;

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取<p>服务版本快照</p>
                     * @return Snapshot <p>服务版本快照</p>
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取<p>服务版本流量比例</p>
                     * @return TrafficPercent <p>服务版本流量比例</p>
                     * 
                     */
                    uint64_t GetTrafficPercent() const;

                    /**
                     * 判断参数 TrafficPercent 是否已赋值
                     * @return TrafficPercent 是否已赋值
                     * 
                     */
                    bool TrafficPercentHasBeenSet() const;

                    /**
                     * 获取<p>服务版本域名</p>
                     * @return VersionDomain <p>服务版本域名</p>
                     * 
                     */
                    std::string GetVersionDomain() const;

                    /**
                     * 判断参数 VersionDomain 是否已赋值
                     * @return VersionDomain 是否已赋值
                     * 
                     */
                    bool VersionDomainHasBeenSet() const;

                    /**
                     * 获取<p>服务管理资源列表</p>
                     * @return Resources <p>服务管理资源列表</p>
                     * 
                     */
                    std::vector<CloudAppResourceItem> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>[]ArtifactInfo 的 JSON 序列化</p>
                     * @return Artifacts <p>[]ArtifactInfo 的 JSON 序列化</p>
                     * 
                     */
                    std::vector<BuildArtifactInfo> GetArtifacts() const;

                    /**
                     * 判断参数 Artifacts 是否已赋值
                     * @return Artifacts 是否已赋值
                     * 
                     */
                    bool ArtifactsHasBeenSet() const;

                private:

                    /**
                     * <p>构建类型</p>
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
                     * <p>框架</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>静态托管配置信息</p>
                     */
                    StaticConfig m_staticConfig;
                    bool m_staticConfigHasBeenSet;

                    /**
                     * <p>构建时间</p>
                     */
                    std::string m_buildTime;
                    bool m_buildTimeHasBeenSet;

                    /**
                     * <p>[]BuildStepStatus 的 JSON 序列化</p>
                     */
                    std::vector<BuildStepStatus> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * <p>服务版本快照</p>
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * <p>服务版本流量比例</p>
                     */
                    uint64_t m_trafficPercent;
                    bool m_trafficPercentHasBeenSet;

                    /**
                     * <p>服务版本域名</p>
                     */
                    std::string m_versionDomain;
                    bool m_versionDomainHasBeenSet;

                    /**
                     * <p>服务管理资源列表</p>
                     */
                    std::vector<CloudAppResourceItem> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>[]ArtifactInfo 的 JSON 序列化</p>
                     */
                    std::vector<BuildArtifactInfo> m_artifacts;
                    bool m_artifactsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPVERSIONRESPONSE_H_
