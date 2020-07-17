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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETSIMILARPERSONRESULTREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETSIMILARPERSONRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetSimilarPersonResult请求参数结构体
                */
                class GetSimilarPersonResultRequest : public AbstractModel
                {
                public:
                    GetSimilarPersonResultRequest();
                    ~GetSimilarPersonResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查重任务ID，用于查询、获取查重的进度和结果。取值为人员查重接口返回的JobId
                     * @return JobId 查重任务ID，用于查询、获取查重的进度和结果。取值为人员查重接口返回的JobId
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置查重任务ID，用于查询、获取查重的进度和结果。取值为人员查重接口返回的JobId
                     * @param JobId 查重任务ID，用于查询、获取查重的进度和结果。取值为人员查重接口返回的JobId
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 查重任务ID，用于查询、获取查重的进度和结果。取值为人员查重接口返回的JobId
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETSIMILARPERSONRESULTREQUEST_H_
