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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageRegistryInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一项资产的信息。
                */
                class ComplianceAssetInfo : public AbstractModel
                {
                public:
                    ComplianceAssetInfo();
                    ~ComplianceAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户资产的ID。
                     * @return CustomerAssetId 客户资产的ID。
                     * 
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置客户资产的ID。
                     * @param _customerAssetId 客户资产的ID。
                     * 
                     */
                    void SetCustomerAssetId(const uint64_t& _customerAssetId);

                    /**
                     * 判断参数 CustomerAssetId 是否已赋值
                     * @return CustomerAssetId 是否已赋值
                     * 
                     */
                    bool CustomerAssetIdHasBeenSet() const;

                    /**
                     * 获取资产类别。
                     * @return AssetType 资产类别。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类别。
                     * @param _assetType 资产类别。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取资产的名称。
                     * @return AssetName 资产的名称。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产的名称。
                     * @param _assetName 资产的名称。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取当资产为镜像时，这个字段为镜像Tag。
                     * @return ImageTag 当资产为镜像时，这个字段为镜像Tag。
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置当资产为镜像时，这个字段为镜像Tag。
                     * @param _imageTag 当资产为镜像时，这个字段为镜像Tag。
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取资产所在的主机IP。
                     * @return HostIP 资产所在的主机IP。
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置资产所在的主机IP。
                     * @param _hostIP 资产所在的主机IP。
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取资产所属的节点的名称
                     * @return NodeName 资产所属的节点的名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置资产所属的节点的名称
                     * @param _nodeName 资产所属的节点的名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * @return CheckStatus 检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * @param _checkStatus 检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取此类资产通过的检测项的数目。
                     * @return PassedPolicyItemCount 此类资产通过的检测项的数目。
                     * 
                     */
                    uint64_t GetPassedPolicyItemCount() const;

                    /**
                     * 设置此类资产通过的检测项的数目。
                     * @param _passedPolicyItemCount 此类资产通过的检测项的数目。
                     * 
                     */
                    void SetPassedPolicyItemCount(const uint64_t& _passedPolicyItemCount);

                    /**
                     * 判断参数 PassedPolicyItemCount 是否已赋值
                     * @return PassedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool PassedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取此类资产未通过的检测的数目。
                     * @return FailedPolicyItemCount 此类资产未通过的检测的数目。
                     * 
                     */
                    uint64_t GetFailedPolicyItemCount() const;

                    /**
                     * 设置此类资产未通过的检测的数目。
                     * @param _failedPolicyItemCount 此类资产未通过的检测的数目。
                     * 
                     */
                    void SetFailedPolicyItemCount(const uint64_t& _failedPolicyItemCount);

                    /**
                     * 判断参数 FailedPolicyItemCount 是否已赋值
                     * @return FailedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取上次检测的时间。
                     * @return LastCheckTime 上次检测的时间。
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置上次检测的时间。
                     * @param _lastCheckTime 上次检测的时间。
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取检测结果：
RESULT_FAILED: 未通过。
RESULT_PASSED: 通过。
                     * @return CheckResult 检测结果：
RESULT_FAILED: 未通过。
RESULT_PASSED: 通过。
                     * 
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置检测结果：
RESULT_FAILED: 未通过。
RESULT_PASSED: 通过。
                     * @param _checkResult 检测结果：
RESULT_FAILED: 未通过。
RESULT_PASSED: 通过。
                     * 
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取主机节点的实例id
                     * @return InstanceId 主机节点的实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置主机节点的实例id
                     * @param _instanceId 主机节点的实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取镜像仓库信息
                     * @return ImageRegistryInfo 镜像仓库信息
                     * 
                     */
                    ImageRegistryInfo GetImageRegistryInfo() const;

                    /**
                     * 设置镜像仓库信息
                     * @param _imageRegistryInfo 镜像仓库信息
                     * 
                     */
                    void SetImageRegistryInfo(const ImageRegistryInfo& _imageRegistryInfo);

                    /**
                     * 判断参数 ImageRegistryInfo 是否已赋值
                     * @return ImageRegistryInfo 是否已赋值
                     * 
                     */
                    bool ImageRegistryInfoHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterID 集群id
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群id
                     * @param _clusterID 集群id
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * 客户资产的ID。
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                    /**
                     * 资产类别。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 资产的名称。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 当资产为镜像时，这个字段为镜像Tag。
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 资产所在的主机IP。
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 资产所属的节点的名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 此类资产通过的检测项的数目。
                     */
                    uint64_t m_passedPolicyItemCount;
                    bool m_passedPolicyItemCountHasBeenSet;

                    /**
                     * 此类资产未通过的检测的数目。
                     */
                    uint64_t m_failedPolicyItemCount;
                    bool m_failedPolicyItemCountHasBeenSet;

                    /**
                     * 上次检测的时间。
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 检测结果：
RESULT_FAILED: 未通过。
RESULT_PASSED: 通过。
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 主机节点的实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像仓库信息
                     */
                    ImageRegistryInfo m_imageRegistryInfo;
                    bool m_imageRegistryInfoHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_
