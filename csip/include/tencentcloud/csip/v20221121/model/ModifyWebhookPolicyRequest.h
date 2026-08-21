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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WebhookNotifyItem.h>
#include <tencentcloud/csip/v20221121/model/WebhookAssetScope.h>
#include <tencentcloud/csip/v20221121/model/WebhookCustomField.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyWebhookPolicy请求参数结构体
                */
                class ModifyWebhookPolicyRequest : public AbstractModel
                {
                public:
                    ModifyWebhookPolicyRequest();
                    ~ModifyWebhookPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略名称<br>入参限制：长度 1-20 个字符，租户内唯一</p>
                     * @return Name <p>策略名称<br>入参限制：长度 1-20 个字符，租户内唯一</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称<br>入参限制：长度 1-20 个字符，租户内唯一</p>
                     * @param _name <p>策略名称<br>入参限制：长度 1-20 个字符，租户内唯一</p>
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
                     * 获取<p>通知项列表<br>入参限制：至少 1 项，Module/SubModule 必须为 DescribeWebhookNotifyItemTree 返回的合法组合</p>
                     * @return NotifyItems <p>通知项列表<br>入参限制：至少 1 项，Module/SubModule 必须为 DescribeWebhookNotifyItemTree 返回的合法组合</p>
                     * 
                     */
                    std::vector<WebhookNotifyItem> GetNotifyItems() const;

                    /**
                     * 设置<p>通知项列表<br>入参限制：至少 1 项，Module/SubModule 必须为 DescribeWebhookNotifyItemTree 返回的合法组合</p>
                     * @param _notifyItems <p>通知项列表<br>入参限制：至少 1 项，Module/SubModule 必须为 DescribeWebhookNotifyItemTree 返回的合法组合</p>
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
                     * 获取<p>接收机器人 ID 列表<br>入参限制：至少 1 个，最多 50 个</p>
                     * @return ReceiverIDList <p>接收机器人 ID 列表<br>入参限制：至少 1 个，最多 50 个</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverIDList() const;

                    /**
                     * 设置<p>接收机器人 ID 列表<br>入参限制：至少 1 个，最多 50 个</p>
                     * @param _receiverIDList <p>接收机器人 ID 列表<br>入参限制：至少 1 个，最多 50 个</p>
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
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
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
                     * 获取<p>策略 ID。大于 0 表示修改；等于 0 或不传表示新增<br>默认值：0</p>
                     * @return ID <p>策略 ID。大于 0 表示修改；等于 0 或不传表示新增<br>默认值：0</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>策略 ID。大于 0 表示修改；等于 0 或不传表示新增<br>默认值：0</p>
                     * @param _iD <p>策略 ID。大于 0 表示修改；等于 0 或不传表示新增<br>默认值：0</p>
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
                     * 获取<p>推送语言<br>枚举值：<br>zh：中文<br>en：英文<br>默认值：国内站默认 zh，国际站默认 en</p>
                     * @return MsgLanguage <p>推送语言<br>枚举值：<br>zh：中文<br>en：英文<br>默认值：国内站默认 zh，国际站默认 en</p>
                     * 
                     */
                    std::string GetMsgLanguage() const;

                    /**
                     * 设置<p>推送语言<br>枚举值：<br>zh：中文<br>en：英文<br>默认值：国内站默认 zh，国际站默认 en</p>
                     * @param _msgLanguage <p>推送语言<br>枚举值：<br>zh：中文<br>en：英文<br>默认值：国内站默认 zh，国际站默认 en</p>
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
                     * 获取<p>自定义透传字段列表<br>入参限制：EnableCustomFields=true 时必填，最多 20 个</p>
                     * @return CustomFields <p>自定义透传字段列表<br>入参限制：EnableCustomFields=true 时必填，最多 20 个</p>
                     * 
                     */
                    std::vector<WebhookCustomField> GetCustomFields() const;

                    /**
                     * 设置<p>自定义透传字段列表<br>入参限制：EnableCustomFields=true 时必填，最多 20 个</p>
                     * @param _customFields <p>自定义透传字段列表<br>入参限制：EnableCustomFields=true 时必填，最多 20 个</p>
                     * 
                     */
                    void SetCustomFields(const std::vector<WebhookCustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>策略名称<br>入参限制：长度 1-20 个字符，租户内唯一</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>启用状态<br>枚举值：<br>ON：启用<br>OFF：禁用</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>通知项列表<br>入参限制：至少 1 项，Module/SubModule 必须为 DescribeWebhookNotifyItemTree 返回的合法组合</p>
                     */
                    std::vector<WebhookNotifyItem> m_notifyItems;
                    bool m_notifyItemsHasBeenSet;

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
                     * <p>接收机器人 ID 列表<br>入参限制：至少 1 个，最多 50 个</p>
                     */
                    std::vector<int64_t> m_receiverIDList;
                    bool m_receiverIDListHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>策略 ID。大于 0 表示修改；等于 0 或不传表示新增<br>默认值：0</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>推送语言<br>枚举值：<br>zh：中文<br>en：英文<br>默认值：国内站默认 zh，国际站默认 en</p>
                     */
                    std::string m_msgLanguage;
                    bool m_msgLanguageHasBeenSet;

                    /**
                     * <p>自定义透传字段列表<br>入参限制：EnableCustomFields=true 时必填，最多 20 个</p>
                     */
                    std::vector<WebhookCustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_
