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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SubmitTaskTestRun返回参数结构体
                */
                class SubmitTaskTestRunResponse : public AbstractModel
                {
                public:
                    SubmitTaskTestRunResponse();
                    ~SubmitTaskTestRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取提交运行jobid
                     * @return JobId 提交运行jobid
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
                     * 获取运行记录id
                     * @return RecordId 运行记录id
                     * 
                     */
                    std::vector<int64_t> GetRecordId() const;

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * 提交运行jobid
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 运行记录id
                     */
                    std::vector<int64_t> m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITTASKTESTRUNRESPONSE_H_
