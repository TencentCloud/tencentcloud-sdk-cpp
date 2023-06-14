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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DISKINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DISKINFO_H_

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
                * 自定义机型磁盘的描述
                */
                class DiskInfo : public AbstractModel
                {
                public:
                    DiskInfo();
                    ~DiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘ID
                     * @return DiskTypeId 磁盘ID
                     * 
                     */
                    uint64_t GetDiskTypeId() const;

                    /**
                     * 设置磁盘ID
                     * @param _diskTypeId 磁盘ID
                     * 
                     */
                    void SetDiskTypeId(const uint64_t& _diskTypeId);

                    /**
                     * 判断参数 DiskTypeId 是否已赋值
                     * @return DiskTypeId 是否已赋值
                     * 
                     */
                    bool DiskTypeIdHasBeenSet() const;

                    /**
                     * 获取磁盘的容量，单位为G
                     * @return Size 磁盘的容量，单位为G
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置磁盘的容量，单位为G
                     * @param _size 磁盘的容量，单位为G
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取磁盘信息描述
                     * @return DiskDescription 磁盘信息描述
                     * 
                     */
                    std::string GetDiskDescription() const;

                    /**
                     * 设置磁盘信息描述
                     * @param _diskDescription 磁盘信息描述
                     * 
                     */
                    void SetDiskDescription(const std::string& _diskDescription);

                    /**
                     * 判断参数 DiskDescription 是否已赋值
                     * @return DiskDescription 是否已赋值
                     * 
                     */
                    bool DiskDescriptionHasBeenSet() const;

                private:

                    /**
                     * 磁盘ID
                     */
                    uint64_t m_diskTypeId;
                    bool m_diskTypeIdHasBeenSet;

                    /**
                     * 磁盘的容量，单位为G
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 磁盘信息描述
                     */
                    std::string m_diskDescription;
                    bool m_diskDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DISKINFO_H_
