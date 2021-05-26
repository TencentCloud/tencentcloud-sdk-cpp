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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/GetEidTokenConfig.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetEidToken请求参数结构体
                */
                class GetEidTokenRequest : public AbstractModel
                {
                public:
                    GetEidTokenRequest();
                    ~GetEidTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EID商户id，字段长度最长50位。
                     * @return MerchantId EID商户id，字段长度最长50位。
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置EID商户id，字段长度最长50位。
                     * @param MerchantId EID商户id，字段长度最长50位。
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取身份标识（未使用OCR服务时，必须传入）。
规则：a-zA-Z0-9组合。最长长度32位。
                     * @return IdCard 身份标识（未使用OCR服务时，必须传入）。
规则：a-zA-Z0-9组合。最长长度32位。
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份标识（未使用OCR服务时，必须传入）。
规则：a-zA-Z0-9组合。最长长度32位。
                     * @param IdCard 身份标识（未使用OCR服务时，必须传入）。
规则：a-zA-Z0-9组合。最长长度32位。
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取姓名。（未使用OCR服务时，必须传入）最长长度32位。中文请使用UTF-8编码。
                     * @return Name 姓名。（未使用OCR服务时，必须传入）最长长度32位。中文请使用UTF-8编码。
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。（未使用OCR服务时，必须传入）最长长度32位。中文请使用UTF-8编码。
                     * @param Name 姓名。（未使用OCR服务时，必须传入）最长长度32位。中文请使用UTF-8编码。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取透传字段，在获取验证结果时返回。最长长度1024位。
                     * @return Extra 透传字段，在获取验证结果时返回。最长长度1024位。
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传字段，在获取验证结果时返回。最长长度1024位。
                     * @param Extra 透传字段，在获取验证结果时返回。最长长度1024位。
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取小程序模式配置，包括如何传入姓名身份证的配置。
                     * @return Config 小程序模式配置，包括如何传入姓名身份证的配置。
                     */
                    GetEidTokenConfig GetConfig() const;

                    /**
                     * 设置小程序模式配置，包括如何传入姓名身份证的配置。
                     * @param Config 小程序模式配置，包括如何传入姓名身份证的配置。
                     */
                    void SetConfig(const GetEidTokenConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * EID商户id，字段长度最长50位。
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 身份标识（未使用OCR服务时，必须传入）。
规则：a-zA-Z0-9组合。最长长度32位。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名。（未使用OCR服务时，必须传入）最长长度32位。中文请使用UTF-8编码。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 透传字段，在获取验证结果时返回。最长长度1024位。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 小程序模式配置，包括如何传入姓名身份证的配置。
                     */
                    GetEidTokenConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDTOKENREQUEST_H_
