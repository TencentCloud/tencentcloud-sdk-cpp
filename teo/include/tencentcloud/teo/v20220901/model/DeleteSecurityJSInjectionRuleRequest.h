/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYJSINJECTIONRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYJSINJECTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteSecurityJSInjectionRule请求参数结构体
                */
                class DeleteSecurityJSInjectionRuleRequest : public AbstractModel
                {
                public:
                    DeleteSecurityJSInjectionRuleRequest();
                    ~DeleteSecurityJSInjectionRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取JavaScript 注入规则 ID 列表。
                     * @return JSInjectionRuleIds JavaScript 注入规则 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetJSInjectionRuleIds() const;

                    /**
                     * 设置JavaScript 注入规则 ID 列表。
                     * @param _jSInjectionRuleIds JavaScript 注入规则 ID 列表。
                     * 
                     */
                    void SetJSInjectionRuleIds(const std::vector<std::string>& _jSInjectionRuleIds);

                    /**
                     * 判断参数 JSInjectionRuleIds 是否已赋值
                     * @return JSInjectionRuleIds 是否已赋值
                     * 
                     */
                    bool JSInjectionRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * JavaScript 注入规则 ID 列表。
                     */
                    std::vector<std::string> m_jSInjectionRuleIds;
                    bool m_jSInjectionRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYJSINJECTIONRULEREQUEST_H_
