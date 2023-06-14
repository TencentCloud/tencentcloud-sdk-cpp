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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_PACKAGE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_PACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/UseRange.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 曲库包信息
                */
                class Package : public AbstractModel
                {
                public:
                    Package();
                    ~Package() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单id
                     * @return OrderId 订单id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单id
                     * @param _orderId 订单id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取曲库包名称
                     * @return Name 曲库包名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置曲库包名称
                     * @param _name 曲库包名称
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
                     * 获取授权地区-global: 全球  CN: 中国
                     * @return AuthorizedArea 授权地区-global: 全球  CN: 中国
                     * 
                     */
                    std::string GetAuthorizedArea() const;

                    /**
                     * 设置授权地区-global: 全球  CN: 中国
                     * @param _authorizedArea 授权地区-global: 全球  CN: 中国
                     * 
                     */
                    void SetAuthorizedArea(const std::string& _authorizedArea);

                    /**
                     * 判断参数 AuthorizedArea 是否已赋值
                     * @return AuthorizedArea 是否已赋值
                     * 
                     */
                    bool AuthorizedAreaHasBeenSet() const;

                    /**
                     * 获取授权次数
                     * @return AuthorizedLimit 授权次数
                     * 
                     */
                    int64_t GetAuthorizedLimit() const;

                    /**
                     * 设置授权次数
                     * @param _authorizedLimit 授权次数
                     * 
                     */
                    void SetAuthorizedLimit(const int64_t& _authorizedLimit);

                    /**
                     * 判断参数 AuthorizedLimit 是否已赋值
                     * @return AuthorizedLimit 是否已赋值
                     * 
                     */
                    bool AuthorizedLimitHasBeenSet() const;

                    /**
                     * 获取套餐有效期，单位:天
                     * @return TermOfValidity 套餐有效期，单位:天
                     * 
                     */
                    int64_t GetTermOfValidity() const;

                    /**
                     * 设置套餐有效期，单位:天
                     * @param _termOfValidity 套餐有效期，单位:天
                     * 
                     */
                    void SetTermOfValidity(const int64_t& _termOfValidity);

                    /**
                     * 判断参数 TermOfValidity 是否已赋值
                     * @return TermOfValidity 是否已赋值
                     * 
                     */
                    bool TermOfValidityHasBeenSet() const;

                    /**
                     * 获取0:不可商业化；1:可商业化
                     * @return Commercial 0:不可商业化；1:可商业化
                     * 
                     */
                    int64_t GetCommercial() const;

                    /**
                     * 设置0:不可商业化；1:可商业化
                     * @param _commercial 0:不可商业化；1:可商业化
                     * 
                     */
                    void SetCommercial(const int64_t& _commercial);

                    /**
                     * 判断参数 Commercial 是否已赋值
                     * @return Commercial 是否已赋值
                     * 
                     */
                    bool CommercialHasBeenSet() const;

                    /**
                     * 获取套餐价格，单位：元
                     * @return PackagePrice 套餐价格，单位：元
                     * 
                     */
                    double GetPackagePrice() const;

                    /**
                     * 设置套餐价格，单位：元
                     * @param _packagePrice 套餐价格，单位：元
                     * 
                     */
                    void SetPackagePrice(const double& _packagePrice);

                    /**
                     * 判断参数 PackagePrice 是否已赋值
                     * @return PackagePrice 是否已赋值
                     * 
                     */
                    bool PackagePriceHasBeenSet() const;

                    /**
                     * 获取生效开始时间,格式yyyy-MM-dd HH:mm:ss
                     * @return EffectTime 生效开始时间,格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEffectTime() const;

                    /**
                     * 设置生效开始时间,格式yyyy-MM-dd HH:mm:ss
                     * @param _effectTime 生效开始时间,格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetEffectTime(const std::string& _effectTime);

                    /**
                     * 判断参数 EffectTime 是否已赋值
                     * @return EffectTime 是否已赋值
                     * 
                     */
                    bool EffectTimeHasBeenSet() const;

                    /**
                     * 获取生效结束时间,格式yyyy-MM-dd HH:mm:ss
                     * @return ExpireTime 生效结束时间,格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置生效结束时间,格式yyyy-MM-dd HH:mm:ss
                     * @param _expireTime 生效结束时间,格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取剩余授权次数
                     * @return UsedCount 剩余授权次数
                     * 
                     */
                    int64_t GetUsedCount() const;

                    /**
                     * 设置剩余授权次数
                     * @param _usedCount 剩余授权次数
                     * 
                     */
                    void SetUsedCount(const int64_t& _usedCount);

                    /**
                     * 判断参数 UsedCount 是否已赋值
                     * @return UsedCount 是否已赋值
                     * 
                     */
                    bool UsedCountHasBeenSet() const;

                    /**
                     * 获取曲库包用途信息
                     * @return UseRanges 曲库包用途信息
                     * 
                     */
                    std::vector<UseRange> GetUseRanges() const;

                    /**
                     * 设置曲库包用途信息
                     * @param _useRanges 曲库包用途信息
                     * 
                     */
                    void SetUseRanges(const std::vector<UseRange>& _useRanges);

                    /**
                     * 判断参数 UseRanges 是否已赋值
                     * @return UseRanges 是否已赋值
                     * 
                     */
                    bool UseRangesHasBeenSet() const;

                private:

                    /**
                     * 订单id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 曲库包名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 授权地区-global: 全球  CN: 中国
                     */
                    std::string m_authorizedArea;
                    bool m_authorizedAreaHasBeenSet;

                    /**
                     * 授权次数
                     */
                    int64_t m_authorizedLimit;
                    bool m_authorizedLimitHasBeenSet;

                    /**
                     * 套餐有效期，单位:天
                     */
                    int64_t m_termOfValidity;
                    bool m_termOfValidityHasBeenSet;

                    /**
                     * 0:不可商业化；1:可商业化
                     */
                    int64_t m_commercial;
                    bool m_commercialHasBeenSet;

                    /**
                     * 套餐价格，单位：元
                     */
                    double m_packagePrice;
                    bool m_packagePriceHasBeenSet;

                    /**
                     * 生效开始时间,格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_effectTime;
                    bool m_effectTimeHasBeenSet;

                    /**
                     * 生效结束时间,格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 剩余授权次数
                     */
                    int64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * 曲库包用途信息
                     */
                    std::vector<UseRange> m_useRanges;
                    bool m_useRangesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_PACKAGE_H_
