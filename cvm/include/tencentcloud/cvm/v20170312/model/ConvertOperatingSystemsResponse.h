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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/TargetOS.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ConvertOperatingSystems返回参数结构体
                */
                class ConvertOperatingSystemsResponse : public AbstractModel
                {
                public:
                    ConvertOperatingSystemsResponse();
                    ~ConvertOperatingSystemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取转换的目标操系统信息，仅在入参 DryRun 为 true 时返回。
                     * @return SupportTargetOSList 转换的目标操系统信息，仅在入参 DryRun 为 true 时返回。
                     * 
                     */
                    std::vector<TargetOS> GetSupportTargetOSList() const;

                    /**
                     * 判断参数 SupportTargetOSList 是否已赋值
                     * @return SupportTargetOSList 是否已赋值
                     * 
                     */
                    bool SupportTargetOSListHasBeenSet() const;

                    /**
                     * 获取操作系统转换的任务 ID
                     * @return TaskId 操作系统转换的任务 ID
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
                     * 转换的目标操系统信息，仅在入参 DryRun 为 true 时返回。
                     */
                    std::vector<TargetOS> m_supportTargetOSList;
                    bool m_supportTargetOSListHasBeenSet;

                    /**
                     * 操作系统转换的任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSRESPONSE_H_
