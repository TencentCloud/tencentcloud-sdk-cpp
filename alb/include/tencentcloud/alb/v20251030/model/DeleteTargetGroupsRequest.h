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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETETARGETGROUPSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETETARGETGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DeleteTargetGroups请求参数结构体
                */
                class DeleteTargetGroupsRequest : public AbstractModel
                {
                public:
                    DeleteTargetGroupsRequest();
                    ~DeleteTargetGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除目标组。
- **true**：发送预览请求，检查删除目标组的参数、格式、业务限制等是否符合要求。
                     * @return DryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除目标组。
- **true**：发送预览请求，检查删除目标组的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除目标组。
- **true**：发送预览请求，检查删除目标组的参数、格式、业务限制等是否符合要求。
                     * @param _dryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除目标组。
- **true**：发送预览请求，检查删除目标组的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * @return TargetGroupIds 目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    std::vector<std::string> GetTargetGroupIds() const;

                    /**
                     * 设置目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * @param _targetGroupIds 目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    void SetTargetGroupIds(const std::vector<std::string>& _targetGroupIds);

                    /**
                     * 判断参数 TargetGroupIds 是否已赋值
                     * @return TargetGroupIds 是否已赋值
                     * 
                     */
                    bool TargetGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除目标组。
- **true**：发送预览请求，检查删除目标组的参数、格式、业务限制等是否符合要求。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     */
                    std::vector<std::string> m_targetGroupIds;
                    bool m_targetGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETETARGETGROUPSREQUEST_H_
