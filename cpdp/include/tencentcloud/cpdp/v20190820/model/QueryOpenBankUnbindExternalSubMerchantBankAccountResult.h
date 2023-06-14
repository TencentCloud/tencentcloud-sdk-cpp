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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKUNBINDEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKUNBINDEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_

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
                * 第三方子商户银行卡解绑结果查询返回结果
                */
                class QueryOpenBankUnbindExternalSubMerchantBankAccountResult : public AbstractModel
                {
                public:
                    QueryOpenBankUnbindExternalSubMerchantBankAccountResult();
                    ~QueryOpenBankUnbindExternalSubMerchantBankAccountResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道申请编号。
                     * @return ChannelApplyId 渠道申请编号。
                     * 
                     */
                    std::string GetChannelApplyId() const;

                    /**
                     * 设置渠道申请编号。
                     * @param _channelApplyId 渠道申请编号。
                     * 
                     */
                    void SetChannelApplyId(const std::string& _channelApplyId);

                    /**
                     * 判断参数 ChannelApplyId 是否已赋值
                     * @return ChannelApplyId 是否已赋值
                     * 
                     */
                    bool ChannelApplyIdHasBeenSet() const;

                    /**
                     * 获取解绑状态。
__SUCCESS__: 解绑成功
__FAILED__: 解绑失败
__PROCESSING__: 解绑中
                     * @return UnbindStatus 解绑状态。
__SUCCESS__: 解绑成功
__FAILED__: 解绑失败
__PROCESSING__: 解绑中
                     * 
                     */
                    std::string GetUnbindStatus() const;

                    /**
                     * 设置解绑状态。
__SUCCESS__: 解绑成功
__FAILED__: 解绑失败
__PROCESSING__: 解绑中
                     * @param _unbindStatus 解绑状态。
__SUCCESS__: 解绑成功
__FAILED__: 解绑失败
__PROCESSING__: 解绑中
                     * 
                     */
                    void SetUnbindStatus(const std::string& _unbindStatus);

                    /**
                     * 判断参数 UnbindStatus 是否已赋值
                     * @return UnbindStatus 是否已赋值
                     * 
                     */
                    bool UnbindStatusHasBeenSet() const;

                    /**
                     * 获取解绑返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnbindMessage 解绑返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnbindMessage() const;

                    /**
                     * 设置解绑返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unbindMessage 解绑返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnbindMessage(const std::string& _unbindMessage);

                    /**
                     * 判断参数 UnbindMessage 是否已赋值
                     * @return UnbindMessage 是否已赋值
                     * 
                     */
                    bool UnbindMessageHasBeenSet() const;

                private:

                    /**
                     * 渠道申请编号。
                     */
                    std::string m_channelApplyId;
                    bool m_channelApplyIdHasBeenSet;

                    /**
                     * 解绑状态。
__SUCCESS__: 解绑成功
__FAILED__: 解绑失败
__PROCESSING__: 解绑中
                     */
                    std::string m_unbindStatus;
                    bool m_unbindStatusHasBeenSet;

                    /**
                     * 解绑返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unbindMessage;
                    bool m_unbindMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKUNBINDEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_
