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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSETTLEMENTRULESINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSETTLEMENTRULESINFO_H_

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
                * 云企付-结算规则信息
                */
                class OpenBankSettlementRulesInfo : public AbstractModel
                {
                public:
                    OpenBankSettlementRulesInfo();
                    ~OpenBankSettlementRulesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ONCE：仅单次解冻（默认）
MULTI：多次解冻
                     * @return UnfreezeRule ONCE：仅单次解冻（默认）
MULTI：多次解冻
                     * 
                     */
                    std::string GetUnfreezeRule() const;

                    /**
                     * 设置ONCE：仅单次解冻（默认）
MULTI：多次解冻
                     * @param _unfreezeRule ONCE：仅单次解冻（默认）
MULTI：多次解冻
                     * 
                     */
                    void SetUnfreezeRule(const std::string& _unfreezeRule);

                    /**
                     * 判断参数 UnfreezeRule 是否已赋值
                     * @return UnfreezeRule 是否已赋值
                     * 
                     */
                    bool UnfreezeRuleHasBeenSet() const;

                    /**
                     * 获取ONCE：仅单次退款（默认）
MULTI：多次退款
                     * @return RefundRule ONCE：仅单次退款（默认）
MULTI：多次退款
                     * 
                     */
                    std::string GetRefundRule() const;

                    /**
                     * 设置ONCE：仅单次退款（默认）
MULTI：多次退款
                     * @param _refundRule ONCE：仅单次退款（默认）
MULTI：多次退款
                     * 
                     */
                    void SetRefundRule(const std::string& _refundRule);

                    /**
                     * 判断参数 RefundRule 是否已赋值
                     * @return RefundRule 是否已赋值
                     * 
                     */
                    bool RefundRuleHasBeenSet() const;

                private:

                    /**
                     * ONCE：仅单次解冻（默认）
MULTI：多次解冻
                     */
                    std::string m_unfreezeRule;
                    bool m_unfreezeRuleHasBeenSet;

                    /**
                     * ONCE：仅单次退款（默认）
MULTI：多次退款
                     */
                    std::string m_refundRule;
                    bool m_refundRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKSETTLEMENTRULESINFO_H_
