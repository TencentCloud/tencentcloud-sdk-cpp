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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTHFAILMESSAGE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTHFAILMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 授权出错信息
                */
                class AuthFailMessage : public AbstractModel
                {
                public:
                    AuthFailMessage();
                    ~AuthFailMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方应用平台的子客企业OpenId
                     * @return ProxyOrganizationOpenId 第三方应用平台的子客企业OpenId
                     */
                    std::string GetProxyOrganizationOpenId() const;

                    /**
                     * 设置第三方应用平台的子客企业OpenId
                     * @param ProxyOrganizationOpenId 第三方应用平台的子客企业OpenId
                     */
                    void SetProxyOrganizationOpenId(const std::string& _proxyOrganizationOpenId);

                    /**
                     * 判断参数 ProxyOrganizationOpenId 是否已赋值
                     * @return ProxyOrganizationOpenId 是否已赋值
                     */
                    bool ProxyOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return Message 错误信息
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息
                     * @param Message 错误信息
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 第三方应用平台的子客企业OpenId
                     */
                    std::string m_proxyOrganizationOpenId;
                    bool m_proxyOrganizationOpenIdHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTHFAILMESSAGE_H_
