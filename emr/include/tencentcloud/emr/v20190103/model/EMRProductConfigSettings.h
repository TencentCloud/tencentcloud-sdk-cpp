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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGSETTINGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpec.h>
#include <tencentcloud/emr/v20190103/model/COSSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群的config信息
                */
                class EMRProductConfigSettings : public AbstractModel
                {
                public:
                    EMRProductConfigSettings();
                    ~EMRProductConfigSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftInfo 集群软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSoftInfo() const;

                    /**
                     * 设置集群软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SoftInfo 集群软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSoftInfo(const std::vector<std::string>& _softInfo);

                    /**
                     * 判断参数 SoftInfo 是否已赋值
                     * @return SoftInfo 是否已赋值
                     */
                    bool SoftInfoHasBeenSet() const;

                    /**
                     * 获取master节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterNodeSize master节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMasterNodeSize() const;

                    /**
                     * 设置master节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MasterNodeSize master节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMasterNodeSize(const uint64_t& _masterNodeSize);

                    /**
                     * 判断参数 MasterNodeSize 是否已赋值
                     * @return MasterNodeSize 是否已赋值
                     */
                    bool MasterNodeSizeHasBeenSet() const;

                    /**
                     * 获取core节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoreNodeSize core节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCoreNodeSize() const;

                    /**
                     * 设置core节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CoreNodeSize core节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCoreNodeSize(const uint64_t& _coreNodeSize);

                    /**
                     * 判断参数 CoreNodeSize 是否已赋值
                     * @return CoreNodeSize 是否已赋值
                     */
                    bool CoreNodeSizeHasBeenSet() const;

                    /**
                     * 获取task节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskNodeSize task节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTaskNodeSize() const;

                    /**
                     * 设置task节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskNodeSize task节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskNodeSize(const uint64_t& _taskNodeSize);

                    /**
                     * 判断参数 TaskNodeSize 是否已赋值
                     * @return TaskNodeSize 是否已赋值
                     */
                    bool TaskNodeSizeHasBeenSet() const;

                    /**
                     * 获取common节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComNodeSize common节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetComNodeSize() const;

                    /**
                     * 设置common节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ComNodeSize common节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComNodeSize(const uint64_t& _comNodeSize);

                    /**
                     * 判断参数 ComNodeSize 是否已赋值
                     * @return ComNodeSize 是否已赋值
                     */
                    bool ComNodeSizeHasBeenSet() const;

                    /**
                     * 获取master规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterResourceSpec master规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec GetMasterResourceSpec() const;

                    /**
                     * 设置master规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MasterResourceSpec master规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMasterResourceSpec(const NodeSpec& _masterResourceSpec);

                    /**
                     * 判断参数 MasterResourceSpec 是否已赋值
                     * @return MasterResourceSpec 是否已赋值
                     */
                    bool MasterResourceSpecHasBeenSet() const;

                    /**
                     * 获取core规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoreResourceSpec core规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec GetCoreResourceSpec() const;

                    /**
                     * 设置core规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CoreResourceSpec core规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCoreResourceSpec(const NodeSpec& _coreResourceSpec);

                    /**
                     * 判断参数 CoreResourceSpec 是否已赋值
                     * @return CoreResourceSpec 是否已赋值
                     */
                    bool CoreResourceSpecHasBeenSet() const;

                    /**
                     * 获取task规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskResourceSpec task规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec GetTaskResourceSpec() const;

                    /**
                     * 设置task规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskResourceSpec task规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskResourceSpec(const NodeSpec& _taskResourceSpec);

                    /**
                     * 判断参数 TaskResourceSpec 是否已赋值
                     * @return TaskResourceSpec 是否已赋值
                     */
                    bool TaskResourceSpecHasBeenSet() const;

                    /**
                     * 获取common规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommonResourceSpec common规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec GetCommonResourceSpec() const;

                    /**
                     * 设置common规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CommonResourceSpec common规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCommonResourceSpec(const NodeSpec& _commonResourceSpec);

                    /**
                     * 判断参数 CommonResourceSpec 是否已赋值
                     * @return CommonResourceSpec 是否已赋值
                     */
                    bool CommonResourceSpecHasBeenSet() const;

                    /**
                     * 获取是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Oncos 是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetOncos() const;

                    /**
                     * 设置是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Oncos 是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOncos(const bool& _oncos);

                    /**
                     * 判断参数 Oncos 是否已赋值
                     * @return Oncos 是否已赋值
                     */
                    bool OncosHasBeenSet() const;

                    /**
                     * 获取COS配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSSettings COS配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    COSSettings GetCOSSettings() const;

                    /**
                     * 设置COS配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param COSSettings COS配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCOSSettings(const COSSettings& _cOSSettings);

                    /**
                     * 判断参数 COSSettings 是否已赋值
                     * @return COSSettings 是否已赋值
                     */
                    bool COSSettingsHasBeenSet() const;

                private:

                    /**
                     * 集群软件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_softInfo;
                    bool m_softInfoHasBeenSet;

                    /**
                     * master节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_masterNodeSize;
                    bool m_masterNodeSizeHasBeenSet;

                    /**
                     * core节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coreNodeSize;
                    bool m_coreNodeSizeHasBeenSet;

                    /**
                     * task节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskNodeSize;
                    bool m_taskNodeSizeHasBeenSet;

                    /**
                     * common节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_comNodeSize;
                    bool m_comNodeSizeHasBeenSet;

                    /**
                     * master规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec m_masterResourceSpec;
                    bool m_masterResourceSpecHasBeenSet;

                    /**
                     * core规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec m_coreResourceSpec;
                    bool m_coreResourceSpecHasBeenSet;

                    /**
                     * task规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec m_taskResourceSpec;
                    bool m_taskResourceSpecHasBeenSet;

                    /**
                     * common规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSpec m_commonResourceSpec;
                    bool m_commonResourceSpecHasBeenSet;

                    /**
                     * 是否使用COS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_oncos;
                    bool m_oncosHasBeenSet;

                    /**
                     * COS配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    COSSettings m_cOSSettings;
                    bool m_cOSSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EMRPRODUCTCONFIGSETTINGS_H_
