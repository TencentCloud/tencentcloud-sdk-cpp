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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ROTATEKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ROTATEKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * RotateKey返回参数结构体
                */
                class RotateKeyResponse : public AbstractModel
                {
                public:
                    RotateKeyResponse();
                    ~RotateKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>轮转任务ID，用于标识本次轮转任务。可以通过调用DescribeKey，返回上次轮转时间和下次轮转时间，判断是否轮转成功。</p>
                     * @return TaskId <p>轮转任务ID，用于标识本次轮转任务。可以通过调用DescribeKey，返回上次轮转时间和下次轮转时间，判断是否轮转成功。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>轮转任务ID，用于标识本次轮转任务。可以通过调用DescribeKey，返回上次轮转时间和下次轮转时间，判断是否轮转成功。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ROTATEKEYRESPONSE_H_
