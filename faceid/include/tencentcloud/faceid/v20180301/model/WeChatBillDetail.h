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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_WECHATBILLDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_WECHATBILLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/ChargeDetail.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 账单详情
                */
                class WeChatBillDetail : public AbstractModel
                {
                public:
                    WeChatBillDetail();
                    ~WeChatBillDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取token
                     * @return BizToken token
                     * 
                     */
                    std::string GetBizToken() const;

                    /**
                     * 设置token
                     * @param _bizToken token
                     * 
                     */
                    void SetBizToken(const std::string& _bizToken);

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     * 
                     */
                    bool BizTokenHasBeenSet() const;

                    /**
                     * 获取本token收费次数
                     * @return ChargeCount 本token收费次数
                     * 
                     */
                    uint64_t GetChargeCount() const;

                    /**
                     * 设置本token收费次数
                     * @param _chargeCount 本token收费次数
                     * 
                     */
                    void SetChargeCount(const uint64_t& _chargeCount);

                    /**
                     * 判断参数 ChargeCount 是否已赋值
                     * @return ChargeCount 是否已赋值
                     * 
                     */
                    bool ChargeCountHasBeenSet() const;

                    /**
                     * 获取本token计费详情
                     * @return ChargeDetails 本token计费详情
                     * 
                     */
                    std::vector<ChargeDetail> GetChargeDetails() const;

                    /**
                     * 设置本token计费详情
                     * @param _chargeDetails 本token计费详情
                     * 
                     */
                    void SetChargeDetails(const std::vector<ChargeDetail>& _chargeDetails);

                    /**
                     * 判断参数 ChargeDetails 是否已赋值
                     * @return ChargeDetails 是否已赋值
                     * 
                     */
                    bool ChargeDetailsHasBeenSet() const;

                    /**
                     * 获取业务RuleId
                     * @return RuleId 业务RuleId
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置业务RuleId
                     * @param _ruleId 业务RuleId
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * token
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                    /**
                     * 本token收费次数
                     */
                    uint64_t m_chargeCount;
                    bool m_chargeCountHasBeenSet;

                    /**
                     * 本token计费详情
                     */
                    std::vector<ChargeDetail> m_chargeDetails;
                    bool m_chargeDetailsHasBeenSet;

                    /**
                     * 业务RuleId
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_WECHATBILLDETAIL_H_
