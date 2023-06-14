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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAF_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAF_H_

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
                * 无
                */
                class Waf : public AbstractModel
                {
                public:
                    Waf();
                    ~Waf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Waf开关，取值为：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * @return Switch Waf开关，取值为：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Waf开关，取值为：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * @param _switch Waf开关，取值为：
<li> on：开启；</li>
<li> off：关闭。</li>
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
                     * 获取策略ID。
                     * @return PolicyId 策略ID。
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param _policyId 策略ID。
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Waf开关，取值为：
<li> on：开启；</li>
<li> off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 策略ID。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAF_H_
