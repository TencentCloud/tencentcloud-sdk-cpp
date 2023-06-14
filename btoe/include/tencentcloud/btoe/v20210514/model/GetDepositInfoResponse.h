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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_GETDEPOSITINFORESPONSE_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_GETDEPOSITINFORESPONSE_H_

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
                * GetDepositInfo返回参数结构体
                */
                class GetDepositInfoResponse : public AbstractModel
                {
                public:
                    GetDepositInfoResponse();
                    ~GetDepositInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取存证编号
                     * @return EvidenceId 存证编号
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

                private:

                    /**
                     * 存证编号
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_GETDEPOSITINFORESPONSE_H_
