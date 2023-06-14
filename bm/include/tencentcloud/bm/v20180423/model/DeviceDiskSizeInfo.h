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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICEDISKSIZEINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICEDISKSIZEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 硬盘大小的描述
                */
                class DeviceDiskSizeInfo : public AbstractModel
                {
                public:
                    DeviceDiskSizeInfo();
                    ~DeviceDiskSizeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取硬盘名称
                     * @return DiskName 硬盘名称
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置硬盘名称
                     * @param _diskName 硬盘名称
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取硬盘大小（单位GiB）
                     * @return DiskSize 硬盘大小（单位GiB）
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置硬盘大小（单位GiB）
                     * @param _diskSize 硬盘大小（单位GiB）
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
                     * 硬盘名称
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 硬盘大小（单位GiB）
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICEDISKSIZEINFO_H_
