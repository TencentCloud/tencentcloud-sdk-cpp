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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateSnapshotTask返回参数结构体
                */
                class CreateSnapshotTaskResponse : public AbstractModel
                {
                public:
                    CreateSnapshotTaskResponse();
                    ~CreateSnapshotTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取白板板书生成任务ID，只有任务创建成功的时候才会返回此字段
                     * @return TaskID 白板板书生成任务ID，只有任务创建成功的时候才会返回此字段
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * 白板板书生成任务ID，只有任务创建成功的时候才会返回此字段
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKRESPONSE_H_
