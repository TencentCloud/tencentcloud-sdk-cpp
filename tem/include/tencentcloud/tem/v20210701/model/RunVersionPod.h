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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_RUNVERSIONPOD_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_RUNVERSIONPOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/NodeInfo.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 应用实例
                */
                class RunVersionPod : public AbstractModel
                {
                public:
                    RunVersionPod();
                    ~RunVersionPod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取shell地址
                     * @return Webshell shell地址
                     * 
                     */
                    std::string GetWebshell() const;

                    /**
                     * 设置shell地址
                     * @param _webshell shell地址
                     * 
                     */
                    void SetWebshell(const std::string& _webshell);

                    /**
                     * 判断参数 Webshell 是否已赋值
                     * @return Webshell 是否已赋值
                     * 
                     */
                    bool WebshellHasBeenSet() const;

                    /**
                     * 获取pod的id
                     * @return PodId pod的id
                     * 
                     */
                    std::string GetPodId() const;

                    /**
                     * 设置pod的id
                     * @param _podId pod的id
                     * 
                     */
                    void SetPodId(const std::string& _podId);

                    /**
                     * 判断参数 PodId 是否已赋值
                     * @return PodId 是否已赋值
                     * 
                     */
                    bool PodIdHasBeenSet() const;

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
                     * 获取实例的ip
                     * @return PodIp 实例的ip
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置实例的ip
                     * @param _podIp 实例的ip
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取部署版本
                     * @return DeployVersion 部署版本
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置部署版本
                     * @param _deployVersion 部署版本
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取重启次数
                     * @return RestartCount 重启次数
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
                     * @param _restartCount 重启次数
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取pod是否就绪
                     * @return Ready pod是否就绪
                     * 
                     */
                    bool GetReady() const;

                    /**
                     * 设置pod是否就绪
                     * @param _ready pod是否就绪
                     * 
                     */
                    void SetReady(const bool& _ready);

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取容器状态
                     * @return ContainerState 容器状态
                     * 
                     */
                    std::string GetContainerState() const;

                    /**
                     * 设置容器状态
                     * @param _containerState 容器状态
                     * 
                     */
                    void SetContainerState(const std::string& _containerState);

                    /**
                     * 判断参数 ContainerState 是否已赋值
                     * @return ContainerState 是否已赋值
                     * 
                     */
                    bool ContainerStateHasBeenSet() const;

                    /**
                     * 获取实例所在节点信息
                     * @return NodeInfo 实例所在节点信息
                     * 
                     */
                    NodeInfo GetNodeInfo() const;

                    /**
                     * 设置实例所在节点信息
                     * @param _nodeInfo 实例所在节点信息
                     * 
                     */
                    void SetNodeInfo(const NodeInfo& _nodeInfo);

                    /**
                     * 判断参数 NodeInfo 是否已赋值
                     * @return NodeInfo 是否已赋值
                     * 
                     */
                    bool NodeInfoHasBeenSet() const;

                    /**
                     * 获取启动时间
                     * @return StartTime 启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
                     * @param _startTime 启动时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取是否健康
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unhealthy 是否健康
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnhealthy() const;

                    /**
                     * 设置是否健康
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unhealthy 是否健康
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnhealthy(const bool& _unhealthy);

                    /**
                     * 判断参数 Unhealthy 是否已赋值
                     * @return Unhealthy 是否已赋值
                     * 
                     */
                    bool UnhealthyHasBeenSet() const;

                    /**
                     * 获取不健康时的提示信息
                     * @return UnhealthyWarningMsg 不健康时的提示信息
                     * 
                     */
                    std::string GetUnhealthyWarningMsg() const;

                    /**
                     * 设置不健康时的提示信息
                     * @param _unhealthyWarningMsg 不健康时的提示信息
                     * 
                     */
                    void SetUnhealthyWarningMsg(const std::string& _unhealthyWarningMsg);

                    /**
                     * 判断参数 UnhealthyWarningMsg 是否已赋值
                     * @return UnhealthyWarningMsg 是否已赋值
                     * 
                     */
                    bool UnhealthyWarningMsgHasBeenSet() const;

                    /**
                     * 获取版本ID
                     * @return VersionId 版本ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本ID
                     * @param _versionId 版本ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return ApplicationName 应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
                     * @param _applicationName 应用名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                private:

                    /**
                     * shell地址
                     */
                    std::string m_webshell;
                    bool m_webshellHasBeenSet;

                    /**
                     * pod的id
                     */
                    std::string m_podId;
                    bool m_podIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例的ip
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 部署版本
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * 重启次数
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * pod是否就绪
                     */
                    bool m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * 容器状态
                     */
                    std::string m_containerState;
                    bool m_containerStateHasBeenSet;

                    /**
                     * 实例所在节点信息
                     */
                    NodeInfo m_nodeInfo;
                    bool m_nodeInfoHasBeenSet;

                    /**
                     * 启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 是否健康
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unhealthy;
                    bool m_unhealthyHasBeenSet;

                    /**
                     * 不健康时的提示信息
                     */
                    std::string m_unhealthyWarningMsg;
                    bool m_unhealthyWarningMsgHasBeenSet;

                    /**
                     * 版本ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_RUNVERSIONPOD_H_
