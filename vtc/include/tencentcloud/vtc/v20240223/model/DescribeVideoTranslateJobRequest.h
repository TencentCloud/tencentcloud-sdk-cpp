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

#ifndef TENCENTCLOUD_VTC_V20240223_MODEL_DESCRIBEVIDEOTRANSLATEJOBREQUEST_H_
#define TENCENTCLOUD_VTC_V20240223_MODEL_DESCRIBEVIDEOTRANSLATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vtc
    {
        namespace V20240223
        {
            namespace Model
            {
                /**
                * DescribeVideoTranslateJob请求参数结构体
                */
                class DescribeVideoTranslateJobRequest : public AbstractModel
                {
                public:
                    DescribeVideoTranslateJobRequest();
                    ~DescribeVideoTranslateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取JobId。
                     * @return JobId JobId。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置JobId。
                     * @param _jobId JobId。
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
                     * JobId。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VTC_V20240223_MODEL_DESCRIBEVIDEOTRANSLATEJOBREQUEST_H_
