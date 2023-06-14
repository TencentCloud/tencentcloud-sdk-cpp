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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_EXTERNALRETURNCONTRACTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_EXTERNALRETURNCONTRACTINFO_H_

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
                * 第三方渠道合约信息
                */
                class ExternalReturnContractInfo : public AbstractModel
                {
                public:
                    ExternalReturnContractInfo();
                    ~ExternalReturnContractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方渠道协议id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnAgreementId 第三方渠道协议id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnAgreementId() const;

                    /**
                     * 设置第三方渠道协议id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnAgreementId 第三方渠道协议id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnAgreementId(const std::string& _externalReturnAgreementId);

                    /**
                     * 判断参数 ExternalReturnAgreementId 是否已赋值
                     * @return ExternalReturnAgreementId 是否已赋值
                     * 
                     */
                    bool ExternalReturnAgreementIdHasBeenSet() const;

                    /**
                     * 获取第三方渠道协议生效时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractEffectiveTimestamp 第三方渠道协议生效时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractEffectiveTimestamp() const;

                    /**
                     * 设置第三方渠道协议生效时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractEffectiveTimestamp 第三方渠道协议生效时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractEffectiveTimestamp(const std::string& _externalReturnContractEffectiveTimestamp);

                    /**
                     * 判断参数 ExternalReturnContractEffectiveTimestamp 是否已赋值
                     * @return ExternalReturnContractEffectiveTimestamp 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractEffectiveTimestampHasBeenSet() const;

                    /**
                     * 获取第三方渠道协议解约时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractTerminationTimestamp 第三方渠道协议解约时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractTerminationTimestamp() const;

                    /**
                     * 设置第三方渠道协议解约时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractTerminationTimestamp 第三方渠道协议解约时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractTerminationTimestamp(const std::string& _externalReturnContractTerminationTimestamp);

                    /**
                     * 判断参数 ExternalReturnContractTerminationTimestamp 是否已赋值
                     * @return ExternalReturnContractTerminationTimestamp 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractTerminationTimestampHasBeenSet() const;

                    /**
                     * 获取平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractStatus 平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractStatus() const;

                    /**
                     * 设置平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractStatus 平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractStatus(const std::string& _externalReturnContractStatus);

                    /**
                     * 判断参数 ExternalReturnContractStatus 是否已赋值
                     * @return ExternalReturnContractStatus 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractStatusHasBeenSet() const;

                    /**
                     * 获取第三方渠道请求序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnRequestId 第三方渠道请求序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnRequestId() const;

                    /**
                     * 设置第三方渠道请求序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnRequestId 第三方渠道请求序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnRequestId(const std::string& _externalReturnRequestId);

                    /**
                     * 判断参数 ExternalReturnRequestId 是否已赋值
                     * @return ExternalReturnRequestId 是否已赋值
                     * 
                     */
                    bool ExternalReturnRequestIdHasBeenSet() const;

                    /**
                     * 获取第三方渠道协议签署时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractSignedTimestamp 第三方渠道协议签署时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractSignedTimestamp() const;

                    /**
                     * 设置第三方渠道协议签署时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractSignedTimestamp 第三方渠道协议签署时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractSignedTimestamp(const std::string& _externalReturnContractSignedTimestamp);

                    /**
                     * 判断参数 ExternalReturnContractSignedTimestamp 是否已赋值
                     * @return ExternalReturnContractSignedTimestamp 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractSignedTimestampHasBeenSet() const;

                    /**
                     * 获取第三方渠道协议到期时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractExpiredTimestamp 第三方渠道协议到期时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractExpiredTimestamp() const;

                    /**
                     * 设置第三方渠道协议到期时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractExpiredTimestamp 第三方渠道协议到期时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractExpiredTimestamp(const std::string& _externalReturnContractExpiredTimestamp);

                    /**
                     * 判断参数 ExternalReturnContractExpiredTimestamp 是否已赋值
                     * @return ExternalReturnContractExpiredTimestamp 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractExpiredTimestampHasBeenSet() const;

                    /**
                     * 获取第三方渠道返回的合约数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractData 第三方渠道返回的合约数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractData() const;

                    /**
                     * 设置第三方渠道返回的合约数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractData 第三方渠道返回的合约数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractData(const std::string& _externalReturnContractData);

                    /**
                     * 判断参数 ExternalReturnContractData 是否已赋值
                     * @return ExternalReturnContractData 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractDataHasBeenSet() const;

                    /**
                     * 获取第三方渠道解约备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractTerminationRemark 第三方渠道解约备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractTerminationRemark() const;

                    /**
                     * 设置第三方渠道解约备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractTerminationRemark 第三方渠道解约备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractTerminationRemark(const std::string& _externalReturnContractTerminationRemark);

                    /**
                     * 判断参数 ExternalReturnContractTerminationRemark 是否已赋值
                     * @return ExternalReturnContractTerminationRemark 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractTerminationRemarkHasBeenSet() const;

                    /**
                     * 获取第三方渠道协议解约方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnContractTerminationMode 第三方渠道协议解约方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnContractTerminationMode() const;

                    /**
                     * 设置第三方渠道协议解约方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnContractTerminationMode 第三方渠道协议解约方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnContractTerminationMode(const std::string& _externalReturnContractTerminationMode);

                    /**
                     * 判断参数 ExternalReturnContractTerminationMode 是否已赋值
                     * @return ExternalReturnContractTerminationMode 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractTerminationModeHasBeenSet() const;

                private:

                    /**
                     * 第三方渠道协议id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnAgreementId;
                    bool m_externalReturnAgreementIdHasBeenSet;

                    /**
                     * 第三方渠道协议生效时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractEffectiveTimestamp;
                    bool m_externalReturnContractEffectiveTimestampHasBeenSet;

                    /**
                     * 第三方渠道协议解约时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractTerminationTimestamp;
                    bool m_externalReturnContractTerminationTimestampHasBeenSet;

                    /**
                     * 平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractStatus;
                    bool m_externalReturnContractStatusHasBeenSet;

                    /**
                     * 第三方渠道请求序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnRequestId;
                    bool m_externalReturnRequestIdHasBeenSet;

                    /**
                     * 第三方渠道协议签署时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractSignedTimestamp;
                    bool m_externalReturnContractSignedTimestampHasBeenSet;

                    /**
                     * 第三方渠道协议到期时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractExpiredTimestamp;
                    bool m_externalReturnContractExpiredTimestampHasBeenSet;

                    /**
                     * 第三方渠道返回的合约数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractData;
                    bool m_externalReturnContractDataHasBeenSet;

                    /**
                     * 第三方渠道解约备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractTerminationRemark;
                    bool m_externalReturnContractTerminationRemarkHasBeenSet;

                    /**
                     * 第三方渠道协议解约方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnContractTerminationMode;
                    bool m_externalReturnContractTerminationModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_EXTERNALRETURNCONTRACTINFO_H_
