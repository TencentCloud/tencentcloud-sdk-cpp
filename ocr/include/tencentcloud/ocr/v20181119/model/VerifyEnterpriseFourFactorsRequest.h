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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYENTERPRISEFOURFACTORSREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYENTERPRISEFOURFACTORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyEnterpriseFourFactors请求参数结构体
                */
                class VerifyEnterpriseFourFactorsRequest : public AbstractModel
                {
                public:
                    VerifyEnterpriseFourFactorsRequest();
                    ~VerifyEnterpriseFourFactorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取姓名
                     * @return RealName 姓名
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名
                     * @param RealName 姓名
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取证件号码（公司注册证件号）
                     * @return IdCard 证件号码（公司注册证件号）
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置证件号码（公司注册证件号）
                     * @param IdCard 证件号码（公司注册证件号）
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取企业全称
                     * @return EnterpriseName 企业全称
                     */
                    std::string GetEnterpriseName() const;

                    /**
                     * 设置企业全称
                     * @param EnterpriseName 企业全称
                     */
                    void SetEnterpriseName(const std::string& _enterpriseName);

                    /**
                     * 判断参数 EnterpriseName 是否已赋值
                     * @return EnterpriseName 是否已赋值
                     */
                    bool EnterpriseNameHasBeenSet() const;

                    /**
                     * 获取企业标识（注册号，统一社会信用代码）
                     * @return EnterpriseMark 企业标识（注册号，统一社会信用代码）
                     */
                    std::string GetEnterpriseMark() const;

                    /**
                     * 设置企业标识（注册号，统一社会信用代码）
                     * @param EnterpriseMark 企业标识（注册号，统一社会信用代码）
                     */
                    void SetEnterpriseMark(const std::string& _enterpriseMark);

                    /**
                     * 判断参数 EnterpriseMark 是否已赋值
                     * @return EnterpriseMark 是否已赋值
                     */
                    bool EnterpriseMarkHasBeenSet() const;

                private:

                    /**
                     * 姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 证件号码（公司注册证件号）
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 企业全称
                     */
                    std::string m_enterpriseName;
                    bool m_enterpriseNameHasBeenSet;

                    /**
                     * 企业标识（注册号，统一社会信用代码）
                     */
                    std::string m_enterpriseMark;
                    bool m_enterpriseMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYENTERPRISEFOURFACTORSREQUEST_H_
