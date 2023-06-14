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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYUSERCERTREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYUSERCERTREQUEST_H_

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
                * ApplyUserCert请求参数结构体
                */
                class ApplyUserCertRequest : public AbstractModel
                {
                public:
                    ApplyUserCertRequest();
                    ~ApplyUserCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定字段：cert_mng
                     * @return Module 模块名，固定字段：cert_mng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定字段：cert_mng
                     * @param _module 模块名，固定字段：cert_mng
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
                     * 获取操作名，固定字段：cert_apply_for_user
                     * @return Operation 操作名，固定字段：cert_apply_for_user
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，固定字段：cert_apply_for_user
                     * @param _operation 操作名，固定字段：cert_apply_for_user
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
                     * 获取区块链网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置区块链网络ID，可在区块链网络详情或列表中获取
                     * @param _clusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取申请证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @return GroupName 申请证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置申请证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     * @param _groupName 申请证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取用户证书标识，用于标识用户证书，要求由纯小写字母组成，长度小于10
                     * @return UserIdentity 用户证书标识，用于标识用户证书，要求由纯小写字母组成，长度小于10
                     * 
                     */
                    std::string GetUserIdentity() const;

                    /**
                     * 设置用户证书标识，用于标识用户证书，要求由纯小写字母组成，长度小于10
                     * @param _userIdentity 用户证书标识，用于标识用户证书，要求由纯小写字母组成，长度小于10
                     * 
                     */
                    void SetUserIdentity(const std::string& _userIdentity);

                    /**
                     * 判断参数 UserIdentity 是否已赋值
                     * @return UserIdentity 是否已赋值
                     * 
                     */
                    bool UserIdentityHasBeenSet() const;

                    /**
                     * 获取证书申请实体，使用腾讯云账号实名认证的名称
                     * @return Applicant 证书申请实体，使用腾讯云账号实名认证的名称
                     * 
                     */
                    std::string GetApplicant() const;

                    /**
                     * 设置证书申请实体，使用腾讯云账号实名认证的名称
                     * @param _applicant 证书申请实体，使用腾讯云账号实名认证的名称
                     * 
                     */
                    void SetApplicant(const std::string& _applicant);

                    /**
                     * 判断参数 Applicant 是否已赋值
                     * @return Applicant 是否已赋值
                     * 
                     */
                    bool ApplicantHasBeenSet() const;

                    /**
                     * 获取证件号码。如果腾讯云账号对应的实名认证类型为企业认证，填入“0”；如果腾讯云账号对应的实名认证类型为个人认证，填入个人身份证号码
                     * @return IdentityNum 证件号码。如果腾讯云账号对应的实名认证类型为企业认证，填入“0”；如果腾讯云账号对应的实名认证类型为个人认证，填入个人身份证号码
                     * 
                     */
                    std::string GetIdentityNum() const;

                    /**
                     * 设置证件号码。如果腾讯云账号对应的实名认证类型为企业认证，填入“0”；如果腾讯云账号对应的实名认证类型为个人认证，填入个人身份证号码
                     * @param _identityNum 证件号码。如果腾讯云账号对应的实名认证类型为企业认证，填入“0”；如果腾讯云账号对应的实名认证类型为个人认证，填入个人身份证号码
                     * 
                     */
                    void SetIdentityNum(const std::string& _identityNum);

                    /**
                     * 判断参数 IdentityNum 是否已赋值
                     * @return IdentityNum 是否已赋值
                     * 
                     */
                    bool IdentityNumHasBeenSet() const;

                    /**
                     * 获取csr p10证书文件。需要用户根据文档生成证书的CSR文件
                     * @return CsrData csr p10证书文件。需要用户根据文档生成证书的CSR文件
                     * 
                     */
                    std::string GetCsrData() const;

                    /**
                     * 设置csr p10证书文件。需要用户根据文档生成证书的CSR文件
                     * @param _csrData csr p10证书文件。需要用户根据文档生成证书的CSR文件
                     * 
                     */
                    void SetCsrData(const std::string& _csrData);

                    /**
                     * 判断参数 CsrData 是否已赋值
                     * @return CsrData 是否已赋值
                     * 
                     */
                    bool CsrDataHasBeenSet() const;

                    /**
                     * 获取证书备注信息
                     * @return Notes 证书备注信息
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置证书备注信息
                     * @param _notes 证书备注信息
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定字段：cert_mng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，固定字段：cert_apply_for_user
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 申请证书的组织名称，可以在组织管理列表中获取当前组织的名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 用户证书标识，用于标识用户证书，要求由纯小写字母组成，长度小于10
                     */
                    std::string m_userIdentity;
                    bool m_userIdentityHasBeenSet;

                    /**
                     * 证书申请实体，使用腾讯云账号实名认证的名称
                     */
                    std::string m_applicant;
                    bool m_applicantHasBeenSet;

                    /**
                     * 证件号码。如果腾讯云账号对应的实名认证类型为企业认证，填入“0”；如果腾讯云账号对应的实名认证类型为个人认证，填入个人身份证号码
                     */
                    std::string m_identityNum;
                    bool m_identityNumHasBeenSet;

                    /**
                     * csr p10证书文件。需要用户根据文档生成证书的CSR文件
                     */
                    std::string m_csrData;
                    bool m_csrDataHasBeenSet;

                    /**
                     * 证书备注信息
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYUSERCERTREQUEST_H_
