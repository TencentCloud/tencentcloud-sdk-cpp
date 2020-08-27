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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_QUERYBEAUTIFYVIDEOJOBREQUEST_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_QUERYBEAUTIFYVIDEOJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * QueryBeautifyVideoJob请求参数结构体
                */
                class QueryBeautifyVideoJobRequest : public AbstractModel
                {
                public:
                    QueryBeautifyVideoJobRequest();
                    ~QueryBeautifyVideoJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频美颜Job id
                     * @return JobId 视频美颜Job id
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置视频美颜Job id
                     * @param JobId 视频美颜Job id
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 视频美颜Job id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_QUERYBEAUTIFYVIDEOJOBREQUEST_H_
