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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONDEPLOYMODE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONDEPLOYMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 应用部署模式
                */
                class ApplicationDeployMode : public AbstractModel
                {
                public:
                    ApplicationDeployMode();
                    ~ApplicationDeployMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1:指定节点部署 2:单元部署
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 1:指定节点部署 2:单元部署
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置1:指定节点部署 2:单元部署
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 1:指定节点部署 2:单元部署
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceID 资源ID
                     * 
                     */
                    uint64_t GetResourceID() const;

                    /**
                     * 设置资源ID
                     * @param _resourceID 资源ID
                     * 
                     */
                    void SetResourceID(const uint64_t& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取资源名
                     * @return ResourceName 资源名
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名
                     * @param _resourceName 资源名
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * 1:指定节点部署 2:单元部署
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源ID
                     */
                    uint64_t m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 资源名
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONDEPLOYMODE_H_
