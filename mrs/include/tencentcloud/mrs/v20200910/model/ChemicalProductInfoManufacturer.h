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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFOMANUFACTURER_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFOMANUFACTURER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 生产企业名称和地址
                */
                class ChemicalProductInfoManufacturer : public AbstractModel
                {
                public:
                    ChemicalProductInfoManufacturer();
                    ~ChemicalProductInfoManufacturer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本
                     * @return Text 文本
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本
                     * @param _text 文本
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return Name 企业名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置企业名称
                     * @param _name 企业名称
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
                     * 获取生产地址
                     * @return Address 生产地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置生产地址
                     * @param _address 生产地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取邮政编码
                     * @return PostalCode 邮政编码
                     * 
                     */
                    std::string GetPostalCode() const;

                    /**
                     * 设置邮政编码
                     * @param _postalCode 邮政编码
                     * 
                     */
                    void SetPostalCode(const std::string& _postalCode);

                    /**
                     * 判断参数 PostalCode 是否已赋值
                     * @return PostalCode 是否已赋值
                     * 
                     */
                    bool PostalCodeHasBeenSet() const;

                    /**
                     * 获取电话，包含区号
                     * @return Phone 电话，包含区号
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置电话，包含区号
                     * @param _phone 电话，包含区号
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取传真，包含区号
                     * @return Fax 传真，包含区号
                     * 
                     */
                    std::string GetFax() const;

                    /**
                     * 设置传真，包含区号
                     * @param _fax 传真，包含区号
                     * 
                     */
                    void SetFax(const std::string& _fax);

                    /**
                     * 判断参数 Fax 是否已赋值
                     * @return Fax 是否已赋值
                     * 
                     */
                    bool FaxHasBeenSet() const;

                    /**
                     * 获取网址，如无则不填写
                     * @return Website 网址，如无则不填写
                     * 
                     */
                    std::string GetWebsite() const;

                    /**
                     * 设置网址，如无则不填写
                     * @param _website 网址，如无则不填写
                     * 
                     */
                    void SetWebsite(const std::string& _website);

                    /**
                     * 判断参数 Website 是否已赋值
                     * @return Website 是否已赋值
                     * 
                     */
                    bool WebsiteHasBeenSet() const;

                private:

                    /**
                     * 文本
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 生产地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 邮政编码
                     */
                    std::string m_postalCode;
                    bool m_postalCodeHasBeenSet;

                    /**
                     * 电话，包含区号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 传真，包含区号
                     */
                    std::string m_fax;
                    bool m_faxHasBeenSet;

                    /**
                     * 网址，如无则不填写
                     */
                    std::string m_website;
                    bool m_websiteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFOMANUFACTURER_H_
