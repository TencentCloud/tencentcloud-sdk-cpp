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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEEXTERNALACCOUNTBOOKRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEEXTERNALACCOUNTBOOKRESULT_H_

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
                * 创建第三方电子记账本返回值
                */
                class CreateExternalAccountBookResult : public AbstractModel
                {
                public:
                    CreateExternalAccountBookResult();
                    ~CreateExternalAccountBookResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处理状态。
__SUCCESS__: 成功
__FAILED__: 失败
__PROCESSING__: 进行中。
                     * @return DealStatus 处理状态。
__SUCCESS__: 成功
__FAILED__: 失败
__PROCESSING__: 进行中。
                     * 
                     */
                    std::string GetDealStatus() const;

                    /**
                     * 设置处理状态。
__SUCCESS__: 成功
__FAILED__: 失败
__PROCESSING__: 进行中。
                     * @param _dealStatus 处理状态。
__SUCCESS__: 成功
__FAILED__: 失败
__PROCESSING__: 进行中。
                     * 
                     */
                    void SetDealStatus(const std::string& _dealStatus);

                    /**
                     * 判断参数 DealStatus 是否已赋值
                     * @return DealStatus 是否已赋值
                     * 
                     */
                    bool DealStatusHasBeenSet() const;

                    /**
                     * 获取处理返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealMessage 处理返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDealMessage() const;

                    /**
                     * 设置处理返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dealMessage 处理返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDealMessage(const std::string& _dealMessage);

                    /**
                     * 判断参数 DealMessage 是否已赋值
                     * @return DealMessage 是否已赋值
                     * 
                     */
                    bool DealMessageHasBeenSet() const;

                    /**
                     * 获取渠道电子记账本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelAccountBookId 渠道电子记账本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelAccountBookId() const;

                    /**
                     * 设置渠道电子记账本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelAccountBookId 渠道电子记账本ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 处理状态。
__SUCCESS__: 成功
__FAILED__: 失败
__PROCESSING__: 进行中。
                     */
                    std::string m_dealStatus;
                    bool m_dealStatusHasBeenSet;

                    /**
                     * 处理返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealMessage;
                    bool m_dealMessageHasBeenSet;

                    /**
                     * 渠道电子记账本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelAccountBookId;
                    bool m_channelAccountBookIdHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEEXTERNALACCOUNTBOOKRESULT_H_
