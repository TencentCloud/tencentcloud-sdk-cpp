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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEVIDEOEXTENDKLINGJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEVIDEOEXTENDKLINGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * DescribeVideoExtendKlingJob请求参数结构体
                */
                class DescribeVideoExtendKlingJobRequest : public AbstractModel
                {
                public:
                    DescribeVideoExtendKlingJobRequest();
                    ~DescribeVideoExtendKlingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID。</p>
                     * @return JobId <p>任务ID。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务ID。</p>
                     * @param _jobId <p>任务ID。</p>
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
                     * 获取
                     * @return ExternalTaskId 
                     * 
                     */
                    std::string GetExternalTaskId() const;

                    /**
                     * 设置
                     * @param _externalTaskId 
                     * 
                     */
                    void SetExternalTaskId(const std::string& _externalTaskId);

                    /**
                     * 判断参数 ExternalTaskId 是否已赋值
                     * @return ExternalTaskId 是否已赋值
                     * 
                     */
                    bool ExternalTaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_externalTaskId;
                    bool m_externalTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEVIDEOEXTENDKLINGJOBREQUEST_H_
