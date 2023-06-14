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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DISKSPEC_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DISKSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 磁盘规格描述
                */
                class DiskSpec : public AbstractModel
                {
                public:
                    DiskSpec();
                    ~DiskSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘类型，例如“CLOUD_SSD", "LOCAL_SSD"等
                     * @return DiskType 磁盘类型，例如“CLOUD_SSD", "LOCAL_SSD"等
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型，例如“CLOUD_SSD", "LOCAL_SSD"等
                     * @param _diskType 磁盘类型，例如“CLOUD_SSD", "LOCAL_SSD"等
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
                     * 获取磁盘类型说明，例如"云SSD", "本地SSD"等
                     * @return DiskDesc 磁盘类型说明，例如"云SSD", "本地SSD"等
                     * 
                     */
                    std::string GetDiskDesc() const;

                    /**
                     * 设置磁盘类型说明，例如"云SSD", "本地SSD"等
                     * @param _diskDesc 磁盘类型说明，例如"云SSD", "本地SSD"等
                     * 
                     */
                    void SetDiskDesc(const std::string& _diskDesc);

                    /**
                     * 判断参数 DiskDesc 是否已赋值
                     * @return DiskDesc 是否已赋值
                     * 
                     */
                    bool DiskDescHasBeenSet() const;

                    /**
                     * 获取磁盘最小规格大小，单位G
                     * @return MinDiskSize 磁盘最小规格大小，单位G
                     * 
                     */
                    int64_t GetMinDiskSize() const;

                    /**
                     * 设置磁盘最小规格大小，单位G
                     * @param _minDiskSize 磁盘最小规格大小，单位G
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
                     * 获取磁盘最大规格大小，单位G
                     * @return MaxDiskSize 磁盘最大规格大小，单位G
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置磁盘最大规格大小，单位G
                     * @param _maxDiskSize 磁盘最大规格大小，单位G
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
                     * 获取磁盘数目
                     * @return DiskCount 磁盘数目
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置磁盘数目
                     * @param _diskCount 磁盘数目
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                private:

                    /**
                     * 磁盘类型，例如“CLOUD_SSD", "LOCAL_SSD"等
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘类型说明，例如"云SSD", "本地SSD"等
                     */
                    std::string m_diskDesc;
                    bool m_diskDescHasBeenSet;

                    /**
                     * 磁盘最小规格大小，单位G
                     */
                    int64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * 磁盘最大规格大小，单位G
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * 磁盘数目
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DISKSPEC_H_
