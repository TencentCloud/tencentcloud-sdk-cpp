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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/WebHookEventKv.h>
#include <tencentcloud/cwp/v20180228/model/WebHookHostLabel.h>
#include <tencentcloud/cwp/v20180228/model/WebHookReceiver.h>
#include <tencentcloud/cwp/v20180228/model/WebHookCustomField.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 策略
                */
                class WebHookPolicy : public AbstractModel
                {
                public:
                    WebHookPolicy();
                    ~WebHookPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 策略名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Events 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebHookEventKv> GetEvents() const;

                    /**
                     * 设置事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _events 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEvents(const std::vector<WebHookEventKv>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取主机范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostLabels 主机范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebHookHostLabel> GetHostLabels() const;

                    /**
                     * 设置主机范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostLabels 主机范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostLabels(const std::vector<WebHookHostLabel>& _hostLabels);

                    /**
                     * 判断参数 HostLabels 是否已赋值
                     * @return HostLabels 是否已赋值
                     * 
                     */
                    bool HostLabelsHasBeenSet() const;

                    /**
                     * 获取接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Receivers 接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebHookReceiver> GetReceivers() const;

                    /**
                     * 设置接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receivers 接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceivers(const std::vector<WebHookReceiver>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取格式 0text 1json
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 格式 0text 1json
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFormat() const;

                    /**
                     * 设置格式 0text 1json
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _format 格式 0text 1json
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormat(const int64_t& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取自定义透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomFields 自定义透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebHookCustomField> GetCustomFields() const;

                    /**
                     * 设置自定义透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customFields 自定义透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomFields(const std::vector<WebHookCustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取是否启用[1:禁用|0:启用]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDisabled 是否启用[1:禁用|0:启用]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDisabled() const;

                    /**
                     * 设置是否启用[1:禁用|0:启用]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDisabled 是否启用[1:禁用|0:启用]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDisabled(const int64_t& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                    /**
                     * 获取主机列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuids 主机列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置主机列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quuids 主机列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取主机数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostCount 主机数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置主机数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostCount 主机数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                private:

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebHookEventKv> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 主机范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebHookHostLabel> m_hostLabels;
                    bool m_hostLabelsHasBeenSet;

                    /**
                     * 接收人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebHookReceiver> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 格式 0text 1json
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 自定义透传字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebHookCustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * 是否启用[1:禁用|0:启用]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                    /**
                     * 主机列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 主机数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKPOLICY_H_
