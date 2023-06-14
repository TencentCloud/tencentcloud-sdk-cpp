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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DISKINFO_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 磁盘存储信息
                */
                class DiskInfo : public AbstractModel
                {
                public:
                    DiskInfo();
                    ~DiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘类型，支持：高性能云硬盘（CLOUD_PREMIUM）、SSD云硬盘（CLOUD_SSD）
                     * @return DiskType 磁盘类型，支持：高性能云硬盘（CLOUD_PREMIUM）、SSD云硬盘（CLOUD_SSD）
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型，支持：高性能云硬盘（CLOUD_PREMIUM）、SSD云硬盘（CLOUD_SSD）
                     * @param _diskType 磁盘类型，支持：高性能云硬盘（CLOUD_PREMIUM）、SSD云硬盘（CLOUD_SSD）
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
                     * 获取系统盘：可选硬盘容量，50-500GB，数字以1为单位，数据盘：可选硬盘容量：10-32000GB，数字以10为单位；当磁盘类型为SSD云硬盘（CLOUD_SSD）最小大小为 100GB
                     * @return DiskSize 系统盘：可选硬盘容量，50-500GB，数字以1为单位，数据盘：可选硬盘容量：10-32000GB，数字以10为单位；当磁盘类型为SSD云硬盘（CLOUD_SSD）最小大小为 100GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置系统盘：可选硬盘容量，50-500GB，数字以1为单位，数据盘：可选硬盘容量：10-32000GB，数字以10为单位；当磁盘类型为SSD云硬盘（CLOUD_SSD）最小大小为 100GB
                     * @param _diskSize 系统盘：可选硬盘容量，50-500GB，数字以1为单位，数据盘：可选硬盘容量：10-32000GB，数字以10为单位；当磁盘类型为SSD云硬盘（CLOUD_SSD）最小大小为 100GB
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * 磁盘类型，支持：高性能云硬盘（CLOUD_PREMIUM）、SSD云硬盘（CLOUD_SSD）
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 系统盘：可选硬盘容量，50-500GB，数字以1为单位，数据盘：可选硬盘容量：10-32000GB，数字以10为单位；当磁盘类型为SSD云硬盘（CLOUD_SSD）最小大小为 100GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DISKINFO_H_
