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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UNITNAMESPACE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UNITNAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关单元化命名空间
                */
                class UnitNamespace : public AbstractModel
                {
                public:
                    UnitNamespace();
                    ~UnitNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param NamespaceId 命名空间ID
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间Name
                     * @return NamespaceName 命名空间Name
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间Name
                     * @param NamespaceName 命名空间Name
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取单元化命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 单元化命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetId() const;

                    /**
                     * 设置单元化命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id 单元化命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间Name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 单元化命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UNITNAMESPACE_H_
