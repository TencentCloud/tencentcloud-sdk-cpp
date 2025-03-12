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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DATABASETABLEOBJECT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DATABASETABLEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DBItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 迁移对象选项，需要告知迁移服务迁移哪些库表对象
                */
                class DatabaseTableObject : public AbstractModel
                {
                public:
                    DatabaseTableObject();
                    ~DatabaseTableObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移对象类型 all(全实例)，partial(部分对象)
                     * @return ObjectMode 迁移对象类型 all(全实例)，partial(部分对象)
                     * 
                     */
                    std::string GetObjectMode() const;

                    /**
                     * 设置迁移对象类型 all(全实例)，partial(部分对象)
                     * @param _objectMode 迁移对象类型 all(全实例)，partial(部分对象)
                     * 
                     */
                    void SetObjectMode(const std::string& _objectMode);

                    /**
                     * 判断参数 ObjectMode 是否已赋值
                     * @return ObjectMode 是否已赋值
                     * 
                     */
                    bool ObjectModeHasBeenSet() const;

                    /**
                     * 获取迁移对象，当 ObjectMode 为 partial 时，不为空
                     * @return Databases 迁移对象，当 ObjectMode 为 partial 时，不为空
                     * 
                     */
                    std::vector<DBItem> GetDatabases() const;

                    /**
                     * 设置迁移对象，当 ObjectMode 为 partial 时，不为空
                     * @param _databases 迁移对象，当 ObjectMode 为 partial 时，不为空
                     * 
                     */
                    void SetDatabases(const std::vector<DBItem>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取高级对象类型，如trigger、function、procedure、event。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedObjects 高级对象类型，如trigger、function、procedure、event。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAdvancedObjects() const;

                    /**
                     * 设置高级对象类型，如trigger、function、procedure、event。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedObjects 高级对象类型，如trigger、function、procedure、event。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedObjects(const std::vector<std::string>& _advancedObjects);

                    /**
                     * 判断参数 AdvancedObjects 是否已赋值
                     * @return AdvancedObjects 是否已赋值
                     * 
                     */
                    bool AdvancedObjectsHasBeenSet() const;

                private:

                    /**
                     * 迁移对象类型 all(全实例)，partial(部分对象)
                     */
                    std::string m_objectMode;
                    bool m_objectModeHasBeenSet;

                    /**
                     * 迁移对象，当 ObjectMode 为 partial 时，不为空
                     */
                    std::vector<DBItem> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * 高级对象类型，如trigger、function、procedure、event。注意：如果要迁移同步高级对象，此配置中应该包含对应的高级对象类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_advancedObjects;
                    bool m_advancedObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DATABASETABLEOBJECT_H_
