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
#include <tencentcloud/cls/v20201016/model/AlarmShieldCount.h>


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
                     * 获取<p>告警通知渠道组名称。</p>
                     * @return Name <p>告警通知渠道组名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>告警通知渠道组名称。</p>
                     * @param _name <p>告警通知渠道组名称。</p>
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
                     * 获取<p>告警通知渠道组绑定的标签信息。</p>
                     * @return Tags <p>告警通知渠道组绑定的标签信息。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>告警通知渠道组绑定的标签信息。</p>
                     * @param _tags <p>告警通知渠道组绑定的标签信息。</p>
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
                     * 获取<p>告警模板的类型。可选值：<br><br><li> Trigger - 告警触发</li><br><br><li> Recovery - 告警恢复</li><br><br><li> All - 告警触发和告警恢复</li></p>
                     * @return Type <p>告警模板的类型。可选值：<br><br><li> Trigger - 告警触发</li><br><br><li> Recovery - 告警恢复</li><br><br><li> All - 告警触发和告警恢复</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>告警模板的类型。可选值：<br><br><li> Trigger - 告警触发</li><br><br><li> Recovery - 告警恢复</li><br><br><li> All - 告警触发和告警恢复</li></p>
                     * @param _type <p>告警模板的类型。可选值：<br><br><li> Trigger - 告警触发</li><br><br><li> Recovery - 告警恢复</li><br><br><li> All - 告警触发和告警恢复</li></p>
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
                     * 获取<p>告警通知模板接收者信息。</p>
                     * @return NoticeReceivers <p>告警通知模板接收者信息。</p>
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置<p>告警通知模板接收者信息。</p>
                     * @param _noticeReceivers <p>告警通知模板接收者信息。</p>
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
                     * 获取<p>告警通知模板回调信息。</p>
                     * @return WebCallbacks <p>告警通知模板回调信息。</p>
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置<p>告警通知模板回调信息。</p>
                     * @param _webCallbacks <p>告警通知模板回调信息。</p>
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
                     * 获取<p>告警通知模板ID。</p>
                     * @return AlarmNoticeId <p>告警通知模板ID。</p>
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置<p>告警通知模板ID。</p>
                     * @param _alarmNoticeId <p>告警通知模板ID。</p>
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
                     * 获取<p>通知规则。</p>
                     * @return NoticeRules <p>通知规则。</p>
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置<p>通知规则。</p>
                     * @param _noticeRules <p>通知规则。</p>
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
                     * 获取<p>免登录操作告警开关。<br>参数值： 1：关闭 2：开启（默认开启）</p>
                     * @return AlarmShieldStatus <p>免登录操作告警开关。<br>参数值： 1：关闭 2：开启（默认开启）</p>
                     * 
                     */
                    uint64_t GetAlarmShieldStatus() const;

                    /**
                     * 设置<p>免登录操作告警开关。<br>参数值： 1：关闭 2：开启（默认开启）</p>
                     * @param _alarmShieldStatus <p>免登录操作告警开关。<br>参数值： 1：关闭 2：开启（默认开启）</p>
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
                     * 获取<p>告警详情需要安全认证登录开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     * @return SecureDetailStatus <p>告警详情需要安全认证登录开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     * 
                     */
                    uint64_t GetSecureDetailStatus() const;

                    /**
                     * 设置<p>告警详情需要安全认证登录开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     * @param _secureDetailStatus <p>告警详情需要安全认证登录开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     * 
                     */
                    void SetSecureDetailStatus(const uint64_t& _secureDetailStatus);

                    /**
                     * 判断参数 SecureDetailStatus 是否已赋值
                     * @return SecureDetailStatus 是否已赋值
                     * 
                     */
                    bool SecureDetailStatusHasBeenSet() const;

                    /**
                     * 获取<p>调用链接域名。http:// 或者 https:// 开头，不能/结尾</p>
                     * @return JumpDomain <p>调用链接域名。http:// 或者 https:// 开头，不能/结尾</p>
                     * 
                     */
                    std::string GetJumpDomain() const;

                    /**
                     * 设置<p>调用链接域名。http:// 或者 https:// 开头，不能/结尾</p>
                     * @param _jumpDomain <p>调用链接域名。http:// 或者 https:// 开头，不能/结尾</p>
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
                     * 获取<p>投递相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmNoticeDeliverConfig <p>投递相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmNoticeDeliverConfig GetAlarmNoticeDeliverConfig() const;

                    /**
                     * 设置<p>投递相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmNoticeDeliverConfig <p>投递相关信息。</p>
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
                     * 获取<p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @return CreateTime <p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @param _createTime <p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
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
                     * 获取<p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @return UpdateTime <p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * @param _updateTime <p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>投递日志开关。</p><p>参数值：</p><p>1：关闭</p><p>2：开启</p>
                     * @return DeliverStatus <p>投递日志开关。</p><p>参数值：</p><p>1：关闭</p><p>2：开启</p>
                     * 
                     */
                    uint64_t GetDeliverStatus() const;

                    /**
                     * 设置<p>投递日志开关。</p><p>参数值：</p><p>1：关闭</p><p>2：开启</p>
                     * @param _deliverStatus <p>投递日志开关。</p><p>参数值：</p><p>1：关闭</p><p>2：开启</p>
                     * 
                     */
                    void SetDeliverStatus(const uint64_t& _deliverStatus);

                    /**
                     * 判断参数 DeliverStatus 是否已赋值
                     * @return DeliverStatus 是否已赋值
                     * 
                     */
                    bool DeliverStatusHasBeenSet() const;

                    /**
                     * 获取<p>投递日志标识。</p><p>参数值：</p><p>1：未启用</p><p>2：已启用</p><p>3：投递异常</p>
                     * @return DeliverFlag <p>投递日志标识。</p><p>参数值：</p><p>1：未启用</p><p>2：已启用</p><p>3：投递异常</p>
                     * 
                     */
                    uint64_t GetDeliverFlag() const;

                    /**
                     * 设置<p>投递日志标识。</p><p>参数值：</p><p>1：未启用</p><p>2：已启用</p><p>3：投递异常</p>
                     * @param _deliverFlag <p>投递日志标识。</p><p>参数值：</p><p>1：未启用</p><p>2：已启用</p><p>3：投递异常</p>
                     * 
                     */
                    void SetDeliverFlag(const uint64_t& _deliverFlag);

                    /**
                     * 判断参数 DeliverFlag 是否已赋值
                     * @return DeliverFlag 是否已赋值
                     * 
                     */
                    bool DeliverFlagHasBeenSet() const;

                    /**
                     * 获取<p>通知渠道组配置的告警屏蔽统计状态数量信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmShieldCount <p>通知渠道组配置的告警屏蔽统计状态数量信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmShieldCount GetAlarmShieldCount() const;

                    /**
                     * 设置<p>通知渠道组配置的告警屏蔽统计状态数量信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmShieldCount <p>通知渠道组配置的告警屏蔽统计状态数量信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmShieldCount(const AlarmShieldCount& _alarmShieldCount);

                    /**
                     * 判断参数 AlarmShieldCount 是否已赋值
                     * @return AlarmShieldCount 是否已赋值
                     * 
                     */
                    bool AlarmShieldCountHasBeenSet() const;

                    /**
                     * 获取<p>统一设定自定义回调参数。</p><ul><li>true: 使用通知内容模板中的自定义回调参数覆盖告警策略中单独配置的请求头及请求内容。</li><li>false:优先使用告警策略中单独配置的请求头及请求内容。</li></ul>
                     * @return CallbackPrioritize <p>统一设定自定义回调参数。</p><ul><li>true: 使用通知内容模板中的自定义回调参数覆盖告警策略中单独配置的请求头及请求内容。</li><li>false:优先使用告警策略中单独配置的请求头及请求内容。</li></ul>
                     * 
                     */
                    bool GetCallbackPrioritize() const;

                    /**
                     * 设置<p>统一设定自定义回调参数。</p><ul><li>true: 使用通知内容模板中的自定义回调参数覆盖告警策略中单独配置的请求头及请求内容。</li><li>false:优先使用告警策略中单独配置的请求头及请求内容。</li></ul>
                     * @param _callbackPrioritize <p>统一设定自定义回调参数。</p><ul><li>true: 使用通知内容模板中的自定义回调参数覆盖告警策略中单独配置的请求头及请求内容。</li><li>false:优先使用告警策略中单独配置的请求头及请求内容。</li></ul>
                     * 
                     */
                    void SetCallbackPrioritize(const bool& _callbackPrioritize);

                    /**
                     * 判断参数 CallbackPrioritize 是否已赋值
                     * @return CallbackPrioritize 是否已赋值
                     * 
                     */
                    bool CallbackPrioritizeHasBeenSet() const;

                private:

                    /**
                     * <p>告警通知渠道组名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>告警通知渠道组绑定的标签信息。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>告警模板的类型。可选值：<br><br><li> Trigger - 告警触发</li><br><br><li> Recovery - 告警恢复</li><br><br><li> All - 告警触发和告警恢复</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>告警通知模板接收者信息。</p>
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * <p>告警通知模板回调信息。</p>
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * <p>告警通知模板ID。</p>
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * <p>通知规则。</p>
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                    /**
                     * <p>免登录操作告警开关。<br>参数值： 1：关闭 2：开启（默认开启）</p>
                     */
                    uint64_t m_alarmShieldStatus;
                    bool m_alarmShieldStatusHasBeenSet;

                    /**
                     * <p>告警详情需要安全认证登录开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     */
                    uint64_t m_secureDetailStatus;
                    bool m_secureDetailStatusHasBeenSet;

                    /**
                     * <p>调用链接域名。http:// 或者 https:// 开头，不能/结尾</p>
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * <p>投递相关信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmNoticeDeliverConfig m_alarmNoticeDeliverConfig;
                    bool m_alarmNoticeDeliverConfigHasBeenSet;

                    /**
                     * <p>创建时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近更新时间。格式： YYYY-MM-DD HH:MM:SS</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>投递日志开关。</p><p>参数值：</p><p>1：关闭</p><p>2：开启</p>
                     */
                    uint64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * <p>投递日志标识。</p><p>参数值：</p><p>1：未启用</p><p>2：已启用</p><p>3：投递异常</p>
                     */
                    uint64_t m_deliverFlag;
                    bool m_deliverFlagHasBeenSet;

                    /**
                     * <p>通知渠道组配置的告警屏蔽统计状态数量信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmShieldCount m_alarmShieldCount;
                    bool m_alarmShieldCountHasBeenSet;

                    /**
                     * <p>统一设定自定义回调参数。</p><ul><li>true: 使用通知内容模板中的自定义回调参数覆盖告警策略中单独配置的请求头及请求内容。</li><li>false:优先使用告警策略中单独配置的请求头及请求内容。</li></ul>
                     */
                    bool m_callbackPrioritize;
                    bool m_callbackPrioritizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMNOTICE_H_
