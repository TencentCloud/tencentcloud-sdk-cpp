/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEWECHATAPPLETREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEWECHATAPPLETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateWechatApplet请求参数结构体
                */
                class CreateWechatAppletRequest : public AbstractModel
                {
                public:
                    CreateWechatAppletRequest();
                    ~CreateWechatAppletRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业Id
                     * @return CustomerId 企业Id
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业Id
                     * @param _customerId 企业Id
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取图片地址
                     * @return Logo 图片地址
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置图片地址
                     * @param _logo 图片地址
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return AccountId 账号
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账号
                     * @param _accountId 账号
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取二维码
                     * @return QrCode 二维码
                     * 
                     */
                    std::string GetQrCode() const;

                    /**
                     * 设置二维码
                     * @param _qrCode 二维码
                     * 
                     */
                    void SetQrCode(const std::string& _qrCode);

                    /**
                     * 判断参数 QrCode 是否已赋值
                     * @return QrCode 是否已赋值
                     * 
                     */
                    bool QrCodeHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取子公司
                     * @return EnterpriseUid 子公司
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司
                     * @param _enterpriseUid 子公司
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                    /**
                     * 获取账号Appid
                     * @return AccountAppid 账号Appid
                     * 
                     */
                    std::string GetAccountAppid() const;

                    /**
                     * 设置账号Appid
                     * @param _accountAppid 账号Appid
                     * 
                     */
                    void SetAccountAppid(const std::string& _accountAppid);

                    /**
                     * 判断参数 AccountAppid 是否已赋值
                     * @return AccountAppid 是否已赋值
                     * 
                     */
                    bool AccountAppidHasBeenSet() const;

                    /**
                     * 获取认证主体
                     * @return RecordSubject 认证主体
                     * 
                     */
                    std::string GetRecordSubject() const;

                    /**
                     * 设置认证主体
                     * @param _recordSubject 认证主体
                     * 
                     */
                    void SetRecordSubject(const std::string& _recordSubject);

                    /**
                     * 判断参数 RecordSubject 是否已赋值
                     * @return RecordSubject 是否已赋值
                     * 
                     */
                    bool RecordSubjectHasBeenSet() const;

                private:

                    /**
                     * 企业Id
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片地址
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 二维码
                     */
                    std::string m_qrCode;
                    bool m_qrCodeHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 子公司
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * 账号Appid
                     */
                    std::string m_accountAppid;
                    bool m_accountAppidHasBeenSet;

                    /**
                     * 认证主体
                     */
                    std::string m_recordSubject;
                    bool m_recordSubjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEWECHATAPPLETREQUEST_H_
