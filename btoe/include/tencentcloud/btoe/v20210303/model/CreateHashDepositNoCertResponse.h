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

#ifndef TENCENTCLOUD_BTOE_V20210303_MODEL_CREATEHASHDEPOSITNOCERTRESPONSE_H_
#define TENCENTCLOUD_BTOE_V20210303_MODEL_CREATEHASHDEPOSITNOCERTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Btoe
    {
        namespace V20210303
        {
            namespace Model
            {
                /**
                * CreateHashDepositNoCert返回参数结构体
                */
                class CreateHashDepositNoCertResponse : public AbstractModel
                {
                public:
                    CreateHashDepositNoCertResponse();
                    ~CreateHashDepositNoCertResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessId 透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取存证编码
                     * @return EvidenceId 存证编码
                     * 
                     */
                    std::string GetEvidenceId() const;

                    /**
                     * 判断参数 EvidenceId 是否已赋值
                     * @return EvidenceId 是否已赋值
                     * 
                     */
                    bool EvidenceIdHasBeenSet() const;

                    /**
                     * 获取上链时间
                     * @return EvidenceTime 上链时间
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
                     * 获取区块链交易哈希
                     * @return EvidenceTxHash 区块链交易哈希
                     * 
                     */
                    std::string GetEvidenceTxHash() const;

                    /**
                     * 判断参数 EvidenceTxHash 是否已赋值
                     * @return EvidenceTxHash 是否已赋值
                     * 
                     */
                    bool EvidenceTxHashHasBeenSet() const;

                    /**
                     * 获取区块高度
                     * @return BlockchainHeight 区块高度
                     * 
                     */
                    uint64_t GetBlockchainHeight() const;

                    /**
                     * 判断参数 BlockchainHeight 是否已赋值
                     * @return BlockchainHeight 是否已赋值
                     * 
                     */
                    bool BlockchainHeightHasBeenSet() const;

                private:

                    /**
                     * 透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 存证编码
                     */
                    std::string m_evidenceId;
                    bool m_evidenceIdHasBeenSet;

                    /**
                     * 上链时间
                     */
                    std::string m_evidenceTime;
                    bool m_evidenceTimeHasBeenSet;

                    /**
                     * 区块链交易哈希
                     */
                    std::string m_evidenceTxHash;
                    bool m_evidenceTxHashHasBeenSet;

                    /**
                     * 区块高度
                     */
                    uint64_t m_blockchainHeight;
                    bool m_blockchainHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210303_MODEL_CREATEHASHDEPOSITNOCERTRESPONSE_H_
