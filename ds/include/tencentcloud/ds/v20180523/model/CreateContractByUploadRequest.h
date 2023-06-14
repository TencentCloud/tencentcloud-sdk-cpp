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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_CREATECONTRACTBYUPLOADREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_CREATECONTRACTBYUPLOADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ds/v20180523/model/SignInfo.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * CreateContractByUpload请求参数结构体
                */
                class CreateContractByUploadRequest : public AbstractModel
                {
                public:
                    CreateContractByUploadRequest();
                    ~CreateContractByUploadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名ContractMng
                     * @return Module 模块名ContractMng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名ContractMng
                     * @param _module 模块名ContractMng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名CreateContractByUpload
                     * @return Operation 操作名CreateContractByUpload
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名CreateContractByUpload
                     * @param _operation 操作名CreateContractByUpload
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取签署人信息
                     * @return SignInfos 签署人信息
                     * 
                     */
                    std::vector<SignInfo> GetSignInfos() const;

                    /**
                     * 设置签署人信息
                     * @param _signInfos 签署人信息
                     * 
                     */
                    void SetSignInfos(const std::vector<SignInfo>& _signInfos);

                    /**
                     * 判断参数 SignInfos 是否已赋值
                     * @return SignInfos 是否已赋值
                     * 
                     */
                    bool SignInfosHasBeenSet() const;

                    /**
                     * 获取合同上传链接地址
                     * @return ContractFile 合同上传链接地址
                     * 
                     */
                    std::string GetContractFile() const;

                    /**
                     * 设置合同上传链接地址
                     * @param _contractFile 合同上传链接地址
                     * 
                     */
                    void SetContractFile(const std::string& _contractFile);

                    /**
                     * 判断参数 ContractFile 是否已赋值
                     * @return ContractFile 是否已赋值
                     * 
                     */
                    bool ContractFileHasBeenSet() const;

                    /**
                     * 获取合同名称
                     * @return ContractName 合同名称
                     * 
                     */
                    std::string GetContractName() const;

                    /**
                     * 设置合同名称
                     * @param _contractName 合同名称
                     * 
                     */
                    void SetContractName(const std::string& _contractName);

                    /**
                     * 判断参数 ContractName 是否已赋值
                     * @return ContractName 是否已赋值
                     * 
                     */
                    bool ContractNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remarks 备注
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 设置备注
                     * @param _remarks 备注
                     * 
                     */
                    void SetRemarks(const std::string& _remarks);

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取合同发起方腾讯云帐号ID（由平台自动填写）
                     * @return Initiator 合同发起方腾讯云帐号ID（由平台自动填写）
                     * 
                     */
                    std::string GetInitiator() const;

                    /**
                     * 设置合同发起方腾讯云帐号ID（由平台自动填写）
                     * @param _initiator 合同发起方腾讯云帐号ID（由平台自动填写）
                     * 
                     */
                    void SetInitiator(const std::string& _initiator);

                    /**
                     * 判断参数 Initiator 是否已赋值
                     * @return Initiator 是否已赋值
                     * 
                     */
                    bool InitiatorHasBeenSet() const;

                    /**
                     * 获取合同长时间未签署的过期时间
                     * @return ExpireTime 合同长时间未签署的过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置合同长时间未签署的过期时间
                     * @param _expireTime 合同长时间未签署的过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 模块名ContractMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名CreateContractByUpload
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 签署人信息
                     */
                    std::vector<SignInfo> m_signInfos;
                    bool m_signInfosHasBeenSet;

                    /**
                     * 合同上传链接地址
                     */
                    std::string m_contractFile;
                    bool m_contractFileHasBeenSet;

                    /**
                     * 合同名称
                     */
                    std::string m_contractName;
                    bool m_contractNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * 合同发起方腾讯云帐号ID（由平台自动填写）
                     */
                    std::string m_initiator;
                    bool m_initiatorHasBeenSet;

                    /**
                     * 合同长时间未签署的过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_CREATECONTRACTBYUPLOADREQUEST_H_
