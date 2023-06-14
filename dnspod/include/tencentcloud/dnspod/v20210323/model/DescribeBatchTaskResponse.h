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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEBATCHTASKRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEBATCHTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/DescribeBatchTaskDetail.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeBatchTask返回参数结构体
                */
                class DescribeBatchTaskResponse : public AbstractModel
                {
                public:
                    DescribeBatchTaskResponse();
                    ~DescribeBatchTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量任务详情
                     * @return DetailList 批量任务详情
                     * 
                     */
                    std::vector<DescribeBatchTaskDetail> GetDetailList() const;

                    /**
                     * 判断参数 DetailList 是否已赋值
                     * @return DetailList 是否已赋值
                     * 
                     */
                    bool DetailListHasBeenSet() const;

                    /**
                     * 获取总任务条数
                     * @return TotalCount 总任务条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取成功条数
                     * @return SuccessCount 成功条数
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取失败条数
                     * @return FailCount 失败条数
                     * 
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取批量任务类型
                     * @return JobType 批量任务类型
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreatedAt 任务创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * 批量任务详情
                     */
                    std::vector<DescribeBatchTaskDetail> m_detailList;
                    bool m_detailListHasBeenSet;

                    /**
                     * 总任务条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 成功条数
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败条数
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 批量任务类型
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEBATCHTASKRESPONSE_H_
