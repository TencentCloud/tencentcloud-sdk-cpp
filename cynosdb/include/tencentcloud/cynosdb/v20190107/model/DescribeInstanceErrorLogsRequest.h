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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEERRORLOGSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEERRORLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceErrorLogs请求参数结构体
                */
                class DescribeInstanceErrorLogsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceErrorLogsRequest();
                    ~DescribeInstanceErrorLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取日志条数限制
                     * @return Limit 日志条数限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置日志条数限制
                     * @param _limit 日志条数限制
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
                     * 获取日志条数偏移量
                     * @return Offset 日志条数偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置日志条数偏移量
                     * @param _offset 日志条数偏移量
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取排序字段，有Timestamp枚举值
                     * @return OrderBy 排序字段，有Timestamp枚举值
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，有Timestamp枚举值
                     * @param _orderBy 排序字段，有Timestamp枚举值
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
                     * 获取排序类型，有ASC,DESC枚举值
                     * @return OrderByType 排序类型，有ASC,DESC枚举值
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型，有ASC,DESC枚举值
                     * @param _orderByType 排序类型，有ASC,DESC枚举值
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取日志等级，有error、warning、note三种，支持多个等级同时搜索
                     * @return LogLevels 日志等级，有error、warning、note三种，支持多个等级同时搜索
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置日志等级，有error、warning、note三种，支持多个等级同时搜索
                     * @param _logLevels 日志等级，有error、warning、note三种，支持多个等级同时搜索
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取关键字，支持模糊搜索
                     * @return KeyWords 关键字，支持模糊搜索
                     * 
                     */
                    std::vector<std::string> GetKeyWords() const;

                    /**
                     * 设置关键字，支持模糊搜索
                     * @param _keyWords 关键字，支持模糊搜索
                     * 
                     */
                    void SetKeyWords(const std::vector<std::string>& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志条数限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 日志条数偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序字段，有Timestamp枚举值
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型，有ASC,DESC枚举值
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 日志等级，有error、warning、note三种，支持多个等级同时搜索
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * 关键字，支持模糊搜索
                     */
                    std::vector<std::string> m_keyWords;
                    bool m_keyWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEERRORLOGSREQUEST_H_
