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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SPACESYSTEMDISK_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SPACESYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 工作空间系统盘配置
                */
                class SpaceSystemDisk : public AbstractModel
                {
                public:
                    SpaceSystemDisk();
                    ~SpaceSystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统盘类型。系统盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<ul><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用性SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li></ul>默认取值：当前有库存的硬盘类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 系统盘类型。系统盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<ul><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用性SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li></ul>默认取值：当前有库存的硬盘类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置系统盘类型。系统盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<ul><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用性SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li></ul>默认取值：当前有库存的硬盘类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskType 系统盘类型。系统盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<ul><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用性SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li></ul>默认取值：当前有库存的硬盘类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取系统盘大小，单位：GB。默认值为 50
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 系统盘大小，单位：GB。默认值为 50
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置系统盘大小，单位：GB。默认值为 50
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSize 系统盘大小，单位：GB。默认值为 50
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * 系统盘类型。系统盘类型限制详见[存储概述](https://cloud.tencent.com/document/product/213/4952)。取值范围：<ul><li>LOCAL_BASIC：本地硬盘</li><li>LOCAL_SSD：本地SSD硬盘</li><li>CLOUD_BASIC：普通云硬盘</li><li>CLOUD_SSD：SSD云硬盘</li><li>CLOUD_PREMIUM：高性能云硬盘</li><li>CLOUD_BSSD：通用性SSD云硬盘</li><li>CLOUD_HSSD：增强型SSD云硬盘</li><li>CLOUD_TSSD：极速型SSD云硬盘</li></ul>默认取值：当前有库存的硬盘类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 系统盘大小，单位：GB。默认值为 50
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SPACESYSTEMDISK_H_
