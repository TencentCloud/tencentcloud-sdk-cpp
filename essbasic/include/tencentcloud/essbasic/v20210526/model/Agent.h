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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AGENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 应用相关信息
                */
                class Agent : public AbstractModel
                {
                public:
                    Agent();
                    ~Agent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯电子签颁发给渠道的应用ID，32位字符串
                     * @return AppId 腾讯电子签颁发给渠道的应用ID，32位字符串
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置腾讯电子签颁发给渠道的应用ID，32位字符串
                     * @param AppId 腾讯电子签颁发给渠道的应用ID，32位字符串
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取渠道/平台合作企业的企业ID，最大64位字符串
                     * @return ProxyOrganizationOpenId 渠道/平台合作企业的企业ID，最大64位字符串
                     */
                    std::string GetProxyOrganizationOpenId() const;

                    /**
                     * 设置渠道/平台合作企业的企业ID，最大64位字符串
                     * @param ProxyOrganizationOpenId 渠道/平台合作企业的企业ID，最大64位字符串
                     */
                    void SetProxyOrganizationOpenId(const std::string& _proxyOrganizationOpenId);

                    /**
                     * 判断参数 ProxyOrganizationOpenId 是否已赋值
                     * @return ProxyOrganizationOpenId 是否已赋值
                     */
                    bool ProxyOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取渠道/平台合作企业经办人（操作员）
                     * @return ProxyOperator 渠道/平台合作企业经办人（操作员）
                     */
                    UserInfo GetProxyOperator() const;

                    /**
                     * 设置渠道/平台合作企业经办人（操作员）
                     * @param ProxyOperator 渠道/平台合作企业经办人（操作员）
                     */
                    void SetProxyOperator(const UserInfo& _proxyOperator);

                    /**
                     * 判断参数 ProxyOperator 是否已赋值
                     * @return ProxyOperator 是否已赋值
                     */
                    bool ProxyOperatorHasBeenSet() const;

                    /**
                     * 获取腾讯电子签颁发给渠道侧合作企业的应用ID
                     * @return ProxyAppId 腾讯电子签颁发给渠道侧合作企业的应用ID
                     */
                    std::string GetProxyAppId() const;

                    /**
                     * 设置腾讯电子签颁发给渠道侧合作企业的应用ID
                     * @param ProxyAppId 腾讯电子签颁发给渠道侧合作企业的应用ID
                     */
                    void SetProxyAppId(const std::string& _proxyAppId);

                    /**
                     * 判断参数 ProxyAppId 是否已赋值
                     * @return ProxyAppId 是否已赋值
                     */
                    bool ProxyAppIdHasBeenSet() const;

                    /**
                     * 获取内部参数，腾讯电子签颁发给渠道侧合作企业的企业ID，不需要传
                     * @return ProxyOrganizationId 内部参数，腾讯电子签颁发给渠道侧合作企业的企业ID，不需要传
                     */
                    std::string GetProxyOrganizationId() const;

                    /**
                     * 设置内部参数，腾讯电子签颁发给渠道侧合作企业的企业ID，不需要传
                     * @param ProxyOrganizationId 内部参数，腾讯电子签颁发给渠道侧合作企业的企业ID，不需要传
                     */
                    void SetProxyOrganizationId(const std::string& _proxyOrganizationId);

                    /**
                     * 判断参数 ProxyOrganizationId 是否已赋值
                     * @return ProxyOrganizationId 是否已赋值
                     */
                    bool ProxyOrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 腾讯电子签颁发给渠道的应用ID，32位字符串
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 渠道/平台合作企业的企业ID，最大64位字符串
                     */
                    std::string m_proxyOrganizationOpenId;
                    bool m_proxyOrganizationOpenIdHasBeenSet;

                    /**
                     * 渠道/平台合作企业经办人（操作员）
                     */
                    UserInfo m_proxyOperator;
                    bool m_proxyOperatorHasBeenSet;

                    /**
                     * 腾讯电子签颁发给渠道侧合作企业的应用ID
                     */
                    std::string m_proxyAppId;
                    bool m_proxyAppIdHasBeenSet;

                    /**
                     * 内部参数，腾讯电子签颁发给渠道侧合作企业的企业ID，不需要传
                     */
                    std::string m_proxyOrganizationId;
                    bool m_proxyOrganizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AGENT_H_
