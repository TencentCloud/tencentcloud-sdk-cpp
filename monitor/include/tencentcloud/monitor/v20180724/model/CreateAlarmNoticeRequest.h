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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAlarmNotice请求参数结构体
                */
                class CreateAlarmNoticeRequest : public AbstractModel
                {
                public:
                    CreateAlarmNoticeRequest();
                    ~CreateAlarmNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，这里填“monitor”
                     * @return Module 模块名，这里填“monitor”
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，这里填“monitor”
                     * @param _module 模块名，这里填“monitor”
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取通知模板名称 60字符以内
                     * @return Name 通知模板名称 60字符以内
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置通知模板名称 60字符以内
                     * @param _name 通知模板名称 60字符以内
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
                     * 获取通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知
                     * @return NoticeType 通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知
                     * 
                     */
                    std::string GetNoticeType() const;

                    /**
                     * 设置通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知
                     * @param _noticeType 通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知
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
                     * 获取通知语言 zh-CN=中文 en-US=英文
                     * @return NoticeLanguage 通知语言 zh-CN=中文 en-US=英文
                     * 
                     */
                    std::string GetNoticeLanguage() const;

                    /**
                     * 设置通知语言 zh-CN=中文 en-US=英文
                     * @param _noticeLanguage 通知语言 zh-CN=中文 en-US=英文
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
                     * 获取用户通知 最多5个
                     * @return UserNotices 用户通知 最多5个
                     * 
                     */
                    std::vector<UserNotice> GetUserNotices() const;

                    /**
                     * 设置用户通知 最多5个
                     * @param _userNotices 用户通知 最多5个
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
                     * 获取回调通知 最多6个
                     * @return URLNotices 回调通知 最多6个
                     * 
                     */
                    std::vector<URLNotice> GetURLNotices() const;

                    /**
                     * 设置回调通知 最多6个
                     * @param _uRLNotices 回调通知 最多6个
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
                     * 获取推送CLS日志服务的操作 最多1个
                     * @return CLSNotices 推送CLS日志服务的操作 最多1个
                     * 
                     */
                    std::vector<CLSNotice> GetCLSNotices() const;

                    /**
                     * 设置推送CLS日志服务的操作 最多1个
                     * @param _cLSNotices 推送CLS日志服务的操作 最多1个
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
                     * 获取模板绑定的标签
                     * @return Tags 模板绑定的标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置模板绑定的标签
                     * @param _tags 模板绑定的标签
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
                     * 模块名，这里填“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 通知模板名称 60字符以内
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知
                     */
                    std::string m_noticeType;
                    bool m_noticeTypeHasBeenSet;

                    /**
                     * 通知语言 zh-CN=中文 en-US=英文
                     */
                    std::string m_noticeLanguage;
                    bool m_noticeLanguageHasBeenSet;

                    /**
                     * 用户通知 最多5个
                     */
                    std::vector<UserNotice> m_userNotices;
                    bool m_userNoticesHasBeenSet;

                    /**
                     * 回调通知 最多6个
                     */
                    std::vector<URLNotice> m_uRLNotices;
                    bool m_uRLNoticesHasBeenSet;

                    /**
                     * 推送CLS日志服务的操作 最多1个
                     */
                    std::vector<CLSNotice> m_cLSNotices;
                    bool m_cLSNoticesHasBeenSet;

                    /**
                     * 模板绑定的标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICEREQUEST_H_
