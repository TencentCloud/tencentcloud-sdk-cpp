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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCONFIG_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 云硬盘配置
                */
                class DiskConfig : public AbstractModel
                {
                public:
                    DiskConfig();
                    ~DiskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param _zone 可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取云硬盘类型。枚举值如下：

<li>CLOUD_BASIC：普通云硬盘</li>
<li>CLOUD_PREMIUM：高性能云硬盘</li>
<li>CLOUD_SSD：SSD云硬盘</li>
                     * @return DiskType 云硬盘类型。枚举值如下：

<li>CLOUD_BASIC：普通云硬盘</li>
<li>CLOUD_PREMIUM：高性能云硬盘</li>
<li>CLOUD_SSD：SSD云硬盘</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云硬盘类型。枚举值如下：

<li>CLOUD_BASIC：普通云硬盘</li>
<li>CLOUD_PREMIUM：高性能云硬盘</li>
<li>CLOUD_SSD：SSD云硬盘</li>
                     * @param _diskType 云硬盘类型。枚举值如下：

<li>CLOUD_BASIC：普通云硬盘</li>
<li>CLOUD_PREMIUM：高性能云硬盘</li>
<li>CLOUD_SSD：SSD云硬盘</li>
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
                     * 获取云硬盘可售卖状态。
                     * @return DiskSalesState 云硬盘可售卖状态。
                     * 
                     */
                    std::string GetDiskSalesState() const;

                    /**
                     * 设置云硬盘可售卖状态。
                     * @param _diskSalesState 云硬盘可售卖状态。
                     * 
                     */
                    void SetDiskSalesState(const std::string& _diskSalesState);

                    /**
                     * 判断参数 DiskSalesState 是否已赋值
                     * @return DiskSalesState 是否已赋值
                     * 
                     */
                    bool DiskSalesStateHasBeenSet() const;

                    /**
                     * 获取最大云硬盘大小。
                     * @return MaxDiskSize 最大云硬盘大小。
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置最大云硬盘大小。
                     * @param _maxDiskSize 最大云硬盘大小。
                     * 
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取最小云硬盘大小。
                     * @return MinDiskSize 最小云硬盘大小。
                     * 
                     */
                    int64_t GetMinDiskSize() const;

                    /**
                     * 设置最小云硬盘大小。
                     * @param _minDiskSize 最小云硬盘大小。
                     * 
                     */
                    void SetMinDiskSize(const int64_t& _minDiskSize);

                    /**
                     * 判断参数 MinDiskSize 是否已赋值
                     * @return MinDiskSize 是否已赋值
                     * 
                     */
                    bool MinDiskSizeHasBeenSet() const;

                    /**
                     * 获取云硬盘步长。
                     * @return DiskStepSize 云硬盘步长。
                     * 
                     */
                    int64_t GetDiskStepSize() const;

                    /**
                     * 设置云硬盘步长。
                     * @param _diskStepSize 云硬盘步长。
                     * 
                     */
                    void SetDiskStepSize(const int64_t& _diskStepSize);

                    /**
                     * 判断参数 DiskStepSize 是否已赋值
                     * @return DiskStepSize 是否已赋值
                     * 
                     */
                    bool DiskStepSizeHasBeenSet() const;

                private:

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 云硬盘类型。枚举值如下：

<li>CLOUD_BASIC：普通云硬盘</li>
<li>CLOUD_PREMIUM：高性能云硬盘</li>
<li>CLOUD_SSD：SSD云硬盘</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云硬盘可售卖状态。
                     */
                    std::string m_diskSalesState;
                    bool m_diskSalesStateHasBeenSet;

                    /**
                     * 最大云硬盘大小。
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * 最小云硬盘大小。
                     */
                    int64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * 云硬盘步长。
                     */
                    int64_t m_diskStepSize;
                    bool m_diskStepSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCONFIG_H_
