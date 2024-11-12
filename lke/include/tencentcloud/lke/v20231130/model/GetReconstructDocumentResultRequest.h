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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetReconstructDocumentResult请求参数结构体
                */
                class GetReconstructDocumentResultRequest : public AbstractModel
                {
                public:
                    GetReconstructDocumentResultRequest();
                    ~GetReconstructDocumentResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务唯一Id。[CreateReconstructDocumentFlow](https://cloud.tencent.com/document/product/1759/107506) 返回的TaskId。
                     * @return TaskId 任务唯一Id。[CreateReconstructDocumentFlow](https://cloud.tencent.com/document/product/1759/107506) 返回的TaskId。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一Id。[CreateReconstructDocumentFlow](https://cloud.tencent.com/document/product/1759/107506) 返回的TaskId。
                     * @param _taskId 任务唯一Id。[CreateReconstructDocumentFlow](https://cloud.tencent.com/document/product/1759/107506) 返回的TaskId。
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
                     * 任务唯一Id。[CreateReconstructDocumentFlow](https://cloud.tencent.com/document/product/1759/107506) 返回的TaskId。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTREQUEST_H_
