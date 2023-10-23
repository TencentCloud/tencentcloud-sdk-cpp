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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeCdnDomainLogs请求参数结构体
                */
                class DescribeCdnDomainLogsRequest : public AbstractModel
                {
                public:
                    DescribeCdnDomainLogsRequest();
                    ~DescribeCdnDomainLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定域名查询
                     * @return Domain 指定域名查询
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置指定域名查询
                     * @param _domain 指定域名查询
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0
                     * @return Offset 分页查询偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0
                     * @param _offset 分页查询偏移量，默认为 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目，默认为 100，最大为 1000
                     * @return Limit 分页查询限制数目，默认为 100，最大为 1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为 100，最大为 1000
                     * @param _limit 分页查询限制数目，默认为 100，最大为 1000
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取指定区域下载日志，默认为 mainland，可取值有：
<li>mainland：获取境内加速日志包下载链接</li>
<li>overseas：获取境外加速日志包下载链接</li>
<li>global：同时获取境内、境外加速日志包下载链接（分开打包）</li>
                     * @return Area 指定区域下载日志，默认为 mainland，可取值有：
<li>mainland：获取境内加速日志包下载链接</li>
<li>overseas：获取境外加速日志包下载链接</li>
<li>global：同时获取境内、境外加速日志包下载链接（分开打包）</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置指定区域下载日志，默认为 mainland，可取值有：
<li>mainland：获取境内加速日志包下载链接</li>
<li>overseas：获取境外加速日志包下载链接</li>
<li>global：同时获取境内、境外加速日志包下载链接（分开打包）</li>
                     * @param _area 指定区域下载日志，默认为 mainland，可取值有：
<li>mainland：获取境内加速日志包下载链接</li>
<li>overseas：获取境外加速日志包下载链接</li>
<li>global：同时获取境内、境外加速日志包下载链接（分开打包）</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取指定下载日志的类型，可取值有：
<li>access：访问日志</li>
                     * @return LogType 指定下载日志的类型，可取值有：
<li>access：访问日志</li>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置指定下载日志的类型，可取值有：
<li>access：访问日志</li>
                     * @param _logType 指定下载日志的类型，可取值有：
<li>access：访问日志</li>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * 指定域名查询
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为 100，最大为 1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定区域下载日志，默认为 mainland，可取值有：
<li>mainland：获取境内加速日志包下载链接</li>
<li>overseas：获取境外加速日志包下载链接</li>
<li>global：同时获取境内、境外加速日志包下载链接（分开打包）</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 指定下载日志的类型，可取值有：
<li>access：访问日志</li>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSREQUEST_H_
