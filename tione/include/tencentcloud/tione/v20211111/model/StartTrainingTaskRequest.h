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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_STARTTRAININGTASKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_STARTTRAININGTASKREQUEST_H_

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
                * StartTrainingTask请求参数结构体
                */
                class StartTrainingTaskRequest : public AbstractModel
                {
                public:
                    StartTrainingTaskRequest();
                    ~StartTrainingTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取训练任务ID
                     * @return Id 训练任务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置训练任务ID
                     * @param _id 训练任务ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 训练任务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_STARTTRAININGTASKREQUEST_H_
