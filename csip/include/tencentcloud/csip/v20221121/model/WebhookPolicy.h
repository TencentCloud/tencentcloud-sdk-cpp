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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WebhookNotifyItem.h>
#include <tencentcloud/csip/v20221121/model/WebhookAssetScope.h>
#include <tencentcloud/csip/v20221121/model/WebhookCustomField.h>
#include <tencentcloud/csip/v20221121/model/WebhookReceiverBrief.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 通知策略完整信息
                */
                class WebhookPolicy : public AbstractModel
                {
                public:
                    WebhookPolicy();
                    ~WebhookPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略 ID</p>
                     * @return ID <p>策略 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>策略 ID</p>
                     * @param _iD <p>策略 ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>策略名称</p>
                     * @return Name <p>策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _name <p>策略名称</p>
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
                     * 获取<p>启用状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     * @return Status <p>启用状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>启用状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     * @param _status <p>启用状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
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
                     * 获取<p>通知项列表（模块+子模块+等级+处置状态）</p>
                     * @return NotifyItems <p>通知项列表（模块+子模块+等级+处置状态）</p>
                     * 
                     */
                    std::vector<WebhookNotifyItem> GetNotifyItems() const;

                    /**
                     * 设置<p>通知项列表（模块+子模块+等级+处置状态）</p>
                     * @param _notifyItems <p>通知项列表（模块+子模块+等级+处置状态）</p>
                     * 
                     */
                    void SetNotifyItems(const std::vector<WebhookNotifyItem>& _notifyItems);

                    /**
                     * 判断参数 NotifyItems 是否已赋值
                     * @return NotifyItems 是否已赋值
                     * 
                     */
                    bool NotifyItemsHasBeenSet() const;

                    /**
                     * 获取<p>接收的成员账号范围</p>
                     * @return MemberId <p>接收的成员账号范围</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>接收的成员账号范围</p>
                     * @param _memberId <p>接收的成员账号范围</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>通知资产范围</p>
                     * @return AssetScope <p>通知资产范围</p>
                     * 
                     */
                    WebhookAssetScope GetAssetScope() const;

                    /**
                     * 设置<p>通知资产范围</p>
                     * @param _assetScope <p>通知资产范围</p>
                     * 
                     */
                    void SetAssetScope(const WebhookAssetScope& _assetScope);

                    /**
                     * 判断参数 AssetScope 是否已赋值
                     * @return AssetScope 是否已赋值
                     * 
                     */
                    bool AssetScopeHasBeenSet() const;

                    /**
                     * 获取<p>接收格式<br>枚举值：<br>TEXT：文本格式<br>JSON：JSON 格式</p>
                     * @return ReceiveFormat <p>接收格式<br>枚举值：<br>TEXT：文本格式<br>JSON：JSON 格式</p>
                     * 
                     */
                    std::string GetReceiveFormat() const;

                    /**
                     * 设置<p>接收格式<br>枚举值：<br>TEXT：文本格式<br>JSON：JSON 格式</p>
                     * @param _receiveFormat <p>接收格式<br>枚举值：<br>TEXT：文本格式<br>JSON：JSON 格式</p>
                     * 
                     */
                    void SetReceiveFormat(const std::string& _receiveFormat);

                    /**
                     * 判断参数 ReceiveFormat 是否已赋值
                     * @return ReceiveFormat 是否已赋值
                     * 
                     */
                    bool ReceiveFormatHasBeenSet() const;

                    /**
                     * 获取<p>推送语言<br>枚举值：<br>zh：中文<br>en：英文</p>
                     * @return MsgLanguage <p>推送语言<br>枚举值：<br>zh：中文<br>en：英文</p>
                     * 
                     */
                    std::string GetMsgLanguage() const;

                    /**
                     * 设置<p>推送语言<br>枚举值：<br>zh：中文<br>en：英文</p>
                     * @param _msgLanguage <p>推送语言<br>枚举值：<br>zh：中文<br>en：英文</p>
                     * 
                     */
                    void SetMsgLanguage(const std::string& _msgLanguage);

                    /**
                     * 判断参数 MsgLanguage 是否已赋值
                     * @return MsgLanguage 是否已赋值
                     * 
                     */
                    bool MsgLanguageHasBeenSet() const;

                    /**
                     * 获取<p>自定义透传字段列表，关闭时为空数组</p>
                     * @return CustomFields <p>自定义透传字段列表，关闭时为空数组</p>
                     * 
                     */
                    std::vector<WebhookCustomField> GetCustomFields() const;

                    /**
                     * 设置<p>自定义透传字段列表，关闭时为空数组</p>
                     * @param _customFields <p>自定义透传字段列表，关闭时为空数组</p>
                     * 
                     */
                    void SetCustomFields(const std::vector<WebhookCustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取<p>接收机器人 ID 列表</p>
                     * @return ReceiverIDList <p>接收机器人 ID 列表</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverIDList() const;

                    /**
                     * 设置<p>接收机器人 ID 列表</p>
                     * @param _receiverIDList <p>接收机器人 ID 列表</p>
                     * 
                     */
                    void SetReceiverIDList(const std::vector<int64_t>& _receiverIDList);

                    /**
                     * 判断参数 ReceiverIDList 是否已赋值
                     * @return ReceiverIDList 是否已赋值
                     * 
                     */
                    bool ReceiverIDListHasBeenSet() const;

                    /**
                     * 获取<p>接收机器人精简信息（列表行展示用）</p>
                     * @return ReceiverList <p>接收机器人精简信息（列表行展示用）</p>
                     * 
                     */
                    std::vector<WebhookReceiverBrief> GetReceiverList() const;

                    /**
                     * 设置<p>接收机器人精简信息（列表行展示用）</p>
                     * @param _receiverList <p>接收机器人精简信息（列表行展示用）</p>
                     * 
                     */
                    void SetReceiverList(const std::vector<WebhookReceiverBrief>& _receiverList);

                    /**
                     * 判断参数 ReceiverList 是否已赋值
                     * @return ReceiverList 是否已赋值
                     * 
                     */
                    bool ReceiverListHasBeenSet() const;

                private:

                    /**
                     * <p>策略 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>启用状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>通知项列表（模块+子模块+等级+处置状态）</p>
                     */
                    std::vector<WebhookNotifyItem> m_notifyItems;
                    bool m_notifyItemsHasBeenSet;

                    /**
                     * <p>接收的成员账号范围</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通知资产范围</p>
                     */
                    WebhookAssetScope m_assetScope;
                    bool m_assetScopeHasBeenSet;

                    /**
                     * <p>接收格式<br>枚举值：<br>TEXT：文本格式<br>JSON：JSON 格式</p>
                     */
                    std::string m_receiveFormat;
                    bool m_receiveFormatHasBeenSet;

                    /**
                     * <p>推送语言<br>枚举值：<br>zh：中文<br>en：英文</p>
                     */
                    std::string m_msgLanguage;
                    bool m_msgLanguageHasBeenSet;

                    /**
                     * <p>自定义透传字段列表，关闭时为空数组</p>
                     */
                    std::vector<WebhookCustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>接收机器人 ID 列表</p>
                     */
                    std::vector<int64_t> m_receiverIDList;
                    bool m_receiverIDListHasBeenSet;

                    /**
                     * <p>接收机器人精简信息（列表行展示用）</p>
                     */
                    std::vector<WebhookReceiverBrief> m_receiverList;
                    bool m_receiverListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKPOLICY_H_
