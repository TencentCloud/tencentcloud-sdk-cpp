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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_

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
                * 自定义 Cache Key Cookie 配置参数。
                */
                class CacheKeyCookie : public AbstractModel
                {
                public:
                    CacheKeyCookie();
                    ~CacheKeyCookie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 功能开关，取值有：
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
                     * 获取缓存动作，取值有：
<li>full：全部保留；</li>
<li> ignore：全部忽略；</li>
<li> includeCustom：保留指定参数；</li>
<li>excludeCustom：忽略指定参数。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @return Action 缓存动作，取值有：
<li>full：全部保留；</li>
<li> ignore：全部忽略；</li>
<li> includeCustom：保留指定参数；</li>
<li>excludeCustom：忽略指定参数。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置缓存动作，取值有：
<li>full：全部保留；</li>
<li> ignore：全部忽略；</li>
<li> includeCustom：保留指定参数；</li>
<li>excludeCustom：忽略指定参数。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * @param _action 缓存动作，取值有：
<li>full：全部保留；</li>
<li> ignore：全部忽略；</li>
<li> includeCustom：保留指定参数；</li>
<li>excludeCustom：忽略指定参数。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取自定义 Cache Key Cookie 名称列表。<br>注意：当 Action 为 includeCustom 或 excludeCustom 时，此字段必填；当 Action 为 full 或 ignore 时，无需填写此字段，若填写则不生效。
                     * @return Values 自定义 Cache Key Cookie 名称列表。<br>注意：当 Action 为 includeCustom 或 excludeCustom 时，此字段必填；当 Action 为 full 或 ignore 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置自定义 Cache Key Cookie 名称列表。<br>注意：当 Action 为 includeCustom 或 excludeCustom 时，此字段必填；当 Action 为 full 或 ignore 时，无需填写此字段，若填写则不生效。
                     * @param _values 自定义 Cache Key Cookie 名称列表。<br>注意：当 Action 为 includeCustom 或 excludeCustom 时，此字段必填；当 Action 为 full 或 ignore 时，无需填写此字段，若填写则不生效。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 缓存动作，取值有：
<li>full：全部保留；</li>
<li> ignore：全部忽略；</li>
<li> includeCustom：保留指定参数；</li>
<li>excludeCustom：忽略指定参数。</li>注意：当 Switch 为 on 时，此字段必填；当 Switch 为 off 时，无需填写此字段，若填写则不生效。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 自定义 Cache Key Cookie 名称列表。<br>注意：当 Action 为 includeCustom 或 excludeCustom 时，此字段必填；当 Action 为 full 或 ignore 时，无需填写此字段，若填写则不生效。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYCOOKIE_H_
