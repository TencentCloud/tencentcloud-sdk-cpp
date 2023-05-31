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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDINSTANCEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 资源包绑定的实例信息
                */
                class BindInstanceInfo : public AbstractModel
                {
                public:
                    BindInstanceInfo();
                    ~BindInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取绑定的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 绑定的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置绑定的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 绑定的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取绑定的实例所在的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceRegion 绑定的实例所在的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置绑定的实例所在的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceRegion 绑定的实例所在的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取绑定的实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 绑定的实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置绑定的实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceType 绑定的实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * 绑定的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 绑定的实例所在的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 绑定的实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDINSTANCEINFO_H_
