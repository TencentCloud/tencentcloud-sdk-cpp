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

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKRESPDATA_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKRESPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 异步合成请求的返回数据
                */
                class CreateTtsTaskRespData : public AbstractModel
                {
                public:
                    CreateTtsTaskRespData();
                    ~CreateTtsTaskRespData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID，可通过此ID在轮询接口获取合成状态与结果。注意：TaskId数据类型为string
                     * @return TaskId 任务ID，可通过此ID在轮询接口获取合成状态与结果。注意：TaskId数据类型为string
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，可通过此ID在轮询接口获取合成状态与结果。注意：TaskId数据类型为string
                     * @param _taskId 任务ID，可通过此ID在轮询接口获取合成状态与结果。注意：TaskId数据类型为string
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务ID，可通过此ID在轮询接口获取合成状态与结果。注意：TaskId数据类型为string
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_CREATETTSTASKRESPDATA_H_
