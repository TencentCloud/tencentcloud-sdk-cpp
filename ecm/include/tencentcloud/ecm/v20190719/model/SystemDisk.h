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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SYSTEMDISK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SYSTEMDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 用于描述系统盘。
                */
                class SystemDisk : public AbstractModel
                {
                public:
                    SystemDisk();
                    ~SystemDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取硬盘类型。取值范围：
- LOCAL_BASIC：本地硬盘；
- CLOUD_PREMIUM：高性能云硬盘；
默认取值：CLOUD_BASIC。
                     * @return DiskType 硬盘类型。取值范围：
- LOCAL_BASIC：本地硬盘；
- CLOUD_PREMIUM：高性能云硬盘；
默认取值：CLOUD_BASIC。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘类型。取值范围：
- LOCAL_BASIC：本地硬盘；
- CLOUD_PREMIUM：高性能云硬盘；
默认取值：CLOUD_BASIC。
                     * @param _diskType 硬盘类型。取值范围：
- LOCAL_BASIC：本地硬盘；
- CLOUD_PREMIUM：高性能云硬盘；
默认取值：CLOUD_BASIC。
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
                     * 获取硬盘ID。此参数暂不可用。
                     * @return DiskId 硬盘ID。此参数暂不可用。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置硬盘ID。此参数暂不可用。
                     * @param _diskId 硬盘ID。此参数暂不可用。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取硬盘容量大小。单位GB。
                     * @return DiskSize 硬盘容量大小。单位GB。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置硬盘容量大小。单位GB。
                     * @param _diskSize 硬盘容量大小。单位GB。
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
                     * 硬盘类型。取值范围：
- LOCAL_BASIC：本地硬盘；
- CLOUD_PREMIUM：高性能云硬盘；
默认取值：CLOUD_BASIC。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 硬盘ID。此参数暂不可用。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 硬盘容量大小。单位GB。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SYSTEMDISK_H_
