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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEJWKSAUTHENTICATORREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEJWKSAUTHENTICATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CreateJWKSAuthenticator请求参数结构体
                */
                class CreateJWKSAuthenticatorRequest : public AbstractModel
                {
                public:
                    CreateJWKSAuthenticatorRequest();
                    ~CreateJWKSAuthenticatorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取jwks端点
                     * @return Endpoint jwks端点
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置jwks端点
                     * @param _endpoint jwks端点
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取jwks刷新间隔,单位：秒
                     * @return RefreshInterval jwks刷新间隔,单位：秒
                     * 
                     */
                    int64_t GetRefreshInterval() const;

                    /**
                     * 设置jwks刷新间隔,单位：秒
                     * @param _refreshInterval jwks刷新间隔,单位：秒
                     * 
                     */
                    void SetRefreshInterval(const int64_t& _refreshInterval);

                    /**
                     * 判断参数 RefreshInterval 是否已赋值
                     * @return RefreshInterval 是否已赋值
                     * 
                     */
                    bool RefreshIntervalHasBeenSet() const;

                    /**
                     * 获取jwks文本
                     * @return Text jwks文本
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置jwks文本
                     * @param _text jwks文本
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取认证器是否开启：open-启用；close-关闭
                     * @return Status 认证器是否开启：open-启用；close-关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置认证器是否开启：open-启用；close-关闭
                     * @param _status 认证器是否开启：open-启用；close-关闭
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取说明
                     * @return Remark 说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
                     * @param _remark 说明
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取设备连接时传递jwt的key；username-使用用户名字段传递；password-使用密码字段传递
                     * @return From 设备连接时传递jwt的key；username-使用用户名字段传递；password-使用密码字段传递
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置设备连接时传递jwt的key；username-使用用户名字段传递；password-使用密码字段传递
                     * @param _from 设备连接时传递jwt的key；username-使用用户名字段传递；password-使用密码字段传递
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * jwks端点
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * jwks刷新间隔,单位：秒
                     */
                    int64_t m_refreshInterval;
                    bool m_refreshIntervalHasBeenSet;

                    /**
                     * jwks文本
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 认证器是否开启：open-启用；close-关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 设备连接时传递jwt的key；username-使用用户名字段传递；password-使用密码字段传递
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEJWKSAUTHENTICATORREQUEST_H_
