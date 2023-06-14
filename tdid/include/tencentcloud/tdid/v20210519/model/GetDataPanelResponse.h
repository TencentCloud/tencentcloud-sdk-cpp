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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDATAPANELRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDATAPANELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetDataPanel返回参数结构体
                */
                class GetDataPanelResponse : public AbstractModel
                {
                public:
                    GetDataPanelResponse();
                    ~GetDataPanelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取区块链网络数量
                     * @return BlockNetworkCount 区块链网络数量
                     * 
                     */
                    int64_t GetBlockNetworkCount() const;

                    /**
                     * 判断参数 BlockNetworkCount 是否已赋值
                     * @return BlockNetworkCount 是否已赋值
                     * 
                     */
                    bool BlockNetworkCountHasBeenSet() const;

                    /**
                     * 获取区块链网络名称
                     * @return BlockNetworkName 区块链网络名称
                     * 
                     */
                    std::string GetBlockNetworkName() const;

                    /**
                     * 判断参数 BlockNetworkName 是否已赋值
                     * @return BlockNetworkName 是否已赋值
                     * 
                     */
                    bool BlockNetworkNameHasBeenSet() const;

                    /**
                     * 获取当前区块高度
                     * @return BlockHeight 当前区块高度
                     * 
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取区块链网络类型
                     * @return BlockNetworkType 区块链网络类型
                     * 
                     */
                    int64_t GetBlockNetworkType() const;

                    /**
                     * 判断参数 BlockNetworkType 是否已赋值
                     * @return BlockNetworkType 是否已赋值
                     * 
                     */
                    bool BlockNetworkTypeHasBeenSet() const;

                    /**
                     * 获取did数量
                     * @return DidCount did数量
                     * 
                     */
                    int64_t GetDidCount() const;

                    /**
                     * 判断参数 DidCount 是否已赋值
                     * @return DidCount 是否已赋值
                     * 
                     */
                    bool DidCountHasBeenSet() const;

                    /**
                     * 获取凭证模版数量
                     * @return CptCount 凭证模版数量
                     * 
                     */
                    int64_t GetCptCount() const;

                    /**
                     * 判断参数 CptCount 是否已赋值
                     * @return CptCount 是否已赋值
                     * 
                     */
                    bool CptCountHasBeenSet() const;

                    /**
                     * 获取已认证权威机构数量
                     * @return CertificatedAuthCount 已认证权威机构数量
                     * 
                     */
                    int64_t GetCertificatedAuthCount() const;

                    /**
                     * 判断参数 CertificatedAuthCount 是否已赋值
                     * @return CertificatedAuthCount 是否已赋值
                     * 
                     */
                    bool CertificatedAuthCountHasBeenSet() const;

                    /**
                     * 获取颁发凭证数量
                     * @return IssueCptCount 颁发凭证数量
                     * 
                     */
                    int64_t GetIssueCptCount() const;

                    /**
                     * 判断参数 IssueCptCount 是否已赋值
                     * @return IssueCptCount 是否已赋值
                     * 
                     */
                    bool IssueCptCountHasBeenSet() const;

                    /**
                     * 获取本周新增DID数量
                     * @return NewDidCount 本周新增DID数量
                     * 
                     */
                    int64_t GetNewDidCount() const;

                    /**
                     * 判断参数 NewDidCount 是否已赋值
                     * @return NewDidCount 是否已赋值
                     * 
                     */
                    bool NewDidCountHasBeenSet() const;

                    /**
                     * 获取BCOS网络类型数量
                     * @return BcosCount BCOS网络类型数量
                     * 
                     */
                    int64_t GetBcosCount() const;

                    /**
                     * 判断参数 BcosCount 是否已赋值
                     * @return BcosCount 是否已赋值
                     * 
                     */
                    bool BcosCountHasBeenSet() const;

                    /**
                     * 获取Fabric网络类型数量
                     * @return FabricCount Fabric网络类型数量
                     * 
                     */
                    int64_t GetFabricCount() const;

                    /**
                     * 判断参数 FabricCount 是否已赋值
                     * @return FabricCount 是否已赋值
                     * 
                     */
                    bool FabricCountHasBeenSet() const;

                    /**
                     * 获取长安链网络类型数量
                     * @return ChainMakerCount 长安链网络类型数量
                     * 
                     */
                    int64_t GetChainMakerCount() const;

                    /**
                     * 判断参数 ChainMakerCount 是否已赋值
                     * @return ChainMakerCount 是否已赋值
                     * 
                     */
                    bool ChainMakerCountHasBeenSet() const;

                private:

                    /**
                     * 区块链网络数量
                     */
                    int64_t m_blockNetworkCount;
                    bool m_blockNetworkCountHasBeenSet;

                    /**
                     * 区块链网络名称
                     */
                    std::string m_blockNetworkName;
                    bool m_blockNetworkNameHasBeenSet;

                    /**
                     * 当前区块高度
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * 区块链网络类型
                     */
                    int64_t m_blockNetworkType;
                    bool m_blockNetworkTypeHasBeenSet;

                    /**
                     * did数量
                     */
                    int64_t m_didCount;
                    bool m_didCountHasBeenSet;

                    /**
                     * 凭证模版数量
                     */
                    int64_t m_cptCount;
                    bool m_cptCountHasBeenSet;

                    /**
                     * 已认证权威机构数量
                     */
                    int64_t m_certificatedAuthCount;
                    bool m_certificatedAuthCountHasBeenSet;

                    /**
                     * 颁发凭证数量
                     */
                    int64_t m_issueCptCount;
                    bool m_issueCptCountHasBeenSet;

                    /**
                     * 本周新增DID数量
                     */
                    int64_t m_newDidCount;
                    bool m_newDidCountHasBeenSet;

                    /**
                     * BCOS网络类型数量
                     */
                    int64_t m_bcosCount;
                    bool m_bcosCountHasBeenSet;

                    /**
                     * Fabric网络类型数量
                     */
                    int64_t m_fabricCount;
                    bool m_fabricCountHasBeenSet;

                    /**
                     * 长安链网络类型数量
                     */
                    int64_t m_chainMakerCount;
                    bool m_chainMakerCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDATAPANELRESPONSE_H_
