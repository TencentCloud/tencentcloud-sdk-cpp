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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPRESOURCECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPRESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ContainerAdditionalResourceRequirementMap.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器部署组相关的参数配置
                */
                class ContainerGroupResourceConfig : public AbstractModel
                {
                public:
                    ContainerGroupResourceConfig();
                    ~ContainerGroupResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不同类型的应用的容器部署组，部署时的额外资源要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdditionalResourceRequirement 不同类型的应用的容器部署组，部署时的额外资源要求
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContainerAdditionalResourceRequirementMap GetAdditionalResourceRequirement() const;

                    /**
                     * 设置不同类型的应用的容器部署组，部署时的额外资源要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _additionalResourceRequirement 不同类型的应用的容器部署组，部署时的额外资源要求
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdditionalResourceRequirement(const ContainerAdditionalResourceRequirementMap& _additionalResourceRequirement);

                    /**
                     * 判断参数 AdditionalResourceRequirement 是否已赋值
                     * @return AdditionalResourceRequirement 是否已赋值
                     * 
                     */
                    bool AdditionalResourceRequirementHasBeenSet() const;

                private:

                    /**
                     * 不同类型的应用的容器部署组，部署时的额外资源要求
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerAdditionalResourceRequirementMap m_additionalResourceRequirement;
                    bool m_additionalResourceRequirementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPRESOURCECONFIG_H_
