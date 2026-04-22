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
                     * 获取<p>模块名，这里填“monitor”</p>
                     * @return Module <p>模块名，这里填“monitor”</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块名，这里填“monitor”</p>
                     * @param _module <p>模块名，这里填“monitor”</p>
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
                     * 获取<p>通知模板名称 60字符以内</p>
                     * @return Name <p>通知模板名称 60字符以内</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>通知模板名称 60字符以内</p>
                     * @param _name <p>通知模板名称 60字符以内</p>
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
                     * 获取<p>通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知</p>
                     * @return NoticeType <p>通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知</p>
                     * 
                     */
                    std::string GetNoticeType() const;

                    /**
                     * 设置<p>通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知</p>
                     * @param _noticeType <p>通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知</p>
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
                     * 获取<p>通知语言 zh-CN=中文 en-US=英文</p>
                     * @return NoticeLanguage <p>通知语言 zh-CN=中文 en-US=英文</p>
                     * 
                     */
                    std::string GetNoticeLanguage() const;

                    /**
                     * 设置<p>通知语言 zh-CN=中文 en-US=英文</p>
                     * @param _noticeLanguage <p>通知语言 zh-CN=中文 en-US=英文</p>
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
                     * 获取<p>用户通知 最多5个</p>
                     * @return UserNotices <p>用户通知 最多5个</p>
                     * 
                     */
                    std::vector<UserNotice> GetUserNotices() const;

                    /**
                     * 设置<p>用户通知 最多5个</p>
                     * @param _userNotices <p>用户通知 最多5个</p>
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
                     * 获取<p>回调通知 最多6个</p>
                     * @return URLNotices <p>回调通知 最多6个</p>
                     * 
                     */
                    std::vector<URLNotice> GetURLNotices() const;

                    /**
                     * 设置<p>回调通知 最多6个</p>
                     * @param _uRLNotices <p>回调通知 最多6个</p>
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
                     * 获取<p>推送CLS日志服务的操作 最多1个</p>
                     * @return CLSNotices <p>推送CLS日志服务的操作 最多1个</p>
                     * 
                     */
                    std::vector<CLSNotice> GetCLSNotices() const;

                    /**
                     * 设置<p>推送CLS日志服务的操作 最多1个</p>
                     * @param _cLSNotices <p>推送CLS日志服务的操作 最多1个</p>
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
                     * 获取<p>模板绑定的标签</p>
                     * @return Tags <p>模板绑定的标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>模板绑定的标签</p>
                     * @param _tags <p>模板绑定的标签</p>
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
                     * 获取<p>是否免登录，0-否，1-是</p>
                     * @return IsLoginFree <p>是否免登录，0-否，1-是</p>
                     * 
                     */
                    int64_t GetIsLoginFree() const;

                    /**
                     * 设置<p>是否免登录，0-否，1-是</p>
                     * @param _isLoginFree <p>是否免登录，0-否，1-是</p>
                     * 
                     */
                    void SetIsLoginFree(const int64_t& _isLoginFree);

                    /**
                     * 判断参数 IsLoginFree 是否已赋值
                     * @return IsLoginFree 是否已赋值
                     * 
                     */
                    bool IsLoginFreeHasBeenSet() const;

                    /**
                     * 获取<p>IANA 时区名</p>
                     * @return TimeZoneName <p>IANA 时区名</p>
                     * 
                     */
                    std::string GetTimeZoneName() const;

                    /**
                     * 设置<p>IANA 时区名</p>
                     * @param _timeZoneName <p>IANA 时区名</p>
                     * 
                     */
                    void SetTimeZoneName(const std::string& _timeZoneName);

                    /**
                     * 判断参数 TimeZoneName 是否已赋值
                     * @return TimeZoneName 是否已赋值
                     * 
                     */
                    bool TimeZoneNameHasBeenSet() const;

                private:

                    /**
                     * <p>模块名，这里填“monitor”</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>通知模板名称 60字符以内</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>通知类型 ALARM=未恢复通知 OK=已恢复通知 ALL=都通知</p>
                     */
                    std::string m_noticeType;
                    bool m_noticeTypeHasBeenSet;

                    /**
                     * <p>通知语言 zh-CN=中文 en-US=英文</p>
                     */
                    std::string m_noticeLanguage;
                    bool m_noticeLanguageHasBeenSet;

                    /**
                     * <p>用户通知 最多5个</p>
                     */
                    std::vector<UserNotice> m_userNotices;
                    bool m_userNoticesHasBeenSet;

                    /**
                     * <p>回调通知 最多6个</p>
                     */
                    std::vector<URLNotice> m_uRLNotices;
                    bool m_uRLNoticesHasBeenSet;

                    /**
                     * <p>推送CLS日志服务的操作 最多1个</p>
                     */
                    std::vector<CLSNotice> m_cLSNotices;
                    bool m_cLSNoticesHasBeenSet;

                    /**
                     * <p>模板绑定的标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否免登录，0-否，1-是</p>
                     */
                    int64_t m_isLoginFree;
                    bool m_isLoginFreeHasBeenSet;

                    /**
                     * <p>IANA 时区名</p>
                     */
                    std::string m_timeZoneName;
                    bool m_timeZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALARMNOTICEREQUEST_H_
