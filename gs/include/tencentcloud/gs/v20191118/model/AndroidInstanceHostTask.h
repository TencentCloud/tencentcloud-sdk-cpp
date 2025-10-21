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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEHOSTTASK_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEHOSTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓实例宿主机任务信息
                */
                class AndroidInstanceHostTask : public AbstractModel
                {
                public:
                    AndroidInstanceHostTask();
                    ~AndroidInstanceHostTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param _taskId 任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取宿主机序列号
                     * @return HostSerialNumber 宿主机序列号
                     * 
                     */
                    std::string GetHostSerialNumber() const;

                    /**
                     * 设置宿主机序列号
                     * @param _hostSerialNumber 宿主机序列号
                     * 
                     */
                    void SetHostSerialNumber(const std::string& _hostSerialNumber);

                    /**
                     * 判断参数 HostSerialNumber 是否已赋值
                     * @return HostSerialNumber 是否已赋值
                     * 
                     */
                    bool HostSerialNumberHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 宿主机序列号
                     */
                    std::string m_hostSerialNumber;
                    bool m_hostSerialNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEHOSTTASK_H_
