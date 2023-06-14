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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_SENDPHONEEMAILCODEREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_SENDPHONEEMAILCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * SendPhoneEmailCode请求参数结构体
                */
                class SendPhoneEmailCodeRequest : public AbstractModel
                {
                public:
                    SendPhoneEmailCodeRequest();
                    ~SendPhoneEmailCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取手机或者邮箱号。
                     * @return Code 手机或者邮箱号。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置手机或者邮箱号。
                     * @param _code 手机或者邮箱号。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取1：手机  2：邮箱。
                     * @return Type 1：手机  2：邮箱。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置1：手机  2：邮箱。
                     * @param _type 1：手机  2：邮箱。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 手机或者邮箱号。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 1：手机  2：邮箱。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_SENDPHONEEMAILCODEREQUEST_H_
