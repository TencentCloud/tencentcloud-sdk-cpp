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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWLOGSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlowLogs请求参数结构体
                */
                class DescribeStreamLinkFlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowLogsRequest();
                    ~DescribeStreamLinkFlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取传输流Id。
                     * @return FlowId 传输流Id。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置传输流Id。
                     * @param _flowId 传输流Id。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @return StartTime 统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @param _startTime 统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
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
                     * 获取统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @return EndTime 统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     * @param _endTime 统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
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
                     * 获取输入或输出类型，可选[input|output]。
                     * @return Type 输入或输出类型，可选[input|output]。
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置输入或输出类型，可选[input|output]。
                     * @param _type 输入或输出类型，可选[input|output]。
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取主通道或备通道，可选[0|1]。
                     * @return Pipeline 主通道或备通道，可选[0|1]。
                     * 
                     */
                    std::vector<std::string> GetPipeline() const;

                    /**
                     * 设置主通道或备通道，可选[0|1]。
                     * @param _pipeline 主通道或备通道，可选[0|1]。
                     * 
                     */
                    void SetPipeline(const std::vector<std::string>& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

                    /**
                     * 获取每页大小，默认100，范围为[1, 1000]。
                     * @return PageSize 每页大小，默认100，范围为[1, 1000]。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小，默认100，范围为[1, 1000]。
                     * @param _pageSize 每页大小，默认100，范围为[1, 1000]。
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取按Timestamp升序或降序排序，默认降序，可选[desc|asc]。
                     * @return SortType 按Timestamp升序或降序排序，默认降序，可选[desc|asc]。
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置按Timestamp升序或降序排序，默认降序，可选[desc|asc]。
                     * @param _sortType 按Timestamp升序或降序排序，默认降序，可选[desc|asc]。
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取页码，默认1，范围为[1, 1000]。
                     * @return PageNum 页码，默认1，范围为[1, 1000]。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置页码，默认1，范围为[1, 1000]。
                     * @param _pageNum 页码，默认1，范围为[1, 1000]。
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                private:

                    /**
                     * 传输流Id。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 统计的开始时间，默认为前一小时，最多支持查询近7天。
UTC时间，如'2020-01-01T12:00:00Z'。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计的结束时间，默认为StartTime后一小时，最多支持查询24小时的数据。
UTC时间，如'2020-01-01T12:00:00Z'。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 输入或输出类型，可选[input|output]。
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 主通道或备通道，可选[0|1]。
                     */
                    std::vector<std::string> m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * 每页大小，默认100，范围为[1, 1000]。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 按Timestamp升序或降序排序，默认降序，可选[desc|asc]。
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 页码，默认1，范围为[1, 1000]。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWLOGSREQUEST_H_
