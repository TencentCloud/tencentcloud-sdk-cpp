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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BUSINESSLICENSEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BUSINESSLICENSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 营业证件信息
                */
                class BusinessLicenseInfo : public AbstractModel
                {
                public:
                    BusinessLicenseInfo();
                    ~BusinessLicenseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取营业证件类型
 IDCARD：身份证
 CREDITCODE：统一社会信用代码
                     * @return BusinessLicenseType 营业证件类型
 IDCARD：身份证
 CREDITCODE：统一社会信用代码
                     * 
                     */
                    std::string GetBusinessLicenseType() const;

                    /**
                     * 设置营业证件类型
 IDCARD：身份证
 CREDITCODE：统一社会信用代码
                     * @param _businessLicenseType 营业证件类型
 IDCARD：身份证
 CREDITCODE：统一社会信用代码
                     * 
                     */
                    void SetBusinessLicenseType(const std::string& _businessLicenseType);

                    /**
                     * 判断参数 BusinessLicenseType 是否已赋值
                     * @return BusinessLicenseType 是否已赋值
                     * 
                     */
                    bool BusinessLicenseTypeHasBeenSet() const;

                    /**
                     * 获取营业证件号码 非个人商户上送统一社会信用代码，个人商户上送身份证号码
                     * @return BusinessLicenseNumber 营业证件号码 非个人商户上送统一社会信用代码，个人商户上送身份证号码
                     * 
                     */
                    std::string GetBusinessLicenseNumber() const;

                    /**
                     * 设置营业证件号码 非个人商户上送统一社会信用代码，个人商户上送身份证号码
                     * @param _businessLicenseNumber 营业证件号码 非个人商户上送统一社会信用代码，个人商户上送身份证号码
                     * 
                     */
                    void SetBusinessLicenseNumber(const std::string& _businessLicenseNumber);

                    /**
                     * 判断参数 BusinessLicenseNumber 是否已赋值
                     * @return BusinessLicenseNumber 是否已赋值
                     * 
                     */
                    bool BusinessLicenseNumberHasBeenSet() const;

                    /**
                     * 获取营业证件有效期类型 
LONGTERM：长期有效
OTHER：非长期有效
                     * @return BusinessLicenseValidityType 营业证件有效期类型 
LONGTERM：长期有效
OTHER：非长期有效
                     * 
                     */
                    std::string GetBusinessLicenseValidityType() const;

                    /**
                     * 设置营业证件有效期类型 
LONGTERM：长期有效
OTHER：非长期有效
                     * @param _businessLicenseValidityType 营业证件有效期类型 
LONGTERM：长期有效
OTHER：非长期有效
                     * 
                     */
                    void SetBusinessLicenseValidityType(const std::string& _businessLicenseValidityType);

                    /**
                     * 判断参数 BusinessLicenseValidityType 是否已赋值
                     * @return BusinessLicenseValidityType 是否已赋值
                     * 
                     */
                    bool BusinessLicenseValidityTypeHasBeenSet() const;

                    /**
                     * 获取营业证件生效日期，yyyy-MM-dd
                     * @return BusinessLicenseEffectiveDate 营业证件生效日期，yyyy-MM-dd
                     * 
                     */
                    std::string GetBusinessLicenseEffectiveDate() const;

                    /**
                     * 设置营业证件生效日期，yyyy-MM-dd
                     * @param _businessLicenseEffectiveDate 营业证件生效日期，yyyy-MM-dd
                     * 
                     */
                    void SetBusinessLicenseEffectiveDate(const std::string& _businessLicenseEffectiveDate);

                    /**
                     * 判断参数 BusinessLicenseEffectiveDate 是否已赋值
                     * @return BusinessLicenseEffectiveDate 是否已赋值
                     * 
                     */
                    bool BusinessLicenseEffectiveDateHasBeenSet() const;

                    /**
                     * 获取营业证件失效日期，yyyy-MM-dd
                     * @return BusinessLicenseExpireDate 营业证件失效日期，yyyy-MM-dd
                     * 
                     */
                    std::string GetBusinessLicenseExpireDate() const;

                    /**
                     * 设置营业证件失效日期，yyyy-MM-dd
                     * @param _businessLicenseExpireDate 营业证件失效日期，yyyy-MM-dd
                     * 
                     */
                    void SetBusinessLicenseExpireDate(const std::string& _businessLicenseExpireDate);

                    /**
                     * 判断参数 BusinessLicenseExpireDate 是否已赋值
                     * @return BusinessLicenseExpireDate 是否已赋值
                     * 
                     */
                    bool BusinessLicenseExpireDateHasBeenSet() const;

                private:

                    /**
                     * 营业证件类型
 IDCARD：身份证
 CREDITCODE：统一社会信用代码
                     */
                    std::string m_businessLicenseType;
                    bool m_businessLicenseTypeHasBeenSet;

                    /**
                     * 营业证件号码 非个人商户上送统一社会信用代码，个人商户上送身份证号码
                     */
                    std::string m_businessLicenseNumber;
                    bool m_businessLicenseNumberHasBeenSet;

                    /**
                     * 营业证件有效期类型 
LONGTERM：长期有效
OTHER：非长期有效
                     */
                    std::string m_businessLicenseValidityType;
                    bool m_businessLicenseValidityTypeHasBeenSet;

                    /**
                     * 营业证件生效日期，yyyy-MM-dd
                     */
                    std::string m_businessLicenseEffectiveDate;
                    bool m_businessLicenseEffectiveDateHasBeenSet;

                    /**
                     * 营业证件失效日期，yyyy-MM-dd
                     */
                    std::string m_businessLicenseExpireDate;
                    bool m_businessLicenseExpireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BUSINESSLICENSEINFO_H_
