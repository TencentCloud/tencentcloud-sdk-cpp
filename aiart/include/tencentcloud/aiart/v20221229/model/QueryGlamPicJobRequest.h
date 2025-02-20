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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_QUERYGLAMPICJOBREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_QUERYGLAMPICJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * QueryGlamPicJob请求参数结构体
                */
                class QueryGlamPicJobRequest : public AbstractModel
                {
                public:
                    QueryGlamPicJobRequest();
                    ~QueryGlamPicJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID。
                     * @return JobId 任务ID。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务ID。
                     * @param _jobId 任务ID。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_QUERYGLAMPICJOBREQUEST_H_
