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
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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
                     * 获取<p>JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）</p>
                     * @return Endpoint <p>JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）</p>
                     * @param _endpoint <p>JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）</p>
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
                     * 获取<p>认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。</p>
                     * @return RefreshInterval <p>认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。</p>
                     * 
                     */
                    int64_t GetRefreshInterval() const;

                    /**
                     * 设置<p>认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。</p>
                     * @param _refreshInterval <p>认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。</p>
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
                     * 获取<p>jwks文本，（Text字段和Endpoint字段必须选择一个填写）</p>
                     * @return Text <p>jwks文本，（Text字段和Endpoint字段必须选择一个填写）</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>jwks文本，（Text字段和Endpoint字段必须选择一个填写）</p>
                     * @param _text <p>jwks文本，（Text字段和Endpoint字段必须选择一个填写）</p>
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
                     * 获取<p>认证器是否开启：open-启用；close-关闭，默认open-启用</p>
                     * @return Status <p>认证器是否开启：open-启用；close-关闭，默认open-启用</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>认证器是否开启：open-启用；close-关闭，默认open-启用</p>
                     * @param _status <p>认证器是否开启：open-启用；close-关闭，默认open-启用</p>
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
                     * 获取<p>说明，不能超过 128 个字符</p>
                     * @return Remark <p>说明，不能超过 128 个字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>说明，不能超过 128 个字符</p>
                     * @param _remark <p>说明，不能超过 128 个字符</p>
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
                     * 获取<p>认证字段；<br>username-对应 MQTT CONNECT Packet 中 username 字段，<br>password-对应 MQTT CONNECT Packet 中 password 字段。</p><p>默认username</p>
                     * @return From <p>认证字段；<br>username-对应 MQTT CONNECT Packet 中 username 字段，<br>password-对应 MQTT CONNECT Packet 中 password 字段。</p><p>默认username</p>
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置<p>认证字段；<br>username-对应 MQTT CONNECT Packet 中 username 字段，<br>password-对应 MQTT CONNECT Packet 中 password 字段。</p><p>默认username</p>
                     * @param _from <p>认证字段；<br>username-对应 MQTT CONNECT Packet 中 username 字段，<br>password-对应 MQTT CONNECT Packet 中 password 字段。</p><p>默认username</p>
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
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>JWKS服务地址，（Text字段和Endpoint字段必须选择一个填写）</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>认证文本刷新间隔时间，单位：秒，最小值60，默认值60，最大值1000。填写认证服务器地址（Endpoint）时生效。</p>
                     */
                    int64_t m_refreshInterval;
                    bool m_refreshIntervalHasBeenSet;

                    /**
                     * <p>jwks文本，（Text字段和Endpoint字段必须选择一个填写）</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>认证器是否开启：open-启用；close-关闭，默认open-启用</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>说明，不能超过 128 个字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>认证字段；<br>username-对应 MQTT CONNECT Packet 中 username 字段，<br>password-对应 MQTT CONNECT Packet 中 password 字段。</p><p>默认username</p>
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEJWKSAUTHENTICATORREQUEST_H_
