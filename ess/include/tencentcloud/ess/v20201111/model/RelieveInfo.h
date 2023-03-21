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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RELIEVEINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RELIEVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 解除协议文档中内容信息，包括但不限于：解除理由、解除后仍然有效的条款-保留条款、原合同事项处理-费用结算、原合同事项处理-其他事项、其他约定等。
                */
                class RelieveInfo : public AbstractModel
                {
                public:
                    RelieveInfo();
                    ~RelieveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解除理由，最大支持200个字
                     * @return Reason 解除理由，最大支持200个字
                     */
                    std::string GetReason() const;

                    /**
                     * 设置解除理由，最大支持200个字
                     * @param Reason 解除理由，最大支持200个字
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取解除后仍然有效的条款，保留条款，最大支持200个字

                     * @return RemainInForceItem 解除后仍然有效的条款，保留条款，最大支持200个字

                     */
                    std::string GetRemainInForceItem() const;

                    /**
                     * 设置解除后仍然有效的条款，保留条款，最大支持200个字

                     * @param RemainInForceItem 解除后仍然有效的条款，保留条款，最大支持200个字

                     */
                    void SetRemainInForceItem(const std::string& _remainInForceItem);

                    /**
                     * 判断参数 RemainInForceItem 是否已赋值
                     * @return RemainInForceItem 是否已赋值
                     */
                    bool RemainInForceItemHasBeenSet() const;

                    /**
                     * 获取原合同事项处理-费用结算，最大支持200个字

                     * @return OriginalExpenseSettlement 原合同事项处理-费用结算，最大支持200个字

                     */
                    std::string GetOriginalExpenseSettlement() const;

                    /**
                     * 设置原合同事项处理-费用结算，最大支持200个字

                     * @param OriginalExpenseSettlement 原合同事项处理-费用结算，最大支持200个字

                     */
                    void SetOriginalExpenseSettlement(const std::string& _originalExpenseSettlement);

                    /**
                     * 判断参数 OriginalExpenseSettlement 是否已赋值
                     * @return OriginalExpenseSettlement 是否已赋值
                     */
                    bool OriginalExpenseSettlementHasBeenSet() const;

                    /**
                     * 获取原合同事项处理-其他事项，最大支持200个字

                     * @return OriginalOtherSettlement 原合同事项处理-其他事项，最大支持200个字

                     */
                    std::string GetOriginalOtherSettlement() const;

                    /**
                     * 设置原合同事项处理-其他事项，最大支持200个字

                     * @param OriginalOtherSettlement 原合同事项处理-其他事项，最大支持200个字

                     */
                    void SetOriginalOtherSettlement(const std::string& _originalOtherSettlement);

                    /**
                     * 判断参数 OriginalOtherSettlement 是否已赋值
                     * @return OriginalOtherSettlement 是否已赋值
                     */
                    bool OriginalOtherSettlementHasBeenSet() const;

                    /**
                     * 获取其他约定，最大支持200个字

                     * @return OtherDeals 其他约定，最大支持200个字

                     */
                    std::string GetOtherDeals() const;

                    /**
                     * 设置其他约定，最大支持200个字

                     * @param OtherDeals 其他约定，最大支持200个字

                     */
                    void SetOtherDeals(const std::string& _otherDeals);

                    /**
                     * 判断参数 OtherDeals 是否已赋值
                     * @return OtherDeals 是否已赋值
                     */
                    bool OtherDealsHasBeenSet() const;

                private:

                    /**
                     * 解除理由，最大支持200个字
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 解除后仍然有效的条款，保留条款，最大支持200个字

                     */
                    std::string m_remainInForceItem;
                    bool m_remainInForceItemHasBeenSet;

                    /**
                     * 原合同事项处理-费用结算，最大支持200个字

                     */
                    std::string m_originalExpenseSettlement;
                    bool m_originalExpenseSettlementHasBeenSet;

                    /**
                     * 原合同事项处理-其他事项，最大支持200个字

                     */
                    std::string m_originalOtherSettlement;
                    bool m_originalOtherSettlementHasBeenSet;

                    /**
                     * 其他约定，最大支持200个字

                     */
                    std::string m_otherDeals;
                    bool m_otherDealsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RELIEVEINFO_H_
