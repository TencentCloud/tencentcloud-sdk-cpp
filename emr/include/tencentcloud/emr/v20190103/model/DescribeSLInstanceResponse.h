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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeSLInstance返回参数结构体
                */
                class DescribeSLInstanceResponse : public AbstractModel
                {
                public:
                    DescribeSLInstanceResponse();
                    ~DescribeSLInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例计费模式。0表示后付费，即按量计费，1表示预付费，即包年包月。
                     * @return PayMode 实例计费模式。0表示后付费，即按量计费，1表示预付费，即包年包月。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例存储类型。
                     * @return DiskType 实例存储类型。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取实例单节点磁盘容量，单位GB。
                     * @return DiskSize 实例单节点磁盘容量，单位GB。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取实例节点规格。
                     * @return NodeType 实例节点规格。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取实例可用区详细配置，包含可用区名称，VPC信息、节点数量。
                     * @return ZoneSettings 实例可用区详细配置，包含可用区名称，VPC信息、节点数量。
                     * 
                     */
                    std::vector<ZoneSetting> GetZoneSettings() const;

                    /**
                     * 判断参数 ZoneSettings 是否已赋值
                     * @return ZoneSettings 是否已赋值
                     * 
                     */
                    bool ZoneSettingsHasBeenSet() const;

                    /**
                     * 获取实例绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 实例绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式。0表示后付费，即按量计费，1表示预付费，即包年包月。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例存储类型。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 实例单节点磁盘容量，单位GB。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 实例节点规格。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 实例可用区详细配置，包含可用区名称，VPC信息、节点数量。
                     */
                    std::vector<ZoneSetting> m_zoneSettings;
                    bool m_zoneSettingsHasBeenSet;

                    /**
                     * 实例绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESLINSTANCERESPONSE_H_
