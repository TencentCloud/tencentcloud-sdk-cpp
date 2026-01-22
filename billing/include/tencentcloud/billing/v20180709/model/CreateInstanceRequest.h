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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * @return ClientToken ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * @param _clientToken ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取产品一层code
                     * @return ProductCode 产品一层code
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品一层code
                     * @param _productCode 产品一层code
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取产品二层code
                     * @return SubProductCode 产品二层code
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置产品二层code
                     * @param _subProductCode 产品二层code
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取地域code
                     * @return RegionCode 地域code
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域code
                     * @param _regionCode 地域code
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取可用区code
                     * @return ZoneCode 可用区code
                     * 
                     */
                    std::string GetZoneCode() const;

                    /**
                     * 设置可用区code
                     * @param _zoneCode 可用区code
                     * 
                     */
                    void SetZoneCode(const std::string& _zoneCode);

                    /**
                     * 判断参数 ZoneCode 是否已赋值
                     * @return ZoneCode 是否已赋值
                     * 
                     */
                    bool ZoneCodeHasBeenSet() const;

                    /**
                     * 获取付费类型，取值：  PrePay：预付费
                     * @return PayMode 付费类型，取值：  PrePay：预付费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费类型，取值：  PrePay：预付费
                     * @param _payMode 付费类型，取值：  PrePay：预付费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取商品详情信息
                     * @return Parameter 商品详情信息
                     * 
                     */
                    std::string GetParameter() const;

                    /**
                     * 设置商品详情信息
                     * @param _parameter 商品详情信息
                     * 
                     */
                    void SetParameter(const std::string& _parameter);

                    /**
                     * 判断参数 Parameter 是否已赋值
                     * @return Parameter 是否已赋值
                     * 
                     */
                    bool ParameterHasBeenSet() const;

                    /**
                     * 获取商品数量，默认取值1
                     * @return Quantity 商品数量，默认取值1
                     * 
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置商品数量，默认取值1
                     * @param _quantity 商品数量，默认取值1
                     * 
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取项目id，默认取0
                     * @return ProjectId 项目id，默认取0
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id，默认取0
                     * @param _projectId 项目id，默认取0
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取新购时长，取值上限：36，默认取值1
                     * @return Period 新购时长，取值上限：36，默认取值1
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置新购时长，取值上限：36，默认取值1
                     * @param _period 新购时长，取值上限：36，默认取值1
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取新购时长单位，取值：m：按月购买，y：按年购买，默认取值m
                     * @return PeriodUnit 新购时长单位，取值：m：按月购买，y：按年购买，默认取值m
                     * 
                     */
                    std::string GetPeriodUnit() const;

                    /**
                     * 设置新购时长单位，取值：m：按月购买，y：按年购买，默认取值m
                     * @param _periodUnit 新购时长单位，取值：m：按月购买，y：按年购买，默认取值m
                     * 
                     */
                    void SetPeriodUnit(const std::string& _periodUnit);

                    /**
                     * 判断参数 PeriodUnit 是否已赋值
                     * @return PeriodUnit 是否已赋值
                     * 
                     */
                    bool PeriodUnitHasBeenSet() const;

                    /**
                     * 获取自动续费标识，取值：NOTIFY_AND_MANUAL_RENEW：手动续费，NOTIFY_AND_AUTO_RENEW：自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续，默认取值NOTIFY_AND_MANUAL_RENEW
                     * @return RenewFlag 自动续费标识，取值：NOTIFY_AND_MANUAL_RENEW：手动续费，NOTIFY_AND_AUTO_RENEW：自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续，默认取值NOTIFY_AND_MANUAL_RENEW
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识，取值：NOTIFY_AND_MANUAL_RENEW：手动续费，NOTIFY_AND_AUTO_RENEW：自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续，默认取值NOTIFY_AND_MANUAL_RENEW
                     * @param _renewFlag 自动续费标识，取值：NOTIFY_AND_MANUAL_RENEW：手动续费，NOTIFY_AND_AUTO_RENEW：自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续，默认取值NOTIFY_AND_MANUAL_RENEW
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * ClientToken是一个由客户端生成的唯一的、区分大小写、不超过64个ASCII字符的字符串。例如，ClientToken=123e4567-e89b-12d3-a456-42665544****。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 产品一层code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 产品二层code
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 地域code
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 可用区code
                     */
                    std::string m_zoneCode;
                    bool m_zoneCodeHasBeenSet;

                    /**
                     * 付费类型，取值：  PrePay：预付费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 商品详情信息
                     */
                    std::string m_parameter;
                    bool m_parameterHasBeenSet;

                    /**
                     * 商品数量，默认取值1
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 项目id，默认取0
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 新购时长，取值上限：36，默认取值1
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 新购时长单位，取值：m：按月购买，y：按年购买，默认取值m
                     */
                    std::string m_periodUnit;
                    bool m_periodUnitHasBeenSet;

                    /**
                     * 自动续费标识，取值：NOTIFY_AND_MANUAL_RENEW：手动续费，NOTIFY_AND_AUTO_RENEW：自动续费，DISABLE_NOTIFY_AND_MANUAL_RENEW：到期不续，默认取值NOTIFY_AND_MANUAL_RENEW
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEINSTANCEREQUEST_H_
