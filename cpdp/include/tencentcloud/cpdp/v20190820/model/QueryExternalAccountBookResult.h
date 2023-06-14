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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXTERNALACCOUNTBOOKRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXTERNALACCOUNTBOOKRESULT_H_

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
                * 查询第三方电子记账本余额返回值
                */
                class QueryExternalAccountBookResult : public AbstractModel
                {
                public:
                    QueryExternalAccountBookResult();
                    ~QueryExternalAccountBookResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道记账本ID
                     * @return ChannelAccountBookId 渠道记账本ID
                     * 
                     */
                    std::string GetChannelAccountBookId() const;

                    /**
                     * 设置渠道记账本ID
                     * @param _channelAccountBookId 渠道记账本ID
                     * 
                     */
                    void SetChannelAccountBookId(const std::string& _channelAccountBookId);

                    /**
                     * 判断参数 ChannelAccountBookId 是否已赋值
                     * @return ChannelAccountBookId 是否已赋值
                     * 
                     */
                    bool ChannelAccountBookIdHasBeenSet() const;

                    /**
                     * 获取可用余额。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableBalance 可用余额。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvailableBalance() const;

                    /**
                     * 设置可用余额。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableBalance 可用余额。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableBalance(const std::string& _availableBalance);

                    /**
                     * 判断参数 AvailableBalance 是否已赋值
                     * @return AvailableBalance 是否已赋值
                     * 
                     */
                    bool AvailableBalanceHasBeenSet() const;

                    /**
                     * 获取电子记账本对外收款的账户信息。为JSON格式字符串（成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectMoneyAccountInfo 电子记账本对外收款的账户信息。为JSON格式字符串（成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectMoneyAccountInfo() const;

                    /**
                     * 设置电子记账本对外收款的账户信息。为JSON格式字符串（成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectMoneyAccountInfo 电子记账本对外收款的账户信息。为JSON格式字符串（成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectMoneyAccountInfo(const std::string& _collectMoneyAccountInfo);

                    /**
                     * 判断参数 CollectMoneyAccountInfo 是否已赋值
                     * @return CollectMoneyAccountInfo 是否已赋值
                     * 
                     */
                    bool CollectMoneyAccountInfoHasBeenSet() const;

                private:

                    /**
                     * 渠道记账本ID
                     */
                    std::string m_channelAccountBookId;
                    bool m_channelAccountBookIdHasBeenSet;

                    /**
                     * 可用余额。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_availableBalance;
                    bool m_availableBalanceHasBeenSet;

                    /**
                     * 电子记账本对外收款的账户信息。为JSON格式字符串（成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectMoneyAccountInfo;
                    bool m_collectMoneyAccountInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXTERNALACCOUNTBOOKRESULT_H_
