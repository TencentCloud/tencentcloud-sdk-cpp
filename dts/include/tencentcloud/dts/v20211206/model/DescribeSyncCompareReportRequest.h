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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREREPORTREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREREPORTREQUEST_H_

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
                * DescribeSyncCompareReport请求参数结构体
                */
                class DescribeSyncCompareReportRequest : public AbstractModel
                {
                public:
                    DescribeSyncCompareReportRequest();
                    ~DescribeSyncCompareReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 Id</p>
                     * @return JobId <p>任务 Id</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务 Id</p>
                     * @param _jobId <p>任务 Id</p>
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
                     * 获取<p>校验任务 Id</p>
                     * @return CompareTaskId <p>校验任务 Id</p>
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置<p>校验任务 Id</p>
                     * @param _compareTaskId <p>校验任务 Id</p>
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
                     * 获取<p>校验不一致结果的 limit</p>
                     * @return DifferenceLimit <p>校验不一致结果的 limit</p>
                     * 
                     */
                    uint64_t GetDifferenceLimit() const;

                    /**
                     * 设置<p>校验不一致结果的 limit</p>
                     * @param _differenceLimit <p>校验不一致结果的 limit</p>
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
                     * 获取<p>不一致的 Offset</p>
                     * @return DifferenceOffset <p>不一致的 Offset</p>
                     * 
                     */
                    uint64_t GetDifferenceOffset() const;

                    /**
                     * 设置<p>不一致的 Offset</p>
                     * @param _differenceOffset <p>不一致的 Offset</p>
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
                     * 获取<p>搜索条件，不一致的库名</p>
                     * @return DifferenceDB <p>搜索条件，不一致的库名</p>
                     * 
                     */
                    std::string GetDifferenceDB() const;

                    /**
                     * 设置<p>搜索条件，不一致的库名</p>
                     * @param _differenceDB <p>搜索条件，不一致的库名</p>
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
                     * 获取<p>搜索条件，不一致的表名</p>
                     * @return DifferenceTable <p>搜索条件，不一致的表名</p>
                     * 
                     */
                    std::string GetDifferenceTable() const;

                    /**
                     * 设置<p>搜索条件，不一致的表名</p>
                     * @param _differenceTable <p>搜索条件，不一致的表名</p>
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
                     * 获取<p>未校验的 Limit</p>
                     * @return SkippedLimit <p>未校验的 Limit</p>
                     * 
                     */
                    uint64_t GetSkippedLimit() const;

                    /**
                     * 设置<p>未校验的 Limit</p>
                     * @param _skippedLimit <p>未校验的 Limit</p>
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
                     * 获取<p>未校验的 Offset</p>
                     * @return SkippedOffset <p>未校验的 Offset</p>
                     * 
                     */
                    uint64_t GetSkippedOffset() const;

                    /**
                     * 设置<p>未校验的 Offset</p>
                     * @param _skippedOffset <p>未校验的 Offset</p>
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
                     * 获取<p>搜索条件，未校验的库名</p>
                     * @return SkippedDB <p>搜索条件，未校验的库名</p>
                     * 
                     */
                    std::string GetSkippedDB() const;

                    /**
                     * 设置<p>搜索条件，未校验的库名</p>
                     * @param _skippedDB <p>搜索条件，未校验的库名</p>
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
                     * 获取<p>搜索条件，未校验的表名</p>
                     * @return SkippedTable <p>搜索条件，未校验的表名</p>
                     * 
                     */
                    std::string GetSkippedTable() const;

                    /**
                     * 设置<p>搜索条件，未校验的表名</p>
                     * @param _skippedTable <p>搜索条件，未校验的表名</p>
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
                     * <p>任务 Id</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>校验任务 Id</p>
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * <p>校验不一致结果的 limit</p>
                     */
                    uint64_t m_differenceLimit;
                    bool m_differenceLimitHasBeenSet;

                    /**
                     * <p>不一致的 Offset</p>
                     */
                    uint64_t m_differenceOffset;
                    bool m_differenceOffsetHasBeenSet;

                    /**
                     * <p>搜索条件，不一致的库名</p>
                     */
                    std::string m_differenceDB;
                    bool m_differenceDBHasBeenSet;

                    /**
                     * <p>搜索条件，不一致的表名</p>
                     */
                    std::string m_differenceTable;
                    bool m_differenceTableHasBeenSet;

                    /**
                     * <p>未校验的 Limit</p>
                     */
                    uint64_t m_skippedLimit;
                    bool m_skippedLimitHasBeenSet;

                    /**
                     * <p>未校验的 Offset</p>
                     */
                    uint64_t m_skippedOffset;
                    bool m_skippedOffsetHasBeenSet;

                    /**
                     * <p>搜索条件，未校验的库名</p>
                     */
                    std::string m_skippedDB;
                    bool m_skippedDBHasBeenSet;

                    /**
                     * <p>搜索条件，未校验的表名</p>
                     */
                    std::string m_skippedTable;
                    bool m_skippedTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREREPORTREQUEST_H_
