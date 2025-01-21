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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 浏览器缓存 TTL 配置参数。
                */
                class MaxAgeParameters : public AbstractModel
                {
                public:
                    MaxAgeParameters();
                    ~MaxAgeParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取遵循源站 Cache-Control 开关，取值有：
<li>on：遵循源站，忽略 CacheTime 时间设置；</li>
<li>off：不遵循源站，使用 CacheTime 时间设置。</li>
                     * @return FollowOrigin 遵循源站 Cache-Control 开关，取值有：
<li>on：遵循源站，忽略 CacheTime 时间设置；</li>
<li>off：不遵循源站，使用 CacheTime 时间设置。</li>
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置遵循源站 Cache-Control 开关，取值有：
<li>on：遵循源站，忽略 CacheTime 时间设置；</li>
<li>off：不遵循源站，使用 CacheTime 时间设置。</li>
                     * @param _followOrigin 遵循源站 Cache-Control 开关，取值有：
<li>on：遵循源站，忽略 CacheTime 时间设置；</li>
<li>off：不遵循源站，使用 CacheTime 时间设置。</li>
                     * 
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取自定义缓存时间数值，单位为秒，取值：0～315360000。<br>注意：当 FollowOrigin 为 off 时，表示不遵循源站，使用 CacheTime 设置缓存时间，否则此字段不生效。
                     * @return CacheTime 自定义缓存时间数值，单位为秒，取值：0～315360000。<br>注意：当 FollowOrigin 为 off 时，表示不遵循源站，使用 CacheTime 设置缓存时间，否则此字段不生效。
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置自定义缓存时间数值，单位为秒，取值：0～315360000。<br>注意：当 FollowOrigin 为 off 时，表示不遵循源站，使用 CacheTime 设置缓存时间，否则此字段不生效。
                     * @param _cacheTime 自定义缓存时间数值，单位为秒，取值：0～315360000。<br>注意：当 FollowOrigin 为 off 时，表示不遵循源站，使用 CacheTime 设置缓存时间，否则此字段不生效。
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
                     * 遵循源站 Cache-Control 开关，取值有：
<li>on：遵循源站，忽略 CacheTime 时间设置；</li>
<li>off：不遵循源站，使用 CacheTime 时间设置。</li>
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * 自定义缓存时间数值，单位为秒，取值：0～315360000。<br>注意：当 FollowOrigin 为 off 时，表示不遵循源站，使用 CacheTime 设置缓存时间，否则此字段不生效。
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MAXAGEPARAMETERS_H_
