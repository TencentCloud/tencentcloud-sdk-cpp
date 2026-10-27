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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DISK_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 桌面实例挂载磁盘信息
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>磁盘类型：<br>CLOUD_SSD：SSD云硬盘<br>CLOUD_PREMIUM：高性能云硬盘</p>
                     * @return DiskType <p>磁盘类型：<br>CLOUD_SSD：SSD云硬盘<br>CLOUD_PREMIUM：高性能云硬盘</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>磁盘类型：<br>CLOUD_SSD：SSD云硬盘<br>CLOUD_PREMIUM：高性能云硬盘</p>
                     * @param _diskType <p>磁盘类型：<br>CLOUD_SSD：SSD云硬盘<br>CLOUD_PREMIUM：高性能云硬盘</p>
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
                     * 获取<p>磁盘大小（单位G）<br>系统盘最小值50，最大值500<br>数据盘最小值10，最大值32000。最小调整步长为10G</p>
                     * @return DiskSize <p>磁盘大小（单位G）<br>系统盘最小值50，最大值500<br>数据盘最小值10，最大值32000。最小调整步长为10G</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>磁盘大小（单位G）<br>系统盘最小值50，最大值500<br>数据盘最小值10，最大值32000。最小调整步长为10G</p>
                     * @param _diskSize <p>磁盘大小（单位G）<br>系统盘最小值50，最大值500<br>数据盘最小值10，最大值32000。最小调整步长为10G</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>磁盘id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskId <p>磁盘id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>磁盘id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskId <p>磁盘id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * <p>磁盘类型：<br>CLOUD_SSD：SSD云硬盘<br>CLOUD_PREMIUM：高性能云硬盘</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>磁盘大小（单位G）<br>系统盘最小值50，最大值500<br>数据盘最小值10，最大值32000。最小调整步长为10G</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>磁盘id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DISK_H_
