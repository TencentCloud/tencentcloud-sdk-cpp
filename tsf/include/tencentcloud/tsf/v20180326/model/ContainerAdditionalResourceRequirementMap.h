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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERADDITIONALRESOURCEREQUIREMENTMAP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERADDITIONALRESOURCEREQUIREMENTMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ContainerAdditionalResourceRequirement.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 不同类型的应用的容器部署组，部署时的额外资源要求
                */
                class ContainerAdditionalResourceRequirementMap : public AbstractModel
                {
                public:
                    ContainerAdditionalResourceRequirementMap();
                    ~ContainerAdditionalResourceRequirementMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mesh 应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return M Mesh 应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContainerAdditionalResourceRequirement GetM() const;

                    /**
                     * 设置Mesh 应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _m Mesh 应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetM(const ContainerAdditionalResourceRequirement& _m);

                    /**
                     * 判断参数 M 是否已赋值
                     * @return M 是否已赋值
                     * 
                     */
                    bool MHasBeenSet() const;

                    /**
                     * 获取普通应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return N 普通应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContainerAdditionalResourceRequirement GetN() const;

                    /**
                     * 设置普通应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _n 普通应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetN(const ContainerAdditionalResourceRequirement& _n);

                    /**
                     * 判断参数 N 是否已赋值
                     * @return N 是否已赋值
                     * 
                     */
                    bool NHasBeenSet() const;

                private:

                    /**
                     * Mesh 应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerAdditionalResourceRequirement m_m;
                    bool m_mHasBeenSet;

                    /**
                     * 普通应用部署时需要的额外资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerAdditionalResourceRequirement m_n;
                    bool m_nHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERADDITIONALRESOURCEREQUIREMENTMAP_H_
