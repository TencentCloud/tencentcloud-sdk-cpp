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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DISKINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DISKINFO_H_

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
                * 磁盘信息
                */
                class DiskInfo : public AbstractModel
                {
                public:
                    DiskInfo();
                    ~DiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘类型：LOCAL_BASIC
                     * @return DiskType 磁盘类型：LOCAL_BASIC
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型：LOCAL_BASIC
                     * @param DiskType 磁盘类型：LOCAL_BASIC
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取磁盘ID
                     * @return DiskId 磁盘ID
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置磁盘ID
                     * @param DiskId 磁盘ID
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取磁盘大小（GB）
                     * @return DiskSize 磁盘大小（GB）
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小（GB）
                     * @param DiskSize 磁盘大小（GB）
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * 磁盘类型：LOCAL_BASIC
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘ID
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 磁盘大小（GB）
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DISKINFO_H_
