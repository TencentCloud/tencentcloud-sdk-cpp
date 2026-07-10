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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ADDTARGETSTOTARGETGROUPREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ADDTARGETSTOTARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetToAdd.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * AddTargetsToTargetGroup请求参数结构体
                */
                class AddTargetsToTargetGroupRequest : public AbstractModel
                {
                public:
                    AddTargetsToTargetGroupRequest();
                    ~AddTargetsToTargetGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @return TargetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @param _targetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取需要添加至目标组的后端服务列表。单次请求最多支持添加 **50** 个后端服务。
                     * @return Targets 需要添加至目标组的后端服务列表。单次请求最多支持添加 **50** 个后端服务。
                     * 
                     */
                    std::vector<TargetToAdd> GetTargets() const;

                    /**
                     * 设置需要添加至目标组的后端服务列表。单次请求最多支持添加 **50** 个后端服务。
                     * @param _targets 需要添加至目标组的后端服务列表。单次请求最多支持添加 **50** 个后端服务。
                     * 
                     */
                    void SetTargets(const std::vector<TargetToAdd>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取是否预览此次请求。 
- **false**（默认）：发送普通请求，直接添加后端服务至目标组。 
- **true**：发送预览请求，检查添加后端服务的参数、格式、业务限制等是否符合要求。
                     * @return DryRun 是否预览此次请求。 
- **false**（默认）：发送普通请求，直接添加后端服务至目标组。 
- **true**：发送预览请求，检查添加后端服务的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否预览此次请求。 
- **false**（默认）：发送普通请求，直接添加后端服务至目标组。 
- **true**：发送预览请求，检查添加后端服务的参数、格式、业务限制等是否符合要求。
                     * @param _dryRun 是否预览此次请求。 
- **false**（默认）：发送普通请求，直接添加后端服务至目标组。 
- **true**：发送预览请求，检查添加后端服务的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 需要添加至目标组的后端服务列表。单次请求最多支持添加 **50** 个后端服务。
                     */
                    std::vector<TargetToAdd> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 是否预览此次请求。 
- **false**（默认）：发送普通请求，直接添加后端服务至目标组。 
- **true**：发送预览请求，检查添加后端服务的参数、格式、业务限制等是否符合要求。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ADDTARGETSTOTARGETGROUPREQUEST_H_
