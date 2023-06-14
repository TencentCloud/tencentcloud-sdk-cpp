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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListInstance.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListInstanceGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBindingPolicyObjectList返回参数结构体
                */
                class DescribeBindingPolicyObjectListResponse : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListResponse();
                    ~DescribeBindingPolicyObjectListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定的对象实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 绑定的对象实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeBindingPolicyObjectListInstance> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取绑定的对象实例总数
                     * @return Total 绑定的对象实例总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取未屏蔽的对象实例数
                     * @return NoShieldedSum 未屏蔽的对象实例数
                     * 
                     */
                    int64_t GetNoShieldedSum() const;

                    /**
                     * 判断参数 NoShieldedSum 是否已赋值
                     * @return NoShieldedSum 是否已赋值
                     * 
                     */
                    bool NoShieldedSumHasBeenSet() const;

                    /**
                     * 获取绑定的实例分组信息，没有绑定实例分组则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroup 绑定的实例分组信息，没有绑定实例分组则为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeBindingPolicyObjectListInstanceGroup GetInstanceGroup() const;

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     * 
                     */
                    bool InstanceGroupHasBeenSet() const;

                private:

                    /**
                     * 绑定的对象实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeBindingPolicyObjectListInstance> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 绑定的对象实例总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 未屏蔽的对象实例数
                     */
                    int64_t m_noShieldedSum;
                    bool m_noShieldedSumHasBeenSet;

                    /**
                     * 绑定的实例分组信息，没有绑定实例分组则为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeBindingPolicyObjectListInstanceGroup m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTRESPONSE_H_
