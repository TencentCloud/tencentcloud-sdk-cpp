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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUMECONTEXT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUMECONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod PVC存储方式描述
                */
                class PersistentVolumeContext : public AbstractModel
                {
                public:
                    PersistentVolumeContext();
                    ~PersistentVolumeContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘大小，单位为GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 磁盘大小，单位为GB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小，单位为GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskSize 磁盘大小，单位为GB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取磁盘类型。CLOUD_PREMIUM;CLOUD_SSD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 磁盘类型。CLOUD_PREMIUM;CLOUD_SSD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型。CLOUD_PREMIUM;CLOUD_SSD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiskType 磁盘类型。CLOUD_PREMIUM;CLOUD_SSD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * 磁盘大小，单位为GB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 磁盘类型。CLOUD_PREMIUM;CLOUD_SSD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PERSISTENTVOLUMECONTEXT_H_
