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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_CACHERULE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_CACHERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 缓存配置规则。
                */
                class CacheRule : public AbstractModel
                {
                public:
                    CacheRule();
                    ~CacheRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存类型，支持all，file，directory，path，index，分别表示全部文件，后缀类型，目录，完整路径，首页。
                     * @return CacheType 缓存类型，支持all，file，directory，path，index，分别表示全部文件，后缀类型，目录，完整路径，首页。
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置缓存类型，支持all，file，directory，path，index，分别表示全部文件，后缀类型，目录，完整路径，首页。
                     * @param _cacheType 缓存类型，支持all，file，directory，path，index，分别表示全部文件，后缀类型，目录，完整路径，首页。
                     * 
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取缓存内容列表。
                     * @return CacheContents 缓存内容列表。
                     * 
                     */
                    std::vector<std::string> GetCacheContents() const;

                    /**
                     * 设置缓存内容列表。
                     * @param _cacheContents 缓存内容列表。
                     * 
                     */
                    void SetCacheContents(const std::vector<std::string>& _cacheContents);

                    /**
                     * 判断参数 CacheContents 是否已赋值
                     * @return CacheContents 是否已赋值
                     * 
                     */
                    bool CacheContentsHasBeenSet() const;

                    /**
                     * 获取缓存时间，单位秒。
                     * @return CacheTime 缓存时间，单位秒。
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置缓存时间，单位秒。
                     * @param _cacheTime 缓存时间，单位秒。
                     * 
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * 缓存类型，支持all，file，directory，path，index，分别表示全部文件，后缀类型，目录，完整路径，首页。
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * 缓存内容列表。
                     */
                    std::vector<std::string> m_cacheContents;
                    bool m_cacheContentsHasBeenSet;

                    /**
                     * 缓存时间，单位秒。
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_CACHERULE_H_
