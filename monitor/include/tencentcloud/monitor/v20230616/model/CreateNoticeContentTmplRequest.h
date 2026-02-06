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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATENOTICECONTENTTMPLREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATENOTICECONTENTTMPLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/NoticeContentTmplItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * CreateNoticeContentTmpl请求参数结构体
                */
                class CreateNoticeContentTmplRequest : public AbstractModel
                {
                public:
                    CreateNoticeContentTmplRequest();
                    ~CreateNoticeContentTmplRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名称
                     * @return TmplName 模板名称
                     * 
                     */
                    std::string GetTmplName() const;

                    /**
                     * 设置模板名称
                     * @param _tmplName 模板名称
                     * 
                     */
                    void SetTmplName(const std::string& _tmplName);

                    /**
                     * 判断参数 TmplName 是否已赋值
                     * @return TmplName 是否已赋值
                     * 
                     */
                    bool TmplNameHasBeenSet() const;

                    /**
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型
                     * @param _monitorType 监控类型
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取模板内容
                     * @return TmplContents 模板内容
                     * 
                     */
                    NoticeContentTmplItem GetTmplContents() const;

                    /**
                     * 设置模板内容
                     * @param _tmplContents 模板内容
                     * 
                     */
                    void SetTmplContents(const NoticeContentTmplItem& _tmplContents);

                    /**
                     * 判断参数 TmplContents 是否已赋值
                     * @return TmplContents 是否已赋值
                     * 
                     */
                    bool TmplContentsHasBeenSet() const;

                    /**
                     * 获取模板语言 en/zh
                     * @return TmplLanguage 模板语言 en/zh
                     * 
                     */
                    std::string GetTmplLanguage() const;

                    /**
                     * 设置模板语言 en/zh
                     * @param _tmplLanguage 模板语言 en/zh
                     * 
                     */
                    void SetTmplLanguage(const std::string& _tmplLanguage);

                    /**
                     * 判断参数 TmplLanguage 是否已赋值
                     * @return TmplLanguage 是否已赋值
                     * 
                     */
                    bool TmplLanguageHasBeenSet() const;

                private:

                    /**
                     * 模板名称
                     */
                    std::string m_tmplName;
                    bool m_tmplNameHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 模板内容
                     */
                    NoticeContentTmplItem m_tmplContents;
                    bool m_tmplContentsHasBeenSet;

                    /**
                     * 模板语言 en/zh
                     */
                    std::string m_tmplLanguage;
                    bool m_tmplLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATENOTICECONTENTTMPLREQUEST_H_
