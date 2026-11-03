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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TARGETOPTIONS_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TARGETOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/Header.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 投递目标配置，按 Type 选用不同字段组
                */
                class TargetOptions : public AbstractModel
                {
                public:
                    TargetOptions();
                    ~TargetOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>渠道类型（BOT_CHANNEL 必填）：FEISHU / DINGTALK / QQ / WECOM_NEW / WECOM_AIBOT / WECHAT_KF</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelType <p>渠道类型（BOT_CHANNEL 必填）：FEISHU / DINGTALK / QQ / WECOM_NEW / WECOM_AIBOT / WECHAT_KF</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelType() const;

                    /**
                     * 设置<p>渠道类型（BOT_CHANNEL 必填）：FEISHU / DINGTALK / QQ / WECOM_NEW / WECOM_AIBOT / WECHAT_KF</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelType <p>渠道类型（BOT_CHANNEL 必填）：FEISHU / DINGTALK / QQ / WECOM_NEW / WECOM_AIBOT / WECHAT_KF</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelType(const std::string& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取<p>渠道标识（BOT_CHANNEL 必填）：飞书 appId / 钉钉 appKey / QQ appId / 企微 corpId:agentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelId <p>渠道标识（BOT_CHANNEL 必填）：飞书 appId / 钉钉 appKey / QQ appId / 企微 corpId:agentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>渠道标识（BOT_CHANNEL 必填）：飞书 appId / 钉钉 appKey / QQ appId / 企微 corpId:agentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelId <p>渠道标识（BOT_CHANNEL 必填）：飞书 appId / 钉钉 appKey / QQ appId / 企微 corpId:agentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>回调 URL（WEBHOOK 必填）：仅允许 http/https，禁止内网地址（SSRF 防护）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url <p>回调 URL（WEBHOOK 必填）：仅允许 http/https，禁止内网地址（SSRF 防护）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>回调 URL（WEBHOOK 必填）：仅允许 http/https，禁止内网地址（SSRF 防护）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url <p>回调 URL（WEBHOOK 必填）：仅允许 http/https，禁止内网地址（SSRF 防护）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>自定义请求头列表，与默认 Content-Type: application/json 合并</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers <p>自定义请求头列表，与默认 Content-Type: application/json 合并</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置<p>自定义请求头列表，与默认 Content-Type: application/json 合并</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers <p>自定义请求头列表，与默认 Content-Type: application/json 合并</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>HMAC-SHA256 签名密钥（WEBHOOK 可选）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Secret <p>HMAC-SHA256 签名密钥（WEBHOOK 可选）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置<p>HMAC-SHA256 签名密钥（WEBHOOK 可选）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secret <p>HMAC-SHA256 签名密钥（WEBHOOK 可选）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取<p>接收目标 ID 集合（群 ID / 用户 ID / 频道 ID），BOT_CHANNEL 模式必填，至少一个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecipientIdSet <p>接收目标 ID 集合（群 ID / 用户 ID / 频道 ID），BOT_CHANNEL 模式必填，至少一个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRecipientIdSet() const;

                    /**
                     * 设置<p>接收目标 ID 集合（群 ID / 用户 ID / 频道 ID），BOT_CHANNEL 模式必填，至少一个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recipientIdSet <p>接收目标 ID 集合（群 ID / 用户 ID / 频道 ID），BOT_CHANNEL 模式必填，至少一个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecipientIdSet(const std::vector<std::string>& _recipientIdSet);

                    /**
                     * 判断参数 RecipientIdSet 是否已赋值
                     * @return RecipientIdSet 是否已赋值
                     * 
                     */
                    bool RecipientIdSetHasBeenSet() const;

                private:

                    /**
                     * <p>渠道类型（BOT_CHANNEL 必填）：FEISHU / DINGTALK / QQ / WECOM_NEW / WECOM_AIBOT / WECHAT_KF</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * <p>渠道标识（BOT_CHANNEL 必填）：飞书 appId / 钉钉 appKey / QQ appId / 企微 corpId:agentId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>回调 URL（WEBHOOK 必填）：仅允许 http/https，禁止内网地址（SSRF 防护）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>自定义请求头列表，与默认 Content-Type: application/json 合并</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>HMAC-SHA256 签名密钥（WEBHOOK 可选）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * <p>接收目标 ID 集合（群 ID / 用户 ID / 频道 ID），BOT_CHANNEL 模式必填，至少一个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_recipientIdSet;
                    bool m_recipientIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_TARGETOPTIONS_H_
