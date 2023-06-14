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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPRECORD_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/afc/v20200226/model/SimpleKindRiskDetail.h>
#include <tencentcloud/afc/v20200226/model/OtherModelScores.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 反欺诈VIP查询结果
                */
                class AntiFraudVipRecord : public AbstractModel
                {
                public:
                    AntiFraudVipRecord();
                    ~AntiFraudVipRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公共错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 公共错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置公共错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 公共错误码
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
                     * 获取业务侧错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeDesc 业务侧错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeDesc() const;

                    /**
                     * 设置业务侧错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeDesc 业务侧错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeDesc(const std::string& _codeDesc);

                    /**
                     * 判断参数 CodeDesc 是否已赋值
                     * @return CodeDesc 是否已赋值
                     * 
                     */
                    bool CodeDescHasBeenSet() const;

                    /**
                     * 获取业务侧错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 业务侧错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置业务侧错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 业务侧错误信息。
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

                    /**
                     * 获取表示该条记录能否查到：1 为能查到；-1 为查不到，此时 RiskScore 返回-1；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Found 表示该条记录能否查到：1 为能查到；-1 为查不到，此时 RiskScore 返回-1；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFound() const;

                    /**
                     * 设置表示该条记录能否查到：1 为能查到；-1 为查不到，此时 RiskScore 返回-1；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _found 表示该条记录能否查到：1 为能查到；-1 为查不到，此时 RiskScore 返回-1；
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
                     * 获取表示该条记录中的身份 ID 能否查到
1 为能查到
-1 为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdFound 表示该条记录中的身份 ID 能否查到
1 为能查到
-1 为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdFound() const;

                    /**
                     * 设置表示该条记录中的身份 ID 能否查到
1 为能查到
-1 为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idFound 表示该条记录中的身份 ID 能否查到
1 为能查到
-1 为查不到
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
                     * 获取当可查到时，返回 0~100 区间，值越高 欺诈可
能性越大。
当查不到时（即 found=-1），返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskScore 当可查到时，返回 0~100 区间，值越高 欺诈可
能性越大。
当查不到时（即 found=-1），返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskScore() const;

                    /**
                     * 设置当可查到时，返回 0~100 区间，值越高 欺诈可
能性越大。
当查不到时（即 found=-1），返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskScore 当可查到时，返回 0~100 区间，值越高 欺诈可
能性越大。
当查不到时（即 found=-1），返回-1
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
                     * 获取扩展字段，对风险类型的说明。扩展字段并非必
然出现。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskInfo 扩展字段，对风险类型的说明。扩展字段并非必
然出现。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SimpleKindRiskDetail> GetRiskInfo() const;

                    /**
                     * 设置扩展字段，对风险类型的说明。扩展字段并非必
然出现。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskInfo 扩展字段，对风险类型的说明。扩展字段并非必
然出现。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskInfo(const std::vector<SimpleKindRiskDetail>& _riskInfo);

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     * 
                     */
                    bool RiskInfoHasBeenSet() const;

                    /**
                     * 获取默认出现，提供模型版本号说明及多模型返回需
要时用到；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherModelScores 默认出现，提供模型版本号说明及多模型返回需
要时用到；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OtherModelScores> GetOtherModelScores() const;

                    /**
                     * 设置默认出现，提供模型版本号说明及多模型返回需
要时用到；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherModelScores 默认出现，提供模型版本号说明及多模型返回需
要时用到；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherModelScores(const std::vector<OtherModelScores>& _otherModelScores);

                    /**
                     * 判断参数 OtherModelScores 是否已赋值
                     * @return OtherModelScores 是否已赋值
                     * 
                     */
                    bool OtherModelScoresHasBeenSet() const;

                    /**
                     * 获取表示请求时间，标准 sunix 时间戳，非必然出现
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostTime 表示请求时间，标准 sunix 时间戳，非必然出现
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPostTime() const;

                    /**
                     * 设置表示请求时间，标准 sunix 时间戳，非必然出现
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postTime 表示请求时间，标准 sunix 时间戳，非必然出现
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostTime(const std::string& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取拓展字段，非必然出现，和 ExtensionIn 对应；
注：非必然出现，需要返回时天御侧将说明；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtensionOut 拓展字段，非必然出现，和 ExtensionIn 对应；
注：非必然出现，需要返回时天御侧将说明；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtensionOut() const;

                    /**
                     * 设置拓展字段，非必然出现，和 ExtensionIn 对应；
注：非必然出现，需要返回时天御侧将说明；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extensionOut 拓展字段，非必然出现，和 ExtensionIn 对应；
注：非必然出现，需要返回时天御侧将说明；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtensionOut(const std::string& _extensionOut);

                    /**
                     * 判断参数 ExtensionOut 是否已赋值
                     * @return ExtensionOut 是否已赋值
                     * 
                     */
                    bool ExtensionOutHasBeenSet() const;

                private:

                    /**
                     * 公共错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 业务侧错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeDesc;
                    bool m_codeDescHasBeenSet;

                    /**
                     * 业务侧错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 表示该条记录能否查到：1 为能查到；-1 为查不到，此时 RiskScore 返回-1；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_found;
                    bool m_foundHasBeenSet;

                    /**
                     * 表示该条记录中的身份 ID 能否查到
1 为能查到
-1 为查不到
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idFound;
                    bool m_idFoundHasBeenSet;

                    /**
                     * 当可查到时，返回 0~100 区间，值越高 欺诈可
能性越大。
当查不到时（即 found=-1），返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskScore;
                    bool m_riskScoreHasBeenSet;

                    /**
                     * 扩展字段，对风险类型的说明。扩展字段并非必
然出现。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SimpleKindRiskDetail> m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                    /**
                     * 默认出现，提供模型版本号说明及多模型返回需
要时用到；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OtherModelScores> m_otherModelScores;
                    bool m_otherModelScoresHasBeenSet;

                    /**
                     * 表示请求时间，标准 sunix 时间戳，非必然出现
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 拓展字段，非必然出现，和 ExtensionIn 对应；
注：非必然出现，需要返回时天御侧将说明；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extensionOut;
                    bool m_extensionOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPRECORD_H_
