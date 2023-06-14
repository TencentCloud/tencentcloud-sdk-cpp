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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_AGENTTAXPAYMENT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_AGENTTAXPAYMENT_H_

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
                * 代理商完税证明
                */
                class AgentTaxPayment : public AbstractModel
                {
                public:
                    AgentTaxPayment();
                    ~AgentTaxPayment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主播银行账号
                     * @return AnchorId 主播银行账号
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播银行账号
                     * @param _anchorId 主播银行账号
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取主播姓名
                     * @return AnchorName 主播姓名
                     * 
                     */
                    std::string GetAnchorName() const;

                    /**
                     * 设置主播姓名
                     * @param _anchorName 主播姓名
                     * 
                     */
                    void SetAnchorName(const std::string& _anchorName);

                    /**
                     * 判断参数 AnchorName 是否已赋值
                     * @return AnchorName 是否已赋值
                     * 
                     */
                    bool AnchorNameHasBeenSet() const;

                    /**
                     * 获取主播身份证
                     * @return AnchorIDCard 主播身份证
                     * 
                     */
                    std::string GetAnchorIDCard() const;

                    /**
                     * 设置主播身份证
                     * @param _anchorIDCard 主播身份证
                     * 
                     */
                    void SetAnchorIDCard(const std::string& _anchorIDCard);

                    /**
                     * 判断参数 AnchorIDCard 是否已赋值
                     * @return AnchorIDCard 是否已赋值
                     * 
                     */
                    bool AnchorIDCardHasBeenSet() const;

                    /**
                     * 获取纳税的开始时间，格式yyyy-MM-dd
                     * @return StartTime 纳税的开始时间，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置纳税的开始时间，格式yyyy-MM-dd
                     * @param _startTime 纳税的开始时间，格式yyyy-MM-dd
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取纳税的结束时间，格式yyyy-MM-dd
                     * @return EndTime 纳税的结束时间，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置纳税的结束时间，格式yyyy-MM-dd
                     * @param _endTime 纳税的结束时间，格式yyyy-MM-dd
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取流水金额。以“分”为单位
                     * @return Amount 流水金额。以“分”为单位
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置流水金额。以“分”为单位
                     * @param _amount 流水金额。以“分”为单位
                     * 
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取应缴税款。以“分”为单位
                     * @return Tax 应缴税款。以“分”为单位
                     * 
                     */
                    int64_t GetTax() const;

                    /**
                     * 设置应缴税款。以“分”为单位
                     * @param _tax 应缴税款。以“分”为单位
                     * 
                     */
                    void SetTax(const int64_t& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                private:

                    /**
                     * 主播银行账号
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 主播姓名
                     */
                    std::string m_anchorName;
                    bool m_anchorNameHasBeenSet;

                    /**
                     * 主播身份证
                     */
                    std::string m_anchorIDCard;
                    bool m_anchorIDCardHasBeenSet;

                    /**
                     * 纳税的开始时间，格式yyyy-MM-dd
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 纳税的结束时间，格式yyyy-MM-dd
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 流水金额。以“分”为单位
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 应缴税款。以“分”为单位
                     */
                    int64_t m_tax;
                    bool m_taxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_AGENTTAXPAYMENT_H_
