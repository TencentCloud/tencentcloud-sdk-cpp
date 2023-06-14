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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKMERCHANTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKMERCHANTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateOpenBankMerchant请求参数结构体
                */
                class CreateOpenBankMerchantRequest : public AbstractModel
                {
                public:
                    CreateOpenBankMerchantRequest();
                    ~CreateOpenBankMerchantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取外部商户ID。
                     * @return OutMerchantId 外部商户ID。
                     * 
                     */
                    std::string GetOutMerchantId() const;

                    /**
                     * 设置外部商户ID。
                     * @param _outMerchantId 外部商户ID。
                     * 
                     */
                    void SetOutMerchantId(const std::string& _outMerchantId);

                    /**
                     * 判断参数 OutMerchantId 是否已赋值
                     * @return OutMerchantId 是否已赋值
                     * 
                     */
                    bool OutMerchantIdHasBeenSet() const;

                    /**
                     * 获取渠道名称。
__TENPAY__: 商企付
                     * @return ChannelName 渠道名称。
__TENPAY__: 商企付
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。
__TENPAY__: 商企付
                     * @param _channelName 渠道名称。
__TENPAY__: 商企付
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取外部商户名称。
                     * @return OutMerchantName 外部商户名称。
                     * 
                     */
                    std::string GetOutMerchantName() const;

                    /**
                     * 设置外部商户名称。
                     * @param _outMerchantName 外部商户名称。
                     * 
                     */
                    void SetOutMerchantName(const std::string& _outMerchantName);

                    /**
                     * 判断参数 OutMerchantName 是否已赋值
                     * @return OutMerchantName 是否已赋值
                     * 
                     */
                    bool OutMerchantNameHasBeenSet() const;

                    /**
                     * 获取第三方渠道商户信息。详情见附录-复杂类型。
                     * @return ExternalMerchantInfo 第三方渠道商户信息。详情见附录-复杂类型。
                     * 
                     */
                    std::string GetExternalMerchantInfo() const;

                    /**
                     * 设置第三方渠道商户信息。详情见附录-复杂类型。
                     * @param _externalMerchantInfo 第三方渠道商户信息。详情见附录-复杂类型。
                     * 
                     */
                    void SetExternalMerchantInfo(const std::string& _externalMerchantInfo);

                    /**
                     * 判断参数 ExternalMerchantInfo 是否已赋值
                     * @return ExternalMerchantInfo 是否已赋值
                     * 
                     */
                    bool ExternalMerchantInfoHasBeenSet() const;

                    /**
                     * 获取外部商户简称。
                     * @return OutMerchantShortName 外部商户简称。
                     * 
                     */
                    std::string GetOutMerchantShortName() const;

                    /**
                     * 设置外部商户简称。
                     * @param _outMerchantShortName 外部商户简称。
                     * 
                     */
                    void SetOutMerchantShortName(const std::string& _outMerchantShortName);

                    /**
                     * 判断参数 OutMerchantShortName 是否已赋值
                     * @return OutMerchantShortName 是否已赋值
                     * 
                     */
                    bool OutMerchantShortNameHasBeenSet() const;

                    /**
                     * 获取外部商户描述
                     * @return OutMerchantDescription 外部商户描述
                     * 
                     */
                    std::string GetOutMerchantDescription() const;

                    /**
                     * 设置外部商户描述
                     * @param _outMerchantDescription 外部商户描述
                     * 
                     */
                    void SetOutMerchantDescription(const std::string& _outMerchantDescription);

                    /**
                     * 判断参数 OutMerchantDescription 是否已赋值
                     * @return OutMerchantDescription 是否已赋值
                     * 
                     */
                    bool OutMerchantDescriptionHasBeenSet() const;

                    /**
                     * 获取环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return Environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 外部商户ID。
                     */
                    std::string m_outMerchantId;
                    bool m_outMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。
__TENPAY__: 商企付
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 外部商户名称。
                     */
                    std::string m_outMerchantName;
                    bool m_outMerchantNameHasBeenSet;

                    /**
                     * 第三方渠道商户信息。详情见附录-复杂类型。
                     */
                    std::string m_externalMerchantInfo;
                    bool m_externalMerchantInfoHasBeenSet;

                    /**
                     * 外部商户简称。
                     */
                    std::string m_outMerchantShortName;
                    bool m_outMerchantShortNameHasBeenSet;

                    /**
                     * 外部商户描述
                     */
                    std::string m_outMerchantDescription;
                    bool m_outMerchantDescriptionHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKMERCHANTREQUEST_H_
