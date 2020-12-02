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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STORAGESTATDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STORAGESTATDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 云点播存储用量的分区统计数据
                */
                class StorageStatData : public AbstractModel
                {
                public:
                    StorageStatData();
                    ~StorageStatData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点播存储的计费区域，可能值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>outside Chinese Mainland：中国境外。</li>
                     * @return Area 点播存储的计费区域，可能值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>outside Chinese Mainland：中国境外。</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置点播存储的计费区域，可能值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>outside Chinese Mainland：中国境外。</li>
                     * @param Area 点播存储的计费区域，可能值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>outside Chinese Mainland：中国境外。</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取当前总存储量，单位是字节。
                     * @return TotalStorage 当前总存储量，单位是字节。
                     */
                    uint64_t GetTotalStorage() const;

                    /**
                     * 设置当前总存储量，单位是字节。
                     * @param TotalStorage 当前总存储量，单位是字节。
                     */
                    void SetTotalStorage(const uint64_t& _totalStorage);

                    /**
                     * 判断参数 TotalStorage 是否已赋值
                     * @return TotalStorage 是否已赋值
                     */
                    bool TotalStorageHasBeenSet() const;

                    /**
                     * 获取当前低频存储量，单位是字节。
                     * @return InfrequentStorage 当前低频存储量，单位是字节。
                     */
                    uint64_t GetInfrequentStorage() const;

                    /**
                     * 设置当前低频存储量，单位是字节。
                     * @param InfrequentStorage 当前低频存储量，单位是字节。
                     */
                    void SetInfrequentStorage(const uint64_t& _infrequentStorage);

                    /**
                     * 判断参数 InfrequentStorage 是否已赋值
                     * @return InfrequentStorage 是否已赋值
                     */
                    bool InfrequentStorageHasBeenSet() const;

                    /**
                     * 获取当前标准存储量，单位是字节。
                     * @return StandardStorage 当前标准存储量，单位是字节。
                     */
                    uint64_t GetStandardStorage() const;

                    /**
                     * 设置当前标准存储量，单位是字节。
                     * @param StandardStorage 当前标准存储量，单位是字节。
                     */
                    void SetStandardStorage(const uint64_t& _standardStorage);

                    /**
                     * 判断参数 StandardStorage 是否已赋值
                     * @return StandardStorage 是否已赋值
                     */
                    bool StandardStorageHasBeenSet() const;

                private:

                    /**
                     * 点播存储的计费区域，可能值：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>outside Chinese Mainland：中国境外。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 当前总存储量，单位是字节。
                     */
                    uint64_t m_totalStorage;
                    bool m_totalStorageHasBeenSet;

                    /**
                     * 当前低频存储量，单位是字节。
                     */
                    uint64_t m_infrequentStorage;
                    bool m_infrequentStorageHasBeenSet;

                    /**
                     * 当前标准存储量，单位是字节。
                     */
                    uint64_t m_standardStorage;
                    bool m_standardStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STORAGESTATDATA_H_
