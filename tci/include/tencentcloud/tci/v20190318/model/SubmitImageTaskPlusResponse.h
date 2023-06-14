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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITIMAGETASKPLUSRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITIMAGETASKPLUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ImageTaskResult.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitImageTaskPlus返回参数结构体
                */
                class SubmitImageTaskPlusResponse : public AbstractModel
                {
                public:
                    SubmitImageTaskPlusResponse();
                    ~SubmitImageTaskPlusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别结果
                     * @return ResultSet 识别结果
                     * 
                     */
                    std::vector<ImageTaskResult> GetResultSet() const;

                    /**
                     * 判断参数 ResultSet 是否已赋值
                     * @return ResultSet 是否已赋值
                     * 
                     */
                    bool ResultSetHasBeenSet() const;

                    /**
                     * 获取任务标识符
                     * @return JobId 任务标识符
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取任务进度
                     * @return Progress 任务进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取结果总数目
                     * @return TotalCount 结果总数目
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
                     * 识别结果
                     */
                    std::vector<ImageTaskResult> m_resultSet;
                    bool m_resultSetHasBeenSet;

                    /**
                     * 任务标识符
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 结果总数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITIMAGETASKPLUSRESPONSE_H_
