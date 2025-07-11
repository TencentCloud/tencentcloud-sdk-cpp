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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPJOBRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/BackUpJobDisplay.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeBackUpJob返回参数结构体
                */
                class DescribeBackUpJobResponse : public AbstractModel
                {
                public:
                    DescribeBackUpJobResponse();
                    ~DescribeBackUpJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务列表
                     * @return BackUpJobs 任务列表
                     * 
                     */
                    std::vector<BackUpJobDisplay> GetBackUpJobs() const;

                    /**
                     * 判断参数 BackUpJobs 是否已赋值
                     * @return BackUpJobs 是否已赋值
                     * 
                     */
                    bool BackUpJobsHasBeenSet() const;

                    /**
                     * 获取错误描述
                     * @return ErrorMsg 错误描述
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return TotalCount 数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 任务列表
                     */
                    std::vector<BackUpJobDisplay> m_backUpJobs;
                    bool m_backUpJobsHasBeenSet;

                    /**
                     * 错误描述
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEBACKUPJOBRESPONSE_H_
