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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ANCHOREXTENDINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ANCHOREXTENDINFO_H_

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
                * 主播扩展信息
                */
                class AnchorExtendInfo : public AbstractModel
                {
                public:
                    AnchorExtendInfo();
                    ~AnchorExtendInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩展信息类型
__id_card_no__:身份证号码
__id_card_name__:身份证姓名
__id_card_front__:身份证图片正面
__id_card_back__:身份证图片反面
__tax_type__:完税类型:0-自然人,1-个体工商户
__channel_account__:渠道账号(_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密)
                     * @return Type 扩展信息类型
__id_card_no__:身份证号码
__id_card_name__:身份证姓名
__id_card_front__:身份证图片正面
__id_card_back__:身份证图片反面
__tax_type__:完税类型:0-自然人,1-个体工商户
__channel_account__:渠道账号(_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置扩展信息类型
__id_card_no__:身份证号码
__id_card_name__:身份证姓名
__id_card_front__:身份证图片正面
__id_card_back__:身份证图片反面
__tax_type__:完税类型:0-自然人,1-个体工商户
__channel_account__:渠道账号(_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密)
                     * @param _type 扩展信息类型
__id_card_no__:身份证号码
__id_card_name__:身份证姓名
__id_card_front__:身份证图片正面
__id_card_back__:身份证图片反面
__tax_type__:完税类型:0-自然人,1-个体工商户
__channel_account__:渠道账号(_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密)
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取扩展信息
                     * @return Value 扩展信息
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置扩展信息
                     * @param _value 扩展信息
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
                     * 扩展信息类型
__id_card_no__:身份证号码
__id_card_name__:身份证姓名
__id_card_front__:身份证图片正面
__id_card_back__:身份证图片反面
__tax_type__:完税类型:0-自然人,1-个体工商户
__channel_account__:渠道账号(_敏感信息_ 使用 __AES128-CBC-PKCS#7__ 加密)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 扩展信息
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ANCHOREXTENDINFO_H_
