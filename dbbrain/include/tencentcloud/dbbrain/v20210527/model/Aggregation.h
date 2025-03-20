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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AGGREGATION_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AGGREGATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * mongodb慢查模板概览明细
                */
                class Aggregation : public AbstractModel
                {
                public:
                    Aggregation();
                    ~Aggregation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平均执行时间（ms）。
                     * @return AvgExecTime 平均执行时间（ms）。
                     * 
                     */
                    int64_t GetAvgExecTime() const;

                    /**
                     * 设置平均执行时间（ms）。
                     * @param _avgExecTime 平均执行时间（ms）。
                     * 
                     */
                    void SetAvgExecTime(const int64_t& _avgExecTime);

                    /**
                     * 判断参数 AvgExecTime 是否已赋值
                     * @return AvgExecTime 是否已赋值
                     * 
                     */
                    bool AvgExecTimeHasBeenSet() const;

                    /**
                     * 获取平均扫描行数。
                     * @return AvgDocsExamined 平均扫描行数。
                     * 
                     */
                    int64_t GetAvgDocsExamined() const;

                    /**
                     * 设置平均扫描行数。
                     * @param _avgDocsExamined 平均扫描行数。
                     * 
                     */
                    void SetAvgDocsExamined(const int64_t& _avgDocsExamined);

                    /**
                     * 判断参数 AvgDocsExamined 是否已赋值
                     * @return AvgDocsExamined 是否已赋值
                     * 
                     */
                    bool AvgDocsExaminedHasBeenSet() const;

                    /**
                     * 获取产生慢查次数（/天）。
                     * @return SlowLogCount 产生慢查次数（/天）。
                     * 
                     */
                    int64_t GetSlowLogCount() const;

                    /**
                     * 设置产生慢查次数（/天）。
                     * @param _slowLogCount 产生慢查次数（/天）。
                     * 
                     */
                    void SetSlowLogCount(const int64_t& _slowLogCount);

                    /**
                     * 判断参数 SlowLogCount 是否已赋值
                     * @return SlowLogCount 是否已赋值
                     * 
                     */
                    bool SlowLogCountHasBeenSet() const;

                    /**
                     * 获取内存排序次数。
                     * @return SortCount 内存排序次数。
                     * 
                     */
                    int64_t GetSortCount() const;

                    /**
                     * 设置内存排序次数。
                     * @param _sortCount 内存排序次数。
                     * 
                     */
                    void SetSortCount(const int64_t& _sortCount);

                    /**
                     * 判断参数 SortCount 是否已赋值
                     * @return SortCount 是否已赋值
                     * 
                     */
                    bool SortCountHasBeenSet() const;

                    /**
                     * 获取慢查模板概览。
                     * @return SlowLogs 慢查模板概览。
                     * 
                     */
                    std::vector<std::string> GetSlowLogs() const;

                    /**
                     * 设置慢查模板概览。
                     * @param _slowLogs 慢查模板概览。
                     * 
                     */
                    void SetSlowLogs(const std::vector<std::string>& _slowLogs);

                    /**
                     * 判断参数 SlowLogs 是否已赋值
                     * @return SlowLogs 是否已赋值
                     * 
                     */
                    bool SlowLogsHasBeenSet() const;

                private:

                    /**
                     * 平均执行时间（ms）。
                     */
                    int64_t m_avgExecTime;
                    bool m_avgExecTimeHasBeenSet;

                    /**
                     * 平均扫描行数。
                     */
                    int64_t m_avgDocsExamined;
                    bool m_avgDocsExaminedHasBeenSet;

                    /**
                     * 产生慢查次数（/天）。
                     */
                    int64_t m_slowLogCount;
                    bool m_slowLogCountHasBeenSet;

                    /**
                     * 内存排序次数。
                     */
                    int64_t m_sortCount;
                    bool m_sortCountHasBeenSet;

                    /**
                     * 慢查模板概览。
                     */
                    std::vector<std::string> m_slowLogs;
                    bool m_slowLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AGGREGATION_H_
