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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 安全策略
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略索引
                     * @return PolicyIndex 策略索引
                     * 
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置策略索引
                     * @param _policyIndex 策略索引
                     * 
                     */
                    void SetPolicyIndex(const int64_t& _policyIndex);

                    /**
                     * 判断参数 PolicyIndex 是否已赋值
                     * @return PolicyIndex 是否已赋值
                     * 
                     */
                    bool PolicyIndexHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取运行访问的公网IP地址端
                     * @return CidrBlock 运行访问的公网IP地址端
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置运行访问的公网IP地址端
                     * @param _cidrBlock 运行访问的公网IP地址端
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取安全策略的版本
                     * @return PolicyVersion 安全策略的版本
                     * 
                     */
                    std::string GetPolicyVersion() const;

                    /**
                     * 设置安全策略的版本
                     * @param _policyVersion 安全策略的版本
                     * 
                     */
                    void SetPolicyVersion(const std::string& _policyVersion);

                    /**
                     * 判断参数 PolicyVersion 是否已赋值
                     * @return PolicyVersion 是否已赋值
                     * 
                     */
                    bool PolicyVersionHasBeenSet() const;

                private:

                    /**
                     * 策略索引
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 运行访问的公网IP地址端
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 安全策略的版本
                     */
                    std::string m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_SECURITYPOLICY_H_
