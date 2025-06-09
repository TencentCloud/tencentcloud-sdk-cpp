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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>
#include <tencentcloud/cbs/v20170312/model/Tag.h>
#include <tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h>
#include <tencentcloud/cbs/v20170312/model/AutoMountConfiguration.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDisks请求参数结构体
                */
                class CreateDisksRequest : public AbstractModel
                {
                public:
                    CreateDisksRequest();
                    ~CreateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取云硬盘计费类型。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDCPAID：独享集群付费<br>各类型价格请参考云硬盘[价格总览](/document/product/362/2413)。</li>
                     * @return DiskChargeType 云硬盘计费类型。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDCPAID：独享集群付费<br>各类型价格请参考云硬盘[价格总览](/document/product/362/2413)。</li>
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置云硬盘计费类型。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDCPAID：独享集群付费<br>各类型价格请参考云硬盘[价格总览](/document/product/362/2413)。</li>
                     * @param _diskChargeType 云硬盘计费类型。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDCPAID：独享集群付费<br>各类型价格请参考云硬盘[价格总览](/document/product/362/2413)。</li>
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取硬盘介质类型。取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘</li><br><li>CLOUD_BSSD：表示通用型SSD云硬盘</li><br><li>CLOUD_SSD：表示SSD云硬盘</li><br><li>CLOUD_HSSD：表示增强型SSD云硬盘</li><br><li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>极速型SSD云硬盘（CLOUD_TSSD）仅支持随部分实例类型一同购买，暂不支持单独创建。
                     * @return DiskType 硬盘介质类型。取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘</li><br><li>CLOUD_BSSD：表示通用型SSD云硬盘</li><br><li>CLOUD_SSD：表示SSD云硬盘</li><br><li>CLOUD_HSSD：表示增强型SSD云硬盘</li><br><li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>极速型SSD云硬盘（CLOUD_TSSD）仅支持随部分实例类型一同购买，暂不支持单独创建。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘介质类型。取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘</li><br><li>CLOUD_BSSD：表示通用型SSD云硬盘</li><br><li>CLOUD_SSD：表示SSD云硬盘</li><br><li>CLOUD_HSSD：表示增强型SSD云硬盘</li><br><li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>极速型SSD云硬盘（CLOUD_TSSD）仅支持随部分实例类型一同购买，暂不支持单独创建。
                     * @param _diskType 硬盘介质类型。取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘</li><br><li>CLOUD_BSSD：表示通用型SSD云硬盘</li><br><li>CLOUD_SSD：表示SSD云硬盘</li><br><li>CLOUD_HSSD：表示增强型SSD云硬盘</li><br><li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>极速型SSD云硬盘（CLOUD_TSSD）仅支持随部分实例类型一同购买，暂不支持单独创建。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取云盘显示名称。不传则默认为“未命名”。最大长度不能超60个字节。
                     * @return DiskName 云盘显示名称。不传则默认为“未命名”。最大长度不能超60个字节。
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置云盘显示名称。不传则默认为“未命名”。最大长度不能超60个字节。
                     * @param _diskName 云盘显示名称。不传则默认为“未命名”。最大长度不能超60个字节。
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取云盘绑定的标签。
                     * @return Tags 云盘绑定的标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置云盘绑定的标签。
                     * @param _tags 云盘绑定的标签。
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
                     * 获取快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照，可通过[DescribeSnapshots](/document/product/362/15647)接口查询快照，见输出参数DiskUsage解释。
                     * @return SnapshotId 快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照，可通过[DescribeSnapshots](/document/product/362/15647)接口查询快照，见输出参数DiskUsage解释。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照，可通过[DescribeSnapshots](/document/product/362/15647)接口查询快照，见输出参数DiskUsage解释。
                     * @param _snapshotId 快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照，可通过[DescribeSnapshots](/document/product/362/15647)接口查询快照，见输出参数DiskUsage解释。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取创建云硬盘数量，不传则默认为1。单次请求最多可创建的云盘数有限制，具体参见[云硬盘使用限制](https://cloud.tencent.com/doc/product/362/5145)。
                     * @return DiskCount 创建云硬盘数量，不传则默认为1。单次请求最多可创建的云盘数有限制，具体参见[云硬盘使用限制](https://cloud.tencent.com/doc/product/362/5145)。
                     * 
                     */
                    uint64_t GetDiskCount() const;

                    /**
                     * 设置创建云硬盘数量，不传则默认为1。单次请求最多可创建的云盘数有限制，具体参见[云硬盘使用限制](https://cloud.tencent.com/doc/product/362/5145)。
                     * @param _diskCount 创建云硬盘数量，不传则默认为1。单次请求最多可创建的云盘数有限制，具体参见[云硬盘使用限制](https://cloud.tencent.com/doc/product/362/5145)。
                     * 
                     */
                    void SetDiskCount(const uint64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取使用此参数可给云硬盘购买额外的性能，单位MB/s。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）。
                     * @return ThroughputPerformance 使用此参数可给云硬盘购买额外的性能，单位MB/s。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）。
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置使用此参数可给云硬盘购买额外的性能，单位MB/s。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）。
                     * @param _throughputPerformance 使用此参数可给云硬盘购买额外的性能，单位MB/s。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）。
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取购买加密盘时自定义密钥，当传入该参数时，Encrypt参数不得为空。
                     * @return KmsKeyId 购买加密盘时自定义密钥，当传入该参数时，Encrypt参数不得为空。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置购买加密盘时自定义密钥，当传入该参数时，Encrypt参数不得为空。
                     * @param _kmsKeyId 购买加密盘时自定义密钥，当传入该参数时，Encrypt参数不得为空。
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取云硬盘大小，单位为GiB。<br><li>如果传入`SnapshotId`则可不传`DiskSize`，此时新建云盘的大小为快照大小</li><br><li>如果传入`SnapshotId`同时传入`DiskSize`，则云盘大小必须大于或等于快照大小</li><br><li>云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。</li>
                     * @return DiskSize 云硬盘大小，单位为GiB。<br><li>如果传入`SnapshotId`则可不传`DiskSize`，此时新建云盘的大小为快照大小</li><br><li>如果传入`SnapshotId`同时传入`DiskSize`，则云盘大小必须大于或等于快照大小</li><br><li>云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。</li>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘大小，单位为GiB。<br><li>如果传入`SnapshotId`则可不传`DiskSize`，此时新建云盘的大小为快照大小</li><br><li>如果传入`SnapshotId`同时传入`DiskSize`，则云盘大小必须大于或等于快照大小</li><br><li>云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。</li>
                     * @param _diskSize 云硬盘大小，单位为GiB。<br><li>如果传入`SnapshotId`则可不传`DiskSize`，此时新建云盘的大小为快照大小</li><br><li>如果传入`SnapshotId`同时传入`DiskSize`，则云盘大小必须大于或等于快照大小</li><br><li>云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。</li>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取传入True时，云盘将创建为共享型云盘，默认为False。因共享型云盘不支持加密，此参数与Encrypt参数不可同时传入。
                     * @return Shareable 传入True时，云盘将创建为共享型云盘，默认为False。因共享型云盘不支持加密，此参数与Encrypt参数不可同时传入。
                     * 
                     */
                    bool GetShareable() const;

                    /**
                     * 设置传入True时，云盘将创建为共享型云盘，默认为False。因共享型云盘不支持加密，此参数与Encrypt参数不可同时传入。
                     * @param _shareable 传入True时，云盘将创建为共享型云盘，默认为False。因共享型云盘不支持加密，此参数与Encrypt参数不可同时传入。
                     * 
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     * 
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取传入该参数用于创建加密云盘，取值固定为ENCRYPT。因共享型云盘不支持加密，此参数与Shareable参数不可同时传入。
                     * @return Encrypt 传入该参数用于创建加密云盘，取值固定为ENCRYPT。因共享型云盘不支持加密，此参数与Shareable参数不可同时传入。
                     * 
                     */
                    std::string GetEncrypt() const;

                    /**
                     * 设置传入该参数用于创建加密云盘，取值固定为ENCRYPT。因共享型云盘不支持加密，此参数与Shareable参数不可同时传入。
                     * @param _encrypt 传入该参数用于创建加密云盘，取值固定为ENCRYPT。因共享型云盘不支持加密，此参数与Shareable参数不可同时传入。
                     * 
                     */
                    void SetEncrypt(const std::string& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     * @return DiskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     * 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     * @param _diskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     * 
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取销毁云盘时删除关联的非永久保留快照。0 表示非永久快照不随云盘销毁而销毁，1表示非永久快照随云盘销毁而销毁，默认取0。快照是否永久保留可以通过[DescribeSnapshots](/document/api/362/15647)接口返回的快照详情的IsPermanent字段来判断，True表示永久快照，False表示非永久快照。
                     * @return DeleteSnapshot 销毁云盘时删除关联的非永久保留快照。0 表示非永久快照不随云盘销毁而销毁，1表示非永久快照随云盘销毁而销毁，默认取0。快照是否永久保留可以通过[DescribeSnapshots](/document/api/362/15647)接口返回的快照详情的IsPermanent字段来判断，True表示永久快照，False表示非永久快照。
                     * 
                     */
                    int64_t GetDeleteSnapshot() const;

                    /**
                     * 设置销毁云盘时删除关联的非永久保留快照。0 表示非永久快照不随云盘销毁而销毁，1表示非永久快照随云盘销毁而销毁，默认取0。快照是否永久保留可以通过[DescribeSnapshots](/document/api/362/15647)接口返回的快照详情的IsPermanent字段来判断，True表示永久快照，False表示非永久快照。
                     * @param _deleteSnapshot 销毁云盘时删除关联的非永久保留快照。0 表示非永久快照不随云盘销毁而销毁，1表示非永久快照随云盘销毁而销毁，默认取0。快照是否永久保留可以通过[DescribeSnapshots](/document/api/362/15647)接口返回的快照详情的IsPermanent字段来判断，True表示永久快照，False表示非永久快照。
                     * 
                     */
                    void SetDeleteSnapshot(const int64_t& _deleteSnapshot);

                    /**
                     * 判断参数 DeleteSnapshot 是否已赋值
                     * @return DeleteSnapshot 是否已赋值
                     * 
                     */
                    bool DeleteSnapshotHasBeenSet() const;

                    /**
                     * 获取创建云盘时指定自动挂载并初始化该数据盘。因加密盘不支持自动挂载及初始化，此参数与Encrypt参数不可同时传入。
                     * @return AutoMountConfiguration 创建云盘时指定自动挂载并初始化该数据盘。因加密盘不支持自动挂载及初始化，此参数与Encrypt参数不可同时传入。
                     * 
                     */
                    AutoMountConfiguration GetAutoMountConfiguration() const;

                    /**
                     * 设置创建云盘时指定自动挂载并初始化该数据盘。因加密盘不支持自动挂载及初始化，此参数与Encrypt参数不可同时传入。
                     * @param _autoMountConfiguration 创建云盘时指定自动挂载并初始化该数据盘。因加密盘不支持自动挂载及初始化，此参数与Encrypt参数不可同时传入。
                     * 
                     */
                    void SetAutoMountConfiguration(const AutoMountConfiguration& _autoMountConfiguration);

                    /**
                     * 判断参数 AutoMountConfiguration 是否已赋值
                     * @return AutoMountConfiguration 是否已赋值
                     * 
                     */
                    bool AutoMountConfigurationHasBeenSet() const;

                    /**
                     * 获取指定云硬盘备份点配额。
                     * @return DiskBackupQuota 指定云硬盘备份点配额。
                     * 
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置指定云硬盘备份点配额。
                     * @param _diskBackupQuota 指定云硬盘备份点配额。
                     * 
                     */
                    void SetDiskBackupQuota(const uint64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                    /**
                     * 获取创建云盘时是否开启性能突发。当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且云盘大小不小于460GiB。
                     * @return BurstPerformance 创建云盘时是否开启性能突发。当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且云盘大小不小于460GiB。
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置创建云盘时是否开启性能突发。当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且云盘大小不小于460GiB。
                     * @param _burstPerformance 创建云盘时是否开启性能突发。当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且云盘大小不小于460GiB。
                     * 
                     */
                    void SetBurstPerformance(const bool& _burstPerformance);

                    /**
                     * 判断参数 BurstPerformance 是否已赋值
                     * @return BurstPerformance 是否已赋值
                     * 
                     */
                    bool BurstPerformanceHasBeenSet() const;

                    /**
                     * 获取指定云硬盘加密类型，取值为ENCRYPT_V1和ENCRYPT_V2，分别表示第一代和第二代加密技术，两种加密技术互不兼容。推荐优先使用第二代加密技术ENCRYPT_V2，第一代加密技术仅支持在部分老旧机型使用。该参数仅当创建加密云硬盘时有效。
                     * @return EncryptType 指定云硬盘加密类型，取值为ENCRYPT_V1和ENCRYPT_V2，分别表示第一代和第二代加密技术，两种加密技术互不兼容。推荐优先使用第二代加密技术ENCRYPT_V2，第一代加密技术仅支持在部分老旧机型使用。该参数仅当创建加密云硬盘时有效。
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置指定云硬盘加密类型，取值为ENCRYPT_V1和ENCRYPT_V2，分别表示第一代和第二代加密技术，两种加密技术互不兼容。推荐优先使用第二代加密技术ENCRYPT_V2，第一代加密技术仅支持在部分老旧机型使用。该参数仅当创建加密云硬盘时有效。
                     * @param _encryptType 指定云硬盘加密类型，取值为ENCRYPT_V1和ENCRYPT_V2，分别表示第一代和第二代加密技术，两种加密技术互不兼容。推荐优先使用第二代加密技术ENCRYPT_V2，第一代加密技术仅支持在部分老旧机型使用。该参数仅当创建加密云硬盘时有效。
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                private:

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目。若不指定项目，将在默认项目下进行创建。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 云硬盘计费类型。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDCPAID：独享集群付费<br>各类型价格请参考云硬盘[价格总览](/document/product/362/2413)。</li>
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * 硬盘介质类型。取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘</li><br><li>CLOUD_BSSD：表示通用型SSD云硬盘</li><br><li>CLOUD_SSD：表示SSD云硬盘</li><br><li>CLOUD_HSSD：表示增强型SSD云硬盘</li><br><li>CLOUD_TSSD：表示极速型SSD云硬盘。</li>极速型SSD云硬盘（CLOUD_TSSD）仅支持随部分实例类型一同购买，暂不支持单独创建。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云盘显示名称。不传则默认为“未命名”。最大长度不能超60个字节。
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 云盘绑定的标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 快照ID，如果传入则根据此快照创建云硬盘，快照类型必须为数据盘快照，可通过[DescribeSnapshots](/document/product/362/15647)接口查询快照，见输出参数DiskUsage解释。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 创建云硬盘数量，不传则默认为1。单次请求最多可创建的云盘数有限制，具体参见[云硬盘使用限制](https://cloud.tencent.com/doc/product/362/5145)。
                     */
                    uint64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * 使用此参数可给云硬盘购买额外的性能，单位MB/s。<br>当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）。
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * 购买加密盘时自定义密钥，当传入该参数时，Encrypt参数不得为空。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * 云硬盘大小，单位为GiB。<br><li>如果传入`SnapshotId`则可不传`DiskSize`，此时新建云盘的大小为快照大小</li><br><li>如果传入`SnapshotId`同时传入`DiskSize`，则云盘大小必须大于或等于快照大小</li><br><li>云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。</li>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 传入True时，云盘将创建为共享型云盘，默认为False。因共享型云盘不支持加密，此参数与Encrypt参数不可同时传入。
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 传入该参数用于创建加密云盘，取值固定为ENCRYPT。因共享型云盘不支持加密，此参数与Shareable参数不可同时传入。
                     */
                    std::string m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数指定包年包月云盘的购买时长、是否设置自动续费等属性。<br>创建预付费云盘该参数必传，创建按小时后付费云盘无需传该参数。
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * 销毁云盘时删除关联的非永久保留快照。0 表示非永久快照不随云盘销毁而销毁，1表示非永久快照随云盘销毁而销毁，默认取0。快照是否永久保留可以通过[DescribeSnapshots](/document/api/362/15647)接口返回的快照详情的IsPermanent字段来判断，True表示永久快照，False表示非永久快照。
                     */
                    int64_t m_deleteSnapshot;
                    bool m_deleteSnapshotHasBeenSet;

                    /**
                     * 创建云盘时指定自动挂载并初始化该数据盘。因加密盘不支持自动挂载及初始化，此参数与Encrypt参数不可同时传入。
                     */
                    AutoMountConfiguration m_autoMountConfiguration;
                    bool m_autoMountConfigurationHasBeenSet;

                    /**
                     * 指定云硬盘备份点配额。
                     */
                    uint64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                    /**
                     * 创建云盘时是否开启性能突发。当前仅支持极速型云盘（CLOUD_TSSD）和增强型SSD云硬盘（CLOUD_HSSD）且云盘大小不小于460GiB。
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                    /**
                     * 指定云硬盘加密类型，取值为ENCRYPT_V1和ENCRYPT_V2，分别表示第一代和第二代加密技术，两种加密技术互不兼容。推荐优先使用第二代加密技术ENCRYPT_V2，第一代加密技术仅支持在部分老旧机型使用。该参数仅当创建加密云硬盘时有效。
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKSREQUEST_H_
