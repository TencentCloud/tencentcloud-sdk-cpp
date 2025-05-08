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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICEDETAIL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 公网IP询价出参
                */
                class InternetPriceDetail : public AbstractModel
                {
                public:
                    InternetPriceDetail();
                    ~InternetPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付费单价，单位：元，仅后付费价格查询返回。
                     * @return UnitPrice 付费单价，单位：元，仅后付费价格查询返回。
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置付费单价，单位：元，仅后付费价格查询返回。
                     * @param _unitPrice 付费单价，单位：元，仅后付费价格查询返回。
                     * 
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取折扣后的价格，单位：元。
                     * @return DiscountPrice 折扣后的价格，单位：元。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置折扣后的价格，单位：元。
                     * @param _discountPrice 折扣后的价格，单位：元。
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取计价单元，可取值范围：<ul> <li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）。</li><li> MONTH :表示计价单元是按月来计算。当前涉及该计价单元的场景有：包月按带宽预付费（BANDWIDTH_PREPAID_BY_MONTH）。</li></ul>
                     * @return ChargeUnit 计价单元，可取值范围：<ul> <li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）。</li><li> MONTH :表示计价单元是按月来计算。当前涉及该计价单元的场景有：包月按带宽预付费（BANDWIDTH_PREPAID_BY_MONTH）。</li></ul>
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置计价单元，可取值范围：<ul> <li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）。</li><li> MONTH :表示计价单元是按月来计算。当前涉及该计价单元的场景有：包月按带宽预付费（BANDWIDTH_PREPAID_BY_MONTH）。</li></ul>
                     * @param _chargeUnit 计价单元，可取值范围：<ul> <li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）。</li><li> MONTH :表示计价单元是按月来计算。当前涉及该计价单元的场景有：包月按带宽预付费（BANDWIDTH_PREPAID_BY_MONTH）。</li></ul>
                     * 
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     * 
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取原价，单位：元，仅预付费价格查询返回。
                     * @return OriginalPrice 原价，单位：元，仅预付费价格查询返回。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置原价，单位：元，仅预付费价格查询返回。
                     * @param _originalPrice 原价，单位：元，仅预付费价格查询返回。
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                private:

                    /**
                     * 付费单价，单位：元，仅后付费价格查询返回。
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 折扣后的价格，单位：元。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 计价单元，可取值范围：<ul> <li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）。</li><li> MONTH :表示计价单元是按月来计算。当前涉及该计价单元的场景有：包月按带宽预付费（BANDWIDTH_PREPAID_BY_MONTH）。</li></ul>
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * 原价，单位：元，仅预付费价格查询返回。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICEDETAIL_H_
