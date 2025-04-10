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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTPARSERESULTREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTPARSERESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * GetDocumentParseResult请求参数结构体
                */
                class GetDocumentParseResultRequest : public AbstractModel
                {
                public:
                    GetDocumentParseResultRequest();
                    ~GetDocumentParseResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 Id
                     * @return TaskId 任务 Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 Id
                     * @param _taskId 任务 Id
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
                     * 任务 Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTPARSERESULTREQUEST_H_
