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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_TASK_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * [录音文件识别](https://cloud.tencent.com/document/product/1093/37823#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)、[实时语音异步识别](https://cloud.tencent.com/document/product/1093/52061#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)请求的返回数据
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID，可通过此ID在轮询接口获取识别状态与结果。TaskId数据类型为**uint64**。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**
                     * @return TaskId 任务ID，可通过此ID在轮询接口获取识别状态与结果。TaskId数据类型为**uint64**。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID，可通过此ID在轮询接口获取识别状态与结果。TaskId数据类型为**uint64**。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**
                     * @param _taskId 任务ID，可通过此ID在轮询接口获取识别状态与结果。TaskId数据类型为**uint64**。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID，可通过此ID在轮询接口获取识别状态与结果。TaskId数据类型为**uint64**。
**注意：TaskId有效期为24小时，不同日期可能出现重复TaskId，请不要依赖TaskId作为您业务系统里的唯一ID。**
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_TASK_H_
