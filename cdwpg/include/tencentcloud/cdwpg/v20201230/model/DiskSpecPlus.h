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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DISKSPECPLUS_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DISKSPECPLUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 磁盘规格
                */
                class DiskSpecPlus : public AbstractModel
                {
                public:
                    DiskSpecPlus();
                    ~DiskSpecPlus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘个数
                     * @return DiskCount 磁盘个数
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置磁盘个数
                     * @param _diskCount 磁盘个数
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取磁盘最大值
                     * @return MaxDiskSize 磁盘最大值
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置磁盘最大值
                     * @param _maxDiskSize 磁盘最大值
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
                     * 获取磁盘最小值
                     * @return MinDiskSize 磁盘最小值
                     * 
                     */
                    int64_t GetMinDiskSize() const;

                    /**
                     * 设置磁盘最小值
                     * @param _minDiskSize 磁盘最小值
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
                     * 获取磁盘类型
                     * @return DiskType 磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型
                     * @param _diskType 磁盘类型
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
                     * 获取磁盘类型详情
                     * @return DiskDesc 磁盘类型详情
                     * 
                     */
                    std::string GetDiskDesc() const;

                    /**
                     * 设置磁盘类型详情
                     * @param _diskDesc 磁盘类型详情
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
                     * 获取机型类型
                     * @return CvmClass 机型类型
                     * 
                     */
                    std::string GetCvmClass() const;

                    /**
                     * 设置机型类型
                     * @param _cvmClass 机型类型
                     * 
                     */
                    void SetCvmClass(const std::string& _cvmClass);

                    /**
                     * 判断参数 CvmClass 是否已赋值
                     * @return CvmClass 是否已赋值
                     * 
                     */
                    bool CvmClassHasBeenSet() const;

                private:

                    /**
                     * 磁盘个数
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * 磁盘最大值
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * 磁盘最小值
                     */
                    int64_t m_minDiskSize;
                    bool m_minDiskSizeHasBeenSet;

                    /**
                     * 磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 磁盘类型详情
                     */
                    std::string m_diskDesc;
                    bool m_diskDescHasBeenSet;

                    /**
                     * 机型类型
                     */
                    std::string m_cvmClass;
                    bool m_cvmClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DISKSPECPLUS_H_
