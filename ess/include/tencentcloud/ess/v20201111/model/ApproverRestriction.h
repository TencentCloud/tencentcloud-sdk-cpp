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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERRESTRICTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERRESTRICTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 指定签署人限制项
                */
                class ApproverRestriction : public AbstractModel
                {
                public:
                    ApproverRestriction();
                    ~ApproverRestriction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定签署人名字
                     * @return Name 指定签署人名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置指定签署人名字
                     * @param _name 指定签署人名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取指定签署人手机号，11位数字
                     * @return Mobile 指定签署人手机号，11位数字
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置指定签署人手机号，11位数字
                     * @param _mobile 指定签署人手机号，11位数字
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取指定签署人证件类型，ID_CARD-身份证
                     * @return IdCardType 指定签署人证件类型，ID_CARD-身份证
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置指定签署人证件类型，ID_CARD-身份证
                     * @param _idCardType 指定签署人证件类型，ID_CARD-身份证
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取指定签署人证件号码，字母大写
                     * @return IdCardNumber 指定签署人证件号码，字母大写
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置指定签署人证件号码，字母大写
                     * @param _idCardNumber 指定签署人证件号码，字母大写
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                private:

                    /**
                     * 指定签署人名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 指定签署人手机号，11位数字
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 指定签署人证件类型，ID_CARD-身份证
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 指定签署人证件号码，字母大写
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERRESTRICTION_H_
