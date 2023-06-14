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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSTOREINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSTOREINFO_H_

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
                * 云企付-门店信息
                */
                class OpenBankStoreInfo : public AbstractModel
                {
                public:
                    OpenBankStoreInfo();
                    ~OpenBankStoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取门店名称
                     * @return Name 门店名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置门店名称
                     * @param _name 门店名称
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
                     * 获取地区编码
                     * @return AreaCode 地区编码
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置地区编码
                     * @param _areaCode 地区编码
                     * 
                     */
                    void SetAreaCode(const std::string& _areaCode);

                    /**
                     * 判断参数 AreaCode 是否已赋值
                     * @return AreaCode 是否已赋值
                     * 
                     */
                    bool AreaCodeHasBeenSet() const;

                    /**
                     * 获取详细地址
                     * @return Address 详细地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置详细地址
                     * @param _address 详细地址
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
                     * 获取门店编号
                     * @return Id 门店编号
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置门店编号
                     * @param _id 门店编号
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 门店名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地区编码
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * 详细地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 门店编号
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSTOREINFO_H_
