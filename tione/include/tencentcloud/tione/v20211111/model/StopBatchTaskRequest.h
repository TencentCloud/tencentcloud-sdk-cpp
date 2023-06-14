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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_STOPBATCHTASKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_STOPBATCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * StopBatchTask请求参数结构体
                */
                class StopBatchTaskRequest : public AbstractModel
                {
                public:
                    StopBatchTaskRequest();
                    ~StopBatchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跑批任务ID
                     * @return BatchTaskId 跑批任务ID
                     * 
                     */
                    std::string GetBatchTaskId() const;

                    /**
                     * 设置跑批任务ID
                     * @param _batchTaskId 跑批任务ID
                     * 
                     */
                    void SetBatchTaskId(const std::string& _batchTaskId);

                    /**
                     * 判断参数 BatchTaskId 是否已赋值
                     * @return BatchTaskId 是否已赋值
                     * 
                     */
                    bool BatchTaskIdHasBeenSet() const;

                private:

                    /**
                     * 跑批任务ID
                     */
                    std::string m_batchTaskId;
                    bool m_batchTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_STOPBATCHTASKREQUEST_H_
