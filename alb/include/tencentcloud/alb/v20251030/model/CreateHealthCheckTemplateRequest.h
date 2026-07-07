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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CreateHealthCheckTemplate请求参数结构体
                */
                class CreateHealthCheckTemplateRequest : public AbstractModel
                {
                public:
                    CreateHealthCheckTemplateRequest();
                    ~CreateHealthCheckTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改健康检查模板。
- **true**：发送预览请求，检查修改健康检查模板的参数、格式、业务限制等是否符合要求。
                     * @return DryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改健康检查模板。
- **true**：发送预览请求，检查修改健康检查模板的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改健康检查模板。
- **true**：发送预览请求，检查修改健康检查模板的参数、格式、业务限制等是否符合要求。
                     * @param _dryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改健康检查模板。
- **true**：发送预览请求，检查修改健康检查模板的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取健康检查状态码。取值：
- 当健康检查协议为**HTTP/HTTPS**时：
	- **http_1xx**
	- **http_2xx**（默认值）
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- 当健康检查协议为**GRPC/GRPCS**时：默认值为**12**，数值范围为**0-99**，输入值可为数值、多个数值或者范围以及相互组合，如：
	- **"20"**
	- **"0-99"**
                     * @return HealthCheckCodes 健康检查状态码。取值：
- 当健康检查协议为**HTTP/HTTPS**时：
	- **http_1xx**
	- **http_2xx**（默认值）
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- 当健康检查协议为**GRPC/GRPCS**时：默认值为**12**，数值范围为**0-99**，输入值可为数值、多个数值或者范围以及相互组合，如：
	- **"20"**
	- **"0-99"**
                     * 
                     */
                    std::vector<std::string> GetHealthCheckCodes() const;

                    /**
                     * 设置健康检查状态码。取值：
- 当健康检查协议为**HTTP/HTTPS**时：
	- **http_1xx**
	- **http_2xx**（默认值）
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- 当健康检查协议为**GRPC/GRPCS**时：默认值为**12**，数值范围为**0-99**，输入值可为数值、多个数值或者范围以及相互组合，如：
	- **"20"**
	- **"0-99"**
                     * @param _healthCheckCodes 健康检查状态码。取值：
- 当健康检查协议为**HTTP/HTTPS**时：
	- **http_1xx**
	- **http_2xx**（默认值）
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- 当健康检查协议为**GRPC/GRPCS**时：默认值为**12**，数值范围为**0-99**，输入值可为数值、多个数值或者范围以及相互组合，如：
	- **"20"**
	- **"0-99"**
                     * 
                     */
                    void SetHealthCheckCodes(const std::vector<std::string>& _healthCheckCodes);

                    /**
                     * 判断参数 HealthCheckCodes 是否已赋值
                     * @return HealthCheckCodes 是否已赋值
                     * 
                     */
                    bool HealthCheckCodesHasBeenSet() const;

                    /**
                     * 获取判定后端服务健康的阈值，当健康检查连续成功多少次后，后端服务的状态由**不健康**变为**健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * @return HealthCheckHealthyThreshold 判定后端服务健康的阈值，当健康检查连续成功多少次后，后端服务的状态由**不健康**变为**健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * 
                     */
                    uint64_t GetHealthCheckHealthyThreshold() const;

                    /**
                     * 设置判定后端服务健康的阈值，当健康检查连续成功多少次后，后端服务的状态由**不健康**变为**健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * @param _healthCheckHealthyThreshold 判定后端服务健康的阈值，当健康检查连续成功多少次后，后端服务的状态由**不健康**变为**健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * 
                     */
                    void SetHealthCheckHealthyThreshold(const uint64_t& _healthCheckHealthyThreshold);

                    /**
                     * 判断参数 HealthCheckHealthyThreshold 是否已赋值
                     * @return HealthCheckHealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthCheckHealthyThresholdHasBeenSet() const;

                    /**
                     * 获取健康检查域名。
长度限制为 **1-255** 个字符。
可包含小写字母、数字、短划线（-）和半角句号（.）。

> 仅当 **HealthCheckProtocol** 设置为 **HTTP/HTTPS/GRPC/GRPCS** 时，该参数生效。
                     * @return HealthCheckHost 健康检查域名。
长度限制为 **1-255** 个字符。
可包含小写字母、数字、短划线（-）和半角句号（.）。

> 仅当 **HealthCheckProtocol** 设置为 **HTTP/HTTPS/GRPC/GRPCS** 时，该参数生效。
                     * 
                     */
                    std::string GetHealthCheckHost() const;

                    /**
                     * 设置健康检查域名。
长度限制为 **1-255** 个字符。
可包含小写字母、数字、短划线（-）和半角句号（.）。

> 仅当 **HealthCheckProtocol** 设置为 **HTTP/HTTPS/GRPC/GRPCS** 时，该参数生效。
                     * @param _healthCheckHost 健康检查域名。
长度限制为 **1-255** 个字符。
可包含小写字母、数字、短划线（-）和半角句号（.）。

> 仅当 **HealthCheckProtocol** 设置为 **HTTP/HTTPS/GRPC/GRPCS** 时，该参数生效。
                     * 
                     */
                    void SetHealthCheckHost(const std::string& _healthCheckHost);

                    /**
                     * 判断参数 HealthCheckHost 是否已赋值
                     * @return HealthCheckHost 是否已赋值
                     * 
                     */
                    bool HealthCheckHostHasBeenSet() const;

                    /**
                     * 获取健康检查 HTTP 协议版本，取值：
- **HTTP1.1**（默认）
- **HTTP1.0** 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * @return HealthCheckHttpVersion 健康检查 HTTP 协议版本，取值：
- **HTTP1.1**（默认）
- **HTTP1.0** 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * 
                     */
                    std::string GetHealthCheckHttpVersion() const;

                    /**
                     * 设置健康检查 HTTP 协议版本，取值：
- **HTTP1.1**（默认）
- **HTTP1.0** 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * @param _healthCheckHttpVersion 健康检查 HTTP 协议版本，取值：
- **HTTP1.1**（默认）
- **HTTP1.0** 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * 
                     */
                    void SetHealthCheckHttpVersion(const std::string& _healthCheckHttpVersion);

                    /**
                     * 判断参数 HealthCheckHttpVersion 是否已赋值
                     * @return HealthCheckHttpVersion 是否已赋值
                     * 
                     */
                    bool HealthCheckHttpVersionHasBeenSet() const;

                    /**
                     * 获取健康检查的时间间隔。单位：秒。 取值范围：**2**-**300**。 默认值：**5**。
                     * @return HealthCheckInterval 健康检查的时间间隔。单位：秒。 取值范围：**2**-**300**。 默认值：**5**。
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置健康检查的时间间隔。单位：秒。 取值范围：**2**-**300**。 默认值：**5**。
                     * @param _healthCheckInterval 健康检查的时间间隔。单位：秒。 取值范围：**2**-**300**。 默认值：**5**。
                     * 
                     */
                    void SetHealthCheckInterval(const uint64_t& _healthCheckInterval);

                    /**
                     * 判断参数 HealthCheckInterval 是否已赋值
                     * @return HealthCheckInterval 是否已赋值
                     * 
                     */
                    bool HealthCheckIntervalHasBeenSet() const;

                    /**
                     * 获取健康检查方法，取值： - **GET** - **HEAD**（默认值） 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * @return HealthCheckMethod 健康检查方法，取值： - **GET** - **HEAD**（默认值） 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * 
                     */
                    std::string GetHealthCheckMethod() const;

                    /**
                     * 设置健康检查方法，取值： - **GET** - **HEAD**（默认值） 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * @param _healthCheckMethod 健康检查方法，取值： - **GET** - **HEAD**（默认值） 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     * 
                     */
                    void SetHealthCheckMethod(const std::string& _healthCheckMethod);

                    /**
                     * 判断参数 HealthCheckMethod 是否已赋值
                     * @return HealthCheckMethod 是否已赋值
                     * 
                     */
                    bool HealthCheckMethodHasBeenSet() const;

                    /**
                     * 获取健康检查的转发规则路径。 长度为 **1-80** 个字符，只能使用字母、数字、字符`-/.%?#&=`以及扩展字符`_;~!（)*[]@$^:',+`。 URL 必须以正斜线（/）开头。 
> 仅当**HealthCheckProtocol**为**HTTP/HTTPS/GRPC/GRPCS**时，转发规则路径参数生效。
                     * @return HealthCheckPath 健康检查的转发规则路径。 长度为 **1-80** 个字符，只能使用字母、数字、字符`-/.%?#&=`以及扩展字符`_;~!（)*[]@$^:',+`。 URL 必须以正斜线（/）开头。 
> 仅当**HealthCheckProtocol**为**HTTP/HTTPS/GRPC/GRPCS**时，转发规则路径参数生效。
                     * 
                     */
                    std::string GetHealthCheckPath() const;

                    /**
                     * 设置健康检查的转发规则路径。 长度为 **1-80** 个字符，只能使用字母、数字、字符`-/.%?#&=`以及扩展字符`_;~!（)*[]@$^:',+`。 URL 必须以正斜线（/）开头。 
> 仅当**HealthCheckProtocol**为**HTTP/HTTPS/GRPC/GRPCS**时，转发规则路径参数生效。
                     * @param _healthCheckPath 健康检查的转发规则路径。 长度为 **1-80** 个字符，只能使用字母、数字、字符`-/.%?#&=`以及扩展字符`_;~!（)*[]@$^:',+`。 URL 必须以正斜线（/）开头。 
> 仅当**HealthCheckProtocol**为**HTTP/HTTPS/GRPC/GRPCS**时，转发规则路径参数生效。
                     * 
                     */
                    void SetHealthCheckPath(const std::string& _healthCheckPath);

                    /**
                     * 判断参数 HealthCheckPath 是否已赋值
                     * @return HealthCheckPath 是否已赋值
                     * 
                     */
                    bool HealthCheckPathHasBeenSet() const;

                    /**
                     * 获取健康检查访问后端服务器的端口。  取值范围：**0-65535**。  默认值：**0**，表示后端服务器的端口。
                     * @return HealthCheckPort 健康检查访问后端服务器的端口。  取值范围：**0-65535**。  默认值：**0**，表示后端服务器的端口。
                     * 
                     */
                    uint64_t GetHealthCheckPort() const;

                    /**
                     * 设置健康检查访问后端服务器的端口。  取值范围：**0-65535**。  默认值：**0**，表示后端服务器的端口。
                     * @param _healthCheckPort 健康检查访问后端服务器的端口。  取值范围：**0-65535**。  默认值：**0**，表示后端服务器的端口。
                     * 
                     */
                    void SetHealthCheckPort(const uint64_t& _healthCheckPort);

                    /**
                     * 判断参数 HealthCheckPort 是否已赋值
                     * @return HealthCheckPort 是否已赋值
                     * 
                     */
                    bool HealthCheckPortHasBeenSet() const;

                    /**
                     * 获取健康检查协议。取值：
- **HTTP**（默认）：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。
- **HTTPS**：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。（数据加密，相比 HTTP 更安全。）
- **TCP**：通过发送 SYN 握手报文来检测服务器端口是否存活。
- **GRPC**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
- **GRPCS**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
                     * @return HealthCheckProtocol 健康检查协议。取值：
- **HTTP**（默认）：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。
- **HTTPS**：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。（数据加密，相比 HTTP 更安全。）
- **TCP**：通过发送 SYN 握手报文来检测服务器端口是否存活。
- **GRPC**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
- **GRPCS**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
                     * 
                     */
                    std::string GetHealthCheckProtocol() const;

                    /**
                     * 设置健康检查协议。取值：
- **HTTP**（默认）：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。
- **HTTPS**：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。（数据加密，相比 HTTP 更安全。）
- **TCP**：通过发送 SYN 握手报文来检测服务器端口是否存活。
- **GRPC**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
- **GRPCS**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
                     * @param _healthCheckProtocol 健康检查协议。取值：
- **HTTP**（默认）：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。
- **HTTPS**：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。（数据加密，相比 HTTP 更安全。）
- **TCP**：通过发送 SYN 握手报文来检测服务器端口是否存活。
- **GRPC**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
- **GRPCS**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
                     * 
                     */
                    void SetHealthCheckProtocol(const std::string& _healthCheckProtocol);

                    /**
                     * 判断参数 HealthCheckProtocol 是否已赋值
                     * @return HealthCheckProtocol 是否已赋值
                     * 
                     */
                    bool HealthCheckProtocolHasBeenSet() const;

                    /**
                     * 获取健康检查模板名称。长度为 **1-255** 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。
                     * @return HealthCheckTemplateName 健康检查模板名称。长度为 **1-255** 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。
                     * 
                     */
                    std::string GetHealthCheckTemplateName() const;

                    /**
                     * 设置健康检查模板名称。长度为 **1-255** 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。
                     * @param _healthCheckTemplateName 健康检查模板名称。长度为 **1-255** 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。
                     * 
                     */
                    void SetHealthCheckTemplateName(const std::string& _healthCheckTemplateName);

                    /**
                     * 判断参数 HealthCheckTemplateName 是否已赋值
                     * @return HealthCheckTemplateName 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateNameHasBeenSet() const;

                    /**
                     * 获取健康检查的响应超时时间。单位：秒。
取值范围：**2**-**60**。
默认值：**2**。
                     * @return HealthCheckTimeout 健康检查的响应超时时间。单位：秒。
取值范围：**2**-**60**。
默认值：**2**。
                     * 
                     */
                    uint64_t GetHealthCheckTimeout() const;

                    /**
                     * 设置健康检查的响应超时时间。单位：秒。
取值范围：**2**-**60**。
默认值：**2**。
                     * @param _healthCheckTimeout 健康检查的响应超时时间。单位：秒。
取值范围：**2**-**60**。
默认值：**2**。
                     * 
                     */
                    void SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout);

                    /**
                     * 判断参数 HealthCheckTimeout 是否已赋值
                     * @return HealthCheckTimeout 是否已赋值
                     * 
                     */
                    bool HealthCheckTimeoutHasBeenSet() const;

                    /**
                     * 获取判定后端服务不健康的阈值，当健康检查连续失败多少次后，后端服务的状态由**健康**变为**不健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * @return HealthCheckUnhealthyThreshold 判定后端服务不健康的阈值，当健康检查连续失败多少次后，后端服务的状态由**健康**变为**不健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * 
                     */
                    uint64_t GetHealthCheckUnhealthyThreshold() const;

                    /**
                     * 设置判定后端服务不健康的阈值，当健康检查连续失败多少次后，后端服务的状态由**健康**变为**不健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * @param _healthCheckUnhealthyThreshold 判定后端服务不健康的阈值，当健康检查连续失败多少次后，后端服务的状态由**健康**变为**不健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     * 
                     */
                    void SetHealthCheckUnhealthyThreshold(const uint64_t& _healthCheckUnhealthyThreshold);

                    /**
                     * 判断参数 HealthCheckUnhealthyThreshold 是否已赋值
                     * @return HealthCheckUnhealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthCheckUnhealthyThresholdHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签。
                     * @param _tags 标签。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 是否预览此次请求。
- **false**（默认）：发送普通请求，直接修改健康检查模板。
- **true**：发送预览请求，检查修改健康检查模板的参数、格式、业务限制等是否符合要求。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 健康检查状态码。取值：
- 当健康检查协议为**HTTP/HTTPS**时：
	- **http_1xx**
	- **http_2xx**（默认值）
	-  **http_3xx**
	-  **http_4xx**
	-  **http_5xx**
- 当健康检查协议为**GRPC/GRPCS**时：默认值为**12**，数值范围为**0-99**，输入值可为数值、多个数值或者范围以及相互组合，如：
	- **"20"**
	- **"0-99"**
                     */
                    std::vector<std::string> m_healthCheckCodes;
                    bool m_healthCheckCodesHasBeenSet;

                    /**
                     * 判定后端服务健康的阈值，当健康检查连续成功多少次后，后端服务的状态由**不健康**变为**健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     */
                    uint64_t m_healthCheckHealthyThreshold;
                    bool m_healthCheckHealthyThresholdHasBeenSet;

                    /**
                     * 健康检查域名。
长度限制为 **1-255** 个字符。
可包含小写字母、数字、短划线（-）和半角句号（.）。

> 仅当 **HealthCheckProtocol** 设置为 **HTTP/HTTPS/GRPC/GRPCS** 时，该参数生效。
                     */
                    std::string m_healthCheckHost;
                    bool m_healthCheckHostHasBeenSet;

                    /**
                     * 健康检查 HTTP 协议版本，取值：
- **HTTP1.1**（默认）
- **HTTP1.0** 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     */
                    std::string m_healthCheckHttpVersion;
                    bool m_healthCheckHttpVersionHasBeenSet;

                    /**
                     * 健康检查的时间间隔。单位：秒。 取值范围：**2**-**300**。 默认值：**5**。
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * 健康检查方法，取值： - **GET** - **HEAD**（默认值） 
> 仅当**HealthCheckProtocol**设置为**HTTP** 或 **HTTPS** 时，该参数生效。
                     */
                    std::string m_healthCheckMethod;
                    bool m_healthCheckMethodHasBeenSet;

                    /**
                     * 健康检查的转发规则路径。 长度为 **1-80** 个字符，只能使用字母、数字、字符`-/.%?#&=`以及扩展字符`_;~!（)*[]@$^:',+`。 URL 必须以正斜线（/）开头。 
> 仅当**HealthCheckProtocol**为**HTTP/HTTPS/GRPC/GRPCS**时，转发规则路径参数生效。
                     */
                    std::string m_healthCheckPath;
                    bool m_healthCheckPathHasBeenSet;

                    /**
                     * 健康检查访问后端服务器的端口。  取值范围：**0-65535**。  默认值：**0**，表示后端服务器的端口。
                     */
                    uint64_t m_healthCheckPort;
                    bool m_healthCheckPortHasBeenSet;

                    /**
                     * 健康检查协议。取值：
- **HTTP**（默认）：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。
- **HTTPS**：通过发送 HEAD 或 GET 请求模拟浏览器的访问行为来检查服务器应用是否健康。（数据加密，相比 HTTP 更安全。）
- **TCP**：通过发送 SYN 握手报文来检测服务器端口是否存活。
- **GRPC**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
- **GRPCS**：通过发送 POST 或 GET 请求来检查服务器应用是否健康。
                     */
                    std::string m_healthCheckProtocol;
                    bool m_healthCheckProtocolHasBeenSet;

                    /**
                     * 健康检查模板名称。长度为 **1-255** 个字符，可包含数字、大小写字母、中文、半角句号（.）、下划线（_）和短划线（-）。
                     */
                    std::string m_healthCheckTemplateName;
                    bool m_healthCheckTemplateNameHasBeenSet;

                    /**
                     * 健康检查的响应超时时间。单位：秒。
取值范围：**2**-**60**。
默认值：**2**。
                     */
                    uint64_t m_healthCheckTimeout;
                    bool m_healthCheckTimeoutHasBeenSet;

                    /**
                     * 判定后端服务不健康的阈值，当健康检查连续失败多少次后，后端服务的状态由**健康**变为**不健康**。
取值范围：**2**-**10**。
默认值：**2**。
                     */
                    uint64_t m_healthCheckUnhealthyThreshold;
                    bool m_healthCheckUnhealthyThresholdHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATEREQUEST_H_
