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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * CreateSplitDocumentFlow返回参数结构体
                */
                class CreateSplitDocumentFlowResponse : public AbstractModel
                {
                public:
                    CreateSplitDocumentFlowResponse();
                    ~CreateSplitDocumentFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取拆分任务唯一ID。
30天内可以通过`GetSplitDocumentResult`接口查询TaskId对应的拆分结果。
                     * @return TaskId 拆分任务唯一ID。
30天内可以通过`GetSplitDocumentResult`接口查询TaskId对应的拆分结果。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 拆分任务唯一ID。
30天内可以通过`GetSplitDocumentResult`接口查询TaskId对应的拆分结果。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CREATESPLITDOCUMENTFLOWRESPONSE_H_
