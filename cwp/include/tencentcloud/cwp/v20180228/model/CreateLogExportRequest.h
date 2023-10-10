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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATELOGEXPORTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATELOGEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateLogExport请求参数结构体
                */
                class CreateLogExportRequest : public AbstractModel
                {
                public:
                    CreateLogExportRequest();
                    ~CreateLogExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志导出数量, 最大值5000万
                     * @return Count 日志导出数量, 最大值5000万
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置日志导出数量, 最大值5000万
                     * @param _count 日志导出数量, 最大值5000万
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取日志导出起始时间，毫秒时间戳
                     * @return StartTime 日志导出起始时间，毫秒时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置日志导出起始时间，毫秒时间戳
                     * @param _startTime 日志导出起始时间，毫秒时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取日志导出结束时间，毫秒时间戳
                     * @return EndTime 日志导出结束时间，毫秒时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置日志导出结束时间，毫秒时间戳
                     * @param _endTime 日志导出结束时间，毫秒时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取日志导出检索语句，不支持[SQL语句]
                     * @return QueryString 日志导出检索语句，不支持[SQL语句]
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置日志导出检索语句，不支持[SQL语句]
                     * @param _queryString 日志导出检索语句，不支持[SQL语句]
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取日志导出时间排序。desc，asc，默认为desc
                     * @return Sort 日志导出时间排序。desc，asc，默认为desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置日志导出时间排序。desc，asc，默认为desc
                     * @param _sort 日志导出时间排序。desc，asc，默认为desc
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取日志导出数据格式。json，csv，默认为json
                     * @return Format 日志导出数据格式。json，csv，默认为json
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置日志导出数据格式。json，csv，默认为json
                     * @param _format 日志导出数据格式。json，csv，默认为json
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 日志导出数量, 最大值5000万
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 日志导出起始时间，毫秒时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志导出结束时间，毫秒时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志导出检索语句，不支持[SQL语句]
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * 日志导出时间排序。desc，asc，默认为desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 日志导出数据格式。json，csv，默认为json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATELOGEXPORTREQUEST_H_
