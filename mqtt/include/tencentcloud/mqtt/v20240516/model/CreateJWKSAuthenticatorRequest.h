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
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
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
                     * 获取JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）
                     * @return Endpoint JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）
                     * @param _endpoint JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）
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
                     * 获取认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。
                     * @return RefreshInterval 认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。
                     * 
                     */
                    int64_t GetRefreshInterval() const;

                    /**
                     * 设置认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。
                     * @param _refreshInterval 认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。
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
                     * 获取jwks文本，（Text字段和Endpoint字段必须选择一个填写）
                     * @return Text jwks文本，（Text字段和Endpoint字段必须选择一个填写）
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置jwks文本，（Text字段和Endpoint字段必须选择一个填写）
                     * @param _text jwks文本，（Text字段和Endpoint字段必须选择一个填写）
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
                     * 获取认证器是否开启：open-启用；close-关闭，默认open-启用
                     * @return Status 认证器是否开启：open-启用；close-关闭，默认open-启用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置认证器是否开启：open-启用；close-关闭，默认open-启用
                     * @param _status 认证器是否开启：open-启用；close-关闭，默认open-启用
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
                     * 获取说明，不能超过 128 个字符
                     * @return Remark 说明，不能超过 128 个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，不能超过 128 个字符
                     * @param _remark 说明，不能超过 128 个字符
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
                     * 获取认证字段；
username-对应 MQTT CONNECT Packet 中 username 字段，
password-对应 MQTT CONNECT Packet 中 password 字段。

默认username
                     * @return From 认证字段；
username-对应 MQTT CONNECT Packet 中 username 字段，
password-对应 MQTT CONNECT Packet 中 password 字段。

默认username
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置认证字段；
username-对应 MQTT CONNECT Packet 中 username 字段，
password-对应 MQTT CONNECT Packet 中 password 字段。

默认username
                     * @param _from 认证字段；
username-对应 MQTT CONNECT Packet 中 username 字段，
password-对应 MQTT CONNECT Packet 中 password 字段。

默认username
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
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。
                     */
                    int64_t m_refreshInterval;
                    bool m_refreshIntervalHasBeenSet;

                    /**
                     * jwks文本，（Text字段和Endpoint字段必须选择一个填写）
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 认证器是否开启：open-启用；close-关闭，默认open-启用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 说明，不能超过 128 个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 认证字段；
username-对应 MQTT CONNECT Packet 中 username 字段，
password-对应 MQTT CONNECT Packet 中 password 字段。

默认username
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEJWKSAUTHENTICATORREQUEST_H_
