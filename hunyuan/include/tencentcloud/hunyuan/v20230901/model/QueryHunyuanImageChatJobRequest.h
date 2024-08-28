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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANIMAGECHATJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANIMAGECHATJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * QueryHunyuanImageChatJob请求参数结构体
                */
                class QueryHunyuanImageChatJobRequest : public AbstractModel
                {
                public:
                    QueryHunyuanImageChatJobRequest();
                    ~QueryHunyuanImageChatJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID。
                     * @return JobId 任务 ID。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务 ID。
                     * @param _jobId 任务 ID。
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
                     * 任务 ID。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANIMAGECHATJOBREQUEST_H_
