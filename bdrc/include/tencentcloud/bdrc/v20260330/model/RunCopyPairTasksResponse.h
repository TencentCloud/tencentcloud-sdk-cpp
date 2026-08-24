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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_RUNCOPYPAIRTASKSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_RUNCOPYPAIRTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * RunCopyPairTasks返回参数结构体
                */
                class RunCopyPairTasksResponse : public AbstractModel
                {
                public:
                    RunCopyPairTasksResponse();
                    ~RunCopyPairTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已启动复制任务的复制对ID列表
                     * @return CopyPairIds 已启动复制任务的复制对ID列表
                     * 
                     */
                    std::vector<std::string> GetCopyPairIds() const;

                    /**
                     * 判断参数 CopyPairIds 是否已赋值
                     * @return CopyPairIds 是否已赋值
                     * 
                     */
                    bool CopyPairIdsHasBeenSet() const;

                private:

                    /**
                     * 已启动复制任务的复制对ID列表
                     */
                    std::vector<std::string> m_copyPairIds;
                    bool m_copyPairIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RUNCOPYPAIRTASKSRESPONSE_H_
