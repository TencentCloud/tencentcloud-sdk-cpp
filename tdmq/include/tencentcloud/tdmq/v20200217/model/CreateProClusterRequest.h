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
                     * 获取多可用区部署选择三个可用区，示例[200002,200003,200004]

单可用区部署选择一个可用区，示例[200002]
                     * @return ZoneIds 多可用区部署选择三个可用区，示例[200002,200003,200004]

单可用区部署选择一个可用区，示例[200002]
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置多可用区部署选择三个可用区，示例[200002,200003,200004]

单可用区部署选择一个可用区，示例[200002]
                     * @param _zoneIds 多可用区部署选择三个可用区，示例[200002,200003,200004]

单可用区部署选择一个可用区，示例[200002]
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
                     * 获取集群规格代号
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     * @return ProductName 集群规格代号
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置集群规格代号
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     * @param _productName 集群规格代号
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
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
                     * 获取存储规格
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     * @return StorageSize 存储规格
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置存储规格
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     * @param _storageSize 存储规格
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
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
                     * 获取1: true，开启自动按月续费

0: false，关闭自动按月续费
                     * @return AutoRenewFlag 1: true，开启自动按月续费

0: false，关闭自动按月续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置1: true，开启自动按月续费

0: false，关闭自动按月续费
                     * @param _autoRenewFlag 1: true，开启自动按月续费

0: false，关闭自动按月续费
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
                     * 获取购买时长，取值范围：1～50
                     * @return TimeSpan 购买时长，取值范围：1～50
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长，取值范围：1～50
                     * @param _timeSpan 购买时长，取值范围：1～50
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
                     * 获取集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * @return ClusterName 集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     * @param _clusterName 集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
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
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param _autoVoucher 是否自动选择代金券 1是 0否 默认为0
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
                     * 获取vpc网络标签
                     * @return Vpc vpc网络标签
                     * 
                     */
                    VpcInfo GetVpc() const;

                    /**
                     * 设置vpc网络标签
                     * @param _vpc vpc网络标签
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
                     * 获取集群的标签列表(已废弃)
                     * @return Tags 集群的标签列表(已废弃)
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置集群的标签列表(已废弃)
                     * @param _tags 集群的标签列表(已废弃)
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 多可用区部署选择三个可用区，示例[200002,200003,200004]

单可用区部署选择一个可用区，示例[200002]
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 集群规格代号
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 存储规格
参考 [专业集群规格](https://cloud.tencent.com/document/product/1179/83705)
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 1: true，开启自动按月续费

0: false，关闭自动按月续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 购买时长，取值范围：1～50
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 集群名称，不支持中字以及除了短线和下划线外的特殊字符且不超过64个字符。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * vpc网络标签
                     */
                    VpcInfo m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * 集群的标签列表(已废弃)
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEPROCLUSTERREQUEST_H_
