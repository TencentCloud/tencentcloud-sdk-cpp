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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 启发式自定义时间缓存配置
                */
                class CacheConfig : public AbstractModel
                {
                public:
                    CacheConfig();
                    ~CacheConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取on 代表开启自定义启发式缓存时间
off 代表关闭自定义启发式缓存时间
                     * @return HeuristicCacheTimeSwitch on 代表开启自定义启发式缓存时间
off 代表关闭自定义启发式缓存时间
                     */
                    std::string GetHeuristicCacheTimeSwitch() const;

                    /**
                     * 设置on 代表开启自定义启发式缓存时间
off 代表关闭自定义启发式缓存时间
                     * @param HeuristicCacheTimeSwitch on 代表开启自定义启发式缓存时间
off 代表关闭自定义启发式缓存时间
                     */
                    void SetHeuristicCacheTimeSwitch(const std::string& _heuristicCacheTimeSwitch);

                    /**
                     * 判断参数 HeuristicCacheTimeSwitch 是否已赋值
                     * @return HeuristicCacheTimeSwitch 是否已赋值
                     */
                    bool HeuristicCacheTimeSwitchHasBeenSet() const;

                    /**
                     * 获取单位 秒.
                     * @return HeuristicCacheTime 单位 秒.
                     */
                    int64_t GetHeuristicCacheTime() const;

                    /**
                     * 设置单位 秒.
                     * @param HeuristicCacheTime 单位 秒.
                     */
                    void SetHeuristicCacheTime(const int64_t& _heuristicCacheTime);

                    /**
                     * 判断参数 HeuristicCacheTime 是否已赋值
                     * @return HeuristicCacheTime 是否已赋值
                     */
                    bool HeuristicCacheTimeHasBeenSet() const;

                private:

                    /**
                     * on 代表开启自定义启发式缓存时间
off 代表关闭自定义启发式缓存时间
                     */
                    std::string m_heuristicCacheTimeSwitch;
                    bool m_heuristicCacheTimeSwitchHasBeenSet;

                    /**
                     * 单位 秒.
                     */
                    int64_t m_heuristicCacheTime;
                    bool m_heuristicCacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIG_H_
