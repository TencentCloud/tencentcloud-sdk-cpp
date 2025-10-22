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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTTASKDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 文件鉴定任务分页数据
                */
                class CreateDLPFileDetectTaskData : public AbstractModel
                {
                public:
                    CreateDLPFileDetectTaskData();
                    ~CreateDLPFileDetectTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务请求唯一Id
                     * @return TaskRequestId 任务请求唯一Id
                     * 
                     */
                    std::vector<std::string> GetTaskRequestId() const;

                    /**
                     * 设置任务请求唯一Id
                     * @param _taskRequestId 任务请求唯一Id
                     * 
                     */
                    void SetTaskRequestId(const std::vector<std::string>& _taskRequestId);

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                private:

                    /**
                     * 任务请求唯一Id
                     */
                    std::vector<std::string> m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_CREATEDLPFILEDETECTTASKDATA_H_
