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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONNODECONFIGOVERVIEW_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONNODECONFIGOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Placement.h>
#include <tencentcloud/thpc/v20230321/model/InstanceChargePrepaid.h>
#include <tencentcloud/thpc/v20230321/model/VirtualPrivateCloud.h>
#include <tencentcloud/thpc/v20230321/model/InternetAccessible.h>
#include <tencentcloud/thpc/v20230321/model/SystemDisk.h>
#include <tencentcloud/thpc/v20230321/model/DataDisk.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 扩容节点配置信息概览。
                */
                class ExpansionNodeConfigOverview : public AbstractModel
                {
                public:
                    ExpansionNodeConfigOverview();
                    ~ExpansionNodeConfigOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 节点机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置节点机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 节点机型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取扩容实例所在的位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Placement 扩容实例所在的位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置扩容实例所在的位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _placement 扩容实例所在的位置。
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
                     * 获取节点[计费类型](https://cloud.tencent.com/document/product/213/2180)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceChargeType 节点[计费类型](https://cloud.tencent.com/document/product/213/2180)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置节点[计费类型](https://cloud.tencent.com/document/product/213/2180)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceChargeType 节点[计费类型](https://cloud.tencent.com/document/product/213/2180)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取私有网络相关信息配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualPrivateCloud 私有网络相关信息配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置私有网络相关信息配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualPrivateCloud 私有网络相关信息配置。
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
                     * 获取指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageId 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取公网带宽相关信息设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetAccessible 公网带宽相关信息设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetAccessible 公网带宽相关信息设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取节点系统盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDisk 节点系统盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置节点系统盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDisk 节点系统盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取节点数据盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisks 节点数据盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置节点数据盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisks 节点数据盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                private:

                    /**
                     * 节点机型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 扩容实例所在的位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 节点[计费类型](https://cloud.tencent.com/document/product/213/2180)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 私有网络相关信息配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 指定有效的[镜像](https://cloud.tencent.com/document/product/213/4940)ID，格式形如`img-xxx`。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 公网带宽相关信息设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 节点系统盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 节点数据盘配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_EXPANSIONNODECONFIGOVERVIEW_H_
