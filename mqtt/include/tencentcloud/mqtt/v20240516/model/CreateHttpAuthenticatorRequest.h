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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEHTTPAUTHENTICATORREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEHTTPAUTHENTICATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/HeaderItem.h>
#include <tencentcloud/mqtt/v20240516/model/BodyItem.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CreateHttpAuthenticator请求参数结构体
                */
                class CreateHttpAuthenticatorRequest : public AbstractModel
                {
                public:
                    CreateHttpAuthenticatorRequest();
                    ~CreateHttpAuthenticatorRequest() = default;
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
                     * 获取jwks服务地址
                     * @return Endpoint jwks服务地址
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置jwks服务地址
                     * @param _endpoint jwks服务地址
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
                     * 获取最大并发连接数，默认8，范围：1-10
                     * @return Concurrency 最大并发连接数，默认8，范围：1-10
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置最大并发连接数，默认8，范围：1-10
                     * @param _concurrency 最大并发连接数，默认8，范围：1-10
                     * 
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取网络请求方法 GET 或 POST，默认POST
                     * @return Method 网络请求方法 GET 或 POST，默认POST
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置网络请求方法 GET 或 POST，默认POST
                     * @param _method 网络请求方法 GET 或 POST，默认POST
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

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
                     * 获取说明，最多支持128个字符。
                     * @return Remark 说明，最多支持128个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，最多支持128个字符。
                     * @param _remark 说明，最多支持128个字符。
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
                     * 获取连接超时时间，单位：秒，范围：1-30
                     * @return ConnectTimeout 连接超时时间，单位：秒，范围：1-30
                     * 
                     */
                    int64_t GetConnectTimeout() const;

                    /**
                     * 设置连接超时时间，单位：秒，范围：1-30
                     * @param _connectTimeout 连接超时时间，单位：秒，范围：1-30
                     * 
                     */
                    void SetConnectTimeout(const int64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取请求超时时间，单位：秒，范围：1-30
                     * @return ReadTimeout 请求超时时间，单位：秒，范围：1-30
                     * 
                     */
                    int64_t GetReadTimeout() const;

                    /**
                     * 设置请求超时时间，单位：秒，范围：1-30
                     * @param _readTimeout 请求超时时间，单位：秒，范围：1-30
                     * 
                     */
                    void SetReadTimeout(const int64_t& _readTimeout);

                    /**
                     * 判断参数 ReadTimeout 是否已赋值
                     * @return ReadTimeout 是否已赋值
                     * 
                     */
                    bool ReadTimeoutHasBeenSet() const;

                    /**
                     * 获取转发请求header
                     * @return Header 转发请求header
                     * 
                     */
                    std::vector<HeaderItem> GetHeader() const;

                    /**
                     * 设置转发请求header
                     * @param _header 转发请求header
                     * 
                     */
                    void SetHeader(const std::vector<HeaderItem>& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取转发请求body
                     * @return Body 转发请求body
                     * 
                     */
                    std::vector<BodyItem> GetBody() const;

                    /**
                     * 设置转发请求body
                     * @param _body 转发请求body
                     * 
                     */
                    void SetBody(const std::vector<BodyItem>& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * jwks服务地址
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 最大并发连接数，默认8，范围：1-10
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * 网络请求方法 GET 或 POST，默认POST
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 认证器是否开启：open-启用；close-关闭，默认open-启用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 说明，最多支持128个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 连接超时时间，单位：秒，范围：1-30
                     */
                    int64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * 请求超时时间，单位：秒，范围：1-30
                     */
                    int64_t m_readTimeout;
                    bool m_readTimeoutHasBeenSet;

                    /**
                     * 转发请求header
                     */
                    std::vector<HeaderItem> m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 转发请求body
                     */
                    std::vector<BodyItem> m_body;
                    bool m_bodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEHTTPAUTHENTICATORREQUEST_H_
