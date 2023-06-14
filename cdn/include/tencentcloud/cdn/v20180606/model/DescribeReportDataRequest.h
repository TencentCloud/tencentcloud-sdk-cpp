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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATAREQUEST_H_

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
                * DescribeReportData请求参数结构体
                */
                class DescribeReportDataRequest : public AbstractModel
                {
                public:
                    DescribeReportDataRequest();
                    ~DescribeReportDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     * @return StartTime 查询起始时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     * @param _startTime 查询起始时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
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
                     * 获取查询结束时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     * @return EndTime 查询结束时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     * @param _endTime 查询结束时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
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
                     * 获取报表类型
daily：日报表
weekly：周报表（周一至周日）
monthly：月报表（自然月）
                     * @return ReportType 报表类型
daily：日报表
weekly：周报表（周一至周日）
monthly：月报表（自然月）
                     * 
                     */
                    std::string GetReportType() const;

                    /**
                     * 设置报表类型
daily：日报表
weekly：周报表（周一至周日）
monthly：月报表（自然月）
                     * @param _reportType 报表类型
daily：日报表
weekly：周报表（周一至周日）
monthly：月报表（自然月）
                     * 
                     */
                    void SetReportType(const std::string& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取域名加速区域
mainland：中国境内
overseas：中国境外
                     * @return Area 域名加速区域
mainland：中国境内
overseas：中国境外
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置域名加速区域
mainland：中国境内
overseas：中国境外
                     * @param _area 域名加速区域
mainland：中国境内
overseas：中国境外
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
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
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
                     * 获取数据个数，默认1000。
                     * @return Limit 数据个数，默认1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数据个数，默认1000。
                     * @param _limit 数据个数，默认1000。
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
                     * 获取按项目ID筛选
                     * @return Project 按项目ID筛选
                     * 
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置按项目ID筛选
                     * @param _project 按项目ID筛选
                     * 
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                private:

                    /**
                     * 查询起始时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间：yyyy-MM-dd
当报表类型为daily，起始时间和结束时间必须为同一天
当报表类型为weekly，起始时间须为周一，结束时间须为同一周的周日
当报表类型为monthly，起始时间须为自然月第一天，即1号，结束时间须为该自然月最后一天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 报表类型
daily：日报表
weekly：周报表（周一至周日）
monthly：月报表（自然月）
                     */
                    std::string m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 域名加速区域
mainland：中国境内
overseas：中国境外
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 偏移量，默认0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据个数，默认1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按项目ID筛选
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATAREQUEST_H_
