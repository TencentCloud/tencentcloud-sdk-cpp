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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEFUNCTIONRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEFUNCTIONRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionRuleCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateFunctionRule请求参数结构体
                */
                class CreateFunctionRuleRequest : public AbstractModel
                {
                public:
                    CreateFunctionRuleRequest();
                    ~CreateFunctionRuleRequest() = default;
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
                     * 获取规则条件列表，相同触发规则的不同条件匹配项之间为或关系。
                     * @return FunctionRuleConditions 规则条件列表，相同触发规则的不同条件匹配项之间为或关系。
                     * 
                     */
                    std::vector<FunctionRuleCondition> GetFunctionRuleConditions() const;

                    /**
                     * 设置规则条件列表，相同触发规则的不同条件匹配项之间为或关系。
                     * @param _functionRuleConditions 规则条件列表，相同触发规则的不同条件匹配项之间为或关系。
                     * 
                     */
                    void SetFunctionRuleConditions(const std::vector<FunctionRuleCondition>& _functionRuleConditions);

                    /**
                     * 判断参数 FunctionRuleConditions 是否已赋值
                     * @return FunctionRuleConditions 是否已赋值
                     * 
                     */
                    bool FunctionRuleConditionsHasBeenSet() const;

                    /**
                     * 获取函数 ID，命中触发规则条件后执行的函数。
                     * @return FunctionId 函数 ID，命中触发规则条件后执行的函数。
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID，命中触发规则条件后执行的函数。
                     * @param _functionId 函数 ID，命中触发规则条件后执行的函数。
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取规则描述，最大支持 60 个字符。
                     * @return Remark 规则描述，最大支持 60 个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置规则描述，最大支持 60 个字符。
                     * @param _remark 规则描述，最大支持 60 个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 规则条件列表，相同触发规则的不同条件匹配项之间为或关系。
                     */
                    std::vector<FunctionRuleCondition> m_functionRuleConditions;
                    bool m_functionRuleConditionsHasBeenSet;

                    /**
                     * 函数 ID，命中触发规则条件后执行的函数。
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 规则描述，最大支持 60 个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEFUNCTIONRULEREQUEST_H_
