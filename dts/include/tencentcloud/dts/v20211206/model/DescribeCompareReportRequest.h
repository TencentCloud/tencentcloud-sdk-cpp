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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeCompareReport请求参数结构体
                */
                class DescribeCompareReportRequest : public AbstractModel
                {
                public:
                    DescribeCompareReportRequest();
                    ~DescribeCompareReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务 Id
                     * @return JobId 迁移任务 Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务 Id
                     * @param _jobId 迁移任务 Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取校验任务 Id
                     * @return CompareTaskId 校验任务 Id
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置校验任务 Id
                     * @param _compareTaskId 校验任务 Id
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取校验不一致结果的 limit
                     * @return DifferenceLimit 校验不一致结果的 limit
                     * 
                     */
                    uint64_t GetDifferenceLimit() const;

                    /**
                     * 设置校验不一致结果的 limit
                     * @param _differenceLimit 校验不一致结果的 limit
                     * 
                     */
                    void SetDifferenceLimit(const uint64_t& _differenceLimit);

                    /**
                     * 判断参数 DifferenceLimit 是否已赋值
                     * @return DifferenceLimit 是否已赋值
                     * 
                     */
                    bool DifferenceLimitHasBeenSet() const;

                    /**
                     * 获取不一致的 Offset
                     * @return DifferenceOffset 不一致的 Offset
                     * 
                     */
                    uint64_t GetDifferenceOffset() const;

                    /**
                     * 设置不一致的 Offset
                     * @param _differenceOffset 不一致的 Offset
                     * 
                     */
                    void SetDifferenceOffset(const uint64_t& _differenceOffset);

                    /**
                     * 判断参数 DifferenceOffset 是否已赋值
                     * @return DifferenceOffset 是否已赋值
                     * 
                     */
                    bool DifferenceOffsetHasBeenSet() const;

                    /**
                     * 获取搜索条件，不一致的库名
                     * @return DifferenceDB 搜索条件，不一致的库名
                     * 
                     */
                    std::string GetDifferenceDB() const;

                    /**
                     * 设置搜索条件，不一致的库名
                     * @param _differenceDB 搜索条件，不一致的库名
                     * 
                     */
                    void SetDifferenceDB(const std::string& _differenceDB);

                    /**
                     * 判断参数 DifferenceDB 是否已赋值
                     * @return DifferenceDB 是否已赋值
                     * 
                     */
                    bool DifferenceDBHasBeenSet() const;

                    /**
                     * 获取搜索条件，不一致的表名
                     * @return DifferenceTable 搜索条件，不一致的表名
                     * 
                     */
                    std::string GetDifferenceTable() const;

                    /**
                     * 设置搜索条件，不一致的表名
                     * @param _differenceTable 搜索条件，不一致的表名
                     * 
                     */
                    void SetDifferenceTable(const std::string& _differenceTable);

                    /**
                     * 判断参数 DifferenceTable 是否已赋值
                     * @return DifferenceTable 是否已赋值
                     * 
                     */
                    bool DifferenceTableHasBeenSet() const;

                    /**
                     * 获取未校验的 Limit
                     * @return SkippedLimit 未校验的 Limit
                     * 
                     */
                    uint64_t GetSkippedLimit() const;

                    /**
                     * 设置未校验的 Limit
                     * @param _skippedLimit 未校验的 Limit
                     * 
                     */
                    void SetSkippedLimit(const uint64_t& _skippedLimit);

                    /**
                     * 判断参数 SkippedLimit 是否已赋值
                     * @return SkippedLimit 是否已赋值
                     * 
                     */
                    bool SkippedLimitHasBeenSet() const;

                    /**
                     * 获取未校验的 Offset
                     * @return SkippedOffset 未校验的 Offset
                     * 
                     */
                    uint64_t GetSkippedOffset() const;

                    /**
                     * 设置未校验的 Offset
                     * @param _skippedOffset 未校验的 Offset
                     * 
                     */
                    void SetSkippedOffset(const uint64_t& _skippedOffset);

                    /**
                     * 判断参数 SkippedOffset 是否已赋值
                     * @return SkippedOffset 是否已赋值
                     * 
                     */
                    bool SkippedOffsetHasBeenSet() const;

                    /**
                     * 获取搜索条件，未校验的库名
                     * @return SkippedDB 搜索条件，未校验的库名
                     * 
                     */
                    std::string GetSkippedDB() const;

                    /**
                     * 设置搜索条件，未校验的库名
                     * @param _skippedDB 搜索条件，未校验的库名
                     * 
                     */
                    void SetSkippedDB(const std::string& _skippedDB);

                    /**
                     * 判断参数 SkippedDB 是否已赋值
                     * @return SkippedDB 是否已赋值
                     * 
                     */
                    bool SkippedDBHasBeenSet() const;

                    /**
                     * 获取搜索条件，未校验的表名
                     * @return SkippedTable 搜索条件，未校验的表名
                     * 
                     */
                    std::string GetSkippedTable() const;

                    /**
                     * 设置搜索条件，未校验的表名
                     * @param _skippedTable 搜索条件，未校验的表名
                     * 
                     */
                    void SetSkippedTable(const std::string& _skippedTable);

                    /**
                     * 判断参数 SkippedTable 是否已赋值
                     * @return SkippedTable 是否已赋值
                     * 
                     */
                    bool SkippedTableHasBeenSet() const;

                private:

                    /**
                     * 迁移任务 Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 校验任务 Id
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 校验不一致结果的 limit
                     */
                    uint64_t m_differenceLimit;
                    bool m_differenceLimitHasBeenSet;

                    /**
                     * 不一致的 Offset
                     */
                    uint64_t m_differenceOffset;
                    bool m_differenceOffsetHasBeenSet;

                    /**
                     * 搜索条件，不一致的库名
                     */
                    std::string m_differenceDB;
                    bool m_differenceDBHasBeenSet;

                    /**
                     * 搜索条件，不一致的表名
                     */
                    std::string m_differenceTable;
                    bool m_differenceTableHasBeenSet;

                    /**
                     * 未校验的 Limit
                     */
                    uint64_t m_skippedLimit;
                    bool m_skippedLimitHasBeenSet;

                    /**
                     * 未校验的 Offset
                     */
                    uint64_t m_skippedOffset;
                    bool m_skippedOffsetHasBeenSet;

                    /**
                     * 搜索条件，未校验的库名
                     */
                    std::string m_skippedDB;
                    bool m_skippedDBHasBeenSet;

                    /**
                     * 搜索条件，未校验的表名
                     */
                    std::string m_skippedTable;
                    bool m_skippedTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTREQUEST_H_
