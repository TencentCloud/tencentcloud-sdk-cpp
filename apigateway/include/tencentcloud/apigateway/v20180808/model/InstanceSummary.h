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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCESUMMARY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 专享查询列表
                */
                class InstanceSummary : public AbstractModel
                {
                public:
                    InstanceSummary();
                    ~InstanceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专享实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 专享实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置专享实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 专享实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取专享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSet 专享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceInfo> GetInstanceSet() const;

                    /**
                     * 设置专享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceSet 专享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceSet(const std::vector<InstanceInfo>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                private:

                    /**
                     * 专享实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 专享实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceInfo> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_INSTANCESUMMARY_H_
