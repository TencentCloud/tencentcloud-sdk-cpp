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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/Filter.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeLogInstanceList请求参数结构体
                */
                class DescribeLogInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeLogInstanceListRequest();
                    ~DescribeLogInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @return LogType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @param _logType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>每页输出的任务列表大小。</p><ul><li>取值范围：[1,100]。</li><li>默认值：20。</li></ul>
                     * @return Limit <p>每页输出的任务列表大小。</p><ul><li>取值范围：[1,100]。</li><li>默认值：20。</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页输出的任务列表大小。</p><ul><li>取值范围：[1,100]。</li><li>默认值：20。</li></ul>
                     * @param _limit <p>每页输出的任务列表大小。</p><ul><li>取值范围：[1,100]。</li><li>默认值：20。</li></ul>
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
                     * 获取<p>分页偏移量。默认为0。取值为 Limit 整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * @return Offset <p>分页偏移量。默认为0。取值为 Limit 整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量。默认为0。取值为 Limit 整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * @param _offset <p>分页偏移量。默认为0。取值为 Limit 整数倍。计算公式：offset=limit*(页码-1)。</p>
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
                     * 获取<p>设置日志筛选字段，过滤并返回符合条件的日志。</p>
                     * @return Filters <p>设置日志筛选字段，过滤并返回符合条件的日志。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>设置日志筛选字段，过滤并返回符合条件的日志。</p>
                     * @param _filters <p>设置日志筛选字段，过滤并返回符合条件的日志。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写日志。</li><li>read： 读日志。</li><li>all： 读写日志。</li></ul>
                     * @return LogSubType <p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写日志。</li><li>read： 读日志。</li><li>all： 读写日志。</li></ul>
                     * 
                     */
                    std::string GetLogSubType() const;

                    /**
                     * 设置<p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写日志。</li><li>read： 读日志。</li><li>all： 读写日志。</li></ul>
                     * @param _logSubType <p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写日志。</li><li>read： 读日志。</li><li>all： 读写日志。</li></ul>
                     * 
                     */
                    void SetLogSubType(const std::string& _logSubType);

                    /**
                     * 判断参数 LogSubType 是否已赋值
                     * @return LogSubType 是否已赋值
                     * 
                     */
                    bool LogSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>日志开关。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * @return LogSwitch <p>日志开关。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * 
                     */
                    std::string GetLogSwitch() const;

                    /**
                     * 设置<p>日志开关。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * @param _logSwitch <p>日志开关。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * 
                     */
                    void SetLogSwitch(const std::string& _logSwitch);

                    /**
                     * 判断参数 LogSwitch 是否已赋值
                     * @return LogSwitch 是否已赋值
                     * 
                     */
                    bool LogSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>每页输出的任务列表大小。</p><ul><li>取值范围：[1,100]。</li><li>默认值：20。</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量。默认为0。取值为 Limit 整数倍。计算公式：offset=limit*(页码-1)。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>设置日志筛选字段，过滤并返回符合条件的日志。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写日志。</li><li>read： 读日志。</li><li>all： 读写日志。</li></ul>
                     */
                    std::string m_logSubType;
                    bool m_logSubTypeHasBeenSet;

                    /**
                     * <p>日志开关。</p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     */
                    std::string m_logSwitch;
                    bool m_logSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_
