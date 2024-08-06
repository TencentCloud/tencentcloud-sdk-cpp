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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_GETVRSVOICETYPESREQUEST_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_GETVRSVOICETYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * GetVRSVoiceTypes请求参数结构体
                */
                class GetVRSVoiceTypesRequest : public AbstractModel
                {
                public:
                    GetVRSVoiceTypesRequest();
                    ~GetVRSVoiceTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取复刻类型。
0 - 除快速声音复刻外其他复刻类型（默认）；
5 - 一句话声音复刻。
                     * @return TaskType 复刻类型。
0 - 除快速声音复刻外其他复刻类型（默认）；
5 - 一句话声音复刻。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置复刻类型。
0 - 除快速声音复刻外其他复刻类型（默认）；
5 - 一句话声音复刻。
                     * @param _taskType 复刻类型。
0 - 除快速声音复刻外其他复刻类型（默认）；
5 - 一句话声音复刻。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 复刻类型。
0 - 除快速声音复刻外其他复刻类型（默认）；
5 - 一句话声音复刻。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_GETVRSVOICETYPESREQUEST_H_
