/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_MERCHANT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_MERCHANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Address.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 商家信息
                */
                class Merchant : public AbstractModel
                {
                public:
                    Merchant();
                    ~Merchant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>商家ID</p>
                     * @return MerchantId <p>商家ID</p>
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置<p>商家ID</p>
                     * @param _merchantId <p>商家ID</p>
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取<p>商家名称</p>
                     * @return Name <p>商家名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>商家名称</p>
                     * @param _name <p>商家名称</p>
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
                     * 获取<p>商家的注册时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @return RegisterTime <p>商家的注册时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 设置<p>商家的注册时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @param _registerTime <p>商家的注册时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    void SetRegisterTime(const std::string& _registerTime);

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     * 
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取<p>商家类别代码</p><p>参数格式：符合ISO 18245标准的4位编号</p>
                     * @return Category <p>商家类别代码</p><p>参数格式：符合ISO 18245标准的4位编号</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>商家类别代码</p><p>参数格式：符合ISO 18245标准的4位编号</p>
                     * @param _category <p>商家类别代码</p><p>参数格式：符合ISO 18245标准的4位编号</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>商家电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @return Phone <p>商家电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>商家电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @param _phone <p>商家电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
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
                     * 获取<p>商家邮件</p>
                     * @return Email <p>商家邮件</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>商家邮件</p>
                     * @param _email <p>商家邮件</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>商家店铺网址</p>
                     * @return URL <p>商家店铺网址</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置<p>商家店铺网址</p>
                     * @param _uRL <p>商家店铺网址</p>
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>商家地址</p>
                     * @return Address <p>商家地址</p>
                     * 
                     */
                    Address GetAddress() const;

                    /**
                     * 设置<p>商家地址</p>
                     * @param _address <p>商家地址</p>
                     * 
                     */
                    void SetAddress(const Address& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>商家等级</p>
                     * @return Level <p>商家等级</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>商家等级</p>
                     * @param _level <p>商家等级</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>经营类型</p><p>枚举值：</p><ul><li>person： 个人</li><li>company： 企业</li></ul>
                     * @return BusinessType <p>经营类型</p><p>枚举值：</p><ul><li>person： 个人</li><li>company： 企业</li></ul>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置<p>经营类型</p><p>枚举值：</p><ul><li>person： 个人</li><li>company： 企业</li></ul>
                     * @param _businessType <p>经营类型</p><p>枚举值：</p><ul><li>person： 个人</li><li>company： 企业</li></ul>
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取<p>商家在售商品数量</p>
                     * @return GoodsQuantity <p>商家在售商品数量</p>
                     * 
                     */
                    int64_t GetGoodsQuantity() const;

                    /**
                     * 设置<p>商家在售商品数量</p>
                     * @param _goodsQuantity <p>商家在售商品数量</p>
                     * 
                     */
                    void SetGoodsQuantity(const int64_t& _goodsQuantity);

                    /**
                     * 判断参数 GoodsQuantity 是否已赋值
                     * @return GoodsQuantity 是否已赋值
                     * 
                     */
                    bool GoodsQuantityHasBeenSet() const;

                    /**
                     * 获取<p>商家历史销售数量</p>
                     * @return HistoricSalesQuantity <p>商家历史销售数量</p>
                     * 
                     */
                    int64_t GetHistoricSalesQuantity() const;

                    /**
                     * 设置<p>商家历史销售数量</p>
                     * @param _historicSalesQuantity <p>商家历史销售数量</p>
                     * 
                     */
                    void SetHistoricSalesQuantity(const int64_t& _historicSalesQuantity);

                    /**
                     * 判断参数 HistoricSalesQuantity 是否已赋值
                     * @return HistoricSalesQuantity 是否已赋值
                     * 
                     */
                    bool HistoricSalesQuantityHasBeenSet() const;

                    /**
                     * 获取<p>商家历史销售总额</p>
                     * @return HistoricSalesAmount <p>商家历史销售总额</p>
                     * 
                     */
                    Amount GetHistoricSalesAmount() const;

                    /**
                     * 设置<p>商家历史销售总额</p>
                     * @param _historicSalesAmount <p>商家历史销售总额</p>
                     * 
                     */
                    void SetHistoricSalesAmount(const Amount& _historicSalesAmount);

                    /**
                     * 判断参数 HistoricSalesAmount 是否已赋值
                     * @return HistoricSalesAmount 是否已赋值
                     * 
                     */
                    bool HistoricSalesAmountHasBeenSet() const;

                private:

                    /**
                     * <p>商家ID</p>
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * <p>商家名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>商家的注册时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * <p>商家类别代码</p><p>参数格式：符合ISO 18245标准的4位编号</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>商家电话</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>商家邮件</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>商家店铺网址</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>商家地址</p>
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>商家等级</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>经营类型</p><p>枚举值：</p><ul><li>person： 个人</li><li>company： 企业</li></ul>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>商家在售商品数量</p>
                     */
                    int64_t m_goodsQuantity;
                    bool m_goodsQuantityHasBeenSet;

                    /**
                     * <p>商家历史销售数量</p>
                     */
                    int64_t m_historicSalesQuantity;
                    bool m_historicSalesQuantityHasBeenSet;

                    /**
                     * <p>商家历史销售总额</p>
                     */
                    Amount m_historicSalesAmount;
                    bool m_historicSalesAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_MERCHANT_H_
