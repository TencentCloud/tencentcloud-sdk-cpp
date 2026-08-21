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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEFIXRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEFIXRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineItem.h>
#include <tencentcloud/csip/v20221121/model/BaselineHostAsset.h>
#include <tencentcloud/csip/v20221121/model/BaselineClusterAsset.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线风险修复历史记录
                */
                class BaselineFixRecord : public AbstractModel
                {
                public:
                    BaselineFixRecord();
                    ~BaselineFixRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>修复记录主键 ID。</p>
                     * @return ID <p>修复记录主键 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>修复记录主键 ID。</p>
                     * @param _iD <p>修复记录主键 ID。</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>租户 AppID。</p>
                     * @return AppID <p>租户 AppID。</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>租户 AppID。</p>
                     * @param _appID <p>租户 AppID。</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>被修复的检测项基础信息。</p>
                     * @return ItemInfo <p>被修复的检测项基础信息。</p>
                     * 
                     */
                    BaselineItem GetItemInfo() const;

                    /**
                     * 设置<p>被修复的检测项基础信息。</p>
                     * @param _itemInfo <p>被修复的检测项基础信息。</p>
                     * 
                     */
                    void SetItemInfo(const BaselineItem& _itemInfo);

                    /**
                     * 判断参数 ItemInfo 是否已赋值
                     * @return ItemInfo 是否已赋值
                     * 
                     */
                    bool ItemInfoHasBeenSet() const;

                    /**
                     * 获取<p>本次修复涉及的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostInfo <p>本次修复涉及的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineHostAsset GetHostInfo() const;

                    /**
                     * 设置<p>本次修复涉及的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostInfo <p>本次修复涉及的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostInfo(const BaselineHostAsset& _hostInfo);

                    /**
                     * 判断参数 HostInfo 是否已赋值
                     * @return HostInfo 是否已赋值
                     * 
                     */
                    bool HostInfoHasBeenSet() const;

                    /**
                     * 获取<p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterInfo <p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineClusterAsset GetClusterInfo() const;

                    /**
                     * 设置<p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterInfo <p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterInfo(const BaselineClusterAsset& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取<p>资产类型：HOST（主机）、CLUSTER（容器集群）。</p>
                     * @return AssetType <p>资产类型：HOST（主机）、CLUSTER（容器集群）。</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型：HOST（主机）、CLUSTER（容器集群）。</p>
                     * @param _assetType <p>资产类型：HOST（主机）、CLUSTER（容器集群）。</p>
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
                     * 获取<p>修复完成时间。</p>
                     * @return FixTime <p>修复完成时间。</p>
                     * 
                     */
                    std::string GetFixTime() const;

                    /**
                     * 设置<p>修复完成时间。</p>
                     * @param _fixTime <p>修复完成时间。</p>
                     * 
                     */
                    void SetFixTime(const std::string& _fixTime);

                    /**
                     * 判断参数 FixTime 是否已赋值
                     * @return FixTime 是否已赋值
                     * 
                     */
                    bool FixTimeHasBeenSet() const;

                    /**
                     * 获取<p>该风险首次被发现的时间。</p>
                     * @return DiscoveryTime <p>该风险首次被发现的时间。</p>
                     * 
                     */
                    std::string GetDiscoveryTime() const;

                    /**
                     * 设置<p>该风险首次被发现的时间。</p>
                     * @param _discoveryTime <p>该风险首次被发现的时间。</p>
                     * 
                     */
                    void SetDiscoveryTime(const std::string& _discoveryTime);

                    /**
                     * 判断参数 DiscoveryTime 是否已赋值
                     * @return DiscoveryTime 是否已赋值
                     * 
                     */
                    bool DiscoveryTimeHasBeenSet() const;

                private:

                    /**
                     * <p>修复记录主键 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>租户 AppID。</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>被修复的检测项基础信息。</p>
                     */
                    BaselineItem m_itemInfo;
                    bool m_itemInfoHasBeenSet;

                    /**
                     * <p>本次修复涉及的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineHostAsset m_hostInfo;
                    bool m_hostInfoHasBeenSet;

                    /**
                     * <p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineClusterAsset m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <p>资产类型：HOST（主机）、CLUSTER（容器集群）。</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>修复完成时间。</p>
                     */
                    std::string m_fixTime;
                    bool m_fixTimeHasBeenSet;

                    /**
                     * <p>该风险首次被发现的时间。</p>
                     */
                    std::string m_discoveryTime;
                    bool m_discoveryTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEFIXRECORD_H_
