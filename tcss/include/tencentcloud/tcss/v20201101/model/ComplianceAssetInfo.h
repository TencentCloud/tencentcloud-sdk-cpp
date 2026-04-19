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
                     * 获取<p>客户资产的ID。</p>
                     * @return CustomerAssetId <p>客户资产的ID。</p>
                     * 
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置<p>客户资产的ID。</p>
                     * @param _customerAssetId <p>客户资产的ID。</p>
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
                     * 获取<p>资产类别。</p>
                     * @return AssetType <p>资产类别。</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类别。</p>
                     * @param _assetType <p>资产类别。</p>
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
                     * 获取<p>资产的名称。</p>
                     * @return AssetName <p>资产的名称。</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>资产的名称。</p>
                     * @param _assetName <p>资产的名称。</p>
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
                     * 获取<p>当资产为镜像时，这个字段为镜像Tag。</p>
                     * @return ImageTag <p>当资产为镜像时，这个字段为镜像Tag。</p>
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置<p>当资产为镜像时，这个字段为镜像Tag。</p>
                     * @param _imageTag <p>当资产为镜像时，这个字段为镜像Tag。</p>
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
                     * 获取<p>资产所在的主机IP。</p>
                     * @return HostIP <p>资产所在的主机IP。</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置<p>资产所在的主机IP。</p>
                     * @param _hostIP <p>资产所在的主机IP。</p>
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
                     * 获取<p>资产所属的节点的名称</p>
                     * @return NodeName <p>资产所属的节点的名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>资产所属的节点的名称</p>
                     * @param _nodeName <p>资产所属的节点的名称</p>
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
                     * 获取<p>检测状态</p><p>CHECK_INIT, 待检测</p><p>CHECK_RUNNING, 检测中</p><p>CHECK_FINISHED, 检测完成</p><p>CHECK_FAILED, 检测失败</p>
                     * @return CheckStatus <p>检测状态</p><p>CHECK_INIT, 待检测</p><p>CHECK_RUNNING, 检测中</p><p>CHECK_FINISHED, 检测完成</p><p>CHECK_FAILED, 检测失败</p>
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置<p>检测状态</p><p>CHECK_INIT, 待检测</p><p>CHECK_RUNNING, 检测中</p><p>CHECK_FINISHED, 检测完成</p><p>CHECK_FAILED, 检测失败</p>
                     * @param _checkStatus <p>检测状态</p><p>CHECK_INIT, 待检测</p><p>CHECK_RUNNING, 检测中</p><p>CHECK_FINISHED, 检测完成</p><p>CHECK_FAILED, 检测失败</p>
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
                     * 获取<p>此类资产通过的检测项的数目。</p>
                     * @return PassedPolicyItemCount <p>此类资产通过的检测项的数目。</p>
                     * 
                     */
                    uint64_t GetPassedPolicyItemCount() const;

                    /**
                     * 设置<p>此类资产通过的检测项的数目。</p>
                     * @param _passedPolicyItemCount <p>此类资产通过的检测项的数目。</p>
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
                     * 获取<p>此类资产未通过的检测的数目。</p>
                     * @return FailedPolicyItemCount <p>此类资产未通过的检测的数目。</p>
                     * 
                     */
                    uint64_t GetFailedPolicyItemCount() const;

                    /**
                     * 设置<p>此类资产未通过的检测的数目。</p>
                     * @param _failedPolicyItemCount <p>此类资产未通过的检测的数目。</p>
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
                     * 获取<p>上次检测的时间。</p>
                     * @return LastCheckTime <p>上次检测的时间。</p>
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置<p>上次检测的时间。</p>
                     * @param _lastCheckTime <p>上次检测的时间。</p>
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
                     * 获取<p>检测结果：<br>RESULT_FAILED: 未通过。<br>RESULT_PASSED: 通过。</p>
                     * @return CheckResult <p>检测结果：<br>RESULT_FAILED: 未通过。<br>RESULT_PASSED: 通过。</p>
                     * 
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置<p>检测结果：<br>RESULT_FAILED: 未通过。<br>RESULT_PASSED: 通过。</p>
                     * @param _checkResult <p>检测结果：<br>RESULT_FAILED: 未通过。<br>RESULT_PASSED: 通过。</p>
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
                     * 获取<p>主机节点的实例id</p>
                     * @return InstanceId <p>主机节点的实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>主机节点的实例id</p>
                     * @param _instanceId <p>主机节点的实例id</p>
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
                     * 获取<p>镜像仓库信息</p>
                     * @return ImageRegistryInfo <p>镜像仓库信息</p>
                     * 
                     */
                    ImageRegistryInfo GetImageRegistryInfo() const;

                    /**
                     * 设置<p>镜像仓库信息</p>
                     * @param _imageRegistryInfo <p>镜像仓库信息</p>
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
                     * 获取<p>集群id</p>
                     * @return ClusterID <p>集群id</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterID <p>集群id</p>
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
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>资产唯一ID</p><p>默认值：-</p>
                     * @return AssetUniqueID <p>资产唯一ID</p><p>默认值：-</p>
                     * 
                     */
                    std::string GetAssetUniqueID() const;

                    /**
                     * 设置<p>资产唯一ID</p><p>默认值：-</p>
                     * @param _assetUniqueID <p>资产唯一ID</p><p>默认值：-</p>
                     * 
                     */
                    void SetAssetUniqueID(const std::string& _assetUniqueID);

                    /**
                     * 判断参数 AssetUniqueID 是否已赋值
                     * @return AssetUniqueID 是否已赋值
                     * 
                     */
                    bool AssetUniqueIDHasBeenSet() const;

                private:

                    /**
                     * <p>客户资产的ID。</p>
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                    /**
                     * <p>资产类别。</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>资产的名称。</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>当资产为镜像时，这个字段为镜像Tag。</p>
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * <p>资产所在的主机IP。</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>资产所属的节点的名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>检测状态</p><p>CHECK_INIT, 待检测</p><p>CHECK_RUNNING, 检测中</p><p>CHECK_FINISHED, 检测完成</p><p>CHECK_FAILED, 检测失败</p>
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * <p>此类资产通过的检测项的数目。</p>
                     */
                    uint64_t m_passedPolicyItemCount;
                    bool m_passedPolicyItemCountHasBeenSet;

                    /**
                     * <p>此类资产未通过的检测的数目。</p>
                     */
                    uint64_t m_failedPolicyItemCount;
                    bool m_failedPolicyItemCountHasBeenSet;

                    /**
                     * <p>上次检测的时间。</p>
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * <p>检测结果：<br>RESULT_FAILED: 未通过。<br>RESULT_PASSED: 通过。</p>
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * <p>主机节点的实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>镜像仓库信息</p>
                     */
                    ImageRegistryInfo m_imageRegistryInfo;
                    bool m_imageRegistryInfoHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>资产唯一ID</p><p>默认值：-</p>
                     */
                    std::string m_assetUniqueID;
                    bool m_assetUniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETINFO_H_
