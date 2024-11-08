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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDNAMEDATEREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDNAMEDATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckIdNameDate请求参数结构体
                */
                class CheckIdNameDateRequest : public AbstractModel
                {
                public:
                    CheckIdNameDateRequest();
                    ~CheckIdNameDateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取姓名。
                     * @return Name 姓名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。
                     * @param _name 姓名。
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
                     * 获取身份证号。
                     * @return IdCard 身份证号。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份证号。
                     * @param _idCard 身份证号。
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取身份证有效期开始时间。
- 格式：YYYYMMDD，如：20210701。
                     * @return ValidityBegin 身份证有效期开始时间。
- 格式：YYYYMMDD，如：20210701。
                     * 
                     */
                    std::string GetValidityBegin() const;

                    /**
                     * 设置身份证有效期开始时间。
- 格式：YYYYMMDD，如：20210701。
                     * @param _validityBegin 身份证有效期开始时间。
- 格式：YYYYMMDD，如：20210701。
                     * 
                     */
                    void SetValidityBegin(const std::string& _validityBegin);

                    /**
                     * 判断参数 ValidityBegin 是否已赋值
                     * @return ValidityBegin 是否已赋值
                     * 
                     */
                    bool ValidityBeginHasBeenSet() const;

                    /**
                     * 获取身份证有效期到期时间。
格式：YYYYMMDD，长期用“00000000”代替，如：20210701。
                     * @return ValidityEnd 身份证有效期到期时间。
格式：YYYYMMDD，长期用“00000000”代替，如：20210701。
                     * 
                     */
                    std::string GetValidityEnd() const;

                    /**
                     * 设置身份证有效期到期时间。
格式：YYYYMMDD，长期用“00000000”代替，如：20210701。
                     * @param _validityEnd 身份证有效期到期时间。
格式：YYYYMMDD，长期用“00000000”代替，如：20210701。
                     * 
                     */
                    void SetValidityEnd(const std::string& _validityEnd);

                    /**
                     * 判断参数 ValidityEnd 是否已赋值
                     * @return ValidityEnd 是否已赋值
                     * 
                     */
                    bool ValidityEndHasBeenSet() const;

                    /**
                     * 获取敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param _encryption 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * 姓名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 身份证号。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 身份证有效期开始时间。
- 格式：YYYYMMDD，如：20210701。
                     */
                    std::string m_validityBegin;
                    bool m_validityBeginHasBeenSet;

                    /**
                     * 身份证有效期到期时间。
格式：YYYYMMDD，长期用“00000000”代替，如：20210701。
                     */
                    std::string m_validityEnd;
                    bool m_validityEndHasBeenSet;

                    /**
                     * 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDNAMEDATEREQUEST_H_
