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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_SYNCCONTRACTDATAREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_SYNCCONTRACTDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ContractSyncInfo.h>
#include <tencentcloud/cpdp/v20190820/model/SceneInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * SyncContractData请求参数结构体
                */
                class SyncContractDataRequest : public AbstractModel
                {
                public:
                    SyncContractDataRequest();
                    ~SyncContractDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取用户ID，长度不小于5位，仅支持字母和数字的组合
                     * @return UserId 用户ID，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID，长度不小于5位，仅支持字母和数字的组合
                     * @param _userId 用户ID，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取签约使用的渠道
                     * @return Channel 签约使用的渠道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置签约使用的渠道
                     * @param _channel 签约使用的渠道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取业务签约合同协议号
                     * @return OutContractCode 业务签约合同协议号
                     * 
                     */
                    std::string GetOutContractCode() const;

                    /**
                     * 设置业务签约合同协议号
                     * @param _outContractCode 业务签约合同协议号
                     * 
                     */
                    void SetOutContractCode(const std::string& _outContractCode);

                    /**
                     * 判断参数 OutContractCode 是否已赋值
                     * @return OutContractCode 是否已赋值
                     * 
                     */
                    bool OutContractCodeHasBeenSet() const;

                    /**
                     * 获取签约状态，枚举值
CONTRACT_STATUS_INVALID=无效状态
CONTRACT_STATUS_SIGNED=已签约
CONTRACT_STATUS_TERMINATED=已解约
CONTRACT_STATUS_PENDING=签约进行中
                     * @return ContractStatus 签约状态，枚举值
CONTRACT_STATUS_INVALID=无效状态
CONTRACT_STATUS_SIGNED=已签约
CONTRACT_STATUS_TERMINATED=已解约
CONTRACT_STATUS_PENDING=签约进行中
                     * 
                     */
                    std::string GetContractStatus() const;

                    /**
                     * 设置签约状态，枚举值
CONTRACT_STATUS_INVALID=无效状态
CONTRACT_STATUS_SIGNED=已签约
CONTRACT_STATUS_TERMINATED=已解约
CONTRACT_STATUS_PENDING=签约进行中
                     * @param _contractStatus 签约状态，枚举值
CONTRACT_STATUS_INVALID=无效状态
CONTRACT_STATUS_SIGNED=已签约
CONTRACT_STATUS_TERMINATED=已解约
CONTRACT_STATUS_PENDING=签约进行中
                     * 
                     */
                    void SetContractStatus(const std::string& _contractStatus);

                    /**
                     * 判断参数 ContractStatus 是否已赋值
                     * @return ContractStatus 是否已赋值
                     * 
                     */
                    bool ContractStatusHasBeenSet() const;

                    /**
                     * 获取签约同步信息
                     * @return ContractSyncInfo 签约同步信息
                     * 
                     */
                    ContractSyncInfo GetContractSyncInfo() const;

                    /**
                     * 设置签约同步信息
                     * @param _contractSyncInfo 签约同步信息
                     * 
                     */
                    void SetContractSyncInfo(const ContractSyncInfo& _contractSyncInfo);

                    /**
                     * 判断参数 ContractSyncInfo 是否已赋值
                     * @return ContractSyncInfo 是否已赋值
                     * 
                     */
                    bool ContractSyncInfoHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param _midasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param _midasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param _subAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取用户类型，枚举值
USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * @return UserType 用户类型，枚举值
USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型，枚举值
USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * @param _userType 用户类型，枚举值
USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取场景信息
                     * @return SceneInfo 场景信息
                     * 
                     */
                    SceneInfo GetSceneInfo() const;

                    /**
                     * 设置场景信息
                     * @param _sceneInfo 场景信息
                     * 
                     */
                    void SetSceneInfo(const SceneInfo& _sceneInfo);

                    /**
                     * 判断参数 SceneInfo 是否已赋值
                     * @return SceneInfo 是否已赋值
                     * 
                     */
                    bool SceneInfoHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 用户ID，长度不小于5位，仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 签约使用的渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 业务签约合同协议号
                     */
                    std::string m_outContractCode;
                    bool m_outContractCodeHasBeenSet;

                    /**
                     * 签约状态，枚举值
CONTRACT_STATUS_INVALID=无效状态
CONTRACT_STATUS_SIGNED=已签约
CONTRACT_STATUS_TERMINATED=已解约
CONTRACT_STATUS_PENDING=签约进行中
                     */
                    std::string m_contractStatus;
                    bool m_contractStatusHasBeenSet;

                    /**
                     * 签约同步信息
                     */
                    ContractSyncInfo m_contractSyncInfo;
                    bool m_contractSyncInfoHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 用户类型，枚举值
USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 场景信息
                     */
                    SceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_SYNCCONTRACTDATAREQUEST_H_
