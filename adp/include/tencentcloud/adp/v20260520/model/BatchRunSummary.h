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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_BATCHRUNSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_BATCHRUNSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * BatchRunSummary
                */
                class BatchRunSummary : public AbstractModel
                {
                public:
                    BatchRunSummary();
                    ~BatchRunSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取	失败数量
                     * @return FailedCount 	失败数量
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置	失败数量
                     * @param _failedCount 	失败数量
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取	成功数量
                     * @return SuccessCount 	成功数量
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置	成功数量
                     * @param _successCount 	成功数量
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取总批次
                     * @return TotalCount 总批次
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总批次
                     * @param _totalCount 总批次
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取失败的下标
                     * @return FailedIndexList 失败的下标
                     * 
                     */
                    std::vector<int64_t> GetFailedIndexList() const;

                    /**
                     * 设置失败的下标
                     * @param _failedIndexList 失败的下标
                     * 
                     */
                    void SetFailedIndexList(const std::vector<int64_t>& _failedIndexList);

                    /**
                     * 判断参数 FailedIndexList 是否已赋值
                     * @return FailedIndexList 是否已赋值
                     * 
                     */
                    bool FailedIndexListHasBeenSet() const;

                    /**
                     * 获取	上一轮完成的批次
                     * @return JustCompletedIndexList 	上一轮完成的批次
                     * 
                     */
                    std::vector<int64_t> GetJustCompletedIndexList() const;

                    /**
                     * 设置	上一轮完成的批次
                     * @param _justCompletedIndexList 	上一轮完成的批次
                     * 
                     */
                    void SetJustCompletedIndexList(const std::vector<int64_t>& _justCompletedIndexList);

                    /**
                     * 判断参数 JustCompletedIndexList 是否已赋值
                     * @return JustCompletedIndexList 是否已赋值
                     * 
                     */
                    bool JustCompletedIndexListHasBeenSet() const;

                    /**
                     * 获取运行中的下标
                     * @return RunningIndexList 运行中的下标
                     * 
                     */
                    std::vector<int64_t> GetRunningIndexList() const;

                    /**
                     * 设置运行中的下标
                     * @param _runningIndexList 运行中的下标
                     * 
                     */
                    void SetRunningIndexList(const std::vector<int64_t>& _runningIndexList);

                    /**
                     * 判断参数 RunningIndexList 是否已赋值
                     * @return RunningIndexList 是否已赋值
                     * 
                     */
                    bool RunningIndexListHasBeenSet() const;

                    /**
                     * 获取成功的下标
                     * @return SuccessIndexList 成功的下标
                     * 
                     */
                    std::vector<int64_t> GetSuccessIndexList() const;

                    /**
                     * 设置成功的下标
                     * @param _successIndexList 成功的下标
                     * 
                     */
                    void SetSuccessIndexList(const std::vector<int64_t>& _successIndexList);

                    /**
                     * 判断参数 SuccessIndexList 是否已赋值
                     * @return SuccessIndexList 是否已赋值
                     * 
                     */
                    bool SuccessIndexListHasBeenSet() const;

                private:

                    /**
                     * 	失败数量
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 	成功数量
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 总批次
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 失败的下标
                     */
                    std::vector<int64_t> m_failedIndexList;
                    bool m_failedIndexListHasBeenSet;

                    /**
                     * 	上一轮完成的批次
                     */
                    std::vector<int64_t> m_justCompletedIndexList;
                    bool m_justCompletedIndexListHasBeenSet;

                    /**
                     * 运行中的下标
                     */
                    std::vector<int64_t> m_runningIndexList;
                    bool m_runningIndexListHasBeenSet;

                    /**
                     * 成功的下标
                     */
                    std::vector<int64_t> m_successIndexList;
                    bool m_successIndexListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_BATCHRUNSUMMARY_H_
