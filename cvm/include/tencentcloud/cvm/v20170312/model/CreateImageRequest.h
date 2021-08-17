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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEIMAGEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateImage请求参数结构体
                */
                class CreateImageRequest : public AbstractModel
                {
                public:
                    CreateImageRequest();
                    ~CreateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param ImageName 镜像名称
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
                     * @return InstanceId 需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
                     * @param InstanceId 需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取镜像描述
                     * @return ImageDescription 镜像描述
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述
                     * @param ImageDescription 镜像描述
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取是否执行强制关机以制作镜像。
取值范围：<br><li>TRUE：表示关机之后制作镜像<br><li>FALSE：表示开机状态制作镜像<br><br>默认取值：FALSE。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     * @return ForcePoweroff 是否执行强制关机以制作镜像。
取值范围：<br><li>TRUE：表示关机之后制作镜像<br><li>FALSE：表示开机状态制作镜像<br><br>默认取值：FALSE。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     */
                    std::string GetForcePoweroff() const;

                    /**
                     * 设置是否执行强制关机以制作镜像。
取值范围：<br><li>TRUE：表示关机之后制作镜像<br><li>FALSE：表示开机状态制作镜像<br><br>默认取值：FALSE。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     * @param ForcePoweroff 是否执行强制关机以制作镜像。
取值范围：<br><li>TRUE：表示关机之后制作镜像<br><li>FALSE：表示开机状态制作镜像<br><br>默认取值：FALSE。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     */
                    void SetForcePoweroff(const std::string& _forcePoweroff);

                    /**
                     * 判断参数 ForcePoweroff 是否已赋值
                     * @return ForcePoweroff 是否已赋值
                     */
                    bool ForcePoweroffHasBeenSet() const;

                    /**
                     * 获取创建Windows镜像时是否启用Sysprep。
取值范围：TRUE或FALSE，默认取值为FALSE。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     * @return Sysprep 创建Windows镜像时是否启用Sysprep。
取值范围：TRUE或FALSE，默认取值为FALSE。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     */
                    std::string GetSysprep() const;

                    /**
                     * 设置创建Windows镜像时是否启用Sysprep。
取值范围：TRUE或FALSE，默认取值为FALSE。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     * @param Sysprep 创建Windows镜像时是否启用Sysprep。
取值范围：TRUE或FALSE，默认取值为FALSE。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     */
                    void SetSysprep(const std::string& _sysprep);

                    /**
                     * 判断参数 Sysprep 是否已赋值
                     * @return Sysprep 是否已赋值
                     */
                    bool SysprepHasBeenSet() const;

                    /**
                     * 获取基于实例创建整机镜像时，指定包含在镜像里的数据盘Id
                     * @return DataDiskIds 基于实例创建整机镜像时，指定包含在镜像里的数据盘Id
                     */
                    std::vector<std::string> GetDataDiskIds() const;

                    /**
                     * 设置基于实例创建整机镜像时，指定包含在镜像里的数据盘Id
                     * @param DataDiskIds 基于实例创建整机镜像时，指定包含在镜像里的数据盘Id
                     */
                    void SetDataDiskIds(const std::vector<std::string>& _dataDiskIds);

                    /**
                     * 判断参数 DataDiskIds 是否已赋值
                     * @return DataDiskIds 是否已赋值
                     */
                    bool DataDiskIdsHasBeenSet() const;

                    /**
                     * 获取基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与InstanceId同时传入。
                     * @return SnapshotIds 基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与InstanceId同时传入。
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与InstanceId同时传入。
                     * @param SnapshotIds 基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与InstanceId同时传入。
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取检测本次请求的是否成功，但不会对操作的资源产生任何影响
                     * @return DryRun 检测本次请求的是否成功，但不会对操作的资源产生任何影响
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置检测本次请求的是否成功，但不会对操作的资源产生任何影响
                     * @param DryRun 检测本次请求的是否成功，但不会对操作的资源产生任何影响
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像描述
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 是否执行强制关机以制作镜像。
取值范围：<br><li>TRUE：表示关机之后制作镜像<br><li>FALSE：表示开机状态制作镜像<br><br>默认取值：FALSE。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     */
                    std::string m_forcePoweroff;
                    bool m_forcePoweroffHasBeenSet;

                    /**
                     * 创建Windows镜像时是否启用Sysprep。
取值范围：TRUE或FALSE，默认取值为FALSE。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     */
                    std::string m_sysprep;
                    bool m_sysprepHasBeenSet;

                    /**
                     * 基于实例创建整机镜像时，指定包含在镜像里的数据盘Id
                     */
                    std::vector<std::string> m_dataDiskIds;
                    bool m_dataDiskIdsHasBeenSet;

                    /**
                     * 基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与InstanceId同时传入。
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * 检测本次请求的是否成功，但不会对操作的资源产生任何影响
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEIMAGEREQUEST_H_
