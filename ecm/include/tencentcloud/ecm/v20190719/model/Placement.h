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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PLACEMENT_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PLACEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取围笼Id。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CageId 围笼Id。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置围笼Id。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cageId 围笼Id。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
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
                     * 获取实例所属项目ID。该参数可以通过调用 [DescribeProject](/document/api/378/4400) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     * @return ProjectId 实例所属项目ID。该参数可以通过调用 [DescribeProject](/document/api/378/4400) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目ID。该参数可以通过调用 [DescribeProject](/document/api/378/4400) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     * @param _projectId 实例所属项目ID。该参数可以通过调用 [DescribeProject](/document/api/378/4400) 的返回值中的 projectId 字段来获取。不填为默认项目。
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
                     * 获取实例所属的独享集群ID。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcId 实例所属的独享集群ID。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置实例所属的独享集群ID。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcId 实例所属的独享集群ID。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
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

                private:

                    /**
                     * 云硬盘所属的[可用区](/document/product/213/15753#ZoneInfo)。该参数也可以通过调用  [DescribeZones](/document/product/213/15707) 的返回值中的Zone字段来获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 围笼Id。作为入参时，表示对指定的CageId的资源进行操作，可为空。 作为出参时，表示资源所属围笼ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * 实例所属项目ID。该参数可以通过调用 [DescribeProject](/document/api/378/4400) 的返回值中的 projectId 字段来获取。不填为默认项目。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 独享集群名字。作为入参时，忽略。作为出参时，表示云硬盘所属的独享集群名，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcName;
                    bool m_cdcNameHasBeenSet;

                    /**
                     * 实例所属的独享集群ID。作为入参时，表示对指定的CdcId独享集群的资源进行操作，可为空。 作为出参时，表示资源所属的独享集群的ID，可为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PLACEMENT_H_
