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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUME_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 缓存卷。
                */
                class Volume : public AbstractModel
                {
                public:
                    Volume();
                    ~Volume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存卷ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeId 缓存卷ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVolumeId() const;

                    /**
                     * 设置缓存卷ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeId 缓存卷ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeId(const std::string& _volumeId);

                    /**
                     * 判断参数 VolumeId 是否已赋值
                     * @return VolumeId 是否已赋值
                     * 
                     */
                    bool VolumeIdHasBeenSet() const;

                    /**
                     * 获取名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称。
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
                     * 获取描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取环境ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentId 环境ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentId 环境ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
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
                     * 获取缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spec 缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取缓存卷大小（GB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Capacity 缓存卷大小（GB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置缓存卷大小（GB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _capacity 缓存卷大小（GB）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取缓存卷使用量（Byte）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Usage 缓存卷使用量（Byte）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsage() const;

                    /**
                     * 设置缓存卷使用量（Byte）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usage 缓存卷使用量（Byte）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsage(const uint64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取缓存卷吞吐上限（MiB/s）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthLimit 缓存卷吞吐上限（MiB/s）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetBandwidthLimit() const;

                    /**
                     * 设置缓存卷吞吐上限（MiB/s）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthLimit 缓存卷吞吐上限（MiB/s）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidthLimit(const double& _bandwidthLimit);

                    /**
                     * 判断参数 BandwidthLimit 是否已赋值
                     * @return BandwidthLimit 是否已赋值
                     * 
                     */
                    bool BandwidthLimitHasBeenSet() const;

                    /**
                     * 获取默认挂载路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultMountPath 默认挂载路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultMountPath() const;

                    /**
                     * 设置默认挂载路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultMountPath 默认挂载路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultMountPath(const std::string& _defaultMountPath);

                    /**
                     * 判断参数 DefaultMountPath 是否已赋值
                     * @return DefaultMountPath 是否已赋值
                     * 
                     */
                    bool DefaultMountPathHasBeenSet() const;

                    /**
                     * 获取是否为默认缓存卷。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault 是否为默认缓存卷。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否为默认缓存卷。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDefault 是否为默认缓存卷。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 缓存卷ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_volumeId;
                    bool m_volumeIdHasBeenSet;

                    /**
                     * 名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 环境ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 缓存卷类型，取值范围：
* SHARED：多点挂载共享存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 缓存卷规格，取值范围：

- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 缓存卷大小（GB）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * 缓存卷使用量（Byte）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 缓存卷吞吐上限（MiB/s）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_bandwidthLimit;
                    bool m_bandwidthLimitHasBeenSet;

                    /**
                     * 默认挂载路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultMountPath;
                    bool m_defaultMountPathHasBeenSet;

                    /**
                     * 是否为默认缓存卷。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUME_H_
