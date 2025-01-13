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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FOLLOWORIGIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FOLLOWORIGIN_H_

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
                * 缓存遵循源站配置。
                */
                class FollowOrigin : public AbstractModel
                {
                public:
                    FollowOrigin();
                    ~FollowOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取遵循源站配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 遵循源站配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置遵循源站配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 遵循源站配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取源站未返回 Cache-Control 头时，缓存/不缓存开关。当 Switch 为 on 时，此字段必填，当 Switch 为 off 时，无需填写此字段，若填写则不生效。取值有：
<li>on：缓存；</li>
<li>off：不缓存。</li>
                     * @return DefaultCache 源站未返回 Cache-Control 头时，缓存/不缓存开关。当 Switch 为 on 时，此字段必填，当 Switch 为 off 时，无需填写此字段，若填写则不生效。取值有：
<li>on：缓存；</li>
<li>off：不缓存。</li>
                     * 
                     */
                    std::string GetDefaultCache() const;

                    /**
                     * 设置源站未返回 Cache-Control 头时，缓存/不缓存开关。当 Switch 为 on 时，此字段必填，当 Switch 为 off 时，无需填写此字段，若填写则不生效。取值有：
<li>on：缓存；</li>
<li>off：不缓存。</li>
                     * @param _defaultCache 源站未返回 Cache-Control 头时，缓存/不缓存开关。当 Switch 为 on 时，此字段必填，当 Switch 为 off 时，无需填写此字段，若填写则不生效。取值有：
<li>on：缓存；</li>
<li>off：不缓存。</li>
                     * 
                     */
                    void SetDefaultCache(const std::string& _defaultCache);

                    /**
                     * 判断参数 DefaultCache 是否已赋值
                     * @return DefaultCache 是否已赋值
                     * 
                     */
                    bool DefaultCacheHasBeenSet() const;

                    /**
                     * 获取源站未返回 Cache-Control 头时，使用/不使用默认缓存策略开关。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheTime 不为 0 时，此字段必须为 off。取值有：
<li>on：使用默认缓存策略；</li>
<li>off：不使用默认缓存策略。</li>
                     * @return DefaultCacheStrategy 源站未返回 Cache-Control 头时，使用/不使用默认缓存策略开关。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheTime 不为 0 时，此字段必须为 off。取值有：
<li>on：使用默认缓存策略；</li>
<li>off：不使用默认缓存策略。</li>
                     * 
                     */
                    std::string GetDefaultCacheStrategy() const;

                    /**
                     * 设置源站未返回 Cache-Control 头时，使用/不使用默认缓存策略开关。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheTime 不为 0 时，此字段必须为 off。取值有：
<li>on：使用默认缓存策略；</li>
<li>off：不使用默认缓存策略。</li>
                     * @param _defaultCacheStrategy 源站未返回 Cache-Control 头时，使用/不使用默认缓存策略开关。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheTime 不为 0 时，此字段必须为 off。取值有：
<li>on：使用默认缓存策略；</li>
<li>off：不使用默认缓存策略。</li>
                     * 
                     */
                    void SetDefaultCacheStrategy(const std::string& _defaultCacheStrategy);

                    /**
                     * 判断参数 DefaultCacheStrategy 是否已赋值
                     * @return DefaultCacheStrategy 是否已赋值
                     * 
                     */
                    bool DefaultCacheStrategyHasBeenSet() const;

                    /**
                     * 获取源站未返回 Cache-Control 头时，表示默认的缓存时间，单位为秒，取值：0-315360000。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheStrategy 为 on 时， 此字段必须为 0。
                     * @return DefaultCacheTime 源站未返回 Cache-Control 头时，表示默认的缓存时间，单位为秒，取值：0-315360000。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheStrategy 为 on 时， 此字段必须为 0。
                     * 
                     */
                    int64_t GetDefaultCacheTime() const;

                    /**
                     * 设置源站未返回 Cache-Control 头时，表示默认的缓存时间，单位为秒，取值：0-315360000。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheStrategy 为 on 时， 此字段必须为 0。
                     * @param _defaultCacheTime 源站未返回 Cache-Control 头时，表示默认的缓存时间，单位为秒，取值：0-315360000。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheStrategy 为 on 时， 此字段必须为 0。
                     * 
                     */
                    void SetDefaultCacheTime(const int64_t& _defaultCacheTime);

                    /**
                     * 判断参数 DefaultCacheTime 是否已赋值
                     * @return DefaultCacheTime 是否已赋值
                     * 
                     */
                    bool DefaultCacheTimeHasBeenSet() const;

                private:

                    /**
                     * 遵循源站配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 源站未返回 Cache-Control 头时，缓存/不缓存开关。当 Switch 为 on 时，此字段必填，当 Switch 为 off 时，无需填写此字段，若填写则不生效。取值有：
<li>on：缓存；</li>
<li>off：不缓存。</li>
                     */
                    std::string m_defaultCache;
                    bool m_defaultCacheHasBeenSet;

                    /**
                     * 源站未返回 Cache-Control 头时，使用/不使用默认缓存策略开关。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheTime 不为 0 时，此字段必须为 off。取值有：
<li>on：使用默认缓存策略；</li>
<li>off：不使用默认缓存策略。</li>
                     */
                    std::string m_defaultCacheStrategy;
                    bool m_defaultCacheStrategyHasBeenSet;

                    /**
                     * 源站未返回 Cache-Control 头时，表示默认的缓存时间，单位为秒，取值：0-315360000。当 DefaultCache 为 on 时，此字段必填，否则此字段不生效；当 DefaultCacheStrategy 为 on 时， 此字段必须为 0。
                     */
                    int64_t m_defaultCacheTime;
                    bool m_defaultCacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FOLLOWORIGIN_H_
