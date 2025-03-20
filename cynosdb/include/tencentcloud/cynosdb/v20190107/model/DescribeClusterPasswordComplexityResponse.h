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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPASSWORDCOMPLEXITYRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPASSWORDCOMPLEXITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterPasswordComplexity返回参数结构体
                */
                class DescribeClusterPasswordComplexityResponse : public AbstractModel
                {
                public:
                    DescribeClusterPasswordComplexityResponse();
                    ~DescribeClusterPasswordComplexityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据字典参数
                     * @return ValidatePasswordDictionary 数据字典参数
                     * 
                     */
                    ParamInfo GetValidatePasswordDictionary() const;

                    /**
                     * 判断参数 ValidatePasswordDictionary 是否已赋值
                     * @return ValidatePasswordDictionary 是否已赋值
                     * 
                     */
                    bool ValidatePasswordDictionaryHasBeenSet() const;

                    /**
                     * 获取密码长度
                     * @return ValidatePasswordLength 密码长度
                     * 
                     */
                    ParamInfo GetValidatePasswordLength() const;

                    /**
                     * 判断参数 ValidatePasswordLength 是否已赋值
                     * @return ValidatePasswordLength 是否已赋值
                     * 
                     */
                    bool ValidatePasswordLengthHasBeenSet() const;

                    /**
                     * 获取大小写敏感字符个数
                     * @return ValidatePasswordMixedCaseCount 大小写敏感字符个数
                     * 
                     */
                    ParamInfo GetValidatePasswordMixedCaseCount() const;

                    /**
                     * 判断参数 ValidatePasswordMixedCaseCount 是否已赋值
                     * @return ValidatePasswordMixedCaseCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordMixedCaseCountHasBeenSet() const;

                    /**
                     * 获取数字个数
                     * @return ValidatePasswordNumberCount 数字个数
                     * 
                     */
                    ParamInfo GetValidatePasswordNumberCount() const;

                    /**
                     * 判断参数 ValidatePasswordNumberCount 是否已赋值
                     * @return ValidatePasswordNumberCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordNumberCountHasBeenSet() const;

                    /**
                     * 获取密码等级
                     * @return ValidatePasswordPolicy 密码等级
                     * 
                     */
                    ParamInfo GetValidatePasswordPolicy() const;

                    /**
                     * 判断参数 ValidatePasswordPolicy 是否已赋值
                     * @return ValidatePasswordPolicy 是否已赋值
                     * 
                     */
                    bool ValidatePasswordPolicyHasBeenSet() const;

                    /**
                     * 获取特殊字符个数
                     * @return ValidatePasswordSpecialCharCount 特殊字符个数
                     * 
                     */
                    ParamInfo GetValidatePasswordSpecialCharCount() const;

                    /**
                     * 判断参数 ValidatePasswordSpecialCharCount 是否已赋值
                     * @return ValidatePasswordSpecialCharCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordSpecialCharCountHasBeenSet() const;

                private:

                    /**
                     * 数据字典参数
                     */
                    ParamInfo m_validatePasswordDictionary;
                    bool m_validatePasswordDictionaryHasBeenSet;

                    /**
                     * 密码长度
                     */
                    ParamInfo m_validatePasswordLength;
                    bool m_validatePasswordLengthHasBeenSet;

                    /**
                     * 大小写敏感字符个数
                     */
                    ParamInfo m_validatePasswordMixedCaseCount;
                    bool m_validatePasswordMixedCaseCountHasBeenSet;

                    /**
                     * 数字个数
                     */
                    ParamInfo m_validatePasswordNumberCount;
                    bool m_validatePasswordNumberCountHasBeenSet;

                    /**
                     * 密码等级
                     */
                    ParamInfo m_validatePasswordPolicy;
                    bool m_validatePasswordPolicyHasBeenSet;

                    /**
                     * 特殊字符个数
                     */
                    ParamInfo m_validatePasswordSpecialCharCount;
                    bool m_validatePasswordSpecialCharCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERPASSWORDCOMPLEXITYRESPONSE_H_
