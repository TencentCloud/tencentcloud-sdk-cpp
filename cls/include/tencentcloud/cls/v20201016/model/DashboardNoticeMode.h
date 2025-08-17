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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_

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
                * 仪表盘订阅通知方式
                */
                class DashboardNoticeMode : public AbstractModel
                {
                public:
                    DashboardNoticeMode();
                    ~DashboardNoticeMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仪表盘通知方式。

- Uin：腾讯云用户
- Group：腾讯云用户组
- WeCom：企业微信回调
- Email：自定义邮件
- DingTalk：钉钉
- Lark：飞书
                     * @return ReceiverType 仪表盘通知方式。

- Uin：腾讯云用户
- Group：腾讯云用户组
- WeCom：企业微信回调
- Email：自定义邮件
- DingTalk：钉钉
- Lark：飞书
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置仪表盘通知方式。

- Uin：腾讯云用户
- Group：腾讯云用户组
- WeCom：企业微信回调
- Email：自定义邮件
- DingTalk：钉钉
- Lark：飞书
                     * @param _receiverType 仪表盘通知方式。

- Uin：腾讯云用户
- Group：腾讯云用户组
- WeCom：企业微信回调
- Email：自定义邮件
- DingTalk：钉钉
- Lark：飞书
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取知方式对应的值。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Values必须为空，且Url字段必填。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Values必填，且Url字段必须为空。
- 当ReceiverType为：`Uin ` 时，Values为用户id，通过 [拉取子用户](https://cloud.tencent.com/document/product/598/34587) 获取子用户 UID 。
- 当ReceiverType为：`Group` 时，Values为用户组id，通过 [查询用户组列表](https://cloud.tencent.com/document/product/598/34589) 获取用户组 ID 。
- 当ReceiverType为：`Email` 时，Values为用户邮箱信息。
                     * @return Values 知方式对应的值。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Values必须为空，且Url字段必填。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Values必填，且Url字段必须为空。
- 当ReceiverType为：`Uin ` 时，Values为用户id，通过 [拉取子用户](https://cloud.tencent.com/document/product/598/34587) 获取子用户 UID 。
- 当ReceiverType为：`Group` 时，Values为用户组id，通过 [查询用户组列表](https://cloud.tencent.com/document/product/598/34589) 获取用户组 ID 。
- 当ReceiverType为：`Email` 时，Values为用户邮箱信息。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置知方式对应的值。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Values必须为空，且Url字段必填。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Values必填，且Url字段必须为空。
- 当ReceiverType为：`Uin ` 时，Values为用户id，通过 [拉取子用户](https://cloud.tencent.com/document/product/598/34587) 获取子用户 UID 。
- 当ReceiverType为：`Group` 时，Values为用户组id，通过 [查询用户组列表](https://cloud.tencent.com/document/product/598/34589) 获取用户组 ID 。
- 当ReceiverType为：`Email` 时，Values为用户邮箱信息。
                     * @param _values 知方式对应的值。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Values必须为空，且Url字段必填。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Values必填，且Url字段必须为空。
- 当ReceiverType为：`Uin ` 时，Values为用户id，通过 [拉取子用户](https://cloud.tencent.com/document/product/598/34587) 获取子用户 UID 。
- 当ReceiverType为：`Group` 时，Values为用户组id，通过 [查询用户组列表](https://cloud.tencent.com/document/product/598/34589) 获取用户组 ID 。
- 当ReceiverType为：`Email` 时，Values为用户邮箱信息。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取仪表盘通知渠道。

-  支持：["Email","Sms","WeChat","Phone"]。
-  当ReceiverType为 `Email` 或 `WeCom` 时，ReceiverChannels无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverChannels 仪表盘通知渠道。

-  支持：["Email","Sms","WeChat","Phone"]。
-  当ReceiverType为 `Email` 或 `WeCom` 时，ReceiverChannels无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceiverChannels() const;

                    /**
                     * 设置仪表盘通知渠道。

-  支持：["Email","Sms","WeChat","Phone"]。
-  当ReceiverType为 `Email` 或 `WeCom` 时，ReceiverChannels无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverChannels 仪表盘通知渠道。

-  支持：["Email","Sms","WeChat","Phone"]。
-  当ReceiverType为 `Email` 或 `WeCom` 时，ReceiverChannels无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverChannels(const std::vector<std::string>& _receiverChannels);

                    /**
                     * 判断参数 ReceiverChannels 是否已赋值
                     * @return ReceiverChannels 是否已赋值
                     * 
                     */
                    bool ReceiverChannelsHasBeenSet() const;

                    /**
                     * 获取订阅方式	- 回调地址。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Url字段必填为各渠道的回调地址。
    - 为：`WeCom` 时，Url为 企业微信回调地址。
    - 为：`DingTalk` 时，Url为 钉钉机器人Webhook地址。
    - 为：`Lark` 时，Url为 飞书机器人Webhook地址。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Url字段必须为空。
                     * @return Url 订阅方式	- 回调地址。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Url字段必填为各渠道的回调地址。
    - 为：`WeCom` 时，Url为 企业微信回调地址。
    - 为：`DingTalk` 时，Url为 钉钉机器人Webhook地址。
    - 为：`Lark` 时，Url为 飞书机器人Webhook地址。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Url字段必须为空。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置订阅方式	- 回调地址。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Url字段必填为各渠道的回调地址。
    - 为：`WeCom` 时，Url为 企业微信回调地址。
    - 为：`DingTalk` 时，Url为 钉钉机器人Webhook地址。
    - 为：`Lark` 时，Url为 飞书机器人Webhook地址。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Url字段必须为空。
                     * @param _url 订阅方式	- 回调地址。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Url字段必填为各渠道的回调地址。
    - 为：`WeCom` 时，Url为 企业微信回调地址。
    - 为：`DingTalk` 时，Url为 钉钉机器人Webhook地址。
    - 为：`Lark` 时，Url为 飞书机器人Webhook地址。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Url字段必须为空。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 仪表盘通知方式。

- Uin：腾讯云用户
- Group：腾讯云用户组
- WeCom：企业微信回调
- Email：自定义邮件
- DingTalk：钉钉
- Lark：飞书
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 知方式对应的值。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Values必须为空，且Url字段必填。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Values必填，且Url字段必须为空。
- 当ReceiverType为：`Uin ` 时，Values为用户id，通过 [拉取子用户](https://cloud.tencent.com/document/product/598/34587) 获取子用户 UID 。
- 当ReceiverType为：`Group` 时，Values为用户组id，通过 [查询用户组列表](https://cloud.tencent.com/document/product/598/34589) 获取用户组 ID 。
- 当ReceiverType为：`Email` 时，Values为用户邮箱信息。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 仪表盘通知渠道。

-  支持：["Email","Sms","WeChat","Phone"]。
-  当ReceiverType为 `Email` 或 `WeCom` 时，ReceiverChannels无效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receiverChannels;
                    bool m_receiverChannelsHasBeenSet;

                    /**
                     * 订阅方式	- 回调地址。
- 当ReceiverType为：`WeCom`、`DingTalk`、`Lark` 时，Url字段必填为各渠道的回调地址。
    - 为：`WeCom` 时，Url为 企业微信回调地址。
    - 为：`DingTalk` 时，Url为 钉钉机器人Webhook地址。
    - 为：`Lark` 时，Url为 飞书机器人Webhook地址。
- 当ReceiverType为：`Uin`、`Group`、`Email` 时，Url字段必须为空。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDNOTICEMODE_H_
