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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERAUTOSIGNENABLEURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERAUTOSIGNENABLEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/AutoSignConfig.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateUserAutoSignEnableUrl请求参数结构体
                */
                class ChannelCreateUserAutoSignEnableUrlRequest : public AbstractModel
                {
                public:
                    ChannelCreateUserAutoSignEnableUrlRequest();
                    ~ChannelCreateUserAutoSignEnableUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取自动签使用的场景值, 可以选择的场景值如下:
<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * @return SceneKey 自动签使用的场景值, 可以选择的场景值如下:
<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * 
                     */
                    std::string GetSceneKey() const;

                    /**
                     * 设置自动签使用的场景值, 可以选择的场景值如下:
<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * @param _sceneKey 自动签使用的场景值, 可以选择的场景值如下:
<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * 
                     */
                    void SetSceneKey(const std::string& _sceneKey);

                    /**
                     * 判断参数 SceneKey 是否已赋值
                     * @return SceneKey 是否已赋值
                     * 
                     */
                    bool SceneKeyHasBeenSet() const;

                    /**
                     * 获取执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取自动签开通配置信息, 包括开通的人员的信息等
                     * @return AutoSignConfig 自动签开通配置信息, 包括开通的人员的信息等
                     * 
                     */
                    AutoSignConfig GetAutoSignConfig() const;

                    /**
                     * 设置自动签开通配置信息, 包括开通的人员的信息等
                     * @param _autoSignConfig 自动签开通配置信息, 包括开通的人员的信息等
                     * 
                     */
                    void SetAutoSignConfig(const AutoSignConfig& _autoSignConfig);

                    /**
                     * 判断参数 AutoSignConfig 是否已赋值
                     * @return AutoSignConfig 是否已赋值
                     * 
                     */
                    bool AutoSignConfigHasBeenSet() const;

                    /**
                     * 获取生成的链接类型：
<ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li>
<li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     * @return UrlType 生成的链接类型：
<ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li>
<li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     * 
                     */
                    std::string GetUrlType() const;

                    /**
                     * 设置生成的链接类型：
<ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li>
<li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     * @param _urlType 生成的链接类型：
<ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li>
<li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     * 
                     */
                    void SetUrlType(const std::string& _urlType);

                    /**
                     * 判断参数 UrlType 是否已赋值
                     * @return UrlType 是否已赋值
                     * 
                     */
                    bool UrlTypeHasBeenSet() const;

                    /**
                     * 获取是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li>**SMS** :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul>
                     * @return NotifyType 是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li>**SMS** :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li>**SMS** :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul>
                     * @param _notifyType 是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li>**SMS** :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul>
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项
                     * @return NotifyAddress 如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项
                     * 
                     */
                    std::string GetNotifyAddress() const;

                    /**
                     * 设置如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项
                     * @param _notifyAddress 如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项
                     * 
                     */
                    void SetNotifyAddress(const std::string& _notifyAddress);

                    /**
                     * 判断参数 NotifyAddress 是否已赋值
                     * @return NotifyAddress 是否已赋值
                     * 
                     */
                    bool NotifyAddressHasBeenSet() const;

                    /**
                     * 获取链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。`如果不传，默认过期时间为当前时间往后7天。`
                     * @return ExpiredTime 链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。`如果不传，默认过期时间为当前时间往后7天。`
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。`如果不传，默认过期时间为当前时间往后7天。`
                     * @param _expiredTime 链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。`如果不传，默认过期时间为当前时间往后7天。`
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。 
                     * @return UserData 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。 
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。 
                     * @param _userData 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。 
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 自动签使用的场景值, 可以选择的场景值如下:
<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     */
                    std::string m_sceneKey;
                    bool m_sceneKeyHasBeenSet;

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 自动签开通配置信息, 包括开通的人员的信息等
                     */
                    AutoSignConfig m_autoSignConfig;
                    bool m_autoSignConfigHasBeenSet;

                    /**
                     * 生成的链接类型：
<ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li>
<li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     */
                    std::string m_urlType;
                    bool m_urlTypeHasBeenSet;

                    /**
                     * 是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li>**SMS** :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项
                     */
                    std::string m_notifyAddress;
                    bool m_notifyAddressHasBeenSet;

                    /**
                     * 链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。`如果不传，默认过期时间为当前时间往后7天。`
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。 
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERAUTOSIGNENABLEURLREQUEST_H_
