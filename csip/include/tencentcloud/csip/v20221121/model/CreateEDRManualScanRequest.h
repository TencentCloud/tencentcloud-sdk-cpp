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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRMANUALSCANREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRMANUALSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>
#include <tencentcloud/csip/v20221121/model/ClusterWithAppIdItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateEDRManualScan请求参数结构体
                */
                class CreateEDRManualScanRequest : public AbstractModel
                {
                public:
                    CreateEDRManualScanRequest();
                    ~CreateEDRManualScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资产选择方式：all-全部资产/tag-按标签选择(仅主机)/direct-直接选择</p>
                     * @return AssetSelectionType <p>资产选择方式：all-全部资产/tag-按标签选择(仅主机)/direct-直接选择</p>
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 设置<p>资产选择方式：all-全部资产/tag-按标签选择(仅主机)/direct-直接选择</p>
                     * @param _assetSelectionType <p>资产选择方式：all-全部资产/tag-按标签选择(仅主机)/direct-直接选择</p>
                     * 
                     */
                    void SetAssetSelectionType(const std::string& _assetSelectionType);

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>检测模式：full-全盘检测/quick-快速检测/include-仅检测指定路径/exclude-排除指定路径</p>
                     * @return ScanType <p>检测模式：full-全盘检测/quick-快速检测/include-仅检测指定路径/exclude-排除指定路径</p>
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 设置<p>检测模式：full-全盘检测/quick-快速检测/include-仅检测指定路径/exclude-排除指定路径</p>
                     * @param _scanType <p>检测模式：full-全盘检测/quick-快速检测/include-仅检测指定路径/exclude-排除指定路径</p>
                     * 
                     */
                    void SetScanType(const std::string& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>直接选择的主机列表（AssetSelectionType=direct或all时使用）</p>
                     * @return InstanceIDsWithAppId <p>直接选择的主机列表（AssetSelectionType=direct或all时使用）</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>直接选择的主机列表（AssetSelectionType=direct或all时使用）</p>
                     * @param _instanceIDsWithAppId <p>直接选择的主机列表（AssetSelectionType=direct或all时使用）</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>剔除的主机列表（AssetSelectionType=all时使用）</p>
                     * @return ExcludeInstanceIDsWithAppId <p>剔除的主机列表（AssetSelectionType=all时使用）</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>剔除的主机列表（AssetSelectionType=all时使用）</p>
                     * @param _excludeInstanceIDsWithAppId <p>剔除的主机列表（AssetSelectionType=all时使用）</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>主机对应的标签ID</p>
                     * @return TagIds <p>主机对应的标签ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>主机对应的标签ID</p>
                     * @param _tagIds <p>主机对应的标签ID</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>直接选择的集群列表</p>
                     * @return ClusterIDsWithAppId <p>直接选择的集群列表</p>
                     * 
                     */
                    std::vector<ClusterWithAppIdItem> GetClusterIDsWithAppId() const;

                    /**
                     * 设置<p>直接选择的集群列表</p>
                     * @param _clusterIDsWithAppId <p>直接选择的集群列表</p>
                     * 
                     */
                    void SetClusterIDsWithAppId(const std::vector<ClusterWithAppIdItem>& _clusterIDsWithAppId);

                    /**
                     * 判断参数 ClusterIDsWithAppId 是否已赋值
                     * @return ClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>剔除的集群列表（AssetSelectionType=all时使用）</p>
                     * @return ExcludeClusterIDsWithAppId <p>剔除的集群列表（AssetSelectionType=all时使用）</p>
                     * 
                     */
                    std::vector<ClusterWithAppIdItem> GetExcludeClusterIDsWithAppId() const;

                    /**
                     * 设置<p>剔除的集群列表（AssetSelectionType=all时使用）</p>
                     * @param _excludeClusterIDsWithAppId <p>剔除的集群列表（AssetSelectionType=all时使用）</p>
                     * 
                     */
                    void SetExcludeClusterIDsWithAppId(const std::vector<ClusterWithAppIdItem>& _excludeClusterIDsWithAppId);

                    /**
                     * 判断参数 ExcludeClusterIDsWithAppId 是否已赋值
                     * @return ExcludeClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>自选路径列表（ScanType=include或exclude时必填，最多100条）</p>
                     * @return CustomPaths <p>自选路径列表（ScanType=include或exclude时必填，最多100条）</p>
                     * 
                     */
                    std::vector<std::string> GetCustomPaths() const;

                    /**
                     * 设置<p>自选路径列表（ScanType=include或exclude时必填，最多100条）</p>
                     * @param _customPaths <p>自选路径列表（ScanType=include或exclude时必填，最多100条）</p>
                     * 
                     */
                    void SetCustomPaths(const std::vector<std::string>& _customPaths);

                    /**
                     * 判断参数 CustomPaths 是否已赋值
                     * @return CustomPaths 是否已赋值
                     * 
                     */
                    bool CustomPathsHasBeenSet() const;

                    /**
                     * 获取<p>超时时间（秒），上限7200</p>
                     * @return Timeout <p>超时时间（秒），上限7200</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间（秒），上限7200</p>
                     * @param _timeout <p>超时时间（秒），上限7200</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否开启深度检测：0-否/1-是</p>
                     * @return EnableMemShellScan <p>是否开启深度检测：0-否/1-是</p>
                     * 
                     */
                    int64_t GetEnableMemShellScan() const;

                    /**
                     * 设置<p>是否开启深度检测：0-否/1-是</p>
                     * @param _enableMemShellScan <p>是否开启深度检测：0-否/1-是</p>
                     * 
                     */
                    void SetEnableMemShellScan(const int64_t& _enableMemShellScan);

                    /**
                     * 判断参数 EnableMemShellScan 是否已赋值
                     * @return EnableMemShellScan 是否已赋值
                     * 
                     */
                    bool EnableMemShellScanHasBeenSet() const;

                private:

                    /**
                     * <p>资产选择方式：all-全部资产/tag-按标签选择(仅主机)/direct-直接选择</p>
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>检测模式：full-全盘检测/quick-快速检测/include-仅检测指定路径/exclude-排除指定路径</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>直接选择的主机列表（AssetSelectionType=direct或all时使用）</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>剔除的主机列表（AssetSelectionType=all时使用）</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>主机对应的标签ID</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>直接选择的集群列表</p>
                     */
                    std::vector<ClusterWithAppIdItem> m_clusterIDsWithAppId;
                    bool m_clusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>剔除的集群列表（AssetSelectionType=all时使用）</p>
                     */
                    std::vector<ClusterWithAppIdItem> m_excludeClusterIDsWithAppId;
                    bool m_excludeClusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>自选路径列表（ScanType=include或exclude时必填，最多100条）</p>
                     */
                    std::vector<std::string> m_customPaths;
                    bool m_customPathsHasBeenSet;

                    /**
                     * <p>超时时间（秒），上限7200</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>是否开启深度检测：0-否/1-是</p>
                     */
                    int64_t m_enableMemShellScan;
                    bool m_enableMemShellScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRMANUALSCANREQUEST_H_
