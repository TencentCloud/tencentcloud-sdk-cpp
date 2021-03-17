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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICBCOSCONTRACTREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICBCOSCONTRACTREQUEST_H_

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
                * DeployDynamicBcosContract请求参数结构体
                */
                class DeployDynamicBcosContractRequest : public AbstractModel
                {
                public:
                    DeployDynamicBcosContractRequest();
                    ~DeployDynamicBcosContractRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID，可在区块链网络详情或列表中获取
                     * @param ClusterId 网络ID，可在区块链网络详情或列表中获取
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取群组编号，可在群组列表中获取
                     * @return GroupId 群组编号，可在群组列表中获取
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置群组编号，可在群组列表中获取
                     * @param GroupId 群组编号，可在群组列表中获取
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取合约编译后的ABI，可在合约详情获取
                     * @return AbiInfo 合约编译后的ABI，可在合约详情获取
                     */
                    std::string GetAbiInfo() const;

                    /**
                     * 设置合约编译后的ABI，可在合约详情获取
                     * @param AbiInfo 合约编译后的ABI，可在合约详情获取
                     */
                    void SetAbiInfo(const std::string& _abiInfo);

                    /**
                     * 判断参数 AbiInfo 是否已赋值
                     * @return AbiInfo 是否已赋值
                     */
                    bool AbiInfoHasBeenSet() const;

                    /**
                     * 获取合约编译得到的字节码，hex编码，可在合约详情获取
                     * @return ByteCodeBin 合约编译得到的字节码，hex编码，可在合约详情获取
                     */
                    std::string GetByteCodeBin() const;

                    /**
                     * 设置合约编译得到的字节码，hex编码，可在合约详情获取
                     * @param ByteCodeBin 合约编译得到的字节码，hex编码，可在合约详情获取
                     */
                    void SetByteCodeBin(const std::string& _byteCodeBin);

                    /**
                     * 判断参数 ByteCodeBin 是否已赋值
                     * @return ByteCodeBin 是否已赋值
                     */
                    bool ByteCodeBinHasBeenSet() const;

                    /**
                     * 获取签名用户编号，可在私钥管理页面获取
                     * @return SignUserId 签名用户编号，可在私钥管理页面获取
                     */
                    std::string GetSignUserId() const;

                    /**
                     * 设置签名用户编号，可在私钥管理页面获取
                     * @param SignUserId 签名用户编号，可在私钥管理页面获取
                     */
                    void SetSignUserId(const std::string& _signUserId);

                    /**
                     * 判断参数 SignUserId 是否已赋值
                     * @return SignUserId 是否已赋值
                     */
                    bool SignUserIdHasBeenSet() const;

                    /**
                     * 获取构造函数入参，Json数组，多个参数以逗号分隔（参数为数组时同理），如：["str1",["arr1","arr2"]]
                     * @return ConstructorParams 构造函数入参，Json数组，多个参数以逗号分隔（参数为数组时同理），如：["str1",["arr1","arr2"]]
                     */
                    std::string GetConstructorParams() const;

                    /**
                     * 设置构造函数入参，Json数组，多个参数以逗号分隔（参数为数组时同理），如：["str1",["arr1","arr2"]]
                     * @param ConstructorParams 构造函数入参，Json数组，多个参数以逗号分隔（参数为数组时同理），如：["str1",["arr1","arr2"]]
                     */
                    void SetConstructorParams(const std::string& _constructorParams);

                    /**
                     * 判断参数 ConstructorParams 是否已赋值
                     * @return ConstructorParams 是否已赋值
                     */
                    bool ConstructorParamsHasBeenSet() const;

                private:

                    /**
                     * 网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组编号，可在群组列表中获取
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 合约编译后的ABI，可在合约详情获取
                     */
                    std::string m_abiInfo;
                    bool m_abiInfoHasBeenSet;

                    /**
                     * 合约编译得到的字节码，hex编码，可在合约详情获取
                     */
                    std::string m_byteCodeBin;
                    bool m_byteCodeBinHasBeenSet;

                    /**
                     * 签名用户编号，可在私钥管理页面获取
                     */
                    std::string m_signUserId;
                    bool m_signUserIdHasBeenSet;

                    /**
                     * 构造函数入参，Json数组，多个参数以逗号分隔（参数为数组时同理），如：["str1",["arr1","arr2"]]
                     */
                    std::string m_constructorParams;
                    bool m_constructorParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICBCOSCONTRACTREQUEST_H_
