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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTANCEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTANCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBasicAlarmList返回的Alarms里的InstanceGroup
                */
                class InstanceGroup : public AbstractModel
                {
                public:
                    InstanceGroup();
                    ~InstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroupId 实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroupId 实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取实例组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceGroupName 实例组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceGroupName() const;

                    /**
                     * 设置实例组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceGroupName 实例组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceGroupName(const std::string& _instanceGroupName);

                    /**
                     * 判断参数 InstanceGroupName 是否已赋值
                     * @return InstanceGroupName 是否已赋值
                     * 
                     */
                    bool InstanceGroupNameHasBeenSet() const;

                private:

                    /**
                     * 实例组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 实例组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceGroupName;
                    bool m_instanceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTANCEGROUP_H_
