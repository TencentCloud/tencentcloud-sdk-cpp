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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINESUBTASKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINESUBTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineSubTaskList请求参数结构体
                */
                class DescribeBaselineSubTaskListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineSubTaskListRequest();
                    ~DescribeBaselineSubTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线主任务 ID。</p>
                     * @return TaskID <p>基线主任务 ID。</p>
                     * 
                     */
                    uint64_t GetTaskID() const;

                    /**
                     * 设置<p>基线主任务 ID。</p>
                     * @param _taskID <p>基线主任务 ID。</p>
                     * 
                     */
                    void SetTaskID(const uint64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤条件，支持的字段包括：TaskID（主任务 ID，精确）、Status（子任务状态）、CheckAssetType、InstanceID/ClusterID 等。</p>
                     * @return Filters <p>通用过滤条件，支持的字段包括：TaskID（主任务 ID，精确）、Status（子任务状态）、CheckAssetType、InstanceID/ClusterID 等。</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件，支持的字段包括：TaskID（主任务 ID，精确）、Status（子任务状态）、CheckAssetType、InstanceID/ClusterID 等。</p>
                     * @param _filters <p>通用过滤条件，支持的字段包括：TaskID（主任务 ID，精确）、Status（子任务状态）、CheckAssetType、InstanceID/ClusterID 等。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * @return Limit <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * @param _limit <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
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
                     * 获取<p>分页查询起始偏移量，从 0 开始。</p>
                     * @return Offset <p>分页查询起始偏移量，从 0 开始。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询起始偏移量，从 0 开始。</p>
                     * @param _offset <p>分页查询起始偏移量，从 0 开始。</p>
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
                     * 获取<p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     * @return Order <p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     * @param _order <p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>排序字段名，由具体接口定义可选字段。</p>
                     * @return By <p>排序字段名，由具体接口定义可选字段。</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段名，由具体接口定义可选字段。</p>
                     * @param _by <p>排序字段名，由具体接口定义可选字段。</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>基线主任务 ID。</p>
                     */
                    uint64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件，支持的字段包括：TaskID（主任务 ID，精确）、Status（子任务状态）、CheckAssetType、InstanceID/ClusterID 等。</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页查询起始偏移量，从 0 开始。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>排序方向，取值 asc（升序）或 desc（降序），默认 desc。</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段名，由具体接口定义可选字段。</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINESUBTASKLISTREQUEST_H_
