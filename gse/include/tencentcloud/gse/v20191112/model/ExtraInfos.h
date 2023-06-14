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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_EXTRAINFOS_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_EXTRAINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 实例类型限额配置额外信息
                */
                class ExtraInfos : public AbstractModel
                {
                public:
                    ExtraInfos();
                    ~ExtraInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 实例类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 实例类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例限额数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalInstances 实例限额数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalInstances() const;

                    /**
                     * 设置实例限额数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalInstances 实例限额数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalInstances(const uint64_t& _totalInstances);

                    /**
                     * 判断参数 TotalInstances 是否已赋值
                     * @return TotalInstances 是否已赋值
                     * 
                     */
                    bool TotalInstancesHasBeenSet() const;

                private:

                    /**
                     * 实例类型，例如S5.LARGE8
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例限额数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalInstances;
                    bool m_totalInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_EXTRAINFOS_H_
