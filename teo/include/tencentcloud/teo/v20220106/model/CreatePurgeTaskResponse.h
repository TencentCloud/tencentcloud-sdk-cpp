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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEPURGETASKRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEPURGETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/FailReason.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreatePurgeTask返回参数结构体
                */
                class CreatePurgeTaskResponse : public AbstractModel
                {
                public:
                    CreatePurgeTaskResponse();
                    ~CreatePurgeTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return JobId 任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取失败的任务列表及原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedList 失败的任务列表及原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FailReason> GetFailedList() const;

                    /**
                     * 判断参数 FailedList 是否已赋值
                     * @return FailedList 是否已赋值
                     * 
                     */
                    bool FailedListHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 失败的任务列表及原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FailReason> m_failedList;
                    bool m_failedListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEPURGETASKRESPONSE_H_
