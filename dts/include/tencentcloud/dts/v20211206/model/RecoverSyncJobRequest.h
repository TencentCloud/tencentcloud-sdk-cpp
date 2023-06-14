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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RECOVERSYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RECOVERSYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * RecoverSyncJob请求参数结构体
                */
                class RecoverSyncJobRequest : public AbstractModel
                {
                public:
                    RecoverSyncJobRequest();
                    ~RecoverSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步实例id（即标识一个同步作业），形如sync-werwfs23
                     * @return JobId 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置同步实例id（即标识一个同步作业），形如sync-werwfs23
                     * @param _jobId 同步实例id（即标识一个同步作业），形如sync-werwfs23
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
                     * 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RECOVERSYNCJOBREQUEST_H_
