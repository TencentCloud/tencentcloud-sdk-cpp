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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_CREATECHAINCODEANDINSTALLFORUSERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_CREATECHAINCODEANDINSTALLFORUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateChaincodeAndInstallForUser请求参数结构体
                */
                class CreateChaincodeAndInstallForUserRequest : public AbstractModel
                {
                public:
                    CreateChaincodeAndInstallForUserRequest();
                    ~CreateChaincodeAndInstallForUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，本接口取值：chaincode_mng
                     * @return Module 模块名，本接口取值：chaincode_mng
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，本接口取值：chaincode_mng
                     * @param Module 模块名，本接口取值：chaincode_mng
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名，本接口取值：chaincode_create_and_install_for_user
                     * @return Operation 操作名，本接口取值：chaincode_create_and_install_for_user
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，本接口取值：chaincode_create_and_install_for_user
                     * @param Operation 操作名，本接口取值：chaincode_create_and_install_for_user
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取区块链网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置区块链网络ID，可在区块链网络详情或列表中获取
                     * @param ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @return GroupName 调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @param GroupName 调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取合约安装节点名称，可以在通道详情中获取该通道上的节点名称
                     * @return PeerName 合约安装节点名称，可以在通道详情中获取该通道上的节点名称
                     */
                    std::string GetPeerName() const;

                    /**
                     * 设置合约安装节点名称，可以在通道详情中获取该通道上的节点名称
                     * @param PeerName 合约安装节点名称，可以在通道详情中获取该通道上的节点名称
                     */
                    void SetPeerName(const std::string& _peerName);

                    /**
                     * 判断参数 PeerName 是否已赋值
                     * @return PeerName 是否已赋值
                     */
                    bool PeerNameHasBeenSet() const;

                    /**
                     * 获取智能合约名称，格式说明：以小写字母开头，由2-12位数字或小写字母组成
                     * @return ChaincodeName 智能合约名称，格式说明：以小写字母开头，由2-12位数字或小写字母组成
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 设置智能合约名称，格式说明：以小写字母开头，由2-12位数字或小写字母组成
                     * @param ChaincodeName 智能合约名称，格式说明：以小写字母开头，由2-12位数字或小写字母组成
                     */
                    void SetChaincodeName(const std::string& _chaincodeName);

                    /**
                     * 判断参数 ChaincodeName 是否已赋值
                     * @return ChaincodeName 是否已赋值
                     */
                    bool ChaincodeNameHasBeenSet() const;

                    /**
                     * 获取智能合约版本，格式说明：由1-12位数字、小写字母、特殊符号(“.”)组成，如v1.0
                     * @return ChaincodeVersion 智能合约版本，格式说明：由1-12位数字、小写字母、特殊符号(“.”)组成，如v1.0
                     */
                    std::string GetChaincodeVersion() const;

                    /**
                     * 设置智能合约版本，格式说明：由1-12位数字、小写字母、特殊符号(“.”)组成，如v1.0
                     * @param ChaincodeVersion 智能合约版本，格式说明：由1-12位数字、小写字母、特殊符号(“.”)组成，如v1.0
                     */
                    void SetChaincodeVersion(const std::string& _chaincodeVersion);

                    /**
                     * 判断参数 ChaincodeVersion 是否已赋值
                     * @return ChaincodeVersion 是否已赋值
                     */
                    bool ChaincodeVersionHasBeenSet() const;

                    /**
                     * 获取智能合约代码文件类型，支持类型：
1. "go"：.go合约文件
2. "gozip"：go合约工程zip包，要求压缩目录为代码根目录
3. "javazip"：java合约工程zip包，要求压缩目录为代码根目录
4. "nodezip"：nodejs合约工程zip包，要求压缩目录为代码根目录
                     * @return ChaincodeFileType 智能合约代码文件类型，支持类型：
1. "go"：.go合约文件
2. "gozip"：go合约工程zip包，要求压缩目录为代码根目录
3. "javazip"：java合约工程zip包，要求压缩目录为代码根目录
4. "nodezip"：nodejs合约工程zip包，要求压缩目录为代码根目录
                     */
                    std::string GetChaincodeFileType() const;

                    /**
                     * 设置智能合约代码文件类型，支持类型：
1. "go"：.go合约文件
2. "gozip"：go合约工程zip包，要求压缩目录为代码根目录
3. "javazip"：java合约工程zip包，要求压缩目录为代码根目录
4. "nodezip"：nodejs合约工程zip包，要求压缩目录为代码根目录
                     * @param ChaincodeFileType 智能合约代码文件类型，支持类型：
1. "go"：.go合约文件
2. "gozip"：go合约工程zip包，要求压缩目录为代码根目录
3. "javazip"：java合约工程zip包，要求压缩目录为代码根目录
4. "nodezip"：nodejs合约工程zip包，要求压缩目录为代码根目录
                     */
                    void SetChaincodeFileType(const std::string& _chaincodeFileType);

                    /**
                     * 判断参数 ChaincodeFileType 是否已赋值
                     * @return ChaincodeFileType 是否已赋值
                     */
                    bool ChaincodeFileTypeHasBeenSet() const;

                    /**
                     * 获取合约内容，合约文件或压缩包内容的base64编码，大小要求小于等于5M
                     * @return Chaincode 合约内容，合约文件或压缩包内容的base64编码，大小要求小于等于5M
                     */
                    std::string GetChaincode() const;

                    /**
                     * 设置合约内容，合约文件或压缩包内容的base64编码，大小要求小于等于5M
                     * @param Chaincode 合约内容，合约文件或压缩包内容的base64编码，大小要求小于等于5M
                     */
                    void SetChaincode(const std::string& _chaincode);

                    /**
                     * 判断参数 Chaincode 是否已赋值
                     * @return Chaincode 是否已赋值
                     */
                    bool ChaincodeHasBeenSet() const;

                private:

                    /**
                     * 模块名，本接口取值：chaincode_mng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，本接口取值：chaincode_create_and_install_for_user
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 调用合约的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 合约安装节点名称，可以在通道详情中获取该通道上的节点名称
                     */
                    std::string m_peerName;
                    bool m_peerNameHasBeenSet;

                    /**
                     * 智能合约名称，格式说明：以小写字母开头，由2-12位数字或小写字母组成
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * 智能合约版本，格式说明：由1-12位数字、小写字母、特殊符号(“.”)组成，如v1.0
                     */
                    std::string m_chaincodeVersion;
                    bool m_chaincodeVersionHasBeenSet;

                    /**
                     * 智能合约代码文件类型，支持类型：
1. "go"：.go合约文件
2. "gozip"：go合约工程zip包，要求压缩目录为代码根目录
3. "javazip"：java合约工程zip包，要求压缩目录为代码根目录
4. "nodezip"：nodejs合约工程zip包，要求压缩目录为代码根目录
                     */
                    std::string m_chaincodeFileType;
                    bool m_chaincodeFileTypeHasBeenSet;

                    /**
                     * 合约内容，合约文件或压缩包内容的base64编码，大小要求小于等于5M
                     */
                    std::string m_chaincode;
                    bool m_chaincodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_CREATECHAINCODEANDINSTALLFORUSERREQUEST_H_
