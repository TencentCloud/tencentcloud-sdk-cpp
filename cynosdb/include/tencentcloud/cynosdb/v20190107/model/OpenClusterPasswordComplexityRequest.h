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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENCLUSTERPASSWORDCOMPLEXITYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENCLUSTERPASSWORDCOMPLEXITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * OpenClusterPasswordComplexity请求参数结构体
                */
                class OpenClusterPasswordComplexityRequest : public AbstractModel
                {
                public:
                    OpenClusterPasswordComplexityRequest();
                    ~OpenClusterPasswordComplexityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取密码长度
                     * @return ValidatePasswordLength 密码长度
                     * 
                     */
                    int64_t GetValidatePasswordLength() const;

                    /**
                     * 设置密码长度
                     * @param _validatePasswordLength 密码长度
                     * 
                     */
                    void SetValidatePasswordLength(const int64_t& _validatePasswordLength);

                    /**
                     * 判断参数 ValidatePasswordLength 是否已赋值
                     * @return ValidatePasswordLength 是否已赋值
                     * 
                     */
                    bool ValidatePasswordLengthHasBeenSet() const;

                    /**
                     * 获取大小写字符个数
                     * @return ValidatePasswordMixedCaseCount 大小写字符个数
                     * 
                     */
                    int64_t GetValidatePasswordMixedCaseCount() const;

                    /**
                     * 设置大小写字符个数
                     * @param _validatePasswordMixedCaseCount 大小写字符个数
                     * 
                     */
                    void SetValidatePasswordMixedCaseCount(const int64_t& _validatePasswordMixedCaseCount);

                    /**
                     * 判断参数 ValidatePasswordMixedCaseCount 是否已赋值
                     * @return ValidatePasswordMixedCaseCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordMixedCaseCountHasBeenSet() const;

                    /**
                     * 获取特殊字符个数
                     * @return ValidatePasswordSpecialCharCount 特殊字符个数
                     * 
                     */
                    int64_t GetValidatePasswordSpecialCharCount() const;

                    /**
                     * 设置特殊字符个数
                     * @param _validatePasswordSpecialCharCount 特殊字符个数
                     * 
                     */
                    void SetValidatePasswordSpecialCharCount(const int64_t& _validatePasswordSpecialCharCount);

                    /**
                     * 判断参数 ValidatePasswordSpecialCharCount 是否已赋值
                     * @return ValidatePasswordSpecialCharCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordSpecialCharCountHasBeenSet() const;

                    /**
                     * 获取数字个数
                     * @return ValidatePasswordNumberCount 数字个数
                     * 
                     */
                    int64_t GetValidatePasswordNumberCount() const;

                    /**
                     * 设置数字个数
                     * @param _validatePasswordNumberCount 数字个数
                     * 
                     */
                    void SetValidatePasswordNumberCount(const int64_t& _validatePasswordNumberCount);

                    /**
                     * 判断参数 ValidatePasswordNumberCount 是否已赋值
                     * @return ValidatePasswordNumberCount 是否已赋值
                     * 
                     */
                    bool ValidatePasswordNumberCountHasBeenSet() const;

                    /**
                     * 获取密码强度（"MEDIUM", "STRONG"）
                     * @return ValidatePasswordPolicy 密码强度（"MEDIUM", "STRONG"）
                     * 
                     */
                    std::string GetValidatePasswordPolicy() const;

                    /**
                     * 设置密码强度（"MEDIUM", "STRONG"）
                     * @param _validatePasswordPolicy 密码强度（"MEDIUM", "STRONG"）
                     * 
                     */
                    void SetValidatePasswordPolicy(const std::string& _validatePasswordPolicy);

                    /**
                     * 判断参数 ValidatePasswordPolicy 是否已赋值
                     * @return ValidatePasswordPolicy 是否已赋值
                     * 
                     */
                    bool ValidatePasswordPolicyHasBeenSet() const;

                    /**
                     * 获取数据字典
                     * @return ValidatePasswordDictionary 数据字典
                     * 
                     */
                    std::vector<std::string> GetValidatePasswordDictionary() const;

                    /**
                     * 设置数据字典
                     * @param _validatePasswordDictionary 数据字典
                     * 
                     */
                    void SetValidatePasswordDictionary(const std::vector<std::string>& _validatePasswordDictionary);

                    /**
                     * 判断参数 ValidatePasswordDictionary 是否已赋值
                     * @return ValidatePasswordDictionary 是否已赋值
                     * 
                     */
                    bool ValidatePasswordDictionaryHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 密码长度
                     */
                    int64_t m_validatePasswordLength;
                    bool m_validatePasswordLengthHasBeenSet;

                    /**
                     * 大小写字符个数
                     */
                    int64_t m_validatePasswordMixedCaseCount;
                    bool m_validatePasswordMixedCaseCountHasBeenSet;

                    /**
                     * 特殊字符个数
                     */
                    int64_t m_validatePasswordSpecialCharCount;
                    bool m_validatePasswordSpecialCharCountHasBeenSet;

                    /**
                     * 数字个数
                     */
                    int64_t m_validatePasswordNumberCount;
                    bool m_validatePasswordNumberCountHasBeenSet;

                    /**
                     * 密码强度（"MEDIUM", "STRONG"）
                     */
                    std::string m_validatePasswordPolicy;
                    bool m_validatePasswordPolicyHasBeenSet;

                    /**
                     * 数据字典
                     */
                    std::vector<std::string> m_validatePasswordDictionary;
                    bool m_validatePasswordDictionaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_OPENCLUSTERPASSWORDCOMPLEXITYREQUEST_H_
