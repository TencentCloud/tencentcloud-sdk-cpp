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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCK_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSAllowBlockRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS黑白名单
                */
                class DDoSAllowBlock : public AbstractModel
                {
                public:
                    DDoSAllowBlock();
                    ~DDoSAllowBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取黑白名单数组。
                     * @return DDoSAllowBlockRules 黑白名单数组。
                     */
                    std::vector<DDoSAllowBlockRule> GetDDoSAllowBlockRules() const;

                    /**
                     * 设置黑白名单数组。
                     * @param DDoSAllowBlockRules 黑白名单数组。
                     */
                    void SetDDoSAllowBlockRules(const std::vector<DDoSAllowBlockRule>& _dDoSAllowBlockRules);

                    /**
                     * 判断参数 DDoSAllowBlockRules 是否已赋值
                     * @return DDoSAllowBlockRules 是否已赋值
                     */
                    bool DDoSAllowBlockRulesHasBeenSet() const;

                    /**
                     * 获取开关标识防护是否清空，取值有：
<li>off ：关闭黑白名单；</li>
<li>on ：开启黑白名单，需填写UserAllowBlockIp参数。</li>
                     * @return Switch 开关标识防护是否清空，取值有：
<li>off ：关闭黑白名单；</li>
<li>on ：开启黑白名单，需填写UserAllowBlockIp参数。</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关标识防护是否清空，取值有：
<li>off ：关闭黑白名单；</li>
<li>on ：开启黑白名单，需填写UserAllowBlockIp参数。</li>
                     * @param Switch 开关标识防护是否清空，取值有：
<li>off ：关闭黑白名单；</li>
<li>on ：开启黑白名单，需填写UserAllowBlockIp参数。</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 黑白名单数组。
                     */
                    std::vector<DDoSAllowBlockRule> m_dDoSAllowBlockRules;
                    bool m_dDoSAllowBlockRulesHasBeenSet;

                    /**
                     * 开关标识防护是否清空，取值有：
<li>off ：关闭黑白名单；</li>
<li>on ：开启黑白名单，需填写UserAllowBlockIp参数。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCK_H_
