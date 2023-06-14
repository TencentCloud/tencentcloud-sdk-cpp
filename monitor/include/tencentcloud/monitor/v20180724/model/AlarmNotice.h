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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/UserNotice.h>
#include <tencentcloud/monitor/v20180724/model/URLNotice.h>
#include <tencentcloud/monitor/v20180724/model/CLSNotice.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警通知模板详情
                */
                class AlarmNotice : public AbstractModel
                {
                public:
                    AlarmNotice();
                    ~AlarmNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知模板 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 告警通知模板 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置告警通知模板 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 告警通知模板 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取告警通知模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 告警通知模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警通知模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 告警通知模板名称
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
                     * 获取上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取上次修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedBy 上次修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedBy() const;

                    /**
                     * 设置上次修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedBy 上次修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedBy(const std::string& _updatedBy);

                    /**
                     * 判断参数 UpdatedBy 是否已赋值
                     * @return UpdatedBy 是否已赋值
                     * 
                     */
                    bool UpdatedByHasBeenSet() const;

                    /**
                     * 获取告警通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=全部通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeType 告警通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=全部通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNoticeType() const;

                    /**
                     * 设置告警通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=全部通知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeType 告警通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=全部通知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeType(const std::string& _noticeType);

                    /**
                     * 判断参数 NoticeType 是否已赋值
                     * @return NoticeType 是否已赋值
                     * 
                     */
                    bool NoticeTypeHasBeenSet() const;

                    /**
                     * 获取用户通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserNotices 用户通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserNotice> GetUserNotices() const;

                    /**
                     * 设置用户通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userNotices 用户通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserNotices(const std::vector<UserNotice>& _userNotices);

                    /**
                     * 判断参数 UserNotices 是否已赋值
                     * @return UserNotices 是否已赋值
                     * 
                     */
                    bool UserNoticesHasBeenSet() const;

                    /**
                     * 获取回调通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URLNotices 回调通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<URLNotice> GetURLNotices() const;

                    /**
                     * 设置回调通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRLNotices 回调通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetURLNotices(const std::vector<URLNotice>& _uRLNotices);

                    /**
                     * 判断参数 URLNotices 是否已赋值
                     * @return URLNotices 是否已赋值
                     * 
                     */
                    bool URLNoticesHasBeenSet() const;

                    /**
                     * 获取是否是系统预设通知模板 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPreset 是否是系统预设通知模板 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsPreset() const;

                    /**
                     * 设置是否是系统预设通知模板 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPreset 是否是系统预设通知模板 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPreset(const int64_t& _isPreset);

                    /**
                     * 判断参数 IsPreset 是否已赋值
                     * @return IsPreset 是否已赋值
                     * 
                     */
                    bool IsPresetHasBeenSet() const;

                    /**
                     * 获取通知语言 zh-CN=中文 en-US=英文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeLanguage 通知语言 zh-CN=中文 en-US=英文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNoticeLanguage() const;

                    /**
                     * 设置通知语言 zh-CN=中文 en-US=英文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noticeLanguage 通知语言 zh-CN=中文 en-US=英文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoticeLanguage(const std::string& _noticeLanguage);

                    /**
                     * 判断参数 NoticeLanguage 是否已赋值
                     * @return NoticeLanguage 是否已赋值
                     * 
                     */
                    bool NoticeLanguageHasBeenSet() const;

                    /**
                     * 获取告警通知模板绑定的告警策略ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyIds 告警通知模板绑定的告警策略ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置告警通知模板绑定的告警策略ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyIds 告警通知模板绑定的告警策略ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取后台 amp consumer id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AMPConsumerId 后台 amp consumer id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAMPConsumerId() const;

                    /**
                     * 设置后台 amp consumer id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aMPConsumerId 后台 amp consumer id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAMPConsumerId(const std::string& _aMPConsumerId);

                    /**
                     * 判断参数 AMPConsumerId 是否已赋值
                     * @return AMPConsumerId 是否已赋值
                     * 
                     */
                    bool AMPConsumerIdHasBeenSet() const;

                    /**
                     * 获取推送cls渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSNotices 推送cls渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CLSNotice> GetCLSNotices() const;

                    /**
                     * 设置推送cls渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLSNotices 推送cls渠道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLSNotices(const std::vector<CLSNotice>& _cLSNotices);

                    /**
                     * 判断参数 CLSNotices 是否已赋值
                     * @return CLSNotices 是否已赋值
                     * 
                     */
                    bool CLSNoticesHasBeenSet() const;

                    /**
                     * 获取通知模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 通知模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置通知模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 通知模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 告警通知模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 上次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 上次修改人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedBy;
                    bool m_updatedByHasBeenSet;

                    /**
                     * 告警通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=全部通知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_noticeType;
                    bool m_noticeTypeHasBeenSet;

                    /**
                     * 用户通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserNotice> m_userNotices;
                    bool m_userNoticesHasBeenSet;

                    /**
                     * 回调通知列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<URLNotice> m_uRLNotices;
                    bool m_uRLNoticesHasBeenSet;

                    /**
                     * 是否是系统预设通知模板 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPreset;
                    bool m_isPresetHasBeenSet;

                    /**
                     * 通知语言 zh-CN=中文 en-US=英文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_noticeLanguage;
                    bool m_noticeLanguageHasBeenSet;

                    /**
                     * 告警通知模板绑定的告警策略ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * 后台 amp consumer id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aMPConsumerId;
                    bool m_aMPConsumerIdHasBeenSet;

                    /**
                     * 推送cls渠道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CLSNotice> m_cLSNotices;
                    bool m_cLSNoticesHasBeenSet;

                    /**
                     * 通知模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMNOTICE_H_
