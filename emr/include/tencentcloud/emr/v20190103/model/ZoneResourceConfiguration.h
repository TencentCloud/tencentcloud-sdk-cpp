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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ZONERESOURCECONFIGURATION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ZONERESOURCECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VirtualPrivateCloud.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/AllNodeResourceSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 可用区配置信息
                */
                class ZoneResourceConfiguration : public AbstractModel
                {
                public:
                    ZoneResourceConfiguration();
                    ~ZoneResourceConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualPrivateCloud 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualPrivateCloud 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取所有节点资源的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllNodeResourceSpec 所有节点资源的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AllNodeResourceSpec GetAllNodeResourceSpec() const;

                    /**
                     * 设置所有节点资源的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allNodeResourceSpec 所有节点资源的规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllNodeResourceSpec(const AllNodeResourceSpec& _allNodeResourceSpec);

                    /**
                     * 判断参数 AllNodeResourceSpec 是否已赋值
                     * @return AllNodeResourceSpec 是否已赋值
                     * 
                     */
                    bool AllNodeResourceSpecHasBeenSet() const;

                    /**
                     * 获取如果是单可用区，ZoneTag可以不用填， 如果是双AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，如果是三AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，第三个可用区ZoneTag选择third-party，取值范围：
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * @return ZoneTag 如果是单可用区，ZoneTag可以不用填， 如果是双AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，如果是三AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，第三个可用区ZoneTag选择third-party，取值范围：
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * 
                     */
                    std::string GetZoneTag() const;

                    /**
                     * 设置如果是单可用区，ZoneTag可以不用填， 如果是双AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，如果是三AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，第三个可用区ZoneTag选择third-party，取值范围：
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * @param _zoneTag 如果是单可用区，ZoneTag可以不用填， 如果是双AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，如果是三AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，第三个可用区ZoneTag选择third-party，取值范围：
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     * 
                     */
                    void SetZoneTag(const std::string& _zoneTag);

                    /**
                     * 判断参数 ZoneTag 是否已赋值
                     * @return ZoneTag 是否已赋值
                     * 
                     */
                    bool ZoneTagHasBeenSet() const;

                private:

                    /**
                     * 私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 所有节点资源的规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AllNodeResourceSpec m_allNodeResourceSpec;
                    bool m_allNodeResourceSpecHasBeenSet;

                    /**
                     * 如果是单可用区，ZoneTag可以不用填， 如果是双AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，如果是三AZ部署，第一个可用区ZoneTag选择master，第二个可用区ZoneTag选择standby，第三个可用区ZoneTag选择third-party，取值范围：
  <li>master</li>
  <li>standby</li>
  <li>third-party</li>
                     */
                    std::string m_zoneTag;
                    bool m_zoneTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ZONERESOURCECONFIGURATION_H_
