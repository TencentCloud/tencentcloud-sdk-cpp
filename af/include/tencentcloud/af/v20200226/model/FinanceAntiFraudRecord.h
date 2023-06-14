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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_FINANCEANTIFRAUDRECORD_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_FINANCEANTIFRAUDRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/af/v20200226/model/RiskDetailInfo.h>
#include <tencentcloud/af/v20200226/model/FinanceOtherModelScores.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 借贷反欺查询返回结果出参
                */
                class FinanceAntiFraudRecord : public AbstractModel
                {
                public:
                    FinanceAntiFraudRecord();
                    ~FinanceAntiFraudRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示该条记录能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Found 表示该条记录能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFound() const;

                    /**
                     * 设置表示该条记录能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _found 表示该条记录能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFound(const std::string& _found);

                    /**
                     * 判断参数 Found 是否已赋值
                     * @return Found 是否已赋值
                     * 
                     */
                    bool FoundHasBeenSet() const;

                    /**
                     * 获取表示该条Id能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdFound 表示该条Id能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdFound() const;

                    /**
                     * 设置表示该条Id能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idFound 表示该条Id能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdFound(const std::string& _idFound);

                    /**
                     * 判断参数 IdFound 是否已赋值
                     * @return IdFound 是否已赋值
                     * 
                     */
                    bool IdFoundHasBeenSet() const;

                    /**
                     * 获取评分0~100;值越高 欺诈可能性越大
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskScore 评分0~100;值越高 欺诈可能性越大
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskScore() const;

                    /**
                     * 设置评分0~100;值越高 欺诈可能性越大
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskScore 评分0~100;值越高 欺诈可能性越大
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskScore(const std::string& _riskScore);

                    /**
                     * 判断参数 RiskScore 是否已赋值
                     * @return RiskScore 是否已赋值
                     * 
                     */
                    bool RiskScoreHasBeenSet() const;

                    /**
                     * 获取扩展字段，对风险类型的说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskInfo 扩展字段，对风险类型的说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RiskDetailInfo> GetRiskInfo() const;

                    /**
                     * 设置扩展字段，对风险类型的说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskInfo 扩展字段，对风险类型的说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskInfo(const std::vector<RiskDetailInfo>& _riskInfo);

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     * 
                     */
                    bool RiskInfoHasBeenSet() const;

                    /**
                     * 获取多模型返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherModelScores 多模型返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FinanceOtherModelScores> GetOtherModelScores() const;

                    /**
                     * 设置多模型返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherModelScores 多模型返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherModelScores(const std::vector<FinanceOtherModelScores>& _otherModelScores);

                    /**
                     * 判断参数 OtherModelScores 是否已赋值
                     * @return OtherModelScores 是否已赋值
                     * 
                     */
                    bool OtherModelScoresHasBeenSet() const;

                    /**
                     * 获取业务侧错误码。成功时返回0，错误时返回非0值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 业务侧错误码。成功时返回0，错误时返回非0值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置业务侧错误码。成功时返回0，错误时返回非0值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 业务侧错误码。成功时返回0，错误时返回非0值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取业务侧错误信息。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 业务侧错误信息。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置业务侧错误信息。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 业务侧错误信息。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 表示该条记录能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_found;
                    bool m_foundHasBeenSet;

                    /**
                     * 表示该条Id能否查到：1为能查到，-1为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idFound;
                    bool m_idFoundHasBeenSet;

                    /**
                     * 评分0~100;值越高 欺诈可能性越大
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskScore;
                    bool m_riskScoreHasBeenSet;

                    /**
                     * 扩展字段，对风险类型的说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDetailInfo> m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                    /**
                     * 多模型返回结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FinanceOtherModelScores> m_otherModelScores;
                    bool m_otherModelScoresHasBeenSet;

                    /**
                     * 业务侧错误码。成功时返回0，错误时返回非0值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 业务侧错误信息。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_FINANCEANTIFRAUDRECORD_H_
