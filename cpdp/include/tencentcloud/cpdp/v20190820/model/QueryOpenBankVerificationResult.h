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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKVERIFICATIONRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKVERIFICATIONRESULT_H_

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
                * 云企付-查询核销申请结果
                */
                class QueryOpenBankVerificationResult : public AbstractModel
                {
                public:
                    QueryOpenBankVerificationResult();
                    ~QueryOpenBankVerificationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云企付渠道核销订单号
                     * @return ChannelVerificationId 云企付渠道核销订单号
                     * 
                     */
                    std::string GetChannelVerificationId() const;

                    /**
                     * 设置云企付渠道核销订单号
                     * @param _channelVerificationId 云企付渠道核销订单号
                     * 
                     */
                    void SetChannelVerificationId(const std::string& _channelVerificationId);

                    /**
                     * 判断参数 ChannelVerificationId 是否已赋值
                     * @return ChannelVerificationId 是否已赋值
                     * 
                     */
                    bool ChannelVerificationIdHasBeenSet() const;

                    /**
                     * 获取第三方支付渠道核销订单号
                     * @return ThirdVerificationId 第三方支付渠道核销订单号
                     * 
                     */
                    std::string GetThirdVerificationId() const;

                    /**
                     * 设置第三方支付渠道核销订单号
                     * @param _thirdVerificationId 第三方支付渠道核销订单号
                     * 
                     */
                    void SetThirdVerificationId(const std::string& _thirdVerificationId);

                    /**
                     * 判断参数 ThirdVerificationId 是否已赋值
                     * @return ThirdVerificationId 是否已赋值
                     * 
                     */
                    bool ThirdVerificationIdHasBeenSet() const;

                    /**
                     * 获取核销金额，单位分
                     * @return VerificationAmount 核销金额，单位分
                     * 
                     */
                    int64_t GetVerificationAmount() const;

                    /**
                     * 设置核销金额，单位分
                     * @param _verificationAmount 核销金额，单位分
                     * 
                     */
                    void SetVerificationAmount(const int64_t& _verificationAmount);

                    /**
                     * 判断参数 VerificationAmount 是否已赋值
                     * @return VerificationAmount 是否已赋值
                     * 
                     */
                    bool VerificationAmountHasBeenSet() const;

                    /**
                     * 获取核销状态
INIT("INIT","初始化"),
SUCCESS("SUCCESS","核销成功"),
FAILED("FAILED","核销失败"),
PROCESSING("PROCESSING","核销中");
                     * @return VerificationStatus 核销状态
INIT("INIT","初始化"),
SUCCESS("SUCCESS","核销成功"),
FAILED("FAILED","核销失败"),
PROCESSING("PROCESSING","核销中");
                     * 
                     */
                    std::string GetVerificationStatus() const;

                    /**
                     * 设置核销状态
INIT("INIT","初始化"),
SUCCESS("SUCCESS","核销成功"),
FAILED("FAILED","核销失败"),
PROCESSING("PROCESSING","核销中");
                     * @param _verificationStatus 核销状态
INIT("INIT","初始化"),
SUCCESS("SUCCESS","核销成功"),
FAILED("FAILED","核销失败"),
PROCESSING("PROCESSING","核销中");
                     * 
                     */
                    void SetVerificationStatus(const std::string& _verificationStatus);

                    /**
                     * 判断参数 VerificationStatus 是否已赋值
                     * @return VerificationStatus 是否已赋值
                     * 
                     */
                    bool VerificationStatusHasBeenSet() const;

                    /**
                     * 获取失败原因，若核销失败，附上原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason 失败原因，若核销失败，附上原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置失败原因，若核销失败，附上原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason 失败原因，若核销失败，附上原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取渠道附加返回信息，一般情况可以不关注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdVerificationReturnData 渠道附加返回信息，一般情况可以不关注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThirdVerificationReturnData() const;

                    /**
                     * 设置渠道附加返回信息，一般情况可以不关注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thirdVerificationReturnData 渠道附加返回信息，一般情况可以不关注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThirdVerificationReturnData(const std::string& _thirdVerificationReturnData);

                    /**
                     * 判断参数 ThirdVerificationReturnData 是否已赋值
                     * @return ThirdVerificationReturnData 是否已赋值
                     * 
                     */
                    bool ThirdVerificationReturnDataHasBeenSet() const;

                private:

                    /**
                     * 云企付渠道核销订单号
                     */
                    std::string m_channelVerificationId;
                    bool m_channelVerificationIdHasBeenSet;

                    /**
                     * 第三方支付渠道核销订单号
                     */
                    std::string m_thirdVerificationId;
                    bool m_thirdVerificationIdHasBeenSet;

                    /**
                     * 核销金额，单位分
                     */
                    int64_t m_verificationAmount;
                    bool m_verificationAmountHasBeenSet;

                    /**
                     * 核销状态
INIT("INIT","初始化"),
SUCCESS("SUCCESS","核销成功"),
FAILED("FAILED","核销失败"),
PROCESSING("PROCESSING","核销中");
                     */
                    std::string m_verificationStatus;
                    bool m_verificationStatusHasBeenSet;

                    /**
                     * 失败原因，若核销失败，附上原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 渠道附加返回信息，一般情况可以不关注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thirdVerificationReturnData;
                    bool m_thirdVerificationReturnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKVERIFICATIONRESULT_H_
