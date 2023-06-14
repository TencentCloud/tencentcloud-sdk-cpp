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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYLIMITINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYLIMITINFO_H_

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
                * 云企付-支付限制
                */
                class OpenBankPayLimitInfo : public AbstractModel
                {
                public:
                    OpenBankPayLimitInfo();
                    ~OpenBankPayLimitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取限制类型
                     * @return PayLimitType 限制类型
                     * 
                     */
                    std::string GetPayLimitType() const;

                    /**
                     * 设置限制类型
                     * @param _payLimitType 限制类型
                     * 
                     */
                    void SetPayLimitType(const std::string& _payLimitType);

                    /**
                     * 判断参数 PayLimitType 是否已赋值
                     * @return PayLimitType 是否已赋值
                     * 
                     */
                    bool PayLimitTypeHasBeenSet() const;

                    /**
                     * 获取限制类型值
                     * @return PayLimitValue 限制类型值
                     * 
                     */
                    std::string GetPayLimitValue() const;

                    /**
                     * 设置限制类型值
                     * @param _payLimitValue 限制类型值
                     * 
                     */
                    void SetPayLimitValue(const std::string& _payLimitValue);

                    /**
                     * 判断参数 PayLimitValue 是否已赋值
                     * @return PayLimitValue 是否已赋值
                     * 
                     */
                    bool PayLimitValueHasBeenSet() const;

                private:

                    /**
                     * 限制类型
                     */
                    std::string m_payLimitType;
                    bool m_payLimitTypeHasBeenSet;

                    /**
                     * 限制类型值
                     */
                    std::string m_payLimitValue;
                    bool m_payLimitValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPAYLIMITINFO_H_
