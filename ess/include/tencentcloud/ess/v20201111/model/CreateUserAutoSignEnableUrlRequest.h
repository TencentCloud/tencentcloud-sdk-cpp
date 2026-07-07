/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNENABLEURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNENABLEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/AutoSignConfig.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateUserAutoSignEnableUrl请求参数结构体
                */
                class CreateUserAutoSignEnableUrlRequest : public AbstractModel
                {
                public:
                    CreateUserAutoSignEnableUrlRequest();
                    ~CreateUserAutoSignEnableUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * @return SceneKey <p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * 
                     */
                    std::string GetSceneKey() const;

                    /**
                     * 设置<p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * @param _sceneKey <p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
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
                     * 获取<p>自动签开通配置信息, 包括开通的人员的信息等</p>
                     * @return AutoSignConfig <p>自动签开通配置信息, 包括开通的人员的信息等</p>
                     * 
                     */
                    AutoSignConfig GetAutoSignConfig() const;

                    /**
                     * 设置<p>自动签开通配置信息, 包括开通的人员的信息等</p>
                     * @param _autoSignConfig <p>自动签开通配置信息, 包括开通的人员的信息等</p>
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
                     * 获取<p>生成的链接类型：</p><ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li><li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     * @return UrlType <p>生成的链接类型：</p><ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li><li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     * 
                     */
                    std::string GetUrlType() const;

                    /**
                     * 设置<p>生成的链接类型：</p><ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li><li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     * @param _urlType <p>生成的链接类型：</p><ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li><li> **H5SIGN** : 生成H5端开通链接</li></ul>
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
                     * 获取<p>是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li><strong>SMS</strong> :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul></p>
                     * @return NotifyType <p>是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li><strong>SMS</strong> :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul></p>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置<p>是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li><strong>SMS</strong> :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul></p>
                     * @param _notifyType <p>是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li><strong>SMS</strong> :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul></p>
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
                     * 获取<p>如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项</p>
                     * @return NotifyAddress <p>如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项</p>
                     * 
                     */
                    std::string GetNotifyAddress() const;

                    /**
                     * 设置<p>如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项</p>
                     * @param _notifyAddress <p>如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项</p>
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
                     * 获取<p>链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。<code>如果不传，默认过期时间为当前时间往后7天。</code></p>
                     * @return ExpiredTime <p>链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。<code>如果不传，默认过期时间为当前时间往后7天。</code></p>
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置<p>链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。<code>如果不传，默认过期时间为当前时间往后7天。</code></p>
                     * @param _expiredTime <p>链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。<code>如果不传，默认过期时间为当前时间往后7天。</code></p>
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
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。</p>
                     * @return UserData <p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。</p>
                     * @param _userData <p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>要跳转的链接类型<ul><li> <strong>HTTP</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链</li><li><strong>HTTP_SHORT_URL</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li><strong>APP</strong>： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型，注意：仅UrlType为空，即获取小程序端开通链接时有效</li></ul></p>
                     * @return EndPoint <p>要跳转的链接类型<ul><li> <strong>HTTP</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链</li><li><strong>HTTP_SHORT_URL</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li><strong>APP</strong>： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型，注意：仅UrlType为空，即获取小程序端开通链接时有效</li></ul></p>
                     * 
                     */
                    std::string GetEndPoint() const;

                    /**
                     * 设置<p>要跳转的链接类型<ul><li> <strong>HTTP</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链</li><li><strong>HTTP_SHORT_URL</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li><strong>APP</strong>： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型，注意：仅UrlType为空，即获取小程序端开通链接时有效</li></ul></p>
                     * @param _endPoint <p>要跳转的链接类型<ul><li> <strong>HTTP</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链</li><li><strong>HTTP_SHORT_URL</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li><strong>APP</strong>： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型，注意：仅UrlType为空，即获取小程序端开通链接时有效</li></ul></p>
                     * 
                     */
                    void SetEndPoint(const std::string& _endPoint);

                    /**
                     * 判断参数 EndPoint 是否已赋值
                     * @return EndPoint 是否已赋值
                     * 
                     */
                    bool EndPointHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     */
                    std::string m_sceneKey;
                    bool m_sceneKeyHasBeenSet;

                    /**
                     * <p>自动签开通配置信息, 包括开通的人员的信息等</p>
                     */
                    AutoSignConfig m_autoSignConfig;
                    bool m_autoSignConfigHasBeenSet;

                    /**
                     * <p>生成的链接类型：</p><ul><li> 不传(即为空值) 则会生成小程序端开通链接(默认)</li><li> **H5SIGN** : 生成H5端开通链接</li></ul>
                     */
                    std::string m_urlType;
                    bool m_urlTypeHasBeenSet;

                    /**
                     * <p>是否通知开通方，通知类型:<ul><li>默认为不通知开通方</li><li><strong>SMS</strong> :  短信通知 ,如果需要短信通知则NotifyAddress填写对方的手机号</li></ul></p>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * <p>如果通知类型NotifyType选择为SMS，则此处为手机号, 其他通知类型不需要设置此项</p>
                     */
                    std::string m_notifyAddress;
                    bool m_notifyAddressHasBeenSet;

                    /**
                     * <p>链接的过期时间，格式为Unix时间戳，不能早于当前时间，且最大为当前时间往后30天。<code>如果不传，默认过期时间为当前时间往后7天。</code></p>
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。 在个人自动签的开通、关闭等回调信息场景中，该字段的信息将原封不动地透传给贵方。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>要跳转的链接类型<ul><li> <strong>HTTP</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链</li><li><strong>HTTP_SHORT_URL</strong>：跳转电子签小程序或者H5的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li><strong>APP</strong>： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型，注意：仅UrlType为空，即获取小程序端开通链接时有效</li></ul></p>
                     */
                    std::string m_endPoint;
                    bool m_endPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERAUTOSIGNENABLEURLREQUEST_H_
