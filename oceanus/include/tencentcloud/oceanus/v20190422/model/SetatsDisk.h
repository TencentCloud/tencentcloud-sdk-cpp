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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATSDISK_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATSDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * setats disk
                */
                class SetatsDisk : public AbstractModel
                {
                public:
                    SetatsDisk();
                    ~SetatsDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘类型
CLOUD_BSSD
CLOUD_SSD
CLOUD_HSSD
CLOUD_PREMIUM
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 磁盘类型
CLOUD_BSSD
CLOUD_SSD
CLOUD_HSSD
CLOUD_PREMIUM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
CLOUD_BSSD
CLOUD_SSD
CLOUD_HSSD
CLOUD_PREMIUM
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskType 磁盘类型
CLOUD_BSSD
CLOUD_SSD
CLOUD_HSSD
CLOUD_PREMIUM
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
                     * 获取磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSize 磁盘大小
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
                     * 磁盘类型
CLOUD_BSSD
CLOUD_SSD
CLOUD_HSSD
CLOUD_PREMIUM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATSDISK_H_
