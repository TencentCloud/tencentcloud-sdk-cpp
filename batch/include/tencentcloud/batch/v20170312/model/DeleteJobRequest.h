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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DELETEJOBREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DELETEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteJob请求参数结构体
                */
                class DeleteJobRequest : public AbstractModel
                {
                public:
                    DeleteJobRequest();
                    ~DeleteJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * @return JobId 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * @param _jobId 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
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
                     * 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DELETEJOBREQUEST_H_
