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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDTASKINFOREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDTASKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeUserCmdTaskInfo请求参数结构体
                */
                class DescribeUserCmdTaskInfoRequest : public AbstractModel
                {
                public:
                    DescribeUserCmdTaskInfoRequest();
                    ~DescribeUserCmdTaskInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数量限制
                     * @return Limit 数量限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量限制
                     * @param _limit 数量限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段，支持： RunBeginTime,RunEndTime,Status
                     * @return OrderField 排序字段，支持： RunBeginTime,RunEndTime,Status
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，支持： RunBeginTime,RunEndTime,Status
                     * @param _orderField 排序字段，支持： RunBeginTime,RunEndTime,Status
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式，取值: 1倒序，0顺序；默认倒序
                     * @return Order 排序方式，取值: 1倒序，0顺序；默认倒序
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式，取值: 1倒序，0顺序；默认倒序
                     * @param _order 排序方式，取值: 1倒序，0顺序；默认倒序
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取关键字搜索，可搜索ID或别名，支持模糊搜索
                     * @return SearchKey 关键字搜索，可搜索ID或别名，支持模糊搜索
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置关键字搜索，可搜索ID或别名，支持模糊搜索
                     * @param _searchKey 关键字搜索，可搜索ID或别名，支持模糊搜索
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数量限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，支持： RunBeginTime,RunEndTime,Status
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式，取值: 1倒序，0顺序；默认倒序
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 关键字搜索，可搜索ID或别名，支持模糊搜索
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDTASKINFOREQUEST_H_
