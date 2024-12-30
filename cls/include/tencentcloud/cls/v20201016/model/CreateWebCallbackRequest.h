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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEWEBCALLBACKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEWEBCALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateWebCallback请求参数结构体
                */
                class CreateWebCallbackRequest : public AbstractModel
                {
                public:
                    CreateWebCallbackRequest();
                    ~CreateWebCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通知内容名称。
                     * @return Name 通知内容名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置通知内容名称。
                     * @param _name 通知内容名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取渠道类型。

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调。
                     * @return Type 渠道类型。

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置渠道类型。

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调。
                     * @param _type 渠道类型。

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调。
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
                     * 获取Webhook地址。
                     * @return Webhook Webhook地址。
                     * 
                     */
                    std::string GetWebhook() const;

                    /**
                     * 设置Webhook地址。
                     * @param _webhook Webhook地址。
                     * 
                     */
                    void SetWebhook(const std::string& _webhook);

                    /**
                     * 判断参数 Webhook 是否已赋值
                     * @return Webhook 是否已赋值
                     * 
                     */
                    bool WebhookHasBeenSet() const;

                    /**
                     * 获取请求方式。 支持POST、PUT。

当Type为Http时，必填。
                     * @return Method 请求方式。 支持POST、PUT。

当Type为Http时，必填。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方式。 支持POST、PUT。

当Type为Http时，必填。
                     * @param _method 请求方式。 支持POST、PUT。

当Type为Http时，必填。
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
                     * 获取秘钥。
                     * @return Key 秘钥。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置秘钥。
                     * @param _key 秘钥。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 通知内容名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 渠道类型。

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Webhook地址。
                     */
                    std::string m_webhook;
                    bool m_webhookHasBeenSet;

                    /**
                     * 请求方式。 支持POST、PUT。

当Type为Http时，必填。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 秘钥。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEWEBCALLBACKREQUEST_H_
