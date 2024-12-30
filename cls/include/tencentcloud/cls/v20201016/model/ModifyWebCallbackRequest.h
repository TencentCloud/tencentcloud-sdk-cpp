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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYWEBCALLBACKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYWEBCALLBACKREQUEST_H_

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
                * ModifyWebCallback请求参数结构体
                */
                class ModifyWebCallbackRequest : public AbstractModel
                {
                public:
                    ModifyWebCallbackRequest();
                    ~ModifyWebCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警渠道回调配置ID。
                     * @return WebCallbackId 告警渠道回调配置ID。
                     * 
                     */
                    std::string GetWebCallbackId() const;

                    /**
                     * 设置告警渠道回调配置ID。
                     * @param _webCallbackId 告警渠道回调配置ID。
                     * 
                     */
                    void SetWebCallbackId(const std::string& _webCallbackId);

                    /**
                     * 判断参数 WebCallbackId 是否已赋值
                     * @return WebCallbackId 是否已赋值
                     * 
                     */
                    bool WebCallbackIdHasBeenSet() const;

                    /**
                     * 获取告警渠道回调配置名称。
                     * @return Name 告警渠道回调配置名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警渠道回调配置名称。
                     * @param _name 告警渠道回调配置名称。
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
                     * 获取渠道类型

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     * @return Type 渠道类型

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置渠道类型

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     * @param _type 渠道类型

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
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
                     * 获取回调地址。
                     * @return Webhook 回调地址。
                     * 
                     */
                    std::string GetWebhook() const;

                    /**
                     * 设置回调地址。
                     * @param _webhook 回调地址。
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
                     * 获取请求方式。

支持POST、PUT。

注意：当Type为Http时，必填。
                     * @return Method 请求方式。

支持POST、PUT。

注意：当Type为Http时，必填。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方式。

支持POST、PUT。

注意：当Type为Http时，必填。
                     * @param _method 请求方式。

支持POST、PUT。

注意：当Type为Http时，必填。
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
                     * 获取秘钥信息。
                     * @return Key 秘钥信息。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置秘钥信息。
                     * @param _key 秘钥信息。
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
                     * 告警渠道回调配置ID。
                     */
                    std::string m_webCallbackId;
                    bool m_webCallbackIdHasBeenSet;

                    /**
                     * 告警渠道回调配置名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 渠道类型

WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 回调地址。
                     */
                    std::string m_webhook;
                    bool m_webhookHasBeenSet;

                    /**
                     * 请求方式。

支持POST、PUT。

注意：当Type为Http时，必填。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 秘钥信息。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYWEBCALLBACKREQUEST_H_
