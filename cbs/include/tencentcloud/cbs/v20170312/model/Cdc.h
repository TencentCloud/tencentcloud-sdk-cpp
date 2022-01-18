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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CDC_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CDC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/CdcSize.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述独享集群的详细信息。
                */
                class Cdc : public AbstractModel
                {
                public:
                    Cdc();
                    ~Cdc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取独享集群围笼ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CageId 独享集群围笼ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置独享集群围笼ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CageId 独享集群围笼ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取独享集群状态。取值范围：<br><li>NORMAL：正常；<br><li>CLOSED：关闭，此时将不可使用该独享集群创建新的云硬盘；<br><li>FAULT：独享集群状态异常，此时独享集群将不可操作，腾讯云运维团队将会及时修复该集群；<br><li>ISOLATED：因未及时续费导致独享集群被隔离，此时将不可使用该独享集群创建新的云硬盘，对应的云硬盘也将不可操作。
                     * @return CdcState 独享集群状态。取值范围：<br><li>NORMAL：正常；<br><li>CLOSED：关闭，此时将不可使用该独享集群创建新的云硬盘；<br><li>FAULT：独享集群状态异常，此时独享集群将不可操作，腾讯云运维团队将会及时修复该集群；<br><li>ISOLATED：因未及时续费导致独享集群被隔离，此时将不可使用该独享集群创建新的云硬盘，对应的云硬盘也将不可操作。
                     */
                    std::string GetCdcState() const;

                    /**
                     * 设置独享集群状态。取值范围：<br><li>NORMAL：正常；<br><li>CLOSED：关闭，此时将不可使用该独享集群创建新的云硬盘；<br><li>FAULT：独享集群状态异常，此时独享集群将不可操作，腾讯云运维团队将会及时修复该集群；<br><li>ISOLATED：因未及时续费导致独享集群被隔离，此时将不可使用该独享集群创建新的云硬盘，对应的云硬盘也将不可操作。
                     * @param CdcState 独享集群状态。取值范围：<br><li>NORMAL：正常；<br><li>CLOSED：关闭，此时将不可使用该独享集群创建新的云硬盘；<br><li>FAULT：独享集群状态异常，此时独享集群将不可操作，腾讯云运维团队将会及时修复该集群；<br><li>ISOLATED：因未及时续费导致独享集群被隔离，此时将不可使用该独享集群创建新的云硬盘，对应的云硬盘也将不可操作。
                     */
                    void SetCdcState(const std::string& _cdcState);

                    /**
                     * 判断参数 CdcState 是否已赋值
                     * @return CdcState 是否已赋值
                     */
                    bool CdcStateHasBeenSet() const;

                    /**
                     * 获取独享集群所属的[可用区](/document/product/213/15753#ZoneInfo)ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 独享集群所属的[可用区](/document/product/213/15753#ZoneInfo)ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置独享集群所属的[可用区](/document/product/213/15753#ZoneInfo)ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Zone 独享集群所属的[可用区](/document/product/213/15753#ZoneInfo)ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取独享集群实例名称。
                     * @return CdcName 独享集群实例名称。
                     */
                    std::string GetCdcName() const;

                    /**
                     * 设置独享集群实例名称。
                     * @param CdcName 独享集群实例名称。
                     */
                    void SetCdcName(const std::string& _cdcName);

                    /**
                     * 判断参数 CdcName 是否已赋值
                     * @return CdcName 是否已赋值
                     */
                    bool CdcNameHasBeenSet() const;

                    /**
                     * 获取独享集群的资源容量大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcResource 独享集群的资源容量大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CdcSize GetCdcResource() const;

                    /**
                     * 设置独享集群的资源容量大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CdcResource 独享集群的资源容量大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCdcResource(const CdcSize& _cdcResource);

                    /**
                     * 判断参数 CdcResource 是否已赋值
                     * @return CdcResource 是否已赋值
                     */
                    bool CdcResourceHasBeenSet() const;

                    /**
                     * 获取独享集群实例id。
                     * @return CdcId 独享集群实例id。
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置独享集群实例id。
                     * @param CdcId 独享集群实例id。
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取独享集群类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘集群<br><li>CLOUD_PREMIUM：表示高性能云硬盘集群<br><li>CLOUD_SSD：SSD表示SSD云硬盘集群。
                     * @return DiskType 独享集群类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘集群<br><li>CLOUD_PREMIUM：表示高性能云硬盘集群<br><li>CLOUD_SSD：SSD表示SSD云硬盘集群。
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置独享集群类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘集群<br><li>CLOUD_PREMIUM：表示高性能云硬盘集群<br><li>CLOUD_SSD：SSD表示SSD云硬盘集群。
                     * @param DiskType 独享集群类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘集群<br><li>CLOUD_PREMIUM：表示高性能云硬盘集群<br><li>CLOUD_SSD：SSD表示SSD云硬盘集群。
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取独享集群到期时间。
                     * @return ExpiredTime 独享集群到期时间。
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置独享集群到期时间。
                     * @param ExpiredTime 独享集群到期时间。
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 独享集群围笼ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * 独享集群状态。取值范围：<br><li>NORMAL：正常；<br><li>CLOSED：关闭，此时将不可使用该独享集群创建新的云硬盘；<br><li>FAULT：独享集群状态异常，此时独享集群将不可操作，腾讯云运维团队将会及时修复该集群；<br><li>ISOLATED：因未及时续费导致独享集群被隔离，此时将不可使用该独享集群创建新的云硬盘，对应的云硬盘也将不可操作。
                     */
                    std::string m_cdcState;
                    bool m_cdcStateHasBeenSet;

                    /**
                     * 独享集群所属的[可用区](/document/product/213/15753#ZoneInfo)ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 独享集群实例名称。
                     */
                    std::string m_cdcName;
                    bool m_cdcNameHasBeenSet;

                    /**
                     * 独享集群的资源容量大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CdcSize m_cdcResource;
                    bool m_cdcResourceHasBeenSet;

                    /**
                     * 独享集群实例id。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * 独享集群类型。取值范围：<br><li>CLOUD_BASIC：表示普通云硬盘集群<br><li>CLOUD_PREMIUM：表示高性能云硬盘集群<br><li>CLOUD_SSD：SSD表示SSD云硬盘集群。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 独享集群到期时间。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CDC_H_
