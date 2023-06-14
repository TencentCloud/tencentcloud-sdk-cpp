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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYINFORESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYINFORESPONSE_H_

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
                * GetDeployInfo返回参数结构体
                */
                class GetDeployInfoResponse : public AbstractModel
                {
                public:
                    GetDeployInfoResponse();
                    ~GetDeployInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合约CNS地址
                     * @return Hash 合约CNS地址
                     * 
                     */
                    std::string GetHash() const;

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     * 
                     */
                    bool HashHasBeenSet() const;

                    /**
                     * 获取合约主群组ID
                     * @return GroupId 合约主群组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取部署机构DID
                     * @return DeployDid 部署机构DID
                     * 
                     */
                    std::string GetDeployDid() const;

                    /**
                     * 判断参数 DeployDid 是否已赋值
                     * @return DeployDid 是否已赋值
                     * 
                     */
                    bool DeployDidHasBeenSet() const;

                    /**
                     * 获取TDID SDK版本
                     * @return SdkVersion TDID SDK版本
                     * 
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     * 
                     */
                    bool SdkVersionHasBeenSet() const;

                    /**
                     * 获取TDID 合约版本
                     * @return ContractVersion TDID 合约版本
                     * 
                     */
                    std::string GetContractVersion() const;

                    /**
                     * 判断参数 ContractVersion 是否已赋值
                     * @return ContractVersion 是否已赋值
                     * 
                     */
                    bool ContractVersionHasBeenSet() const;

                    /**
                     * 获取区块链节点版本
                     * @return BlockVersion 区块链节点版本
                     * 
                     */
                    std::string GetBlockVersion() const;

                    /**
                     * 判断参数 BlockVersion 是否已赋值
                     * @return BlockVersion 是否已赋值
                     * 
                     */
                    bool BlockVersionHasBeenSet() const;

                    /**
                     * 获取区块链节点IP
                     * @return BlockIp 区块链节点IP
                     * 
                     */
                    std::string GetBlockIp() const;

                    /**
                     * 判断参数 BlockIp 是否已赋值
                     * @return BlockIp 是否已赋值
                     * 
                     */
                    bool BlockIpHasBeenSet() const;

                    /**
                     * 获取DID合约地址
                     * @return DidAddress DID合约地址
                     * 
                     */
                    std::string GetDidAddress() const;

                    /**
                     * 判断参数 DidAddress 是否已赋值
                     * @return DidAddress 是否已赋值
                     * 
                     */
                    bool DidAddressHasBeenSet() const;

                    /**
                     * 获取CPT合约地址
                     * @return CptAddress CPT合约地址
                     * 
                     */
                    std::string GetCptAddress() const;

                    /**
                     * 判断参数 CptAddress 是否已赋值
                     * @return CptAddress 是否已赋值
                     * 
                     */
                    bool CptAddressHasBeenSet() const;

                    /**
                     * 获取Authority Issuer地址
                     * @return AuthorityAddress Authority Issuer地址
                     * 
                     */
                    std::string GetAuthorityAddress() const;

                    /**
                     * 判断参数 AuthorityAddress 是否已赋值
                     * @return AuthorityAddress 是否已赋值
                     * 
                     */
                    bool AuthorityAddressHasBeenSet() const;

                    /**
                     * 获取Evidence合约地址
                     * @return EvidenceAddress Evidence合约地址
                     * 
                     */
                    std::string GetEvidenceAddress() const;

                    /**
                     * 判断参数 EvidenceAddress 是否已赋值
                     * @return EvidenceAddress 是否已赋值
                     * 
                     */
                    bool EvidenceAddressHasBeenSet() const;

                    /**
                     * 获取Specific Issuer合约地址
                     * @return SpecificAddress Specific Issuer合约地址
                     * 
                     */
                    std::string GetSpecificAddress() const;

                    /**
                     * 判断参数 SpecificAddress 是否已赋值
                     * @return SpecificAddress 是否已赋值
                     * 
                     */
                    bool SpecificAddressHasBeenSet() const;

                    /**
                     * 获取链ID
                     * @return ChainId 链ID
                     * 
                     */
                    std::string GetChainId() const;

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     * 
                     */
                    bool ChainIdHasBeenSet() const;

                private:

                    /**
                     * 合约CNS地址
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                    /**
                     * 合约主群组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署机构DID
                     */
                    std::string m_deployDid;
                    bool m_deployDidHasBeenSet;

                    /**
                     * TDID SDK版本
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

                    /**
                     * TDID 合约版本
                     */
                    std::string m_contractVersion;
                    bool m_contractVersionHasBeenSet;

                    /**
                     * 区块链节点版本
                     */
                    std::string m_blockVersion;
                    bool m_blockVersionHasBeenSet;

                    /**
                     * 区块链节点IP
                     */
                    std::string m_blockIp;
                    bool m_blockIpHasBeenSet;

                    /**
                     * DID合约地址
                     */
                    std::string m_didAddress;
                    bool m_didAddressHasBeenSet;

                    /**
                     * CPT合约地址
                     */
                    std::string m_cptAddress;
                    bool m_cptAddressHasBeenSet;

                    /**
                     * Authority Issuer地址
                     */
                    std::string m_authorityAddress;
                    bool m_authorityAddressHasBeenSet;

                    /**
                     * Evidence合约地址
                     */
                    std::string m_evidenceAddress;
                    bool m_evidenceAddressHasBeenSet;

                    /**
                     * Specific Issuer合约地址
                     */
                    std::string m_specificAddress;
                    bool m_specificAddressHasBeenSet;

                    /**
                     * 链ID
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYINFORESPONSE_H_
