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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 客户所属的门店信息
                */
                class ShopInfo : public AbstractModel
                {
                public:
                    ShopInfo();
                    ~ShopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公司ID
                     * @return CompanyId 公司ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置公司ID
                     * @param _companyId 公司ID
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取门店ID
                     * @return ShopId 门店ID
                     * 
                     */
                    uint64_t GetShopId() const;

                    /**
                     * 设置门店ID
                     * @param _shopId 门店ID
                     * 
                     */
                    void SetShopId(const uint64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取门店名称
                     * @return ShopName 门店名称
                     * 
                     */
                    std::string GetShopName() const;

                    /**
                     * 设置门店名称
                     * @param _shopName 门店名称
                     * 
                     */
                    void SetShopName(const std::string& _shopName);

                    /**
                     * 判断参数 ShopName 是否已赋值
                     * @return ShopName 是否已赋值
                     * 
                     */
                    bool ShopNameHasBeenSet() const;

                    /**
                     * 获取客户门店编码
                     * @return ShopCode 客户门店编码
                     * 
                     */
                    std::string GetShopCode() const;

                    /**
                     * 设置客户门店编码
                     * @param _shopCode 客户门店编码
                     * 
                     */
                    void SetShopCode(const std::string& _shopCode);

                    /**
                     * 判断参数 ShopCode 是否已赋值
                     * @return ShopCode 是否已赋值
                     * 
                     */
                    bool ShopCodeHasBeenSet() const;

                    /**
                     * 获取省
                     * @return Province 省
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省
                     * @param _province 省
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取市
                     * @return City 市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置市
                     * @param _city 市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return CompanyName 公司名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置公司名称
                     * @param _companyName 公司名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                private:

                    /**
                     * 公司ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 门店ID
                     */
                    uint64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 门店名称
                     */
                    std::string m_shopName;
                    bool m_shopNameHasBeenSet;

                    /**
                     * 客户门店编码
                     */
                    std::string m_shopCode;
                    bool m_shopCodeHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPINFO_H_
