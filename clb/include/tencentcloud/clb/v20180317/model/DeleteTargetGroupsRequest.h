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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DELETETARGETGROUPSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DELETETARGETGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取目标组的ID数组，单次最多支持删除20个。
                     * @return TargetGroupIds 目标组的ID数组，单次最多支持删除20个。
                     * 
                     */
                    std::vector<std::string> GetTargetGroupIds() const;

                    /**
                     * 设置目标组的ID数组，单次最多支持删除20个。
                     * @param _targetGroupIds 目标组的ID数组，单次最多支持删除20个。
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
                     * 目标组的ID数组，单次最多支持删除20个。
                     */
                    std::vector<std::string> m_targetGroupIds;
                    bool m_targetGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DELETETARGETGROUPSREQUEST_H_
