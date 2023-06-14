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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEBLOCKCHAINTXHASHREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEBLOCKCHAINTXHASHREQUEST_H_

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
                * VerifyEvidenceBlockChainTxHash请求参数结构体
                */
                class VerifyEvidenceBlockChainTxHashRequest : public AbstractModel
                {
                public:
                    VerifyEvidenceBlockChainTxHashRequest();
                    ~VerifyEvidenceBlockChainTxHashRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取区块链交易 hash，在“存证基本信息查询（GetDepositInfo）”接口中可以获取。
                     * @return EvidenceTxHash 区块链交易 hash，在“存证基本信息查询（GetDepositInfo）”接口中可以获取。
                     * 
                     */
                    std::string GetEvidenceTxHash() const;

                    /**
                     * 设置区块链交易 hash，在“存证基本信息查询（GetDepositInfo）”接口中可以获取。
                     * @param _evidenceTxHash 区块链交易 hash，在“存证基本信息查询（GetDepositInfo）”接口中可以获取。
                     * 
                     */
                    void SetEvidenceTxHash(const std::string& _evidenceTxHash);

                    /**
                     * 判断参数 EvidenceTxHash 是否已赋值
                     * @return EvidenceTxHash 是否已赋值
                     * 
                     */
                    bool EvidenceTxHashHasBeenSet() const;

                private:

                    /**
                     * 区块链交易 hash，在“存证基本信息查询（GetDepositInfo）”接口中可以获取。
                     */
                    std::string m_evidenceTxHash;
                    bool m_evidenceTxHashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEBLOCKCHAINTXHASHREQUEST_H_
