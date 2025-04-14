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
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


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
                     * 获取镜像名称。
最多支持60个字符。
                     * @return ImageName 镜像名称。
最多支持60个字符。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称。
最多支持60个字符。
                     * @param _imageName 镜像名称。
最多支持60个字符。
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @return InstanceId 需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @param _instanceId 需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取镜像描述。
最多支持 256 个字符。
                     * @return ImageDescription 镜像描述。
最多支持 256 个字符。
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述。
最多支持 256 个字符。
                     * @param _imageDescription 镜像描述。
最多支持 256 个字符。
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取是否执行强制关机以制作镜像。
取值范围：<br><li>true：表示关机之后制作镜像</li><br><li>false：表示开机状态制作镜像</li><br><br>默认取值：false。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     * @return ForcePoweroff 是否执行强制关机以制作镜像。
取值范围：<br><li>true：表示关机之后制作镜像</li><br><li>false：表示开机状态制作镜像</li><br><br>默认取值：false。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     * 
                     */
                    std::string GetForcePoweroff() const;

                    /**
                     * 设置是否执行强制关机以制作镜像。
取值范围：<br><li>true：表示关机之后制作镜像</li><br><li>false：表示开机状态制作镜像</li><br><br>默认取值：false。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     * @param _forcePoweroff 是否执行强制关机以制作镜像。
取值范围：<br><li>true：表示关机之后制作镜像</li><br><li>false：表示开机状态制作镜像</li><br><br>默认取值：false。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     * 
                     */
                    void SetForcePoweroff(const std::string& _forcePoweroff);

                    /**
                     * 判断参数 ForcePoweroff 是否已赋值
                     * @return ForcePoweroff 是否已赋值
                     * 
                     */
                    bool ForcePoweroffHasBeenSet() const;

                    /**
                     * 获取创建Windows镜像时是否启用Sysprep。
取值范围：true或false，传true表示启用Sysprep，传false表示不启用，默认取值为false。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     * @return Sysprep 创建Windows镜像时是否启用Sysprep。
取值范围：true或false，传true表示启用Sysprep，传false表示不启用，默认取值为false。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     * 
                     */
                    std::string GetSysprep() const;

                    /**
                     * 设置创建Windows镜像时是否启用Sysprep。
取值范围：true或false，传true表示启用Sysprep，传false表示不启用，默认取值为false。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     * @param _sysprep 创建Windows镜像时是否启用Sysprep。
取值范围：true或false，传true表示启用Sysprep，传false表示不启用，默认取值为false。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     * 
                     */
                    void SetSysprep(const std::string& _sysprep);

                    /**
                     * 判断参数 Sysprep 是否已赋值
                     * @return Sysprep 是否已赋值
                     * 
                     */
                    bool SysprepHasBeenSet() const;

                    /**
                     * 获取基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。
DataDiskIds 只能在指定 InstanceId 实例所包含的数据盘范围内指定。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的 `DataDisks` 获取。
                     * @return DataDiskIds 基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。
DataDiskIds 只能在指定 InstanceId 实例所包含的数据盘范围内指定。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的 `DataDisks` 获取。
                     * 
                     */
                    std::vector<std::string> GetDataDiskIds() const;

                    /**
                     * 设置基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。
DataDiskIds 只能在指定 InstanceId 实例所包含的数据盘范围内指定。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的 `DataDisks` 获取。
                     * @param _dataDiskIds 基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。
DataDiskIds 只能在指定 InstanceId 实例所包含的数据盘范围内指定。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的 `DataDisks` 获取。
                     * 
                     */
                    void SetDataDiskIds(const std::vector<std::string>& _dataDiskIds);

                    /**
                     * 判断参数 DataDiskIds 是否已赋值
                     * @return DataDiskIds 是否已赋值
                     * 
                     */
                    bool DataDiskIdsHasBeenSet() const;

                    /**
                     * 获取基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与 InstanceId 同时传入。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeSnapshots](https://cloud.tencent.com/document/product/362/15647) 接口返回值中的`SnapshotId`获取。
                     * @return SnapshotIds 基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与 InstanceId 同时传入。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeSnapshots](https://cloud.tencent.com/document/product/362/15647) 接口返回值中的`SnapshotId`获取。
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与 InstanceId 同时传入。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeSnapshots](https://cloud.tencent.com/document/product/362/15647) 接口返回值中的`SnapshotId`获取。
                     * @param _snapshotIds 基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与 InstanceId 同时传入。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeSnapshots](https://cloud.tencent.com/document/product/362/15647) 接口返回值中的`SnapshotId`获取。
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取检测本次请求的是否成功，但不会对操作的资源产生任何影响。默认取值为false。
                     * @return DryRun 检测本次请求的是否成功，但不会对操作的资源产生任何影响。默认取值为false。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置检测本次请求的是否成功，但不会对操作的资源产生任何影响。默认取值为false。
                     * @param _dryRun 检测本次请求的是否成功，但不会对操作的资源产生任何影响。默认取值为false。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
可通过 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 接口返回值中的 `TagKey` 和 `TagValue` 获取。
                     * @return TagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
可通过 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 接口返回值中的 `TagKey` 和 `TagValue` 获取。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
可通过 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 接口返回值中的 `TagKey` 和 `TagValue` 获取。
                     * @param _tagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
可通过 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 接口返回值中的 `TagKey` 和 `TagValue` 获取。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取镜像族
                     * @return ImageFamily 镜像族
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置镜像族
                     * @param _imageFamily 镜像族
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                private:

                    /**
                     * 镜像名称。
最多支持60个字符。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 需要制作镜像的实例ID。基于实例创建镜像时，为必填参数。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 镜像描述。
最多支持 256 个字符。
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 是否执行强制关机以制作镜像。
取值范围：<br><li>true：表示关机之后制作镜像</li><br><li>false：表示开机状态制作镜像</li><br><br>默认取值：false。<br><br>开机状态制作镜像，可能导致部分数据未备份，影响数据安全。
                     */
                    std::string m_forcePoweroff;
                    bool m_forcePoweroffHasBeenSet;

                    /**
                     * 创建Windows镜像时是否启用Sysprep。
取值范围：true或false，传true表示启用Sysprep，传false表示不启用，默认取值为false。

关于Sysprep的详情请参考[链接](https://cloud.tencent.com/document/product/213/43498)。
                     */
                    std::string m_sysprep;
                    bool m_sysprepHasBeenSet;

                    /**
                     * 基于实例创建整机镜像时，指定包含在镜像里的数据盘ID。
DataDiskIds 只能在指定 InstanceId 实例所包含的数据盘范围内指定。
可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的 `DataDisks` 获取。
                     */
                    std::vector<std::string> m_dataDiskIds;
                    bool m_dataDiskIdsHasBeenSet;

                    /**
                     * 基于快照创建镜像，指定快照ID，必须包含一个系统盘快照。不可与 InstanceId 同时传入。
InstanceId 和 SnapshotIds 为二选一必填参数。
可通过 [DescribeSnapshots](https://cloud.tencent.com/document/product/362/15647) 接口返回值中的`SnapshotId`获取。
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * 检测本次请求的是否成功，但不会对操作的资源产生任何影响。默认取值为false。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
可通过 [DescribeTags](https://cloud.tencent.com/document/api/651/35316) 接口返回值中的 `TagKey` 和 `TagValue` 获取。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 镜像族
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEIMAGEREQUEST_H_
