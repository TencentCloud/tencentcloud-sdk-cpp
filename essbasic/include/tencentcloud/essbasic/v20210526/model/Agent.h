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
                     * 获取应用的唯一标识。不同的业务系统可以采用不同的AppId，不同AppId下的数据是隔离的。可以由控制台开发者中心-应用集成自主生成。
                     * @return AppId 应用的唯一标识。不同的业务系统可以采用不同的AppId，不同AppId下的数据是隔离的。可以由控制台开发者中心-应用集成自主生成。
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用的唯一标识。不同的业务系统可以采用不同的AppId，不同AppId下的数据是隔离的。可以由控制台开发者中心-应用集成自主生成。
                     * @param AppId 应用的唯一标识。不同的业务系统可以采用不同的AppId，不同AppId下的数据是隔离的。可以由控制台开发者中心-应用集成自主生成。
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取渠道平台自定义，对于渠道子客企业的唯一标识。一个渠道子客企业主体与子客企业ProxyOrganizationOpenId是一一对应的，不可更改，不可重复使用。（例如，可以使用企业名称的hash值，或者社会统一信用代码的hash值，或者随机hash值，需要渠道平台保存），最大64位字符串
                     * @return ProxyOrganizationOpenId 渠道平台自定义，对于渠道子客企业的唯一标识。一个渠道子客企业主体与子客企业ProxyOrganizationOpenId是一一对应的，不可更改，不可重复使用。（例如，可以使用企业名称的hash值，或者社会统一信用代码的hash值，或者随机hash值，需要渠道平台保存），最大64位字符串
                     */
                    std::string GetProxyOrganizationOpenId() const;

                    /**
                     * 设置渠道平台自定义，对于渠道子客企业的唯一标识。一个渠道子客企业主体与子客企业ProxyOrganizationOpenId是一一对应的，不可更改，不可重复使用。（例如，可以使用企业名称的hash值，或者社会统一信用代码的hash值，或者随机hash值，需要渠道平台保存），最大64位字符串
                     * @param ProxyOrganizationOpenId 渠道平台自定义，对于渠道子客企业的唯一标识。一个渠道子客企业主体与子客企业ProxyOrganizationOpenId是一一对应的，不可更改，不可重复使用。（例如，可以使用企业名称的hash值，或者社会统一信用代码的hash值，或者随机hash值，需要渠道平台保存），最大64位字符串
                     */
                    void SetProxyOrganizationOpenId(const std::string& _proxyOrganizationOpenId);

                    /**
                     * 判断参数 ProxyOrganizationOpenId 是否已赋值
                     * @return ProxyOrganizationOpenId 是否已赋值
                     */
                    bool ProxyOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取渠道子客企业中的员工/经办人，通过渠道平台进入电子签完成实名、且被赋予相关权限后，可以参与到企业资源的管理或签署流程中。
                     * @return ProxyOperator 渠道子客企业中的员工/经办人，通过渠道平台进入电子签完成实名、且被赋予相关权限后，可以参与到企业资源的管理或签署流程中。
                     */
                    UserInfo GetProxyOperator() const;

                    /**
                     * 设置渠道子客企业中的员工/经办人，通过渠道平台进入电子签完成实名、且被赋予相关权限后，可以参与到企业资源的管理或签署流程中。
                     * @param ProxyOperator 渠道子客企业中的员工/经办人，通过渠道平台进入电子签完成实名、且被赋予相关权限后，可以参与到企业资源的管理或签署流程中。
                     */
                    void SetProxyOperator(const UserInfo& _proxyOperator);

                    /**
                     * 判断参数 ProxyOperator 是否已赋值
                     * @return ProxyOperator 是否已赋值
                     */
                    bool ProxyOperatorHasBeenSet() const;

                    /**
                     * 获取在子客企业开通电子签后，会生成唯一的子客应用Id（ProxyAppId）用于代理调用时的鉴权，在子客开通的回调中获取。
                     * @return ProxyAppId 在子客企业开通电子签后，会生成唯一的子客应用Id（ProxyAppId）用于代理调用时的鉴权，在子客开通的回调中获取。
                     */
                    std::string GetProxyAppId() const;

                    /**
                     * 设置在子客企业开通电子签后，会生成唯一的子客应用Id（ProxyAppId）用于代理调用时的鉴权，在子客开通的回调中获取。
                     * @param ProxyAppId 在子客企业开通电子签后，会生成唯一的子客应用Id（ProxyAppId）用于代理调用时的鉴权，在子客开通的回调中获取。
                     */
                    void SetProxyAppId(const std::string& _proxyAppId);

                    /**
                     * 判断参数 ProxyAppId 是否已赋值
                     * @return ProxyAppId 是否已赋值
                     */
                    bool ProxyAppIdHasBeenSet() const;

                    /**
                     * 获取内部参数，暂未开放使用
                     * @return ProxyOrganizationId 内部参数，暂未开放使用
                     */
                    std::string GetProxyOrganizationId() const;

                    /**
                     * 设置内部参数，暂未开放使用
                     * @param ProxyOrganizationId 内部参数，暂未开放使用
                     */
                    void SetProxyOrganizationId(const std::string& _proxyOrganizationId);

                    /**
                     * 判断参数 ProxyOrganizationId 是否已赋值
                     * @return ProxyOrganizationId 是否已赋值
                     */
                    bool ProxyOrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 应用的唯一标识。不同的业务系统可以采用不同的AppId，不同AppId下的数据是隔离的。可以由控制台开发者中心-应用集成自主生成。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 渠道平台自定义，对于渠道子客企业的唯一标识。一个渠道子客企业主体与子客企业ProxyOrganizationOpenId是一一对应的，不可更改，不可重复使用。（例如，可以使用企业名称的hash值，或者社会统一信用代码的hash值，或者随机hash值，需要渠道平台保存），最大64位字符串
                     */
                    std::string m_proxyOrganizationOpenId;
                    bool m_proxyOrganizationOpenIdHasBeenSet;

                    /**
                     * 渠道子客企业中的员工/经办人，通过渠道平台进入电子签完成实名、且被赋予相关权限后，可以参与到企业资源的管理或签署流程中。
                     */
                    UserInfo m_proxyOperator;
                    bool m_proxyOperatorHasBeenSet;

                    /**
                     * 在子客企业开通电子签后，会生成唯一的子客应用Id（ProxyAppId）用于代理调用时的鉴权，在子客开通的回调中获取。
                     */
                    std::string m_proxyAppId;
                    bool m_proxyAppIdHasBeenSet;

                    /**
                     * 内部参数，暂未开放使用
                     */
                    std::string m_proxyOrganizationId;
                    bool m_proxyOrganizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AGENT_H_
