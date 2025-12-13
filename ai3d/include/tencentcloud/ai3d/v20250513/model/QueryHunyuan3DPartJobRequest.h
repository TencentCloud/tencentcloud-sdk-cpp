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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUAN3DPARTJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUAN3DPARTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryHunyuan3DPartJob请求参数结构体
                */
                class QueryHunyuan3DPartJobRequest : public AbstractModel
                {
                public:
                    QueryHunyuan3DPartJobRequest();
                    ~QueryHunyuan3DPartJobRequest() = default;
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

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUAN3DPARTJOBREQUEST_H_
