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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEQAPREVIEWREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEQAPREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListReleaseQAPreview请求参数结构体
                */
                class ListReleaseQAPreviewRequest : public AbstractModel
                {
                public:
                    ListReleaseQAPreviewRequest();
                    ~ListReleaseQAPreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * @return BotBizId 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * @param _botBizId 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取页码（必须大于0）
                     * @return PageNumber 页码（必须大于0）
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码（必须大于0）
                     * @param _pageNumber 页码（必须大于0）
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
                     * 获取每页数量（取值范围为1-200）
                     * @return PageSize 每页数量（取值范围为1-200）
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量（取值范围为1-200）
                     * @param _pageSize 每页数量（取值范围为1-200）
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
                     * 获取查询内容关键字，用于模糊查询，若未提供该参数，默认为查询全部。
                     * @return Query 查询内容关键字，用于模糊查询，若未提供该参数，默认为查询全部。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询内容关键字，用于模糊查询，若未提供该参数，默认为查询全部。
                     * @param _query 查询内容关键字，用于模糊查询，若未提供该参数，默认为查询全部。
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * @return ReleaseBizId 发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * 
                     */
                    std::string GetReleaseBizId() const;

                    /**
                     * 设置发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * @param _releaseBizId 发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     * 
                     */
                    void SetReleaseBizId(const std::string& _releaseBizId);

                    /**
                     * 判断参数 ReleaseBizId 是否已赋值
                     * @return ReleaseBizId 是否已赋值
                     * 
                     */
                    bool ReleaseBizIdHasBeenSet() const;

                    /**
                     * 获取开始时间。Unix 时间戳，单位是秒，默认为空。
                     * @return StartTime 开始时间。Unix 时间戳，单位是秒，默认为空。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。Unix 时间戳，单位是秒，默认为空。
                     * @param _startTime 开始时间。Unix 时间戳，单位是秒，默认为空。
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
                     * 获取结束时间。Unix 时间戳，单位是秒，默认为空。
                     * @return EndTime 结束时间。Unix 时间戳，单位是秒，默认为空。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。Unix 时间戳，单位是秒，默认为空。
                     * @param _endTime 结束时间。Unix 时间戳，单位是秒，默认为空。
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
                     * 获取状态(1新增2修改3删除)，其和ReleaseStatus的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * @return Actions 状态(1新增2修改3删除)，其和ReleaseStatus的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * 
                     */
                    std::vector<uint64_t> GetActions() const;

                    /**
                     * 设置状态(1新增2修改3删除)，其和ReleaseStatus的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * @param _actions 状态(1新增2修改3删除)，其和ReleaseStatus的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * 
                     */
                    void SetActions(const std::vector<uint64_t>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取发布状态(4发布成功5发布失败)。其和Actions的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * @return ReleaseStatus 发布状态(4发布成功5发布失败)。其和Actions的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * 
                     */
                    std::vector<uint64_t> GetReleaseStatus() const;

                    /**
                     * 设置发布状态(4发布成功5发布失败)。其和Actions的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * @param _releaseStatus 发布状态(4发布成功5发布失败)。其和Actions的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     * 
                     */
                    void SetReleaseStatus(const std::vector<uint64_t>& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                private:

                    /**
                     * 应用ID（获取方法参看如何获取   [BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)）
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 页码（必须大于0）
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量（取值范围为1-200）
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询内容关键字，用于模糊查询，若未提供该参数，默认为查询全部。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 发布单ID（可以通过[ListRelease](https://cloud.tencent.com/document/product/1759/105077)获得）
                     */
                    std::string m_releaseBizId;
                    bool m_releaseBizIdHasBeenSet;

                    /**
                     * 开始时间。Unix 时间戳，单位是秒，默认为空。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。Unix 时间戳，单位是秒，默认为空。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 状态(1新增2修改3删除)，其和ReleaseStatus的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     */
                    std::vector<uint64_t> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 发布状态(4发布成功5发布失败)。其和Actions的区别为：Actions表示的是对数据/内容的操作状态，ReleaseStatus表示数据/内容本身的发布状态
                     */
                    std::vector<uint64_t> m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTRELEASEQAPREVIEWREQUEST_H_
