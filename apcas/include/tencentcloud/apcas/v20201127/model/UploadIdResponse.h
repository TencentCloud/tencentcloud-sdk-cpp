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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_UPLOADIDRESPONSE_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_UPLOADIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apcas/v20201127/model/TaskData.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * UploadId返回参数结构体
                */
                class UploadIdResponse : public AbstractModel
                {
                public:
                    UploadIdResponse();
                    ~UploadIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取画像洞察任务ID等信息
                     * @return TaskData 画像洞察任务ID等信息
                     */
                    TaskData GetTaskData() const;

                    /**
                     * 判断参数 TaskData 是否已赋值
                     * @return TaskData 是否已赋值
                     */
                    bool TaskDataHasBeenSet() const;

                private:

                    /**
                     * 画像洞察任务ID等信息
                     */
                    TaskData m_taskData;
                    bool m_taskDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_UPLOADIDRESPONSE_H_
