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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DiskSpecInfo.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/ServiceDeploy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 资源详情
                */
                class NodeResourceSpec : public AbstractModel
                {
                public:
                    NodeResourceSpec();
                    ~NodeResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规格类型，如S2.MEDIUM8</p>
                     * @return InstanceType <p>规格类型，如S2.MEDIUM8</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>规格类型，如S2.MEDIUM8</p>
                     * @param _instanceType <p>规格类型，如S2.MEDIUM8</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>系统盘，系统盘个数不超过1块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDisk <p>系统盘，系统盘个数不超过1块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskSpecInfo> GetSystemDisk() const;

                    /**
                     * 设置<p>系统盘，系统盘个数不超过1块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDisk <p>系统盘，系统盘个数不超过1块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSystemDisk(const std::vector<DiskSpecInfo>& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>云数据盘，云数据盘总个数不超过15块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisk <p>云数据盘，云数据盘总个数不超过15块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskSpecInfo> GetDataDisk() const;

                    /**
                     * 设置<p>云数据盘，云数据盘总个数不超过15块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisk <p>云数据盘，云数据盘总个数不超过15块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDisk(const std::vector<DiskSpecInfo>& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取<p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDataDisk <p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskSpecInfo> GetLocalDataDisk() const;

                    /**
                     * 设置<p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDataDisk <p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalDataDisk(const std::vector<DiskSpecInfo>& _localDataDisk);

                    /**
                     * 判断参数 LocalDataDisk 是否已赋值
                     * @return LocalDataDisk 是否已赋值
                     * 
                     */
                    bool LocalDataDiskHasBeenSet() const;

                    /**
                     * 获取<p>节点配置信息，目前仅提供给terraform平台校验参数使用</p>
                     * @return SoftwareConfig <p>节点配置信息，目前仅提供给terraform平台校验参数使用</p>
                     * 
                     */
                    std::vector<ServiceDeploy> GetSoftwareConfig() const;

                    /**
                     * 设置<p>节点配置信息，目前仅提供给terraform平台校验参数使用</p>
                     * @param _softwareConfig <p>节点配置信息，目前仅提供给terraform平台校验参数使用</p>
                     * 
                     */
                    void SetSoftwareConfig(const std::vector<ServiceDeploy>& _softwareConfig);

                    /**
                     * 判断参数 SoftwareConfig 是否已赋值
                     * @return SoftwareConfig 是否已赋值
                     * 
                     */
                    bool SoftwareConfigHasBeenSet() const;

                private:

                    /**
                     * <p>规格类型，如S2.MEDIUM8</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>系统盘，系统盘个数不超过1块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskSpecInfo> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>需要绑定的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>云数据盘，云数据盘总个数不超过15块</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskSpecInfo> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * <p>本地数据盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskSpecInfo> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                    /**
                     * <p>节点配置信息，目前仅提供给terraform平台校验参数使用</p>
                     */
                    std::vector<ServiceDeploy> m_softwareConfig;
                    bool m_softwareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_
