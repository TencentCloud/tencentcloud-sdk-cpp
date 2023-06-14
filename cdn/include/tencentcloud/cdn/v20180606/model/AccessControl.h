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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROL_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AccessControlRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 请求头部及请求url访问控制
                */
                class AccessControl : public AbstractModel
                {
                public:
                    AccessControl();
                    ~AccessControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启用请求头部及请求url访问控制开关，取值有：
on：开启
off：关闭
                     * @return Switch 启用请求头部及请求url访问控制开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置启用请求头部及请求url访问控制开关，取值有：
on：开启
off：关闭
                     * @param _switch 启用请求头部及请求url访问控制开关，取值有：
on：开启
off：关闭
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
                     * 获取请求头部及请求url访问规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessControlRules 请求头部及请求url访问规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccessControlRule> GetAccessControlRules() const;

                    /**
                     * 设置请求头部及请求url访问规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessControlRules 请求头部及请求url访问规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessControlRules(const std::vector<AccessControlRule>& _accessControlRules);

                    /**
                     * 判断参数 AccessControlRules 是否已赋值
                     * @return AccessControlRules 是否已赋值
                     * 
                     */
                    bool AccessControlRulesHasBeenSet() const;

                    /**
                     * 获取返回状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnCode 返回状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 设置返回状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnCode 返回状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnCode(const int64_t& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                private:

                    /**
                     * 启用请求头部及请求url访问控制开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 请求头部及请求url访问规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccessControlRule> m_accessControlRules;
                    bool m_accessControlRulesHasBeenSet;

                    /**
                     * 返回状态码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROL_H_
