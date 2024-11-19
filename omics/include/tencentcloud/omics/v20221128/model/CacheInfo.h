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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CACHEINFO_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CACHEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 缓存信息。
                */
                class CacheInfo : public AbstractModel
                {
                public:
                    CacheInfo();
                    ~CacheInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存清理时间(小时)。
                     * @return CacheClearDelay 缓存清理时间(小时)。
                     * 
                     */
                    uint64_t GetCacheClearDelay() const;

                    /**
                     * 设置缓存清理时间(小时)。
                     * @param _cacheClearDelay 缓存清理时间(小时)。
                     * 
                     */
                    void SetCacheClearDelay(const uint64_t& _cacheClearDelay);

                    /**
                     * 判断参数 CacheClearDelay 是否已赋值
                     * @return CacheClearDelay 是否已赋值
                     * 
                     */
                    bool CacheClearDelayHasBeenSet() const;

                    /**
                     * 获取缓存清理计划时间。
                     * @return CacheClearTime 缓存清理计划时间。
                     * 
                     */
                    std::string GetCacheClearTime() const;

                    /**
                     * 设置缓存清理计划时间。
                     * @param _cacheClearTime 缓存清理计划时间。
                     * 
                     */
                    void SetCacheClearTime(const std::string& _cacheClearTime);

                    /**
                     * 判断参数 CacheClearTime 是否已赋值
                     * @return CacheClearTime 是否已赋值
                     * 
                     */
                    bool CacheClearTimeHasBeenSet() const;

                    /**
                     * 获取缓存是否已被清理。
                     * @return CacheCleared 缓存是否已被清理。
                     * 
                     */
                    bool GetCacheCleared() const;

                    /**
                     * 设置缓存是否已被清理。
                     * @param _cacheCleared 缓存是否已被清理。
                     * 
                     */
                    void SetCacheCleared(const bool& _cacheCleared);

                    /**
                     * 判断参数 CacheCleared 是否已赋值
                     * @return CacheCleared 是否已赋值
                     * 
                     */
                    bool CacheClearedHasBeenSet() const;

                private:

                    /**
                     * 缓存清理时间(小时)。
                     */
                    uint64_t m_cacheClearDelay;
                    bool m_cacheClearDelayHasBeenSet;

                    /**
                     * 缓存清理计划时间。
                     */
                    std::string m_cacheClearTime;
                    bool m_cacheClearTimeHasBeenSet;

                    /**
                     * 缓存是否已被清理。
                     */
                    bool m_cacheCleared;
                    bool m_cacheClearedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CACHEINFO_H_
