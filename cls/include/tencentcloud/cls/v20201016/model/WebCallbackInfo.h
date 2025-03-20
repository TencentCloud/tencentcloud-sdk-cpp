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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 告警渠道回调配置信息
                */
                class WebCallbackInfo : public AbstractModel
                {
                public:
                    WebCallbackInfo();
                    ~WebCallbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警渠道回调配置id。
                     * @return WebCallbackId 告警渠道回调配置id。
                     * 
                     */
                    std::string GetWebCallbackId() const;

                    /**
                     * 设置告警渠道回调配置id。
                     * @param _webCallbackId 告警渠道回调配置id。
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
                     * @return Method 请求方式。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方式。
                     * @param _method 请求方式。
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

                    /**
                     * 获取主账号。
                     * @return Uin 主账号。
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置主账号。
                     * @param _uin 主账号。
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取子账号。
                     * @return SubUin 子账号。
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置子账号。
                     * @param _subUin 子账号。
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取创建时间。秒级时间戳
                     * @return CreateTime 创建时间。秒级时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间。秒级时间戳
                     * @param _createTime 创建时间。秒级时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。秒级时间戳
                     * @return UpdateTime 更新时间。秒级时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间。秒级时间戳
                     * @param _updateTime 更新时间。秒级时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 告警渠道回调配置id。
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
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 秘钥信息。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 主账号。
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号。
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 创建时间。秒级时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。秒级时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACKINFO_H_
