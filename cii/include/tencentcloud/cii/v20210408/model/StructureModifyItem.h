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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_STRUCTUREMODIFYITEM_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_STRUCTUREMODIFYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 结构化复核差异接口的修改的项
                */
                class StructureModifyItem : public AbstractModel
                {
                public:
                    StructureModifyItem();
                    ~StructureModifyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修改的字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 修改的字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置修改的字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 修改的字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取机器结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Machine 机器结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置机器结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machine 机器结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachine(const std::string& _machine);

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     * 
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取人工结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Manual 人工结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManual() const;

                    /**
                     * 设置人工结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manual 人工结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManual(const std::string& _manual);

                    /**
                     * 判断参数 Manual 是否已赋值
                     * @return Manual 是否已赋值
                     * 
                     */
                    bool ManualHasBeenSet() const;

                private:

                    /**
                     * 修改的字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 机器结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 人工结果的值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manual;
                    bool m_manualHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_STRUCTUREMODIFYITEM_H_
