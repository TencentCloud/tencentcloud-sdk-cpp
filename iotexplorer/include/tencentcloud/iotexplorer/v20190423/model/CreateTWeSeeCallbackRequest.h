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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEECALLBACKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEECALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateTWeSeeCallback请求参数结构体
                */
                class CreateTWeSeeCallbackRequest : public AbstractModel
                {
                public:
                    CreateTWeSeeCallbackRequest();
                    ~CreateTWeSeeCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回调类型。可选值：\n- `http` HTTP 回调
                     * @return Type 回调类型。可选值：\n- `http` HTTP 回调
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置回调类型。可选值：\n- `http` HTTP 回调
                     * @param _type 回调类型。可选值：\n- `http` HTTP 回调
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口
                     * @return CallbackUrl 回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口
                     * @param _callbackUrl 回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取回调签名 Token。最大长度 128
                     * @return CallbackToken 回调签名 Token。最大长度 128
                     * 
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置回调签名 Token。最大长度 128
                     * @param _callbackToken 回调签名 Token。最大长度 128
                     * 
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     * 
                     */
                    bool CallbackTokenHasBeenSet() const;

                private:

                    /**
                     * 回调类型。可选值：\n- `http` HTTP 回调
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 回调 URL。要求 http 或 https 协议，仅支持 80 或 443 端口
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 回调签名 Token。最大长度 128
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEECALLBACKREQUEST_H_
