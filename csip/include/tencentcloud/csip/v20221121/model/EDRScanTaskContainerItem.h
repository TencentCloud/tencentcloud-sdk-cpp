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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKCONTAINERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKCONTAINERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 容器资产扫描详情项
                */
                class EDRScanTaskContainerItem : public AbstractModel
                {
                public:
                    EDRScanTaskContainerItem();
                    ~EDRScanTaskContainerItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>容器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerID <p>容器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置<p>容器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerID <p>容器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取<p>容器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName <p>容器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>容器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName <p>容器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName <p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName <p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterID <p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterID <p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName <p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName <p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType <p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType <p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName <p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName <p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudType <p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudType <p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>告警数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCount <p>告警数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>告警数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCount <p>告警数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixSuggestion <p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置<p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixSuggestion <p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                private:

                    /**
                     * <p>容器ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * <p>容器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>Pod名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>告警数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKCONTAINERITEM_H_
