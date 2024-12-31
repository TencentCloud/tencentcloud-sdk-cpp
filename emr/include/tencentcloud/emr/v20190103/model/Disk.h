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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DISK_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DISK_H_

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
                * 磁盘信息
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据盘类型，创建EMR容器集群实例可选
<li> SSD云盘: CLOUD_SSD</li>
<li>高效云盘: CLOUD_PREMIUM</li>
                     * @return DiskType 数据盘类型，创建EMR容器集群实例可选
<li> SSD云盘: CLOUD_SSD</li>
<li>高效云盘: CLOUD_PREMIUM</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置数据盘类型，创建EMR容器集群实例可选
<li> SSD云盘: CLOUD_SSD</li>
<li>高效云盘: CLOUD_PREMIUM</li>
                     * @param _diskType 数据盘类型，创建EMR容器集群实例可选
<li> SSD云盘: CLOUD_SSD</li>
<li>高效云盘: CLOUD_PREMIUM</li>
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
                     * 获取单块大小GB
                     * @return DiskCapacity 单块大小GB
                     * 
                     */
                    int64_t GetDiskCapacity() const;

                    /**
                     * 设置单块大小GB
                     * @param _diskCapacity 单块大小GB
                     * 
                     */
                    void SetDiskCapacity(const int64_t& _diskCapacity);

                    /**
                     * 判断参数 DiskCapacity 是否已赋值
                     * @return DiskCapacity 是否已赋值
                     * 
                     */
                    bool DiskCapacityHasBeenSet() const;

                    /**
                     * 获取数据盘数量
                     * @return DiskNumber 数据盘数量
                     * 
                     */
                    int64_t GetDiskNumber() const;

                    /**
                     * 设置数据盘数量
                     * @param _diskNumber 数据盘数量
                     * 
                     */
                    void SetDiskNumber(const int64_t& _diskNumber);

                    /**
                     * 判断参数 DiskNumber 是否已赋值
                     * @return DiskNumber 是否已赋值
                     * 
                     */
                    bool DiskNumberHasBeenSet() const;

                private:

                    /**
                     * 数据盘类型，创建EMR容器集群实例可选
<li> SSD云盘: CLOUD_SSD</li>
<li>高效云盘: CLOUD_PREMIUM</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 单块大小GB
                     */
                    int64_t m_diskCapacity;
                    bool m_diskCapacityHasBeenSet;

                    /**
                     * 数据盘数量
                     */
                    int64_t m_diskNumber;
                    bool m_diskNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DISK_H_
