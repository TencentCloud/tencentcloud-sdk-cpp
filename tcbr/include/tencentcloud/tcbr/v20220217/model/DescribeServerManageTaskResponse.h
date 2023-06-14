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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBESERVERMANAGETASKRESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBESERVERMANAGETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/ServerManageTaskInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeServerManageTask返回参数结构体
                */
                class DescribeServerManageTaskResponse : public AbstractModel
                {
                public:
                    DescribeServerManageTaskResponse();
                    ~DescribeServerManageTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否存在
                     * @return IsExist 是否存在
                     * 
                     */
                    bool GetIsExist() const;

                    /**
                     * 判断参数 IsExist 是否已赋值
                     * @return IsExist 是否已赋值
                     * 
                     */
                    bool IsExistHasBeenSet() const;

                    /**
                     * 获取任务信息
                     * @return Task 任务信息
                     * 
                     */
                    ServerManageTaskInfo GetTask() const;

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                private:

                    /**
                     * 是否存在
                     */
                    bool m_isExist;
                    bool m_isExistHasBeenSet;

                    /**
                     * 任务信息
                     */
                    ServerManageTaskInfo m_task;
                    bool m_taskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBESERVERMANAGETASKRESPONSE_H_
