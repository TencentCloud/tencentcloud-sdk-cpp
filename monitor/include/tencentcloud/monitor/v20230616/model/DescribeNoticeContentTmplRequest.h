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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBENOTICECONTENTTMPLREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBENOTICECONTENTTMPLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeNoticeContentTmpl请求参数结构体
                */
                class DescribeNoticeContentTmplRequest : public AbstractModel
                {
                public:
                    DescribeNoticeContentTmplRequest();
                    ~DescribeNoticeContentTmplRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页数
                     * @return PageNumber 分页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页数
                     * @param _pageNumber 分页数
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取指定模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * @return TmplIDs 指定模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * 
                     */
                    std::vector<std::string> GetTmplIDs() const;

                    /**
                     * 设置指定模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * @param _tmplIDs 指定模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * 
                     */
                    void SetTmplIDs(const std::vector<std::string>& _tmplIDs);

                    /**
                     * 判断参数 TmplIDs 是否已赋值
                     * @return TmplIDs 是否已赋值
                     * 
                     */
                    bool TmplIDsHasBeenSet() const;

                    /**
                     * 获取指定模板名称查询，查询参数都为空则默认查询账号下所有模板
                     * @return TmplName 指定模板名称查询，查询参数都为空则默认查询账号下所有模板
                     * 
                     */
                    std::string GetTmplName() const;

                    /**
                     * 设置指定模板名称查询，查询参数都为空则默认查询账号下所有模板
                     * @param _tmplName 指定模板名称查询，查询参数都为空则默认查询账号下所有模板
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
                     * 获取指定通知模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * @return NoticeID 指定通知模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * 
                     */
                    std::string GetNoticeID() const;

                    /**
                     * 设置指定通知模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * @param _noticeID 指定通知模板ID查询，查询参数都为空则默认查询账号下所有模板
                     * 
                     */
                    void SetNoticeID(const std::string& _noticeID);

                    /**
                     * 判断参数 NoticeID 是否已赋值
                     * @return NoticeID 是否已赋值
                     * 
                     */
                    bool NoticeIDHasBeenSet() const;

                    /**
                     * 获取模板语言 en/zh 缺省不过滤
                     * @return TmplLanguage 模板语言 en/zh 缺省不过滤
                     * 
                     */
                    std::string GetTmplLanguage() const;

                    /**
                     * 设置模板语言 en/zh 缺省不过滤
                     * @param _tmplLanguage 模板语言 en/zh 缺省不过滤
                     * 
                     */
                    void SetTmplLanguage(const std::string& _tmplLanguage);

                    /**
                     * 判断参数 TmplLanguage 是否已赋值
                     * @return TmplLanguage 是否已赋值
                     * 
                     */
                    bool TmplLanguageHasBeenSet() const;

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

                private:

                    /**
                     * 分页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 指定模板ID查询，查询参数都为空则默认查询账号下所有模板
                     */
                    std::vector<std::string> m_tmplIDs;
                    bool m_tmplIDsHasBeenSet;

                    /**
                     * 指定模板名称查询，查询参数都为空则默认查询账号下所有模板
                     */
                    std::string m_tmplName;
                    bool m_tmplNameHasBeenSet;

                    /**
                     * 指定通知模板ID查询，查询参数都为空则默认查询账号下所有模板
                     */
                    std::string m_noticeID;
                    bool m_noticeIDHasBeenSet;

                    /**
                     * 模板语言 en/zh 缺省不过滤
                     */
                    std::string m_tmplLanguage;
                    bool m_tmplLanguageHasBeenSet;

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBENOTICECONTENTTMPLREQUEST_H_
