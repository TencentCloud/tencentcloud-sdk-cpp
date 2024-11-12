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
                     * 获取通知渠道组ID。
                     * @return AlarmNoticeId 通知渠道组ID。
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置通知渠道组ID。
                     * @param _alarmNoticeId 通知渠道组ID。
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
                     * 获取标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。
                     * @return Tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。
                     * @param _tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。
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
                     * 获取通知渠道组名称。
                     * @return Name 通知渠道组名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置通知渠道组名称。
                     * @param _name 通知渠道组名称。
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
                     * 获取通知类型。可选值：
<li> Trigger - 告警触发</li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
                     * @return Type 通知类型。可选值：
<li> Trigger - 告警触发</li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置通知类型。可选值：
<li> Trigger - 告警触发</li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
                     * @param _type 通知类型。可选值：
<li> Trigger - 告警触发</li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
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
                     * 获取通知接收对象。
                     * @return NoticeReceivers 通知接收对象。
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置通知接收对象。
                     * @param _noticeReceivers 通知接收对象。
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
                     * 获取接口回调信息（包括企业微信等）。
                     * @return WebCallbacks 接口回调信息（包括企业微信等）。
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置接口回调信息（包括企业微信等）。
                     * @param _webCallbacks 接口回调信息（包括企业微信等）。
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
                     * 获取通知规则。

注意: 

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。
- 传其中一组数据，则另一组数据置空。
                     * @return NoticeRules 通知规则。

注意: 

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。
- 传其中一组数据，则另一组数据置空。
                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置通知规则。

注意: 

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。
- 传其中一组数据，则另一组数据置空。
                     * @param _noticeRules 通知规则。

注意: 

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。
- 传其中一组数据，则另一组数据置空。
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
                     * 获取投递日志开关。

参数值：
1：关闭；

2：开启 

                     * @return DeliverStatus 投递日志开关。

参数值：
1：关闭；

2：开启 

                     * 
                     */
                    uint64_t GetDeliverStatus() const;

                    /**
                     * 设置投递日志开关。

参数值：
1：关闭；

2：开启 

                     * @param _deliverStatus 投递日志开关。

参数值：
1：关闭；

2：开启 

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
                     * 获取投递日志配置。
                     * @return DeliverConfig 投递日志配置。
                     * 
                     */
                    DeliverConfig GetDeliverConfig() const;

                    /**
                     * 设置投递日志配置。
                     * @param _deliverConfig 投递日志配置。
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
                     * 获取免登录操作告警开关。

参数值： 
        1：关闭
        2：开启（默认开启）
                     * @return AlarmShieldStatus 免登录操作告警开关。

参数值： 
        1：关闭
        2：开启（默认开启）
                     * 
                     */
                    uint64_t GetAlarmShieldStatus() const;

                    /**
                     * 设置免登录操作告警开关。

参数值： 
        1：关闭
        2：开启（默认开启）
                     * @param _alarmShieldStatus 免登录操作告警开关。

参数值： 
        1：关闭
        2：开启（默认开启）
                     * 
                     */
                    void SetAlarmShieldStatus(const uint64_t& _alarmShieldStatus);

                    /**
                     * 判断参数 AlarmShieldStatus 是否已赋值
                     * @return AlarmShieldStatus 是否已赋值
                     * 
                     */
                    bool AlarmShieldStatusHasBeenSet() const;

                private:

                    /**
                     * 通知渠道组ID。
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * 标签描述列表，通过指定该参数可以同时绑定标签到相应的通知渠道组。最大支持10个标签键值对，并且不能有重复的键值对。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 通知渠道组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 通知类型。可选值：
<li> Trigger - 告警触发</li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 通知接收对象。
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * 接口回调信息（包括企业微信等）。
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * 通知规则。

注意: 

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。
- 传其中一组数据，则另一组数据置空。
                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                    /**
                     * 调用链接域名。http:// 或者 https:// 开头，不能/结尾
                     */
                    std::string m_jumpDomain;
                    bool m_jumpDomainHasBeenSet;

                    /**
                     * 投递日志开关。

参数值：
1：关闭；

2：开启 

                     */
                    uint64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * 投递日志配置。
                     */
                    DeliverConfig m_deliverConfig;
                    bool m_deliverConfigHasBeenSet;

                    /**
                     * 免登录操作告警开关。

参数值： 
        1：关闭
        2：开启（默认开启）
                     */
                    uint64_t m_alarmShieldStatus;
                    bool m_alarmShieldStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYALARMNOTICEREQUEST_H_
