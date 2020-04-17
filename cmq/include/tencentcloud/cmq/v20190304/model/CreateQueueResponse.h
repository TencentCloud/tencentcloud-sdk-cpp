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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_CREATEQUEUERESPONSE_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_CREATEQUEUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * CreateQueue返回参数结构体
                */
                class CreateQueueResponse : public AbstractModel
                {
                public:
                    CreateQueueResponse();
                    ~CreateQueueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取创建成功的queueId
                     * @return QueueId 创建成功的queueId
                     */
                    std::string GetQueueId() const;

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     */
                    bool QueueIdHasBeenSet() const;

                private:

                    /**
                     * 创建成功的queueId
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_CREATEQUEUERESPONSE_H_
