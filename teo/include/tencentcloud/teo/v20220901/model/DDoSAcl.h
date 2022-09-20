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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSAclRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS端口过滤
                */
                class DDoSAcl : public AbstractModel
                {
                public:
                    DDoSAcl();
                    ~DDoSAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口过滤规则数组。
                     * @return DDoSAclRules 端口过滤规则数组。
                     */
                    std::vector<DDoSAclRule> GetDDoSAclRules() const;

                    /**
                     * 设置端口过滤规则数组。
                     * @param DDoSAclRules 端口过滤规则数组。
                     */
                    void SetDDoSAclRules(const std::vector<DDoSAclRule>& _dDoSAclRules);

                    /**
                     * 判断参数 DDoSAclRules 是否已赋值
                     * @return DDoSAclRules 是否已赋值
                     */
                    bool DDoSAclRulesHasBeenSet() const;

                    /**
                     * 获取清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，DDoSAclRules无需填写；</li>
<li>on ：配置端口过滤规则，需填写DDoSAclRules参数。</li>
                     * @return Switch 清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，DDoSAclRules无需填写；</li>
<li>on ：配置端口过滤规则，需填写DDoSAclRules参数。</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，DDoSAclRules无需填写；</li>
<li>on ：配置端口过滤规则，需填写DDoSAclRules参数。</li>
                     * @param Switch 清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，DDoSAclRules无需填写；</li>
<li>on ：配置端口过滤规则，需填写DDoSAclRules参数。</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 端口过滤规则数组。
                     */
                    std::vector<DDoSAclRule> m_dDoSAclRules;
                    bool m_dDoSAclRulesHasBeenSet;

                    /**
                     * 清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，DDoSAclRules无需填写；</li>
<li>on ：配置端口过滤规则，需填写DDoSAclRules参数。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSACL_H_
