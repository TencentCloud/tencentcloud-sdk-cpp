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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPPLANRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPPLANRESPONSE_H_

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
                * CreateFileBackupPlan返回参数结构体
                */
                class CreateFileBackupPlanResponse : public AbstractModel
                {
                public:
                    CreateFileBackupPlanResponse();
                    ~CreateFileBackupPlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份计划 ID 列表
                     * @return PlanIds 备份计划 ID 列表
                     * 
                     */
                    std::vector<std::string> GetPlanIds() const;

                    /**
                     * 判断参数 PlanIds 是否已赋值
                     * @return PlanIds 是否已赋值
                     * 
                     */
                    bool PlanIdsHasBeenSet() const;

                private:

                    /**
                     * 备份计划 ID 列表
                     */
                    std::vector<std::string> m_planIds;
                    bool m_planIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILEBACKUPPLANRESPONSE_H_
