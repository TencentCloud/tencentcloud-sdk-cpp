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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
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
                     * 获取项目ID
                     * @return ID 项目ID
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID
                     * @param ID 项目ID
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取日志导出起始时间
                     * @return StartTime 日志导出起始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志导出起始时间
                     * @param StartTime 日志导出起始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取日志导出结束时间
                     * @return EndTime 日志导出结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志导出结束时间
                     * @param EndTime 日志导出结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取日志导出检索语句
                     * @return Query 日志导出检索语句
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置日志导出检索语句
                     * @param Query 日志导出检索语句
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取日志导出数量, 最大值1000万
                     * @return Count 日志导出数量, 最大值1000万
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置日志导出数量, 最大值1000万
                     * @param Count 日志导出数量, 最大值1000万
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取日志导出时间排序。desc，asc，默认为desc
                     * @return Order 日志导出时间排序。desc，asc，默认为desc
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置日志导出时间排序。desc，asc，默认为desc
                     * @param Order 日志导出时间排序。desc，asc，默认为desc
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取日志导出数据格式。json，csv，默认为json
                     * @return Format 日志导出数据格式。json，csv，默认为json
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置日志导出数据格式。json，csv，默认为json
                     * @param Format 日志导出数据格式。json，csv，默认为json
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 日志导出起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志导出结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志导出检索语句
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 日志导出数量, 最大值1000万
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 日志导出时间排序。desc，asc，默认为desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATELOGEXPORTREQUEST_H_
