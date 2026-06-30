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
                     * 获取<p>模板名称</p>
                     * @return TmplName <p>模板名称</p>
                     * 
                     */
                    std::string GetTmplName() const;

                    /**
                     * 设置<p>模板名称</p>
                     * @param _tmplName <p>模板名称</p>
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
                     * 获取<p>监控类型</p>
                     * @return MonitorType <p>监控类型</p>
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置<p>监控类型</p>
                     * @param _monitorType <p>监控类型</p>
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
                     * 获取<p>模板内容</p>
                     * @return TmplContents <p>模板内容</p>
                     * 
                     */
                    NoticeContentTmplItem GetTmplContents() const;

                    /**
                     * 设置<p>模板内容</p>
                     * @param _tmplContents <p>模板内容</p>
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
                     * 获取<p>模板语言 en/zh</p>
                     * @return TmplLanguage <p>模板语言 en/zh</p>
                     * 
                     */
                    std::string GetTmplLanguage() const;

                    /**
                     * 设置<p>模板语言 en/zh</p>
                     * @param _tmplLanguage <p>模板语言 en/zh</p>
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
                     * <p>模板名称</p>
                     */
                    std::string m_tmplName;
                    bool m_tmplNameHasBeenSet;

                    /**
                     * <p>监控类型</p>
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>模板内容</p>
                     */
                    NoticeContentTmplItem m_tmplContents;
                    bool m_tmplContentsHasBeenSet;

                    /**
                     * <p>模板语言 en/zh</p>
                     */
                    std::string m_tmplLanguage;
                    bool m_tmplLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATENOTICECONTENTTMPLREQUEST_H_
