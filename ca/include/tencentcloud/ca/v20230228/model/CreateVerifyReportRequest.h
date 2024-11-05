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

#ifndef TENCENTCLOUD_CA_V20230228_MODEL_CREATEVERIFYREPORTREQUEST_H_
#define TENCENTCLOUD_CA_V20230228_MODEL_CREATEVERIFYREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ca/v20230228/model/CertificateIdentityUser.h>


namespace TencentCloud
{
    namespace Ca
    {
        namespace V20230228
        {
            namespace Model
            {
                /**
                * CreateVerifyReport请求参数结构体
                */
                class CreateVerifyReportRequest : public AbstractModel
                {
                public:
                    CreateVerifyReportRequest();
                    ~CreateVerifyReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请者类型 1:个人，2:企业
                     * @return ApplyCustomerType 申请者类型 1:个人，2:企业
                     * 
                     */
                    std::string GetApplyCustomerType() const;

                    /**
                     * 设置申请者类型 1:个人，2:企业
                     * @param _applyCustomerType 申请者类型 1:个人，2:企业
                     * 
                     */
                    void SetApplyCustomerType(const std::string& _applyCustomerType);

                    /**
                     * 判断参数 ApplyCustomerType 是否已赋值
                     * @return ApplyCustomerType 是否已赋值
                     * 
                     */
                    bool ApplyCustomerTypeHasBeenSet() const;

                    /**
                     * 获取申请企业 or 自然人名称
                     * @return ApplyCustomerName 申请企业 or 自然人名称
                     * 
                     */
                    std::string GetApplyCustomerName() const;

                    /**
                     * 设置申请企业 or 自然人名称
                     * @param _applyCustomerName 申请企业 or 自然人名称
                     * 
                     */
                    void SetApplyCustomerName(const std::string& _applyCustomerName);

                    /**
                     * 判断参数 ApplyCustomerName 是否已赋值
                     * @return ApplyCustomerName 是否已赋值
                     * 
                     */
                    bool ApplyCustomerNameHasBeenSet() const;

                    /**
                     * 获取验签申请经办人姓名
                     * @return ApplyName 验签申请经办人姓名
                     * 
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置验签申请经办人姓名
                     * @param _applyName 验签申请经办人姓名
                     * 
                     */
                    void SetApplyName(const std::string& _applyName);

                    /**
                     * 判断参数 ApplyName 是否已赋值
                     * @return ApplyName 是否已赋值
                     * 
                     */
                    bool ApplyNameHasBeenSet() const;

                    /**
                     * 获取验签申请经办人电话
                     * @return ApplyMobile 验签申请经办人电话
                     * 
                     */
                    std::string GetApplyMobile() const;

                    /**
                     * 设置验签申请经办人电话
                     * @param _applyMobile 验签申请经办人电话
                     * 
                     */
                    void SetApplyMobile(const std::string& _applyMobile);

                    /**
                     * 判断参数 ApplyMobile 是否已赋值
                     * @return ApplyMobile 是否已赋值
                     * 
                     */
                    bool ApplyMobileHasBeenSet() const;

                    /**
                     * 获取验签文件id
                     * @return FileId 验签文件id
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置验签文件id
                     * @param _fileId 验签文件id
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取验签申请经办人邮箱
                     * @return ApplyEmail 验签申请经办人邮箱
                     * 
                     */
                    std::string GetApplyEmail() const;

                    /**
                     * 设置验签申请经办人邮箱
                     * @param _applyEmail 验签申请经办人邮箱
                     * 
                     */
                    void SetApplyEmail(const std::string& _applyEmail);

                    /**
                     * 判断参数 ApplyEmail 是否已赋值
                     * @return ApplyEmail 是否已赋值
                     * 
                     */
                    bool ApplyEmailHasBeenSet() const;

                    /**
                     * 获取证书用户身份及身份鉴别信息
                     * @return CertificateIdentityUsers 证书用户身份及身份鉴别信息
                     * 
                     */
                    std::vector<CertificateIdentityUser> GetCertificateIdentityUsers() const;

                    /**
                     * 设置证书用户身份及身份鉴别信息
                     * @param _certificateIdentityUsers 证书用户身份及身份鉴别信息
                     * 
                     */
                    void SetCertificateIdentityUsers(const std::vector<CertificateIdentityUser>& _certificateIdentityUsers);

                    /**
                     * 判断参数 CertificateIdentityUsers 是否已赋值
                     * @return CertificateIdentityUsers 是否已赋值
                     * 
                     */
                    bool CertificateIdentityUsersHasBeenSet() const;

                private:

                    /**
                     * 申请者类型 1:个人，2:企业
                     */
                    std::string m_applyCustomerType;
                    bool m_applyCustomerTypeHasBeenSet;

                    /**
                     * 申请企业 or 自然人名称
                     */
                    std::string m_applyCustomerName;
                    bool m_applyCustomerNameHasBeenSet;

                    /**
                     * 验签申请经办人姓名
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * 验签申请经办人电话
                     */
                    std::string m_applyMobile;
                    bool m_applyMobileHasBeenSet;

                    /**
                     * 验签文件id
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 验签申请经办人邮箱
                     */
                    std::string m_applyEmail;
                    bool m_applyEmailHasBeenSet;

                    /**
                     * 证书用户身份及身份鉴别信息
                     */
                    std::vector<CertificateIdentityUser> m_certificateIdentityUsers;
                    bool m_certificateIdentityUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CA_V20230228_MODEL_CREATEVERIFYREPORTREQUEST_H_
