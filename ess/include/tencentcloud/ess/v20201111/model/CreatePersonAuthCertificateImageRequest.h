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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGEREQUEST_H_

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
                * CreatePersonAuthCertificateImage请求参数结构体
                */
                class CreatePersonAuthCertificateImageRequest : public AbstractModel
                {
                public:
                    CreatePersonAuthCertificateImageRequest();
                    ~CreatePersonAuthCertificateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取个人用户名称
                     * @return UserName 个人用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置个人用户名称
                     * @param _userName 个人用户名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取身份证件类型取值：
ID_CARD 身居民身份证
PASSPORT 护照
HONGKONG_AND_MACAO 港澳居民来往内地通行证
FOREIGN_ID_CARD 外国人永久居留身份证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @return IdCardType 身份证件类型取值：
ID_CARD 身居民身份证
PASSPORT 护照
HONGKONG_AND_MACAO 港澳居民来往内地通行证
FOREIGN_ID_CARD 外国人永久居留身份证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置身份证件类型取值：
ID_CARD 身居民身份证
PASSPORT 护照
HONGKONG_AND_MACAO 港澳居民来往内地通行证
FOREIGN_ID_CARD 外国人永久居留身份证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @param _idCardType 身份证件类型取值：
ID_CARD 身居民身份证
PASSPORT 护照
HONGKONG_AND_MACAO 港澳居民来往内地通行证
FOREIGN_ID_CARD 外国人永久居留身份证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取身份证件号码
                     * @return IdCardNumber 身份证件号码
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置身份证件号码
                     * @param _idCardNumber 身份证件号码
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 个人用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 身份证件类型取值：
ID_CARD 身居民身份证
PASSPORT 护照
HONGKONG_AND_MACAO 港澳居民来往内地通行证
FOREIGN_ID_CARD 外国人永久居留身份证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 身份证件号码
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGEREQUEST_H_
