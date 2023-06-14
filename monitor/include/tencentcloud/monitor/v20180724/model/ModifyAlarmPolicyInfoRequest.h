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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYINFOREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicyInfo请求参数结构体
                */
                class ModifyAlarmPolicyInfoRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyInfoRequest();
                    ~ModifyAlarmPolicyInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，这里填“monitor”
                     * @return Module 模块名，这里填“monitor”
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，这里填“monitor”
                     * @param _module 模块名，这里填“monitor”
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取告警策略 ID
                     * @return PolicyId 告警策略 ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置告警策略 ID
                     * @param _policyId 告警策略 ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取要修改的字段 NAME=策略名称 REMARK=策略备注
                     * @return Key 要修改的字段 NAME=策略名称 REMARK=策略备注
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置要修改的字段 NAME=策略名称 REMARK=策略备注
                     * @param _key 要修改的字段 NAME=策略名称 REMARK=策略备注
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取修改后的值
                     * @return Value 修改后的值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置修改后的值
                     * @param _value 修改后的值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 模块名，这里填“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警策略 ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 要修改的字段 NAME=策略名称 REMARK=策略备注
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 修改后的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYINFOREQUEST_H_
