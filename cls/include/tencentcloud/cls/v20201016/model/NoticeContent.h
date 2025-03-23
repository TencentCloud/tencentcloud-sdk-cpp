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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeContentInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 通知内容模板详细配置
                */
                class NoticeContent : public AbstractModel
                {
                public:
                    NoticeContent();
                    ~NoticeContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道类型

Email:邮件;Sms:短信;WeChat:微信;Phone:电话;WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     * @return Type 渠道类型

Email:邮件;Sms:短信;WeChat:微信;Phone:电话;WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置渠道类型

Email:邮件;Sms:短信;WeChat:微信;Phone:电话;WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     * @param _type 渠道类型

Email:邮件;Sms:短信;WeChat:微信;Phone:电话;WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
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
                     * 获取告警触发通知内容模板。
                     * @return TriggerContent 告警触发通知内容模板。
                     * 
                     */
                    NoticeContentInfo GetTriggerContent() const;

                    /**
                     * 设置告警触发通知内容模板。
                     * @param _triggerContent 告警触发通知内容模板。
                     * 
                     */
                    void SetTriggerContent(const NoticeContentInfo& _triggerContent);

                    /**
                     * 判断参数 TriggerContent 是否已赋值
                     * @return TriggerContent 是否已赋值
                     * 
                     */
                    bool TriggerContentHasBeenSet() const;

                    /**
                     * 获取告警恢复通知内容模板。
                     * @return RecoveryContent 告警恢复通知内容模板。
                     * 
                     */
                    NoticeContentInfo GetRecoveryContent() const;

                    /**
                     * 设置告警恢复通知内容模板。
                     * @param _recoveryContent 告警恢复通知内容模板。
                     * 
                     */
                    void SetRecoveryContent(const NoticeContentInfo& _recoveryContent);

                    /**
                     * 判断参数 RecoveryContent 是否已赋值
                     * @return RecoveryContent 是否已赋值
                     * 
                     */
                    bool RecoveryContentHasBeenSet() const;

                private:

                    /**
                     * 渠道类型

Email:邮件;Sms:短信;WeChat:微信;Phone:电话;WeCom:企业微信;DingTalk:钉钉;Lark:飞书;Http:自定义回调;
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警触发通知内容模板。
                     */
                    NoticeContentInfo m_triggerContent;
                    bool m_triggerContentHasBeenSet;

                    /**
                     * 告警恢复通知内容模板。
                     */
                    NoticeContentInfo m_recoveryContent;
                    bool m_recoveryContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENT_H_
