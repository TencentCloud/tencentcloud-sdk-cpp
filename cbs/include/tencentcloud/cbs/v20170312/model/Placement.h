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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_PLACEMENT_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_PLACEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了实例的抽象位置，包括其所在的可用区，所属的项目，以及所属的独享集群的ID和名字。
                */
                class Placement : public AbstractModel
                {
                public:
                    Placement();
                    ~Placement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。该参数也可以通过调用  [DescribeZones](/document/product/213/15707) 的返回值中的Zone字段来获取。
                     * @return Zone 云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。该参数也可以通过调用  [DescribeZones](/document/product/213/15707) 的返回值中的Zone字段来获取。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。该参数也可以通过调用  [DescribeZones](/document/product/213/15707) 的返回值中的Zone字段来获取。
                     * @param _zone 云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。该参数也可以通过调用  [DescribeZones](/document/product/213/15707) 的返回值中的Zone字段来获取。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取围笼Id，可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CageId 围笼Id，可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置围笼Id，可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cageId 围笼Id，可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取实例所属项目ID，可通过[DescribeProject](/document/api/651/78725)获取。不填默认为0，表示默认项目。
                     * @return ProjectId 实例所属项目ID，可通过[DescribeProject](/document/api/651/78725)获取。不填默认为0，表示默认项目。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目ID，可通过[DescribeProject](/document/api/651/78725)获取。不填默认为0，表示默认项目。
                     * @param _projectId 实例所属项目ID，可通过[DescribeProject](/document/api/651/78725)获取。不填默认为0，表示默认项目。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例所属项目名称，可通过[DescribeProject](/document/api/651/78725)获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 实例所属项目名称，可通过[DescribeProject](/document/api/651/78725)获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置实例所属项目名称，可通过[DescribeProject](/document/api/651/78725)获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 实例所属项目名称，可通过[DescribeProject](/document/api/651/78725)获取。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取独享集群名字。作为入参时，忽略。作为出参时，表示云硬盘所属的独享集群名，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcName 独享集群名字。作为入参时，忽略。作为出参时，表示云硬盘所属的独享集群名，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcName() const;

                    /**
                     * 设置独享集群名字。作为入参时，忽略。作为出参时，表示云硬盘所属的独享集群名，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcName 独享集群名字。作为入参时，忽略。作为出参时，表示云硬盘所属的独享集群名，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdcName(const std::string& _cdcName);

                    /**
                     * 判断参数 CdcName 是否已赋值
                     * @return CdcName 是否已赋值
                     * 
                     */
                    bool CdcNameHasBeenSet() const;

                    /**
                     * 获取实例所属的独享集群ID。可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcId 实例所属的独享集群ID。可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置实例所属的独享集群ID。可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcId 实例所属的独享集群ID。可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取独享集群id。
                     * @return DedicatedClusterId 独享集群id。
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置独享集群id。
                     * @param _dedicatedClusterId 独享集群id。
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * 云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。该参数也可以通过调用  [DescribeZones](/document/product/213/15707) 的返回值中的Zone字段来获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 围笼Id，可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * 实例所属项目ID，可通过[DescribeProject](/document/api/651/78725)获取。不填默认为0，表示默认项目。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例所属项目名称，可通过[DescribeProject](/document/api/651/78725)获取。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 独享集群名字。作为入参时，忽略。作为出参时，表示云硬盘所属的独享集群名，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcName;
                    bool m_cdcNameHasBeenSet;

                    /**
                     * 实例所属的独享集群ID。可通过 [DescribeDiskStoragePool](https://cloud.tencent.com/document/api/362/62143) 获取。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * 独享集群id。
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_PLACEMENT_H_
