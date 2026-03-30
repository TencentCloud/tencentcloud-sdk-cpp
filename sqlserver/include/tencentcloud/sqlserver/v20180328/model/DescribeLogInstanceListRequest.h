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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/Filter.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
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
                     * 获取<p>日志类型：auditLog,slowLog,errorLog</p>
                     * @return LogType <p>日志类型：auditLog,slowLog,errorLog</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型：auditLog,slowLog,errorLog</p>
                     * @param _logType <p>日志类型：auditLog,slowLog,errorLog</p>
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
                     * 获取<p>单页条数限制，取值[0, 100)</p>
                     * @return Limit <p>单页条数限制，取值[0, 100)</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页条数限制，取值[0, 100)</p>
                     * @param _limit <p>单页条数限制，取值[0, 100)</p>
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
                     * 获取<p>偏移量，大于0</p>
                     * @return Offset <p>偏移量，大于0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，大于0</p>
                     * @param _offset <p>偏移量，大于0</p>
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
                     * 获取<p>业务侧实例过滤参数</p>
                     * @return Filters <p>业务侧实例过滤参数</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>业务侧实例过滤参数</p>
                     * @param _filters <p>业务侧实例过滤参数</p>
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
                     * 获取<p>日志开关,不传查询所有日志实例： on-开启，off-未开启。</p>
                     * @return LogSwitch <p>日志开关,不传查询所有日志实例： on-开启，off-未开启。</p>
                     * 
                     */
                    std::string GetLogSwitch() const;

                    /**
                     * 设置<p>日志开关,不传查询所有日志实例： on-开启，off-未开启。</p>
                     * @param _logSwitch <p>日志开关,不传查询所有日志实例： on-开启，off-未开启。</p>
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
                     * <p>日志类型：auditLog,slowLog,errorLog</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>单页条数限制，取值[0, 100)</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，大于0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>业务侧实例过滤参数</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>日志开关,不传查询所有日志实例： on-开启，off-未开启。</p>
                     */
                    std::string m_logSwitch;
                    bool m_logSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBELOGINSTANCELISTREQUEST_H_
