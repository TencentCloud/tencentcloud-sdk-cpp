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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/NoticeRule.h>
#include <tencentcloud/cls/v20201016/model/AlarmNoticeDeliverConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警通知渠道组详细配置
                */
                class AlarmNotice : public AbstractModel
                {
                public:
                    AlarmNotice();
                    ~AlarmNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知渠道组名称。
                     * @return Name 告警通知渠道组名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警通知渠道组名称。
                     * @param _name 告警通知渠道组名称。
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
                     * 获取告警通知渠道组绑定的标签信息。
                     * @return Tags 告警通知渠道组绑定的标签信息。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置告警通知渠道组绑定的标签信息。
                     * @param _tags 告警通知渠道组绑定的标签信息。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取告警模板的类型。可选值：
<br><li> Trigger - 告警触发</li>
<br><li> Recovery - 告警恢复</li>
<br><li> All - 告警触发和告警恢复</li>
                     * @return Type 告警模板的类型。可选值：
<br><li> Trigger - 告警触发</li>
<br><li> Recovery - 告警恢复</li>
<br><li> All - 告警触发和告警恢复</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置告警模板的类型。可选值：
<br><li> Trigger - 告警触发</li>
<br><li> Recovery - 告警恢复</li>
<br><li> All - 告警触发和告警恢复</li>
                     * @param _type 告警模板的类型。可选值：
<br><li> Trigger - 告警触发</li>
<br><li> Recovery - 告警恢复</li>
<br><li> All - 告警触发和告警恢复</li>
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
                     * 获取告警通知模板接收者信息。
                     * @return NoticeReceivers 告警通知模板接收者信息。
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置告警通知模板接收者信息。
                     * @param _noticeReceivers 告警通知模板接收者信息。
                     * 
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     * 
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取告警通知模板回调信息。
                     * @return WebCallbacks 告警通知模板回调信息。
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置告警通知模板回调信息。
                     * @param _webCallbacks 告警通知模板回调信息。
                     * 
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     * 
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取告警通知模板ID。
                     * @return AlarmNoticeId 告警通知模板ID。
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置告警通知模板ID。
                     * @param _alarmNoticeId 告警通知模板ID。
                     * 
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                    /**
                     * 获取通知规则。
                     * @return NoticeRules 通知规则。
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置通知规则。
                     * @param _noticeRules 通知规则。
                     * 
                     */
                    void SetNoticeRules(const std::vector<NoticeRule>& _noticeRules);

                    /**
                     * 判断参数 NoticeRules 是否已赋值
                     * @return NoticeRules 是否已赋值
                     * 
                     */
                    bool NoticeRulesHasBeenSet() const;

                    /**
                     * 获取免登录操作告警开关。
参数值： 1：关闭 2：开启（默认开启）
                     * @return AlarmShieldStatus 免登录操作告警开关。
参数值： 1：关闭 2：开启（默认开启）
                     * 
                     */
                    uint64_t GetAlarmShieldStatus() const;

                    /**
                     * 设置免登录操作告警开关。
参数值： 1：关闭 2：开启（默认开启）
                     * @param _alarmShieldStatus 免登录操作告警开关。
参数值： 1：关闭 2：开启（默认开启）
                     * 
                     */
                    void SetAlarmShieldStatus(const uint64_t& _alarmShieldStatus);

                    /**
                     * 判断参数 AlarmShieldStatus 是否已赋值
                     * @return AlarmShieldStatus 是否已赋值
                     * 
                     */
                    bool AlarmShieldStatusHasBeenSet() const;

                    /**
                     * 获取调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * @return JumpDomain 调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * 
                     */
                    std::string GetJumpDomain() const;

                    /**
                     * 设置调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * @param _jumpDomain 调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     * 
                     */
                    void SetJumpDomain(const std::string& _jumpDomain);

                    /**
                     * 判断参数 JumpDomain 是否已赋值
                     * @return JumpDomain 是否已赋值
                     * 
                     */
                    bool JumpDomainHasBeenSet() const;

                    /**
                     * 获取投递相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmNoticeDeliverConfig 投递相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmNoticeDeliverConfig GetAlarmNoticeDeliverConfig() const;

                    /**
                     * 设置投递相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmNoticeDeliverConfig 投递相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmNoticeDeliverConfig(const AlarmNoticeDeliverConfig& _alarmNoticeDeliverConfig);

                    /**
                     * 判断参数 AlarmNoticeDeliverConfig 是否已赋值
                     * @return AlarmNoticeDeliverConfig 是否已赋值
                     * 
                     */
                    bool AlarmNoticeDeliverConfigHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近更新时间。
                     * @return UpdateTime 最近更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近更新时间。
                     * @param _updateTime 最近更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 告警通知渠道组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 告警通知渠道组绑定的标签信息。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 告警模板的类型。可选值：
<br><li> Trigger - 告警触发</li>
<br><li> Recovery - 告警恢复</li>
<br><li> All - 告警触发和告警恢复</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警通知模板接收者信息。
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * 告警通知模板回调信息。
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * 告警通知模板ID。
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * 通知规则。
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                    /**
                     * 免登录操作告警开关。
参数值： 1：关闭 2：开启（默认开启）
                     */
                    uint64_t m_alarmShieldStatus;
                    bool m_alarmShieldStatusHasBeenSet;

                    /**
                     * 调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * 投递相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmNoticeDeliverConfig m_alarmNoticeDeliverConfig;
                    bool m_alarmNoticeDeliverConfigHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
