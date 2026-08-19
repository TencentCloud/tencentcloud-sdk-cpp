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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERMOUNTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERMOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 容器挂载信息
                */
                class ContainerMountItem : public AbstractModel
                {
                public:
                    ContainerMountItem();
                    ~ContainerMountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>挂载类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>挂载类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>挂载类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>挂载类型</p>
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
                     * 获取<p>宿主机路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source <p>宿主机路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>宿主机路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source <p>宿主机路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>容器内路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destination <p>容器内路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>容器内路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destination <p>容器内路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取<p>挂载模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode <p>挂载模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>挂载模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode <p>挂载模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>是否可读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RW <p>是否可读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRW() const;

                    /**
                     * 设置<p>是否可读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rW <p>是否可读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRW(const bool& _rW);

                    /**
                     * 判断参数 RW 是否已赋值
                     * @return RW 是否已赋值
                     * 
                     */
                    bool RWHasBeenSet() const;

                    /**
                     * 获取<p>传播方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Propagation <p>传播方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropagation() const;

                    /**
                     * 设置<p>传播方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propagation <p>传播方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropagation(const std::string& _propagation);

                    /**
                     * 判断参数 Propagation 是否已赋值
                     * @return Propagation 是否已赋值
                     * 
                     */
                    bool PropagationHasBeenSet() const;

                    /**
                     * 获取<p>挂载名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>挂载名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>挂载名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>挂载名称</p>
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
                     * 获取<p>驱动名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Driver <p>驱动名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDriver() const;

                    /**
                     * 设置<p>驱动名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _driver <p>驱动名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDriver(const std::string& _driver);

                    /**
                     * 判断参数 Driver 是否已赋值
                     * @return Driver 是否已赋值
                     * 
                     */
                    bool DriverHasBeenSet() const;

                private:

                    /**
                     * <p>挂载类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>宿主机路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>容器内路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>挂载模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>是否可读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rW;
                    bool m_rWHasBeenSet;

                    /**
                     * <p>传播方式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propagation;
                    bool m_propagationHasBeenSet;

                    /**
                     * <p>挂载名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>驱动名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_driver;
                    bool m_driverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERMOUNTITEM_H_
