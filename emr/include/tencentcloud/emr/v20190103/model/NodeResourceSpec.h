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
                     * 获取规格类型，如S2.MEDIUM8
                     * @return InstanceType 规格类型，如S2.MEDIUM8
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置规格类型，如S2.MEDIUM8
                     * @param _instanceType 规格类型，如S2.MEDIUM8
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
                     * 获取系统盘，系统盘个数不超过1块
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemDisk 系统盘，系统盘个数不超过1块
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskSpecInfo> GetSystemDisk() const;

                    /**
                     * 设置系统盘，系统盘个数不超过1块
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _systemDisk 系统盘，系统盘个数不超过1块
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
                     * 获取需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 需要绑定的标签列表
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
                     * 获取云数据盘，云数据盘总个数不超过15块
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDisk 云数据盘，云数据盘总个数不超过15块
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskSpecInfo> GetDataDisk() const;

                    /**
                     * 设置云数据盘，云数据盘总个数不超过15块
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDisk 云数据盘，云数据盘总个数不超过15块
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
                     * 获取本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDataDisk 本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiskSpecInfo> GetLocalDataDisk() const;

                    /**
                     * 设置本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDataDisk 本地数据盘
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

                private:

                    /**
                     * 规格类型，如S2.MEDIUM8
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 系统盘，系统盘个数不超过1块
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskSpecInfo> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 需要绑定的标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 云数据盘，云数据盘总个数不超过15块
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskSpecInfo> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * 本地数据盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiskSpecInfo> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_
