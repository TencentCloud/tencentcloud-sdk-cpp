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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITCHECKATTENDANCETASKPLUSRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITCHECKATTENDANCETASKPLUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitCheckAttendanceTaskPlus返回参数结构体
                */
                class SubmitCheckAttendanceTaskPlusResponse : public AbstractModel
                {
                public:
                    SubmitCheckAttendanceTaskPlusResponse();
                    ~SubmitCheckAttendanceTaskPlusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务标识符
                     * @return JobId 任务标识符
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取没有注册的人的ID列表
                     * @return NotRegisteredSet 没有注册的人的ID列表
                     * 
                     */
                    std::string GetNotRegisteredSet() const;

                    /**
                     * 判断参数 NotRegisteredSet 是否已赋值
                     * @return NotRegisteredSet 是否已赋值
                     * 
                     */
                    bool NotRegisteredSetHasBeenSet() const;

                private:

                    /**
                     * 任务标识符
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 没有注册的人的ID列表
                     */
                    std::string m_notRegisteredSet;
                    bool m_notRegisteredSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITCHECKATTENDANCETASKPLUSRESPONSE_H_
