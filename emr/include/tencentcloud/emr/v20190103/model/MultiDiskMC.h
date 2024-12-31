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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISKMC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISKMC_H_

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
                * 多云盘参数
                */
                class MultiDiskMC : public AbstractModel
                {
                public:
                    MultiDiskMC();
                    ~MultiDiskMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该类型云盘个数
                     * @return Count 该类型云盘个数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置该类型云盘个数
                     * @param _count 该类型云盘个数
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
                     * 获取磁盘类型
1  :本地盘
2  :云硬盘
3  : 本地SSD
4  : 云SSD
5  : 高效云盘
6  : 增强型SSD云硬盘
11 : 吞吐型云硬盘
12 : 极速型SSD云硬盘
13 : 通用型SSD云硬盘
14 : 大数据型云硬盘
15 : 高IO型云硬盘
16 : 远端SSD盘
                     * @return Type 磁盘类型
1  :本地盘
2  :云硬盘
3  : 本地SSD
4  : 云SSD
5  : 高效云盘
6  : 增强型SSD云硬盘
11 : 吞吐型云硬盘
12 : 极速型SSD云硬盘
13 : 通用型SSD云硬盘
14 : 大数据型云硬盘
15 : 高IO型云硬盘
16 : 远端SSD盘
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置磁盘类型
1  :本地盘
2  :云硬盘
3  : 本地SSD
4  : 云SSD
5  : 高效云盘
6  : 增强型SSD云硬盘
11 : 吞吐型云硬盘
12 : 极速型SSD云硬盘
13 : 通用型SSD云硬盘
14 : 大数据型云硬盘
15 : 高IO型云硬盘
16 : 远端SSD盘
                     * @param _type 磁盘类型
1  :本地盘
2  :云硬盘
3  : 本地SSD
4  : 云SSD
5  : 高效云盘
6  : 增强型SSD云硬盘
11 : 吞吐型云硬盘
12 : 极速型SSD云硬盘
13 : 通用型SSD云硬盘
14 : 大数据型云硬盘
15 : 高IO型云硬盘
16 : 远端SSD盘
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取磁盘大小
                     * @return Size 磁盘大小
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置磁盘大小
                     * @param _size 磁盘大小
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取云盘大小,单位b
                     * @return Volume 云盘大小,单位b
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置云盘大小,单位b
                     * @param _volume 云盘大小,单位b
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * 该类型云盘个数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 磁盘类型
1  :本地盘
2  :云硬盘
3  : 本地SSD
4  : 云SSD
5  : 高效云盘
6  : 增强型SSD云硬盘
11 : 吞吐型云硬盘
12 : 极速型SSD云硬盘
13 : 通用型SSD云硬盘
14 : 大数据型云硬盘
15 : 高IO型云硬盘
16 : 远端SSD盘
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 磁盘大小
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 云盘大小,单位b
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MULTIDISKMC_H_
