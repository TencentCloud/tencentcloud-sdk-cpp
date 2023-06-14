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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DATADISK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DATADISK_H_

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
                * 描述了数据盘的信息
                */
                class DataDisk : public AbstractModel
                {
                public:
                    DataDisk();
                    ~DataDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据盘大小。单位GB。
                     * @return DiskSize 数据盘大小。单位GB。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置数据盘大小。单位GB。
                     * @param _diskSize 数据盘大小。单位GB。
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
                     * 获取数据盘类型，取值范围：
- LOCAL_BASIC：本地硬盘
- CLOUD_PREMIUM：高性能云硬盘

默认取值： LOCAL_BASIC。
                     * @return DiskType 数据盘类型，取值范围：
- LOCAL_BASIC：本地硬盘
- CLOUD_PREMIUM：高性能云硬盘

默认取值： LOCAL_BASIC。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置数据盘类型，取值范围：
- LOCAL_BASIC：本地硬盘
- CLOUD_PREMIUM：高性能云硬盘

默认取值： LOCAL_BASIC。
                     * @param _diskType 数据盘类型，取值范围：
- LOCAL_BASIC：本地硬盘
- CLOUD_PREMIUM：高性能云硬盘

默认取值： LOCAL_BASIC。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * 数据盘大小。单位GB。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 数据盘类型，取值范围：
- LOCAL_BASIC：本地硬盘
- CLOUD_PREMIUM：高性能云硬盘

默认取值： LOCAL_BASIC。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DATADISK_H_
