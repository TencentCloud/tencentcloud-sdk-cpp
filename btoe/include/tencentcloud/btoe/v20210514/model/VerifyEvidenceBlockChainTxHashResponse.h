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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEBLOCKCHAINTXHASHRESPONSE_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEBLOCKCHAINTXHASHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Btoe
    {
        namespace V20210514
        {
            namespace Model
            {
                /**
                * VerifyEvidenceBlockChainTxHash返回参数结构体
                */
                class VerifyEvidenceBlockChainTxHashResponse : public AbstractModel
                {
                public:
                    VerifyEvidenceBlockChainTxHashResponse();
                    ~VerifyEvidenceBlockChainTxHashResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取核验结果，true为核验成功，fals为核验失败
                     * @return Result 核验结果，true为核验成功，fals为核验失败
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取存证时间，仅当核验结果为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvidenceTime 存证时间，仅当核验结果为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEvidenceTime() const;

                    /**
                     * 判断参数 EvidenceTime 是否已赋值
                     * @return EvidenceTime 是否已赋值
                     * 
                     */
                    bool EvidenceTimeHasBeenSet() const;

                    /**
                     * 获取存证编码，仅当核验结果为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvidenceId 存证编码，仅当核验结果为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEvidenceId() const;

                    /**
                     * 判断参数 EvidenceId 是否已赋值
                     * @return EvidenceId 是否已赋值
                     * 
                     */
                    bool EvidenceIdHasBeenSet() const;

                private:

                    /**
                     * 核验结果，true为核验成功，fals为核验失败
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 存证时间，仅当核验结果为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_evidenceTime;
                    bool m_evidenceTimeHasBeenSet;

                    /**
                     * 存证编码，仅当核验结果为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_evidenceId;
                    bool m_evidenceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEBLOCKCHAINTXHASHRESPONSE_H_
