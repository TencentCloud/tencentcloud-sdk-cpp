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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/WorkGroupMessage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 工作组集合
                */
                class WorkGroups : public AbstractModel
                {
                public:
                    WorkGroups();
                    ~WorkGroups() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作组信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkGroupSet 工作组信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WorkGroupMessage> GetWorkGroupSet() const;

                    /**
                     * 设置工作组信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workGroupSet 工作组信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkGroupSet(const std::vector<WorkGroupMessage>& _workGroupSet);

                    /**
                     * 判断参数 WorkGroupSet 是否已赋值
                     * @return WorkGroupSet 是否已赋值
                     * 
                     */
                    bool WorkGroupSetHasBeenSet() const;

                    /**
                     * 获取工作组总数
                     * @return TotalCount 工作组总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置工作组总数
                     * @param _totalCount 工作组总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 工作组信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WorkGroupMessage> m_workGroupSet;
                    bool m_workGroupSetHasBeenSet;

                    /**
                     * 工作组总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPS_H_
