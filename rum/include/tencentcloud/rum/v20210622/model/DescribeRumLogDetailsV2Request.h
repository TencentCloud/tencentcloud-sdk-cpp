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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGDETAILSV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGDETAILSV2REQUEST_H_

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
                * DescribeRumLogDetailsV2请求参数结构体
                */
                class DescribeRumLogDetailsV2Request : public AbstractModel
                {
                public:
                    DescribeRumLogDetailsV2Request();
                    ~DescribeRumLogDetailsV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>排序方式 desc asc</p>
                     * @return OrderBy <p>排序方式 desc asc</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序方式 desc asc</p>
                     * @param _orderBy <p>排序方式 desc asc</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>Unix纳秒开始时间，包含该时刻；不猜测时间单位。</p>
                     * @return StartTime <p>Unix纳秒开始时间，包含该时刻；不猜测时间单位。</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Unix纳秒开始时间，包含该时刻；不猜测时间单位。</p>
                     * @param _startTime <p>Unix纳秒开始时间，包含该时刻；不猜测时间单位。</p>
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
                     * 获取<p>CLS路径单次返回1～1000条；旧路径保留原行为。短页不表示结束，以ListOver为准。</p>
                     * @return Limit <p>CLS路径单次返回1～1000条；旧路径保留原行为。短页不表示结束，以ListOver为准。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>CLS路径单次返回1～1000条；旧路径保留原行为。短页不表示结束，以ListOver为准。</p>
                     * @param _limit <p>CLS路径单次返回1～1000条；旧路径保留原行为。短页不表示结束，以ListOver为准。</p>
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
                     * 获取<p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：<a href="https://cloud.tencent.com/document/product/248/87223">日志查询相关</a></p>
                     * @return Filter <p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：<a href="https://cloud.tencent.com/document/product/248/87223">日志查询相关</a></p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：<a href="https://cloud.tencent.com/document/product/248/87223">日志查询相关</a></p>
                     * @param _filter <p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：<a href="https://cloud.tencent.com/document/product/248/87223">日志查询相关</a></p>
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>Unix纳秒结束时间，不包含该时刻。</p>
                     * @return EndTime <p>Unix纳秒结束时间，不包含该时刻。</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Unix纳秒结束时间，不包含该时刻。</p>
                     * @param _endTime <p>Unix纳秒结束时间，不包含该时刻。</p>
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
                     * 获取<p>项目ID（必填）</p>
                     * @return ID <p>项目ID（必填）</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>项目ID（必填）</p>
                     * @param _iD <p>项目ID（必填）</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * @return LastTime <p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * 
                     */
                    int64_t GetLastTime() const;

                    /**
                     * 设置<p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * @param _lastTime <p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * 
                     */
                    void SetLastTime(const int64_t& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取<p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * @return LastRowId <p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * 
                     */
                    int64_t GetLastRowId() const;

                    /**
                     * 设置<p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * @param _lastRowId <p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     * 
                     */
                    void SetLastRowId(const int64_t& _lastRowId);

                    /**
                     * 判断参数 LastRowId 是否已赋值
                     * @return LastRowId 是否已赋值
                     * 
                     */
                    bool LastRowIdHasBeenSet() const;

                    /**
                     * 获取<p>从0开始的非负偏移量；保留缺省与显式0的差别。不能与非空Context同时使用，Context续页时删除Offset。</p>
                     * @return Offset <p>从0开始的非负偏移量；保留缺省与显式0的差别。不能与非空Context同时使用，Context续页时删除Offset。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>从0开始的非负偏移量；保留缺省与显式0的差别。不能与非空Context同时使用，Context续页时删除Offset。</p>
                     * @param _offset <p>从0开始的非负偏移量；保留缺省与显式0的差别。不能与非空Context同时使用，Context续页时删除Offset。</p>
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
                     * 获取<p>原样回传上次非空Context，续页时删除Offset，其余有效查询条件保持不变；空串视为缺省。不保证快照或重放同一页。</p>
                     * @return Context <p>原样回传上次非空Context，续页时删除Offset，其余有效查询条件保持不变；空串视为缺省。不保证快照或重放同一页。</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>原样回传上次非空Context，续页时删除Offset，其余有效查询条件保持不变；空串视为缺省。不保证快照或重放同一页。</p>
                     * @param _context <p>原样回传上次非空Context，续页时删除Offset，其余有效查询条件保持不变；空串视为缺省。不保证快照或重放同一页。</p>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * <p>排序方式 desc asc</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Unix纳秒开始时间，包含该时刻；不猜测时间单位。</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>CLS路径单次返回1～1000条；旧路径保留原行为。短页不表示结束，以ListOver为准。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件，其中key与运算符(Operator)对应可选字段枚举值与示例查看文档：<a href="https://cloud.tencent.com/document/product/248/87223">日志查询相关</a></p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Unix纳秒结束时间，不包含该时刻。</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目ID（必填）</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     */
                    int64_t m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * <p>旧游标参数已废弃，请迁移至Offset或Context。LastTime和LastRowId均为0或缺省视为未传；非零旧游标在cls下拒绝，off/window且不带新分页参数时保留旧行为。</p>
                     */
                    int64_t m_lastRowId;
                    bool m_lastRowIdHasBeenSet;

                    /**
                     * <p>从0开始的非负偏移量；保留缺省与显式0的差别。不能与非空Context同时使用，Context续页时删除Offset。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>原样回传上次非空Context，续页时删除Offset，其余有效查询条件保持不变；空串视为缺省。不保证快照或重放同一页。</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGDETAILSV2REQUEST_H_
