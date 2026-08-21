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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>
#include <tencentcloud/adp/v20260520/model/Sort.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeMsgRecordList请求参数结构体
                */
                class DescribeMsgRecordListRequest : public AbstractModel
                {
                public:
                    DescribeMsgRecordListRequest();
                    ~DescribeMsgRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件列表，支持：ChannelType（渠道类型，0 全部）、FeedbackType（反馈类型，-1 为全部）、QueryType、Query、CategoryId、ReplyMethod、StartTime、EndTime（秒时间戳）、Cursor（游标信息，上一页取响应 PrevCursor，下一页取响应 NextCursor）、Direction（方向，next 下一页，prev 上一页）、CallResult（调用结果，默认 0 为全部，1 为成功，2 为失败）、FailReason、Intent</p>
                     * @return FilterList <p>过滤条件列表，支持：ChannelType（渠道类型，0 全部）、FeedbackType（反馈类型，-1 为全部）、QueryType、Query、CategoryId、ReplyMethod、StartTime、EndTime（秒时间戳）、Cursor（游标信息，上一页取响应 PrevCursor，下一页取响应 NextCursor）、Direction（方向，next 下一页，prev 上一页）、CallResult（调用结果，默认 0 为全部，1 为成功，2 为失败）、FailReason、Intent</p>
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置<p>过滤条件列表，支持：ChannelType（渠道类型，0 全部）、FeedbackType（反馈类型，-1 为全部）、QueryType、Query、CategoryId、ReplyMethod、StartTime、EndTime（秒时间戳）、Cursor（游标信息，上一页取响应 PrevCursor，下一页取响应 NextCursor）、Direction（方向，next 下一页，prev 上一页）、CallResult（调用结果，默认 0 为全部，1 为成功，2 为失败）、FailReason、Intent</p>
                     * @param _filterList <p>过滤条件列表，支持：ChannelType（渠道类型，0 全部）、FeedbackType（反馈类型，-1 为全部）、QueryType、Query、CategoryId、ReplyMethod、StartTime、EndTime（秒时间戳）、Cursor（游标信息，上一页取响应 PrevCursor，下一页取响应 NextCursor）、Direction（方向，next 下一页，prev 上一页）、CallResult（调用结果，默认 0 为全部，1 为成功，2 为失败）、FailReason、Intent</p>
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>页码，从 0 开始；不传时按 0 处理</p>
                     * @return PageNumber <p>页码，从 0 开始；不传时按 0 处理</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从 0 开始；不传时按 0 处理</p>
                     * @param _pageNumber <p>页码，从 0 开始；不传时按 0 处理</p>
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
                     * 获取<p>每页数量，最大 100；不传或传 0 时按默认分页大小处理</p>
                     * @return PageSize <p>每页数量，最大 100；不传或传 0 时按默认分页大小处理</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量，最大 100；不传或传 0 时按默认分页大小处理</p>
                     * @param _pageSize <p>每页数量，最大 100；不传或传 0 时按默认分页大小处理</p>
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
                     * 获取<p>排序条件，只支持按 CreateTime 排序</p>
                     * @return Sort <p>排序条件，只支持按 CreateTime 排序</p>
                     * 
                     */
                    Sort GetSort() const;

                    /**
                     * 设置<p>排序条件，只支持按 CreateTime 排序</p>
                     * @param _sort <p>排序条件，只支持按 CreateTime 排序</p>
                     * 
                     */
                    void SetSort(const Sort& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>过滤条件列表，支持：ChannelType（渠道类型，0 全部）、FeedbackType（反馈类型，-1 为全部）、QueryType、Query、CategoryId、ReplyMethod、StartTime、EndTime（秒时间戳）、Cursor（游标信息，上一页取响应 PrevCursor，下一页取响应 NextCursor）、Direction（方向，next 下一页，prev 上一页）、CallResult（调用结果，默认 0 为全部，1 为成功，2 为失败）、FailReason、Intent</p>
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>页码，从 0 开始；不传时按 0 处理</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量，最大 100；不传或传 0 时按默认分页大小处理</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>排序条件，只支持按 CreateTime 排序</p>
                     */
                    Sort m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEMSGRECORDLISTREQUEST_H_
