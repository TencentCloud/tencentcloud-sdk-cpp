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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HSTS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HSTS_H_

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
                * Hsts配置
                */
                class Hsts : public AbstractModel
                {
                public:
                    Hsts();
                    ~Hsts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 是否开启，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置是否开启，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 是否开启，取值有：
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
                     * 获取MaxAge 数值。单位为秒，最大值为1天。
                     * @return MaxAge MaxAge 数值。单位为秒，最大值为1天。
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置MaxAge 数值。单位为秒，最大值为1天。
                     * @param _maxAge MaxAge 数值。单位为秒，最大值为1天。
                     * 
                     */
                    void SetMaxAge(const int64_t& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取是否包含子域名，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return IncludeSubDomains 是否包含子域名，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetIncludeSubDomains() const;

                    /**
                     * 设置是否包含子域名，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _includeSubDomains 是否包含子域名，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
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
                     * 获取是否开启预加载，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Preload 是否开启预加载，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetPreload() const;

                    /**
                     * 设置是否开启预加载，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _preload 是否开启预加载，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
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
                     * 是否开启，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * MaxAge 数值。单位为秒，最大值为1天。
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 是否包含子域名，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_includeSubDomains;
                    bool m_includeSubDomainsHasBeenSet;

                    /**
                     * 是否开启预加载，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_preload;
                    bool m_preloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HSTS_H_
