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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_STOPWORKFLOWRUNLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_STOPWORKFLOWRUNLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * StopWorkflowRunList返回参数结构体
                */
                class StopWorkflowRunListResponse : public AbstractModel
                {
                public:
                    StopWorkflowRunListResponse();
                    ~StopWorkflowRunListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>停止成功的运行实例ID列表</p>
                     * @return SuccessIdList <p>停止成功的运行实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetSuccessIdList() const;

                    /**
                     * 判断参数 SuccessIdList 是否已赋值
                     * @return SuccessIdList 是否已赋值
                     * 
                     */
                    bool SuccessIdListHasBeenSet() const;

                    /**
                     * 获取<p>停止失败的运行实例ID列表</p>
                     * @return FailedIdList <p>停止失败的运行实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetFailedIdList() const;

                    /**
                     * 判断参数 FailedIdList 是否已赋值
                     * @return FailedIdList 是否已赋值
                     * 
                     */
                    bool FailedIdListHasBeenSet() const;

                private:

                    /**
                     * <p>停止成功的运行实例ID列表</p>
                     */
                    std::vector<std::string> m_successIdList;
                    bool m_successIdListHasBeenSet;

                    /**
                     * <p>停止失败的运行实例ID列表</p>
                     */
                    std::vector<std::string> m_failedIdList;
                    bool m_failedIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_STOPWORKFLOWRUNLISTRESPONSE_H_
