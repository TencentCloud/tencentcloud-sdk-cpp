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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCENODESPEC_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCENODESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ResourceNodeDiskSpec.h>
#include <tencentcloud/cdwdoris/v20211228/model/SpecExtra.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 集群内节点的规格描述
                */
                class ResourceNodeSpec : public AbstractModel
                {
                public:
                    ResourceNodeSpec();
                    ~ResourceNodeSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型，“DATA"数据节点，”COMMON" zookeeper节点
                     * @return Type 节点类型，“DATA"数据节点，”COMMON" zookeeper节点
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型，“DATA"数据节点，”COMMON" zookeeper节点
                     * @param _type 节点类型，“DATA"数据节点，”COMMON" zookeeper节点
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
                     * 获取节点规格名称，例如 “SCH1","SCH2”等
                     * @return SpecName 节点规格名称，例如 “SCH1","SCH2”等
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置节点规格名称，例如 “SCH1","SCH2”等
                     * @param _specName 节点规格名称，例如 “SCH1","SCH2”等
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取节点数目
                     * @return Count 节点数目
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置节点数目
                     * @param _count 节点数目
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取磁盘规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSpec 磁盘规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceNodeDiskSpec GetDiskSpec() const;

                    /**
                     * 设置磁盘规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSpec 磁盘规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskSpec(const ResourceNodeDiskSpec& _diskSpec);

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取云盘是否加密，0不加密/1加密  默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encrypt 云盘是否加密，0不加密/1加密  默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEncrypt() const;

                    /**
                     * 设置云盘是否加密，0不加密/1加密  默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encrypt 云盘是否加密，0不加密/1加密  默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncrypt(const uint64_t& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SpecExtra GetExtra() const;

                    /**
                     * 设置额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extra 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtra(const SpecExtra& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取挂载云盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachCBSSpec 挂载云盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceNodeDiskSpec GetAttachCBSSpec() const;

                    /**
                     * 设置挂载云盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachCBSSpec 挂载云盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachCBSSpec(const ResourceNodeDiskSpec& _attachCBSSpec);

                    /**
                     * 判断参数 AttachCBSSpec 是否已赋值
                     * @return AttachCBSSpec 是否已赋值
                     * 
                     */
                    bool AttachCBSSpecHasBeenSet() const;

                private:

                    /**
                     * 节点类型，“DATA"数据节点，”COMMON" zookeeper节点
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点规格名称，例如 “SCH1","SCH2”等
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 节点数目
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 磁盘规格描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceNodeDiskSpec m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * 云盘是否加密，0不加密/1加密  默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SpecExtra m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 挂载云盘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceNodeDiskSpec m_attachCBSSpec;
                    bool m_attachCBSSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESOURCENODESPEC_H_
