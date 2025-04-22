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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ZONERESOURCE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ZONERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Resource.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 可用区资源列表
                */
                class ZoneResource : public AbstractModel
                {
                public:
                    ZoneResource();
                    ~ZoneResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主可用区，如"ap-guangzhou-1"。
                     * @return MasterZone 主可用区，如"ap-guangzhou-1"。
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置主可用区，如"ap-guangzhou-1"。
                     * @param _masterZone 主可用区，如"ap-guangzhou-1"。
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取资源列表。
                     * @return ResourceSet 资源列表。
                     * 
                     */
                    std::vector<Resource> GetResourceSet() const;

                    /**
                     * 设置资源列表。
                     * @param _resourceSet 资源列表。
                     * 
                     */
                    void SetResourceSet(const std::vector<Resource>& _resourceSet);

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                    /**
                     * 获取备可用区，如"ap-guangzhou-2"，单可用区时，备可用区为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveZone 备可用区，如"ap-guangzhou-2"，单可用区时，备可用区为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置备可用区，如"ap-guangzhou-2"，单可用区时，备可用区为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slaveZone 备可用区，如"ap-guangzhou-2"，单可用区时，备可用区为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取IP版本，如IPv4，IPv6，IPv6_Nat。
                     * @return IPVersion IP版本，如IPv4，IPv6，IPv6_Nat。
                     * 
                     */
                    std::string GetIPVersion() const;

                    /**
                     * 设置IP版本，如IPv4，IPv6，IPv6_Nat。
                     * @param _iPVersion IP版本，如IPv4，IPv6，IPv6_Nat。
                     * 
                     */
                    void SetIPVersion(const std::string& _iPVersion);

                    /**
                     * 判断参数 IPVersion 是否已赋值
                     * @return IPVersion 是否已赋值
                     * 
                     */
                    bool IPVersionHasBeenSet() const;

                    /**
                     * 获取可用区所属地域，如：ap-guangzhou
                     * @return ZoneRegion 可用区所属地域，如：ap-guangzhou
                     * 
                     */
                    std::string GetZoneRegion() const;

                    /**
                     * 设置可用区所属地域，如：ap-guangzhou
                     * @param _zoneRegion 可用区所属地域，如：ap-guangzhou
                     * 
                     */
                    void SetZoneRegion(const std::string& _zoneRegion);

                    /**
                     * 判断参数 ZoneRegion 是否已赋值
                     * @return ZoneRegion 是否已赋值
                     * 
                     */
                    bool ZoneRegionHasBeenSet() const;

                    /**
                     * 获取可用区是否是LocalZone可用区，如：false
                     * @return LocalZone 可用区是否是LocalZone可用区，如：false
                     * 
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置可用区是否是LocalZone可用区，如：false
                     * @param _localZone 可用区是否是LocalZone可用区，如：false
                     * 
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     * 
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取可用区资源的类型，SHARED表示共享资源，EXCLUSIVE表示独占资源。
                     * @return ZoneResourceType 可用区资源的类型，SHARED表示共享资源，EXCLUSIVE表示独占资源。
                     * 
                     */
                    std::string GetZoneResourceType() const;

                    /**
                     * 设置可用区资源的类型，SHARED表示共享资源，EXCLUSIVE表示独占资源。
                     * @param _zoneResourceType 可用区资源的类型，SHARED表示共享资源，EXCLUSIVE表示独占资源。
                     * 
                     */
                    void SetZoneResourceType(const std::string& _zoneResourceType);

                    /**
                     * 判断参数 ZoneResourceType 是否已赋值
                     * @return ZoneResourceType 是否已赋值
                     * 
                     */
                    bool ZoneResourceTypeHasBeenSet() const;

                    /**
                     * 获取可用区是否是EdgeZone可用区，如：false
                     * @return EdgeZone 可用区是否是EdgeZone可用区，如：false
                     * 
                     */
                    bool GetEdgeZone() const;

                    /**
                     * 设置可用区是否是EdgeZone可用区，如：false
                     * @param _edgeZone 可用区是否是EdgeZone可用区，如：false
                     * 
                     */
                    void SetEdgeZone(const bool& _edgeZone);

                    /**
                     * 判断参数 EdgeZone 是否已赋值
                     * @return EdgeZone 是否已赋值
                     * 
                     */
                    bool EdgeZoneHasBeenSet() const;

                    /**
                     * 获取网络出口
                     * @return Egress 网络出口
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置网络出口
                     * @param _egress 网络出口
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                private:

                    /**
                     * 主可用区，如"ap-guangzhou-1"。
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 资源列表。
                     */
                    std::vector<Resource> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                    /**
                     * 备可用区，如"ap-guangzhou-2"，单可用区时，备可用区为null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * IP版本，如IPv4，IPv6，IPv6_Nat。
                     */
                    std::string m_iPVersion;
                    bool m_iPVersionHasBeenSet;

                    /**
                     * 可用区所属地域，如：ap-guangzhou
                     */
                    std::string m_zoneRegion;
                    bool m_zoneRegionHasBeenSet;

                    /**
                     * 可用区是否是LocalZone可用区，如：false
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * 可用区资源的类型，SHARED表示共享资源，EXCLUSIVE表示独占资源。
                     */
                    std::string m_zoneResourceType;
                    bool m_zoneResourceTypeHasBeenSet;

                    /**
                     * 可用区是否是EdgeZone可用区，如：false
                     */
                    bool m_edgeZone;
                    bool m_edgeZoneHasBeenSet;

                    /**
                     * 网络出口
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ZONERESOURCE_H_
