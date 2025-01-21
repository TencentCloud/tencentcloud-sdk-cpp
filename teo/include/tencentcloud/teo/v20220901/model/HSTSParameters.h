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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HSTSPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HSTSPARAMETERS_H_

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
                * HSTS 配置参数。
                */
                class HSTSParameters : public AbstractModel
                {
                public:
                    HSTSParameters();
                    ~HSTSParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HSTS 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch HSTS 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置HSTS 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch HSTS 配置开关，取值有：
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
                     * 获取缓存 HSTS 头部时间，单位为秒，取值：1-31536000。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return Timeout 缓存 HSTS 头部时间，单位为秒，取值：1-31536000。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置缓存 HSTS 头部时间，单位为秒，取值：1-31536000。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _timeout 缓存 HSTS 头部时间，单位为秒，取值：1-31536000。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取是否允许其他子域名继承相同的 HSTS 头部，取值有：
<li>on：允许其他子域名继承相同的 HSTS 头部；</li>
<li>off：不允许其他子域名继承相同的 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return IncludeSubDomains 是否允许其他子域名继承相同的 HSTS 头部，取值有：
<li>on：允许其他子域名继承相同的 HSTS 头部；</li>
<li>off：不允许其他子域名继承相同的 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    std::string GetIncludeSubDomains() const;

                    /**
                     * 设置是否允许其他子域名继承相同的 HSTS 头部，取值有：
<li>on：允许其他子域名继承相同的 HSTS 头部；</li>
<li>off：不允许其他子域名继承相同的 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _includeSubDomains 是否允许其他子域名继承相同的 HSTS 头部，取值有：
<li>on：允许其他子域名继承相同的 HSTS 头部；</li>
<li>off：不允许其他子域名继承相同的 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetIncludeSubDomains(const std::string& _includeSubDomains);

                    /**
                     * 判断参数 IncludeSubDomains 是否已赋值
                     * @return IncludeSubDomains 是否已赋值
                     * 
                     */
                    bool IncludeSubDomainsHasBeenSet() const;

                    /**
                     * 获取是否允许浏览器预加载 HSTS 头部，取值有：
<li>on：允许浏览器预加载 HSTS 头部；</li>
<li>off：不允许浏览器预加载 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return Preload 是否允许浏览器预加载 HSTS 头部，取值有：
<li>on：允许浏览器预加载 HSTS 头部；</li>
<li>off：不允许浏览器预加载 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    std::string GetPreload() const;

                    /**
                     * 设置是否允许浏览器预加载 HSTS 头部，取值有：
<li>on：允许浏览器预加载 HSTS 头部；</li>
<li>off：不允许浏览器预加载 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _preload 是否允许浏览器预加载 HSTS 头部，取值有：
<li>on：允许浏览器预加载 HSTS 头部；</li>
<li>off：不允许浏览器预加载 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetPreload(const std::string& _preload);

                    /**
                     * 判断参数 Preload 是否已赋值
                     * @return Preload 是否已赋值
                     * 
                     */
                    bool PreloadHasBeenSet() const;

                private:

                    /**
                     * HSTS 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 缓存 HSTS 头部时间，单位为秒，取值：1-31536000。<br>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 是否允许其他子域名继承相同的 HSTS 头部，取值有：
<li>on：允许其他子域名继承相同的 HSTS 头部；</li>
<li>off：不允许其他子域名继承相同的 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    std::string m_includeSubDomains;
                    bool m_includeSubDomainsHasBeenSet;

                    /**
                     * 是否允许浏览器预加载 HSTS 头部，取值有：
<li>on：允许浏览器预加载 HSTS 头部；</li>
<li>off：不允许浏览器预加载 HSTS 头部。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    std::string m_preload;
                    bool m_preloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HSTSPARAMETERS_H_
