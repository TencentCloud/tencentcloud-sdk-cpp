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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了操作系统所在块设备即系统盘的信息
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统盘类型。系统盘类型限制详见[CVM实例配置](/document/product/213/2177)。取值范围：<br><li>LOCAL_BASIC：本地硬盘<br><li>LOCAL_SSD：本地SSD硬盘<br><li>CLOUD_BASIC：普通云硬盘<br><li>CLOUD_SSD：SSD云硬盘<br><li>CLOUD_PREMIUM：高性能云硬盘<br><br>默认取值：CLOUD_BASIC。
                     * @return DiskType 系统盘类型。系统盘类型限制详见[CVM实例配置](/document/product/213/2177)。取值范围：<br><li>LOCAL_BASIC：本地硬盘<br><li>LOCAL_SSD：本地SSD硬盘<br><li>CLOUD_BASIC：普通云硬盘<br><li>CLOUD_SSD：SSD云硬盘<br><li>CLOUD_PREMIUM：高性能云硬盘<br><br>默认取值：CLOUD_BASIC。
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置系统盘类型。系统盘类型限制详见[CVM实例配置](/document/product/213/2177)。取值范围：<br><li>LOCAL_BASIC：本地硬盘<br><li>LOCAL_SSD：本地SSD硬盘<br><li>CLOUD_BASIC：普通云硬盘<br><li>CLOUD_SSD：SSD云硬盘<br><li>CLOUD_PREMIUM：高性能云硬盘<br><br>默认取值：CLOUD_BASIC。
                     * @param DiskType 系统盘类型。系统盘类型限制详见[CVM实例配置](/document/product/213/2177)。取值范围：<br><li>LOCAL_BASIC：本地硬盘<br><li>LOCAL_SSD：本地SSD硬盘<br><li>CLOUD_BASIC：普通云硬盘<br><li>CLOUD_SSD：SSD云硬盘<br><li>CLOUD_PREMIUM：高性能云硬盘<br><br>默认取值：CLOUD_BASIC。
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取系统盘ID。LOCAL_BASIC 和 LOCAL_SSD 类型没有ID。暂时不支持该参数。
                     * @return DiskId 系统盘ID。LOCAL_BASIC 和 LOCAL_SSD 类型没有ID。暂时不支持该参数。
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置系统盘ID。LOCAL_BASIC 和 LOCAL_SSD 类型没有ID。暂时不支持该参数。
                     * @param DiskId 系统盘ID。LOCAL_BASIC 和 LOCAL_SSD 类型没有ID。暂时不支持该参数。
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取系统盘大小，单位：GB。默认值为 50
                     * @return DiskSize 系统盘大小，单位：GB。默认值为 50
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置系统盘大小，单位：GB。默认值为 50
                     * @param DiskSize 系统盘大小，单位：GB。默认值为 50
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * 系统盘类型。系统盘类型限制详见[CVM实例配置](/document/product/213/2177)。取值范围：<br><li>LOCAL_BASIC：本地硬盘<br><li>LOCAL_SSD：本地SSD硬盘<br><li>CLOUD_BASIC：普通云硬盘<br><li>CLOUD_SSD：SSD云硬盘<br><li>CLOUD_PREMIUM：高性能云硬盘<br><br>默认取值：CLOUD_BASIC。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 系统盘ID。LOCAL_BASIC 和 LOCAL_SSD 类型没有ID。暂时不支持该参数。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 系统盘大小，单位：GB。默认值为 50
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_SYSTEMDISK_H_
