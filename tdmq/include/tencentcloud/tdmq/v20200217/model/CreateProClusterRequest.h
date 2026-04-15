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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcInfo.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateProCluster请求参数结构体
                */
                class CreateProClusterRequest : public AbstractModel
                {
                public:
                    CreateProClusterRequest();
                    ~CreateProClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>多可用区部署选择三个可用区，示例[200002,200003,200004]<br>单可用区部署选择一个可用区，示例[200002]</p><p>当选择PULSAR.P2.MINI1 时只支持两个可用区，其他支持三个可用区</p>
                     * @return ZoneIds <p>多可用区部署选择三个可用区，示例[200002,200003,200004]<br>单可用区部署选择一个可用区，示例[200002]</p><p>当选择PULSAR.P2.MINI1 时只支持两个可用区，其他支持三个可用区</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>多可用区部署选择三个可用区，示例[200002,200003,200004]<br>单可用区部署选择一个可用区，示例[200002]</p><p>当选择PULSAR.P2.MINI1 时只支持两个可用区，其他支持三个可用区</p>
                     * @param _zoneIds <p>多可用区部署选择三个可用区，示例[200002,200003,200004]<br>单可用区部署选择一个可用区，示例[200002]</p><p>当选择PULSAR.P2.MINI1 时只支持两个可用区，其他支持三个可用区</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>集群规格代号<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * @return ProductName <p>集群规格代号<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>集群规格代号<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * @param _productName <p>集群规格代号<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>1: true，开启自动按月续费</p><p>0: false，关闭自动按月续费</p>
                     * @return AutoRenewFlag <p>1: true，开启自动按月续费</p><p>0: false，关闭自动按月续费</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>1: true，开启自动按月续费</p><p>0: false，关闭自动按月续费</p>
                     * @param _autoRenewFlag <p>1: true，开启自动按月续费</p><p>0: false，关闭自动按月续费</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>购买时长，取值范围：1～50</p>
                     * @return TimeSpan <p>购买时长，取值范围：1～50</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>购买时长，取值范围：1～50</p>
                     * @param _timeSpan <p>购买时长，取值范围：1～50</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>集群名称不能为空，支持数字、字母、中文以及符号 “-_=:.”，长度不超过64个字符</p>
                     * @return ClusterName <p>集群名称不能为空，支持数字、字母、中文以及符号 “-_=:.”，长度不超过64个字符</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称不能为空，支持数字、字母、中文以及符号 “-_=:.”，长度不超过64个字符</p>
                     * @param _clusterName <p>集群名称不能为空，支持数字、字母、中文以及符号 “-_=:.”，长度不超过64个字符</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>是否自动选择代金券 1是 0否 默认为0</p>
                     * @return AutoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券 1是 0否 默认为0</p>
                     * @param _autoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p>
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>存储规格<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * @return StorageSize <p>存储规格<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置<p>存储规格<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * @param _storageSize <p>存储规格<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>vpc网络标签</p>
                     * @return Vpc <p>vpc网络标签</p>
                     * 
                     */
                    VpcInfo GetVpc() const;

                    /**
                     * 设置<p>vpc网络标签</p>
                     * @param _vpc <p>vpc网络标签</p>
                     * 
                     */
                    void SetVpc(const VpcInfo& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取<p>集群的标签列表(已废弃)</p>
                     * @return Tags <p>集群的标签列表(已废弃)</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>集群的标签列表(已废弃)</p>
                     * @param _tags <p>集群的标签列表(已废弃)</p>
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
                     * 获取<p>集群版本信息</p>
                     * @return InstanceVersion <p>集群版本信息</p>
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置<p>集群版本信息</p>
                     * @param _instanceVersion <p>集群版本信息</p>
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                private:

                    /**
                     * <p>多可用区部署选择三个可用区，示例[200002,200003,200004]<br>单可用区部署选择一个可用区，示例[200002]</p><p>当选择PULSAR.P2.MINI1 时只支持两个可用区，其他支持三个可用区</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>集群规格代号<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>1: true，开启自动按月续费</p><p>0: false，关闭自动按月续费</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>购买时长，取值范围：1～50</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>集群名称不能为空，支持数字、字母、中文以及符号 “-_=:.”，长度不超过64个字符</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>是否自动选择代金券 1是 0否 默认为0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>存储规格<br>参考 <a href="https://cloud.tencent.com/document/product/1179/83705">专业集群规格</a></p>
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * <p>vpc网络标签</p>
                     */
                    VpcInfo m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * <p>集群的标签列表(已废弃)</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>集群版本信息</p>
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_
