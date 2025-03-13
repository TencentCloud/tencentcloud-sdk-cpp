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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSLAVEDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSLAVEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SlaveZoneAttrItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群从可用区信息
                */
                class ClusterSlaveData : public AbstractModel
                {
                public:
                    ClusterSlaveData();
                    ~ClusterSlaveData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取旧主可用区
                     * @return OldMasterZone 旧主可用区
                     * 
                     */
                    std::string GetOldMasterZone() const;

                    /**
                     * 设置旧主可用区
                     * @param _oldMasterZone 旧主可用区
                     * 
                     */
                    void SetOldMasterZone(const std::string& _oldMasterZone);

                    /**
                     * 判断参数 OldMasterZone 是否已赋值
                     * @return OldMasterZone 是否已赋值
                     * 
                     */
                    bool OldMasterZoneHasBeenSet() const;

                    /**
                     * 获取旧从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldSlaveZone 旧从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOldSlaveZone() const;

                    /**
                     * 设置旧从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldSlaveZone 旧从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldSlaveZone(const std::vector<std::string>& _oldSlaveZone);

                    /**
                     * 判断参数 OldSlaveZone 是否已赋值
                     * @return OldSlaveZone 是否已赋值
                     * 
                     */
                    bool OldSlaveZoneHasBeenSet() const;

                    /**
                     * 获取新主可用区
                     * @return NewMasterZone 新主可用区
                     * 
                     */
                    std::string GetNewMasterZone() const;

                    /**
                     * 设置新主可用区
                     * @param _newMasterZone 新主可用区
                     * 
                     */
                    void SetNewMasterZone(const std::string& _newMasterZone);

                    /**
                     * 判断参数 NewMasterZone 是否已赋值
                     * @return NewMasterZone 是否已赋值
                     * 
                     */
                    bool NewMasterZoneHasBeenSet() const;

                    /**
                     * 获取新从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewSlaveZone 新从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNewSlaveZone() const;

                    /**
                     * 设置新从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newSlaveZone 新从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewSlaveZone(const std::vector<std::string>& _newSlaveZone);

                    /**
                     * 判断参数 NewSlaveZone 是否已赋值
                     * @return NewSlaveZone 是否已赋值
                     * 
                     */
                    bool NewSlaveZoneHasBeenSet() const;

                    /**
                     * 获取新从可用区属性
                     * @return NewSlaveZoneAttr 新从可用区属性
                     * 
                     */
                    std::vector<SlaveZoneAttrItem> GetNewSlaveZoneAttr() const;

                    /**
                     * 设置新从可用区属性
                     * @param _newSlaveZoneAttr 新从可用区属性
                     * 
                     */
                    void SetNewSlaveZoneAttr(const std::vector<SlaveZoneAttrItem>& _newSlaveZoneAttr);

                    /**
                     * 判断参数 NewSlaveZoneAttr 是否已赋值
                     * @return NewSlaveZoneAttr 是否已赋值
                     * 
                     */
                    bool NewSlaveZoneAttrHasBeenSet() const;

                    /**
                     * 获取旧可用区属性
                     * @return OldSlaveZoneAttr 旧可用区属性
                     * 
                     */
                    std::vector<SlaveZoneAttrItem> GetOldSlaveZoneAttr() const;

                    /**
                     * 设置旧可用区属性
                     * @param _oldSlaveZoneAttr 旧可用区属性
                     * 
                     */
                    void SetOldSlaveZoneAttr(const std::vector<SlaveZoneAttrItem>& _oldSlaveZoneAttr);

                    /**
                     * 判断参数 OldSlaveZoneAttr 是否已赋值
                     * @return OldSlaveZoneAttr 是否已赋值
                     * 
                     */
                    bool OldSlaveZoneAttrHasBeenSet() const;

                private:

                    /**
                     * 旧主可用区
                     */
                    std::string m_oldMasterZone;
                    bool m_oldMasterZoneHasBeenSet;

                    /**
                     * 旧从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_oldSlaveZone;
                    bool m_oldSlaveZoneHasBeenSet;

                    /**
                     * 新主可用区
                     */
                    std::string m_newMasterZone;
                    bool m_newMasterZoneHasBeenSet;

                    /**
                     * 新从可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_newSlaveZone;
                    bool m_newSlaveZoneHasBeenSet;

                    /**
                     * 新从可用区属性
                     */
                    std::vector<SlaveZoneAttrItem> m_newSlaveZoneAttr;
                    bool m_newSlaveZoneAttrHasBeenSet;

                    /**
                     * 旧可用区属性
                     */
                    std::vector<SlaveZoneAttrItem> m_oldSlaveZoneAttr;
                    bool m_oldSlaveZoneAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSLAVEDATA_H_
