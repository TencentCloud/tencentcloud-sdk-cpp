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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_STOPBASELINEDETECTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_STOPBASELINEDETECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * StopBaselineDetect请求参数结构体
                */
                class StopBaselineDetectRequest : public AbstractModel
                {
                public:
                    StopBaselineDetectRequest();
                    ~StopBaselineDetectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取取消任务ID集合
                     * @return TaskIds 取消任务ID集合
                     * 
                     */
                    std::vector<int64_t> GetTaskIds() const;

                    /**
                     * 设置取消任务ID集合
                     * @param _taskIds 取消任务ID集合
                     * 
                     */
                    void SetTaskIds(const std::vector<int64_t>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * 取消任务ID集合
                     */
                    std::vector<int64_t> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_STOPBASELINEDETECTREQUEST_H_
