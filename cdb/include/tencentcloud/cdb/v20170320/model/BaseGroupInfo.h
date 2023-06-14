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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BASEGROUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BASEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * proxy代理组信息
                */
                class BaseGroupInfo : public AbstractModel
                {
                public:
                    BaseGroupInfo();
                    ~BaseGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyGroupId 代理组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyGroupId 代理组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取代理节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeCount 代理节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置代理节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeCount 代理节点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取状态：发货中（init）运行中（online）下线中（offline）销毁中（destroy）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态：发货中（init）运行中（online）下线中（offline）销毁中（destroy）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：发货中（init）运行中（online）下线中（offline）销毁中（destroy）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态：发货中（init）运行中（online）下线中（offline）销毁中（destroy）
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
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenRW 是否开启读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetOpenRW() const;

                    /**
                     * 设置是否开启读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openRW 是否开启读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenRW(const bool& _openRW);

                    /**
                     * 判断参数 OpenRW 是否已赋值
                     * @return OpenRW 是否已赋值
                     * 
                     */
                    bool OpenRWHasBeenSet() const;

                    /**
                     * 获取当前代理版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentProxyVersion 当前代理版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置当前代理版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentProxyVersion 当前代理版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentProxyVersion(const std::string& _currentProxyVersion);

                    /**
                     * 判断参数 CurrentProxyVersion 是否已赋值
                     * @return CurrentProxyVersion 是否已赋值
                     * 
                     */
                    bool CurrentProxyVersionHasBeenSet() const;

                    /**
                     * 获取支持升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportUpgradeProxyVersion 支持升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSupportUpgradeProxyVersion() const;

                    /**
                     * 设置支持升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportUpgradeProxyVersion 支持升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportUpgradeProxyVersion(const std::string& _supportUpgradeProxyVersion);

                    /**
                     * 判断参数 SupportUpgradeProxyVersion 是否已赋值
                     * @return SupportUpgradeProxyVersion 是否已赋值
                     * 
                     */
                    bool SupportUpgradeProxyVersionHasBeenSet() const;

                private:

                    /**
                     * 代理组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 代理节点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 状态：发货中（init）运行中（online）下线中（offline）销毁中（destroy）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 是否开启读写分离
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_openRW;
                    bool m_openRWHasBeenSet;

                    /**
                     * 当前代理版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * 支持升级版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_supportUpgradeProxyVersion;
                    bool m_supportUpgradeProxyVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BASEGROUPINFO_H_
