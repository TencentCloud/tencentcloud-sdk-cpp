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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/NoticeRule.h>
#include <tencentcloud/cls/v20201016/model/DeliverConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyAlarmNotice请求参数结构体
                */
                class ModifyAlarmNoticeRequest : public AbstractModel
                {
                public:
                    ModifyAlarmNoticeRequest();
                    ~ModifyAlarmNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通知渠道组ID。-通过<a href="https://cloud.tencent.com/document/api/614/56462">获取通知渠道组列表</a>获取通知渠道组ID</p>
                     * @return AlarmNoticeId <p>通知渠道组ID。-通过<a href="https://cloud.tencent.com/document/api/614/56462">获取通知渠道组列表</a>获取通知渠道组ID</p>
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置<p>通知渠道组ID。-通过<a href="https://cloud.tencent.com/document/api/614/56462">获取通知渠道组列表</a>获取通知渠道组ID</p>
                     * @param _alarmNoticeId <p>通知渠道组ID。-通过<a href="https://cloud.tencent.com/document/api/614/56462">获取通知渠道组列表</a>获取通知渠道组ID</p>
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
                     * 获取<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * @return Tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * @param _tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。</p>
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
                     * 获取<p>通知渠道组名称。</p>
                     * @return Name <p>通知渠道组名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>通知渠道组名称。</p>
                     * @param _name <p>通知渠道组名称。</p>
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
                     * 获取<p>通知类型。可选值：</p><li> Trigger - 告警触发</li><li> Recovery - 告警恢复</li><li> All - 告警触发和告警恢复</li>
                     * @return Type <p>通知类型。可选值：</p><li> Trigger - 告警触发</li><li> Recovery - 告警恢复</li><li> All - 告警触发和告警恢复</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>通知类型。可选值：</p><li> Trigger - 告警触发</li><li> Recovery - 告警恢复</li><li> All - 告警触发和告警恢复</li>
                     * @param _type <p>通知类型。可选值：</p><li> Trigger - 告警触发</li><li> Recovery - 告警恢复</li><li> All - 告警触发和告警恢复</li>
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
                     * 获取<p>通知接收对象。</p>
                     * @return NoticeReceivers <p>通知接收对象。</p>
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置<p>通知接收对象。</p>
                     * @param _noticeReceivers <p>通知接收对象。</p>
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
                     * 获取<p>接口回调信息（包括企业微信等）。</p>
                     * @return WebCallbacks <p>接口回调信息（包括企业微信等）。</p>
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置<p>接口回调信息（包括企业微信等）。</p>
                     * @param _webCallbacks <p>接口回调信息（包括企业微信等）。</p>
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
                     * 获取<p>通知规则。</p><p>注意: </p><ul><li>Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。</li><li>传其中一组数据，则另一组数据置空。</li></ul>
                     * @return NoticeRules <p>通知规则。</p><p>注意: </p><ul><li>Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。</li><li>传其中一组数据，则另一组数据置空。</li></ul>
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置<p>通知规则。</p><p>注意: </p><ul><li>Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。</li><li>传其中一组数据，则另一组数据置空。</li></ul>
                     * @param _noticeRules <p>通知规则。</p><p>注意: </p><ul><li>Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。</li><li>传其中一组数据，则另一组数据置空。</li></ul>
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
                     * 获取<p>投递日志开关。</p><p>参数值：<br>1：关闭；</p><p>2：开启</p>
                     * @return DeliverStatus <p>投递日志开关。</p><p>参数值：<br>1：关闭；</p><p>2：开启</p>
                     * 
                     */
                    uint64_t GetDeliverStatus() const;

                    /**
                     * 设置<p>投递日志开关。</p><p>参数值：<br>1：关闭；</p><p>2：开启</p>
                     * @param _deliverStatus <p>投递日志开关。</p><p>参数值：<br>1：关闭；</p><p>2：开启</p>
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
                     * 获取<p>投递日志配置。</p>
                     * @return DeliverConfig <p>投递日志配置。</p>
                     * 
                     */
                    DeliverConfig GetDeliverConfig() const;

                    /**
                     * 设置<p>投递日志配置。</p>
                     * @param _deliverConfig <p>投递日志配置。</p>
                     * 
                     */
                    void SetDeliverConfig(const DeliverConfig& _deliverConfig);

                    /**
                     * 判断参数 DeliverConfig 是否已赋值
                     * @return DeliverConfig 是否已赋值
                     * 
                     */
                    bool DeliverConfigHasBeenSet() const;

                    /**
                     * 获取<p>免登录操作告警开关。</p><p>参数值：<br>        1：关闭<br>        2：开启（默认开启）</p>
                     * @return AlarmShieldStatus <p>免登录操作告警开关。</p><p>参数值：<br>        1：关闭<br>        2：开启（默认开启）</p>
                     * 
                     */
                    uint64_t GetAlarmShieldStatus() const;

                    /**
                     * 设置<p>免登录操作告警开关。</p><p>参数值：<br>        1：关闭<br>        2：开启（默认开启）</p>
                     * @param _alarmShieldStatus <p>免登录操作告警开关。</p><p>参数值：<br>        1：关闭<br>        2：开启（默认开启）</p>
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
                     * 获取<p>告警详情安全认证跳转开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     * @return SecureDetailStatus <p>告警详情安全认证跳转开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     * 
                     */
                    uint64_t GetSecureDetailStatus() const;

                    /**
                     * 设置<p>告警详情安全认证跳转开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     * @param _secureDetailStatus <p>告警详情安全认证跳转开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
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
                     * <p>通知渠道组ID。-通过<a href="https://cloud.tencent.com/document/api/614/56462">获取通知渠道组列表</a>获取通知渠道组ID</p>
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>通知渠道组名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>通知类型。可选值：</p><li> Trigger - 告警触发</li><li> Recovery - 告警恢复</li><li> All - 告警触发和告警恢复</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>通知接收对象。</p>
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * <p>接口回调信息（包括企业微信等）。</p>
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * <p>通知规则。</p><p>注意: </p><ul><li>Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。</li><li>传其中一组数据，则另一组数据置空。</li></ul>
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                    /**
                     * <p>调用链接域名。http:// 或者 https:// 开头，不能/结尾</p>
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * <p>投递日志开关。</p><p>参数值：<br>1：关闭；</p><p>2：开启</p>
                     */
                    uint64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * <p>投递日志配置。</p>
                     */
                    DeliverConfig m_deliverConfig;
                    bool m_deliverConfigHasBeenSet;

                    /**
                     * <p>免登录操作告警开关。</p><p>参数值：<br>        1：关闭<br>        2：开启（默认开启）</p>
                     */
                    uint64_t m_alarmShieldStatus;
                    bool m_alarmShieldStatusHasBeenSet;

                    /**
                     * <p>告警详情安全认证跳转开关，未传时默认&quot;关闭&quot;</p><p>枚举值：</p><ul><li>1： 关闭（默认值）</li><li>2： 开启</li></ul>
                     */
                    uint64_t m_secureDetailStatus;
                    bool m_secureDetailStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMNOTICEREQUEST_H_
