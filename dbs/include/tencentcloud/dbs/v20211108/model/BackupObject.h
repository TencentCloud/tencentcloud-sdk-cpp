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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPOBJECT_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/BackupObjectItem.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份对象
                */
                class BackupObject : public AbstractModel
                {
                public:
                    BackupObject();
                    ~BackupObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份对象类型，可能的取值为:
"all" - 整实例;
"partial" - 部分对象。
                     * @return ObjectMode 备份对象类型，可能的取值为:
"all" - 整实例;
"partial" - 部分对象。
                     * 
                     */
                    std::string GetObjectMode() const;

                    /**
                     * 设置备份对象类型，可能的取值为:
"all" - 整实例;
"partial" - 部分对象。
                     * @param _objectMode 备份对象类型，可能的取值为:
"all" - 整实例;
"partial" - 部分对象。
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
                     * 获取备份对象详情，当 ObjectMode 为 partial, 即选择部分对象备份时，该字段不能为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectItems 备份对象详情，当 ObjectMode 为 partial, 即选择部分对象备份时，该字段不能为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BackupObjectItem> GetObjectItems() const;

                    /**
                     * 设置备份对象详情，当 ObjectMode 为 partial, 即选择部分对象备份时，该字段不能为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectItems 备份对象详情，当 ObjectMode 为 partial, 即选择部分对象备份时，该字段不能为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectItems(const std::vector<BackupObjectItem>& _objectItems);

                    /**
                     * 判断参数 ObjectItems 是否已赋值
                     * @return ObjectItems 是否已赋值
                     * 
                     */
                    bool ObjectItemsHasBeenSet() const;

                private:

                    /**
                     * 备份对象类型，可能的取值为:
"all" - 整实例;
"partial" - 部分对象。
                     */
                    std::string m_objectMode;
                    bool m_objectModeHasBeenSet;

                    /**
                     * 备份对象详情，当 ObjectMode 为 partial, 即选择部分对象备份时，该字段不能为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BackupObjectItem> m_objectItems;
                    bool m_objectItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPOBJECT_H_
