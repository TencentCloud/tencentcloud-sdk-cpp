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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANTASKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanTaskList请求参数结构体
                */
                class DescribeSkillScanTaskListRequest : public AbstractModel
                {
                public:
                    DescribeSkillScanTaskListRequest();
                    ~DescribeSkillScanTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认 0
                     * @return Offset 偏移量，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认 0
                     * @param _offset 偏移量，默认 0
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
                     * 获取每页数量，默认 10，上限 200
                     * @return Limit 每页数量，默认 10，上限 200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认 10，上限 200
                     * @param _limit 每页数量，默认 10，上限 200
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
                     * 获取开始时间，筛选上传时间不早于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
使用约束：StartTime 与 EndTime 要么同时传入，要么都不传；都不传时默认查询本月数据
                     * @return StartTime 开始时间，筛选上传时间不早于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
使用约束：StartTime 与 EndTime 要么同时传入，要么都不传；都不传时默认查询本月数据
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，筛选上传时间不早于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
使用约束：StartTime 与 EndTime 要么同时传入，要么都不传；都不传时默认查询本月数据
                     * @param _startTime 开始时间，筛选上传时间不早于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
使用约束：StartTime 与 EndTime 要么同时传入，要么都不传；都不传时默认查询本月数据
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
                     * 获取结束时间，筛选上传时间不晚于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
建议与 StartTime 同时传入；未传入时默认使用当前时间作为结束时间
                     * @return EndTime 结束时间，筛选上传时间不晚于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
建议与 StartTime 同时传入；未传入时默认使用当前时间作为结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，筛选上传时间不晚于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
建议与 StartTime 同时传入；未传入时默认使用当前时间作为结束时间
                     * @param _endTime 结束时间，筛选上传时间不晚于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
建议与 StartTime 同时传入；未传入时默认使用当前时间作为结束时间
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
                     * 获取排序方式
最大长度：128 字符
枚举值：
ASC：升序
DESC：降序（默认）
                     * @return Order 排序方式
最大长度：128 字符
枚举值：
ASC：升序
DESC：降序（默认）
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
最大长度：128 字符
枚举值：
ASC：升序
DESC：降序（默认）
                     * @param _order 排序方式
最大长度：128 字符
枚举值：
ASC：升序
DESC：降序（默认）
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
                     * 获取排序字段
最大长度：128 字符
枚举值：
InsertTime：上传时间（默认）
                     * @return By 排序字段
最大长度：128 字符
枚举值：
InsertTime：上传时间（默认）
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
最大长度：128 字符
枚举值：
InsertTime：上传时间（默认）
                     * @param _by 排序字段
最大长度：128 字符
枚举值：
InsertTime：上传时间（默认）
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
                     * 偏移量，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，默认 10，上限 200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 开始时间，筛选上传时间不早于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
使用约束：StartTime 与 EndTime 要么同时传入，要么都不传；都不传时默认查询本月数据
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，筛选上传时间不晚于该时刻的任务
参数格式：YYYY-MM-DD HH:mm:ss
最大长度：128 字符
建议与 StartTime 同时传入；未传入时默认使用当前时间作为结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序方式
最大长度：128 字符
枚举值：
ASC：升序
DESC：降序（默认）
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
最大长度：128 字符
枚举值：
InsertTime：上传时间（默认）
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANTASKLISTREQUEST_H_
