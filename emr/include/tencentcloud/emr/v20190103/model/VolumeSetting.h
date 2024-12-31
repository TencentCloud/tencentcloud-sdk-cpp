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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMESETTING_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/HostPathVolumeSource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 数据卷目录设置
                */
                class VolumeSetting : public AbstractModel
                {
                public:
                    VolumeSetting();
                    ~VolumeSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据卷类型
<li>HOST_PATH表示支持本机路径</li>
<li>NEW_PVC表示新建PVC</li>
组件角色支持的数据卷类型可参考 EMR on TKE 集群部署说明：[部署说明](https://cloud.tencent.com/document/product/589/94254)
                     * @return VolumeType 数据卷类型
<li>HOST_PATH表示支持本机路径</li>
<li>NEW_PVC表示新建PVC</li>
组件角色支持的数据卷类型可参考 EMR on TKE 集群部署说明：[部署说明](https://cloud.tencent.com/document/product/589/94254)
                     * 
                     */
                    std::string GetVolumeType() const;

                    /**
                     * 设置数据卷类型
<li>HOST_PATH表示支持本机路径</li>
<li>NEW_PVC表示新建PVC</li>
组件角色支持的数据卷类型可参考 EMR on TKE 集群部署说明：[部署说明](https://cloud.tencent.com/document/product/589/94254)
                     * @param _volumeType 数据卷类型
<li>HOST_PATH表示支持本机路径</li>
<li>NEW_PVC表示新建PVC</li>
组件角色支持的数据卷类型可参考 EMR on TKE 集群部署说明：[部署说明](https://cloud.tencent.com/document/product/589/94254)
                     * 
                     */
                    void SetVolumeType(const std::string& _volumeType);

                    /**
                     * 判断参数 VolumeType 是否已赋值
                     * @return VolumeType 是否已赋值
                     * 
                     */
                    bool VolumeTypeHasBeenSet() const;

                    /**
                     * 获取主机路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostPath 主机路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostPathVolumeSource GetHostPath() const;

                    /**
                     * 设置主机路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostPath 主机路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostPath(const HostPathVolumeSource& _hostPath);

                    /**
                     * 判断参数 HostPath 是否已赋值
                     * @return HostPath 是否已赋值
                     * 
                     */
                    bool HostPathHasBeenSet() const;

                private:

                    /**
                     * 数据卷类型
<li>HOST_PATH表示支持本机路径</li>
<li>NEW_PVC表示新建PVC</li>
组件角色支持的数据卷类型可参考 EMR on TKE 集群部署说明：[部署说明](https://cloud.tencent.com/document/product/589/94254)
                     */
                    std::string m_volumeType;
                    bool m_volumeTypeHasBeenSet;

                    /**
                     * 主机路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostPathVolumeSource m_hostPath;
                    bool m_hostPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_VOLUMESETTING_H_
