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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BIZCATALOGSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BIZCATALOGSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据地图-数据类目信息
                */
                class BizCatalogsInfo : public AbstractModel
                {
                public:
                    BizCatalogsInfo();
                    ~BizCatalogsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取类目层级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 类目层级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置类目层级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 类目层级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取类目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 类目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置类目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 类目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取上级类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 上级类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置上级类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 上级类目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取类目顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 类目顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置类目顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 类目顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 类目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 类目层级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 类目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 上级类目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 类目顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BIZCATALOGSINFO_H_
