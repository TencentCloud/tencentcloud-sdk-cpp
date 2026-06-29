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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_COMPLEXBILLINGITEM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_COMPLEXBILLINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/BillingAttribute.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ComplexBillingItem
                */
                class ComplexBillingItem : public AbstractModel
                {
                public:
                    ComplexBillingItem();
                    ~ComplexBillingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>复合计费维度信息</p>
                     * @return BillingAttributeList <p>复合计费维度信息</p>
                     * 
                     */
                    std::vector<BillingAttribute> GetBillingAttributeList() const;

                    /**
                     * 设置<p>复合计费维度信息</p>
                     * @param _billingAttributeList <p>复合计费维度信息</p>
                     * 
                     */
                    void SetBillingAttributeList(const std::vector<BillingAttribute>& _billingAttributeList);

                    /**
                     * 判断参数 BillingAttributeList 是否已赋值
                     * @return BillingAttributeList 是否已赋值
                     * 
                     */
                    bool BillingAttributeListHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>按token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>按页数</td></tr><tr><td>TIMES</td><td>3</td><td>按次数</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>按千次数</td></tr><tr><td>SECOND</td><td>5</td><td>按时长</td></tr><tr><td>CHARACTER</td><td>6</td><td>按字符数</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>按千字符数</td></tr><tr><td>SHEET</td><td>8</td><td>按张</td></tr><tr><td>NUMBER</td><td>9</td><td>按个数</td></tr></tbody></table>
                     * @return BillingUnit <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>按token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>按页数</td></tr><tr><td>TIMES</td><td>3</td><td>按次数</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>按千次数</td></tr><tr><td>SECOND</td><td>5</td><td>按时长</td></tr><tr><td>CHARACTER</td><td>6</td><td>按字符数</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>按千字符数</td></tr><tr><td>SHEET</td><td>8</td><td>按张</td></tr><tr><td>NUMBER</td><td>9</td><td>按个数</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetBillingUnit() const;

                    /**
                     * 设置<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>按token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>按页数</td></tr><tr><td>TIMES</td><td>3</td><td>按次数</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>按千次数</td></tr><tr><td>SECOND</td><td>5</td><td>按时长</td></tr><tr><td>CHARACTER</td><td>6</td><td>按字符数</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>按千字符数</td></tr><tr><td>SHEET</td><td>8</td><td>按张</td></tr><tr><td>NUMBER</td><td>9</td><td>按个数</td></tr></tbody></table>
                     * @param _billingUnit <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>按token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>按页数</td></tr><tr><td>TIMES</td><td>3</td><td>按次数</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>按千次数</td></tr><tr><td>SECOND</td><td>5</td><td>按时长</td></tr><tr><td>CHARACTER</td><td>6</td><td>按字符数</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>按千字符数</td></tr><tr><td>SHEET</td><td>8</td><td>按张</td></tr><tr><td>NUMBER</td><td>9</td><td>按个数</td></tr></tbody></table>
                     * 
                     */
                    void SetBillingUnit(const int64_t& _billingUnit);

                    /**
                     * 判断参数 BillingUnit 是否已赋值
                     * @return BillingUnit 是否已赋值
                     * 
                     */
                    bool BillingUnitHasBeenSet() const;

                    /**
                     * 获取<p>现金价格</p><p>单位：元</p>
                     * @return CashPrice <p>现金价格</p><p>单位：元</p>
                     * 
                     */
                    double GetCashPrice() const;

                    /**
                     * 设置<p>现金价格</p><p>单位：元</p>
                     * @param _cashPrice <p>现金价格</p><p>单位：元</p>
                     * 
                     */
                    void SetCashPrice(const double& _cashPrice);

                    /**
                     * 判断参数 CashPrice 是否已赋值
                     * @return CashPrice 是否已赋值
                     * 
                     */
                    bool CashPriceHasBeenSet() const;

                    /**
                     * 获取<p>pu价格</p><p>单位：pu</p>
                     * @return PuPrice <p>pu价格</p><p>单位：pu</p>
                     * 
                     */
                    double GetPuPrice() const;

                    /**
                     * 设置<p>pu价格</p><p>单位：pu</p>
                     * @param _puPrice <p>pu价格</p><p>单位：pu</p>
                     * 
                     */
                    void SetPuPrice(const double& _puPrice);

                    /**
                     * 判断参数 PuPrice 是否已赋值
                     * @return PuPrice 是否已赋值
                     * 
                     */
                    bool PuPriceHasBeenSet() const;

                private:

                    /**
                     * <p>复合计费维度信息</p>
                     */
                    std::vector<BillingAttribute> m_billingAttributeList;
                    bool m_billingAttributeListHasBeenSet;

                    /**
                     * <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>UNKNOW</td><td>0</td><td></td></tr><tr><td>TOKEN</td><td>1</td><td>按token</td></tr><tr><td>PAGE_COUNT</td><td>2</td><td>按页数</td></tr><tr><td>TIMES</td><td>3</td><td>按次数</td></tr><tr><td>TIMES_THOUSAND</td><td>4</td><td>按千次数</td></tr><tr><td>SECOND</td><td>5</td><td>按时长</td></tr><tr><td>CHARACTER</td><td>6</td><td>按字符数</td></tr><tr><td>CHARACTER_THOUSAND</td><td>7</td><td>按千字符数</td></tr><tr><td>SHEET</td><td>8</td><td>按张</td></tr><tr><td>NUMBER</td><td>9</td><td>按个数</td></tr></tbody></table>
                     */
                    int64_t m_billingUnit;
                    bool m_billingUnitHasBeenSet;

                    /**
                     * <p>现金价格</p><p>单位：元</p>
                     */
                    double m_cashPrice;
                    bool m_cashPriceHasBeenSet;

                    /**
                     * <p>pu价格</p><p>单位：pu</p>
                     */
                    double m_puPrice;
                    bool m_puPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_COMPLEXBILLINGITEM_H_
