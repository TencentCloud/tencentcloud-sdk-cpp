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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYGOVERNANCELANEGROUPSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYGOVERNANCELANEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceLaneGroup.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyGovernanceLaneGroups请求参数结构体
                */
                class ModifyGovernanceLaneGroupsRequest : public AbstractModel
                {
                public:
                    ModifyGovernanceLaneGroupsRequest();
                    ~ModifyGovernanceLaneGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎实例ID
                     * @return InstanceId 引擎实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置引擎实例ID
                     * @param _instanceId 引擎实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取泳道组规则列表
                     * @return LaneGroups 泳道组规则列表
                     * 
                     */
                    std::vector<GovernanceLaneGroup> GetLaneGroups() const;

                    /**
                     * 设置泳道组规则列表
                     * @param _laneGroups 泳道组规则列表
                     * 
                     */
                    void SetLaneGroups(const std::vector<GovernanceLaneGroup>& _laneGroups);

                    /**
                     * 判断参数 LaneGroups 是否已赋值
                     * @return LaneGroups 是否已赋值
                     * 
                     */
                    bool LaneGroupsHasBeenSet() const;

                private:

                    /**
                     * 引擎实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 泳道组规则列表
                     */
                    std::vector<GovernanceLaneGroup> m_laneGroups;
                    bool m_laneGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYGOVERNANCELANEGROUPSREQUEST_H_
