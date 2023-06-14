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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_FLEETRELATEDRESOURCE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_FLEETRELATEDRESOURCE_H_

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
                * 与服务器舰队关联的资源，如别名和队列
                */
                class FleetRelatedResource : public AbstractModel
                {
                public:
                    FleetRelatedResource();
                    ~FleetRelatedResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型。
- ALIAS：别名
- QUEUE：队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 资源类型。
- ALIAS：别名
- QUEUE：队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源类型。
- ALIAS：别名
- QUEUE：队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 资源类型。
- ALIAS：别名
- QUEUE：队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取资源ID，目前仅支持别名ID和队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源ID，目前仅支持别名ID和队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，目前仅支持别名ID和队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源ID，目前仅支持别名ID和队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源所在区域，如ap-shanghai、na-siliconvalley等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRegion 资源所在区域，如ap-shanghai、na-siliconvalley等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在区域，如ap-shanghai、na-siliconvalley等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRegion 资源所在区域，如ap-shanghai、na-siliconvalley等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                private:

                    /**
                     * 资源类型。
- ALIAS：别名
- QUEUE：队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源ID，目前仅支持别名ID和队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源所在区域，如ap-shanghai、na-siliconvalley等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_FLEETRELATEDRESOURCE_H_
