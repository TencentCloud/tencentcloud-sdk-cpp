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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DISKSPECINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DISKSPECINFO_H_

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
                * 节点磁盘信息
                */
                class DiskSpecInfo : public AbstractModel
                {
                public:
                    DiskSpecInfo();
                    ~DiskSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘数量
                     * @return Count 磁盘数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置磁盘数量
                     * @param _count 磁盘数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取系统盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>

数据盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>
<li>CLOUD_HSSD：表示增强型SSD云硬盘。</li>
<li>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</li>
<li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>
<li>CLOUD_BIGDATA：表示大数据型云硬盘。</li>
<li>CLOUD_HIGHIO：表示高IO型云硬盘。</li>
<li>CLOUD_BSSD：表示通用型SSD云硬盘。</li>
<li>REMOTE_SSD：表示远端SSD盘。</li>

                     * @return DiskType 系统盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>

数据盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>
<li>CLOUD_HSSD：表示增强型SSD云硬盘。</li>
<li>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</li>
<li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>
<li>CLOUD_BIGDATA：表示大数据型云硬盘。</li>
<li>CLOUD_HIGHIO：表示高IO型云硬盘。</li>
<li>CLOUD_BSSD：表示通用型SSD云硬盘。</li>
<li>REMOTE_SSD：表示远端SSD盘。</li>

                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置系统盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>

数据盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>
<li>CLOUD_HSSD：表示增强型SSD云硬盘。</li>
<li>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</li>
<li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>
<li>CLOUD_BIGDATA：表示大数据型云硬盘。</li>
<li>CLOUD_HIGHIO：表示高IO型云硬盘。</li>
<li>CLOUD_BSSD：表示通用型SSD云硬盘。</li>
<li>REMOTE_SSD：表示远端SSD盘。</li>

                     * @param _diskType 系统盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>

数据盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>
<li>CLOUD_HSSD：表示增强型SSD云硬盘。</li>
<li>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</li>
<li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>
<li>CLOUD_BIGDATA：表示大数据型云硬盘。</li>
<li>CLOUD_HIGHIO：表示高IO型云硬盘。</li>
<li>CLOUD_BSSD：表示通用型SSD云硬盘。</li>
<li>REMOTE_SSD：表示远端SSD盘。</li>

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
                     * 获取数据容量，单位为GB
                     * @return DiskSize 数据容量，单位为GB
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置数据容量，单位为GB
                     * @param _diskSize 数据容量，单位为GB
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
                     * 获取额外性能
                     * @return ExtraPerformance 额外性能
                     * 
                     */
                    int64_t GetExtraPerformance() const;

                    /**
                     * 设置额外性能
                     * @param _extraPerformance 额外性能
                     * 
                     */
                    void SetExtraPerformance(const int64_t& _extraPerformance);

                    /**
                     * 判断参数 ExtraPerformance 是否已赋值
                     * @return ExtraPerformance 是否已赋值
                     * 
                     */
                    bool ExtraPerformanceHasBeenSet() const;

                private:

                    /**
                     * 磁盘数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 系统盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>

数据盘类型 取值范围：
<li>CLOUD_SSD：表示云SSD。</li>
<li>CLOUD_PREMIUM：表示高效云盘。</li>
<li>CLOUD_BASIC：表示云硬盘。</li>
<li>LOCAL_BASIC：表示本地盘。</li>
<li>LOCAL_SSD：表示本地SSD。</li>
<li>CLOUD_HSSD：表示增强型SSD云硬盘。</li>
<li>CLOUD_THROUGHPUT：表示吞吐型云硬盘。</li>
<li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>
<li>CLOUD_BIGDATA：表示大数据型云硬盘。</li>
<li>CLOUD_HIGHIO：表示高IO型云硬盘。</li>
<li>CLOUD_BSSD：表示通用型SSD云硬盘。</li>
<li>REMOTE_SSD：表示远端SSD盘。</li>

                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 数据容量，单位为GB
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 额外性能
                     */
                    int64_t m_extraPerformance;
                    bool m_extraPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DISKSPECINFO_H_
