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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePreparedPersonalEsign请求参数结构体
                */
                class CreatePreparedPersonalEsignRequest : public AbstractModel
                {
                public:
                    CreatePreparedPersonalEsignRequest();
                    ~CreatePreparedPersonalEsignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取个人用户名称
                     * @return UserName 个人用户名称
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置个人用户名称
                     * @param UserName 个人用户名称
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取身份证件号码
                     * @return IdCardNumber 身份证件号码
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置身份证件号码
                     * @param IdCardNumber 身份证件号码
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取印章图片的base64
                     * @return SealImage 印章图片的base64
                     */
                    std::string GetSealImage() const;

                    /**
                     * 设置印章图片的base64
                     * @param SealImage 印章图片的base64
                     */
                    void SetSealImage(const std::string& _sealImage);

                    /**
                     * 判断参数 SealImage 是否已赋值
                     * @return SealImage 是否已赋值
                     */
                    bool SealImageHasBeenSet() const;

                    /**
                     * 获取印章名称
                     * @return SealName 印章名称
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置印章名称
                     * @param SealName 印章名称
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     * @return Operator 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     * @param Operator 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取身份证件类型:
ID_CARD 身份证
PASSPORT 护照
HONGKONG_AND_MACAO 中国香港
FOREIGN_ID_CARD 境外身份
HONGKONG_MACAO_AND_TAIWAN 中国台湾
                     * @return IdCardType 身份证件类型:
ID_CARD 身份证
PASSPORT 护照
HONGKONG_AND_MACAO 中国香港
FOREIGN_ID_CARD 境外身份
HONGKONG_MACAO_AND_TAIWAN 中国台湾
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置身份证件类型:
ID_CARD 身份证
PASSPORT 护照
HONGKONG_AND_MACAO 中国香港
FOREIGN_ID_CARD 境外身份
HONGKONG_MACAO_AND_TAIWAN 中国台湾
                     * @param IdCardType 身份证件类型:
ID_CARD 身份证
PASSPORT 护照
HONGKONG_AND_MACAO 中国香港
FOREIGN_ID_CARD 境外身份
HONGKONG_MACAO_AND_TAIWAN 中国台湾
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取手机号码；当需要开通自动签时，该参数必传
                     * @return Mobile 手机号码；当需要开通自动签时，该参数必传
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号码；当需要开通自动签时，该参数必传
                     * @param Mobile 手机号码；当需要开通自动签时，该参数必传
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取是否开通自动签，该功能需联系运营工作人员开通后使用
                     * @return EnableAutoSign 是否开通自动签，该功能需联系运营工作人员开通后使用
                     */
                    bool GetEnableAutoSign() const;

                    /**
                     * 设置是否开通自动签，该功能需联系运营工作人员开通后使用
                     * @param EnableAutoSign 是否开通自动签，该功能需联系运营工作人员开通后使用
                     */
                    void SetEnableAutoSign(const bool& _enableAutoSign);

                    /**
                     * 判断参数 EnableAutoSign 是否已赋值
                     * @return EnableAutoSign 是否已赋值
                     */
                    bool EnableAutoSignHasBeenSet() const;

                private:

                    /**
                     * 个人用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 身份证件号码
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 印章图片的base64
                     */
                    std::string m_sealImage;
                    bool m_sealImageHasBeenSet;

                    /**
                     * 印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 调用方用户信息，userId 必填。支持填入集团子公司经办人 userId代发合同。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 身份证件类型:
ID_CARD 身份证
PASSPORT 护照
HONGKONG_AND_MACAO 中国香港
FOREIGN_ID_CARD 境外身份
HONGKONG_MACAO_AND_TAIWAN 中国台湾
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 手机号码；当需要开通自动签时，该参数必传
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 是否开通自动签，该功能需联系运营工作人员开通后使用
                     */
                    bool m_enableAutoSign;
                    bool m_enableAutoSignHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNREQUEST_H_
