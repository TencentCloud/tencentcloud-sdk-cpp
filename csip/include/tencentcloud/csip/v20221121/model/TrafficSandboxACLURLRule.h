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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLURLRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLURLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ACL URL/协议/方法匹配规则
                */
                class TrafficSandboxACLURLRule : public AbstractModel
                {
                public:
                    TrafficSandboxACLURLRule();
                    ~TrafficSandboxACLURLRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取URL 列表
入参限制：每项支持域名通配符，如 *.example.com、api.*.example.com、example.com/api/*
                     * @return URL URL 列表
入参限制：每项支持域名通配符，如 *.example.com、api.*.example.com、example.com/api/*
                     * 
                     */
                    std::vector<std::string> GetURL() const;

                    /**
                     * 设置URL 列表
入参限制：每项支持域名通配符，如 *.example.com、api.*.example.com、example.com/api/*
                     * @param _uRL URL 列表
入参限制：每项支持域名通配符，如 *.example.com、api.*.example.com、example.com/api/*
                     * 
                     */
                    void SetURL(const std::vector<std::string>& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取排除的 URL 列表
入参限制：格式同 URL
                     * @return URLExcept 排除的 URL 列表
入参限制：格式同 URL
                     * 
                     */
                    std::vector<std::string> GetURLExcept() const;

                    /**
                     * 设置排除的 URL 列表
入参限制：格式同 URL
                     * @param _uRLExcept 排除的 URL 列表
入参限制：格式同 URL
                     * 
                     */
                    void SetURLExcept(const std::vector<std::string>& _uRLExcept);

                    /**
                     * 判断参数 URLExcept 是否已赋值
                     * @return URLExcept 是否已赋值
                     * 
                     */
                    bool URLExceptHasBeenSet() const;

                    /**
                     * 获取协议类型列表
枚举值：
http：HTTP 协议
https：HTTPS 协议
                     * @return Protocol 协议类型列表
枚举值：
http：HTTP 协议
https：HTTPS 协议
                     * 
                     */
                    std::vector<std::string> GetProtocol() const;

                    /**
                     * 设置协议类型列表
枚举值：
http：HTTP 协议
https：HTTPS 协议
                     * @param _protocol 协议类型列表
枚举值：
http：HTTP 协议
https：HTTPS 协议
                     * 
                     */
                    void SetProtocol(const std::vector<std::string>& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取HTTP 方法列表
枚举值：
GET
POST
HEAD
PUT
DELETE
OPTIONS
PATCH
                     * @return Method HTTP 方法列表
枚举值：
GET
POST
HEAD
PUT
DELETE
OPTIONS
PATCH
                     * 
                     */
                    std::vector<std::string> GetMethod() const;

                    /**
                     * 设置HTTP 方法列表
枚举值：
GET
POST
HEAD
PUT
DELETE
OPTIONS
PATCH
                     * @param _method HTTP 方法列表
枚举值：
GET
POST
HEAD
PUT
DELETE
OPTIONS
PATCH
                     * 
                     */
                    void SetMethod(const std::vector<std::string>& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                private:

                    /**
                     * URL 列表
入参限制：每项支持域名通配符，如 *.example.com、api.*.example.com、example.com/api/*
                     */
                    std::vector<std::string> m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 排除的 URL 列表
入参限制：格式同 URL
                     */
                    std::vector<std::string> m_uRLExcept;
                    bool m_uRLExceptHasBeenSet;

                    /**
                     * 协议类型列表
枚举值：
http：HTTP 协议
https：HTTPS 协议
                     */
                    std::vector<std::string> m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * HTTP 方法列表
枚举值：
GET
POST
HEAD
PUT
DELETE
OPTIONS
PATCH
                     */
                    std::vector<std::string> m_method;
                    bool m_methodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLURLRULE_H_
