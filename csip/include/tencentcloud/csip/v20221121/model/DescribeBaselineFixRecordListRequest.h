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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEFIXRECORDLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEFIXRECORDLISTREQUEST_H_

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
                * DescribeBaselineFixRecordList请求参数结构体
                */
                class DescribeBaselineFixRecordListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineFixRecordListRequest();
                    ~DescribeBaselineFixRecordListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     * @return Filters <p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
                     * @param _filters <p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
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
                     * 获取<p>排序字段名。取值：FixTime（修复时间）、ID（记录 ID）。默认按 ID 倒序。</p>
                     * @return By <p>排序字段名。取值：FixTime（修复时间）、ID（记录 ID）。默认按 ID 倒序。</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段名。取值：FixTime（修复时间）、ID（记录 ID）。默认按 ID 倒序。</p>
                     * @param _by <p>排序字段名。取值：FixTime（修复时间）、ID（记录 ID）。默认按 ID 倒序。</p>
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
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件。支持字段：ItemName（检测项名称，模糊）、PolicyName（所属基线名称，模糊）、InstanceName（主机名称，模糊）、InstanceID（实例ID，精准）、IP（IP 地址，模糊）。不同 Name 之间为且关系，同一 Name 下多个 Values 为或关系。</p>
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
                     * <p>排序字段名。取值：FixTime（修复时间）、ID（记录 ID）。默认按 ID 倒序。</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEFIXRECORDLISTREQUEST_H_
