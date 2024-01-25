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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMGETTESTRUNTASKINSTANCESSTATUSINFOTASK_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMGETTESTRUNTASKINSTANCESSTATUSINFOTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务信息获取实例状态信息任务
                */
                class ParamGetTestRunTaskInstancesStatusInfoTask : public AbstractModel
                {
                public:
                    ParamGetTestRunTaskInstancesStatusInfoTask();
                    ~ParamGetTestRunTaskInstancesStatusInfoTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录编号
                     * @return RecordId 记录编号
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录编号
                     * @param _recordId 记录编号
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取任务编号
                     * @return TaskId 任务编号
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务编号
                     * @param _taskId 任务编号
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
                     * 记录编号
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 任务编号
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMGETTESTRUNTASKINSTANCESSTATUSINFOTASK_H_
