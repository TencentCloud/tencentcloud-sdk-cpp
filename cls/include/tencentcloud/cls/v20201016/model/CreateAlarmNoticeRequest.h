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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/NoticeRule.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateAlarmNotice请求参数结构体
                */
                class CreateAlarmNoticeRequest : public AbstractModel
                {
                public:
                    CreateAlarmNoticeRequest();
                    ~CreateAlarmNoticeRequest() = default;
                    std::string ToJsonString() const;


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
<li> Trigger - 告警触发 </li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
                     * @return Type 通知类型。可选值：
<li> Trigger - 告警触发 </li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置通知类型。可选值：
<li> Trigger - 告警触发 </li>
<li> Recovery - 告警恢复</li>
<li> All - 告警触发和告警恢复</li>
                     * @param _type 通知类型。可选值：
<li> Trigger - 告警触发 </li>
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
                     * 获取接口回调信息（包括企业微信）。
                     * @return WebCallbacks 接口回调信息（包括企业微信）。
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置接口回调信息（包括企业微信）。
                     * @param _webCallbacks 接口回调信息（包括企业微信）。
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


                     * @return NoticeRules 通知规则。

 注意:  

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。


                     * 
                     */
                    std::vector<NoticeRule> GetNoticeRules() const;

                    /**
                     * 设置通知规则。

 注意:  

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。


                     * @param _noticeRules 通知规则。

 注意:  

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。


                     * 
                     */
                    void SetNoticeRules(const std::vector<NoticeRule>& _noticeRules);

                    /**
                     * 判断参数 NoticeRules 是否已赋值
                     * @return NoticeRules 是否已赋值
                     * 
                     */
                    bool NoticeRulesHasBeenSet() const;

                private:

                    /**
                     * 通知渠道组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 通知类型。可选值：
<li> Trigger - 告警触发 </li>
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
                     * 接口回调信息（包括企业微信）。
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * 通知规则。

 注意:  

- Type、NoticeReceivers和WebCallbacks是一组配置，NoticeRules是另一组配置，2组配置互斥。


                     */
                    std::vector<NoticeRule> m_noticeRules;
                    bool m_noticeRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEALARMNOTICEREQUEST_H_
