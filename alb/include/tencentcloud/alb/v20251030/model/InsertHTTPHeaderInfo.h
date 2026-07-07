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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_INSERTHTTPHEADERINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_INSERTHTTPHEADERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 插入HTTP Header信息
                */
                class InsertHTTPHeaderInfo : public AbstractModel
                {
                public:
                    InsertHTTPHeaderInfo();
                    ~InsertHTTPHeaderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插入的HTTP Header键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持中文，不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port。
                     * @return Key 插入的HTTP Header键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持中文，不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置插入的HTTP Header键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持中文，不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port。
                     * @param _key 插入的HTTP Header键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持中文，不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取HTTP Header值的类型。
ValueType为SystemDefined时，取值范围 ClientPort：客户端端口，ClientIp：客户端 IP 地址，Protocol：客户端请求的协议，CLBPort：负载均衡实例监听端口。
ValueType为UserDefined时，长度1 ~ 128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
ValueType为ReferenceHeader时，引用请求头中的某一个header，长度1~128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
                     * @return Value HTTP Header值的类型。
ValueType为SystemDefined时，取值范围 ClientPort：客户端端口，ClientIp：客户端 IP 地址，Protocol：客户端请求的协议，CLBPort：负载均衡实例监听端口。
ValueType为UserDefined时，长度1 ~ 128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
ValueType为ReferenceHeader时，引用请求头中的某一个header，长度1~128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置HTTP Header值的类型。
ValueType为SystemDefined时，取值范围 ClientPort：客户端端口，ClientIp：客户端 IP 地址，Protocol：客户端请求的协议，CLBPort：负载均衡实例监听端口。
ValueType为UserDefined时，长度1 ~ 128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
ValueType为ReferenceHeader时，引用请求头中的某一个header，长度1~128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
                     * @param _value HTTP Header值的类型。
ValueType为SystemDefined时，取值范围 ClientPort：客户端端口，ClientIp：客户端 IP 地址，Protocol：客户端请求的协议，CLBPort：负载均衡实例监听端口。
ValueType为UserDefined时，长度1 ~ 128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
ValueType为ReferenceHeader时，引用请求头中的某一个header，长度1~128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取HTTP Header值的类型，取值：
SystemDefined：系统定义的header。
UserDefined：用户自定义的header。
ReferenceHeader：引用请求头中的某一个header。
                     * @return ValueType HTTP Header值的类型，取值：
SystemDefined：系统定义的header。
UserDefined：用户自定义的header。
ReferenceHeader：引用请求头中的某一个header。
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置HTTP Header值的类型，取值：
SystemDefined：系统定义的header。
UserDefined：用户自定义的header。
ReferenceHeader：引用请求头中的某一个header。
                     * @param _valueType HTTP Header值的类型，取值：
SystemDefined：系统定义的header。
UserDefined：用户自定义的header。
ReferenceHeader：引用请求头中的某一个header。
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                private:

                    /**
                     * 插入的HTTP Header键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持中文，不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * HTTP Header值的类型。
ValueType为SystemDefined时，取值范围 ClientPort：客户端端口，ClientIp：客户端 IP 地址，Protocol：客户端请求的协议，CLBPort：负载均衡实例监听端口。
ValueType为UserDefined时，长度1 ~ 128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
ValueType为ReferenceHeader时，引用请求头中的某一个header，长度1~128的可打印字符，不支持"，开头和结尾不能为空格，结尾不能为\。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * HTTP Header值的类型，取值：
SystemDefined：系统定义的header。
UserDefined：用户自定义的header。
ReferenceHeader：引用请求头中的某一个header。
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_INSERTHTTPHEADERINFO_H_
