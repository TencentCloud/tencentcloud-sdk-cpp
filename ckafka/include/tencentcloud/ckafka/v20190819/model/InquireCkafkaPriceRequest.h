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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceChargeParam.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryDiskParam.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryPublicNetworkParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * InquireCkafkaPrice请求参数结构体
                */
                class InquireCkafkaPriceRequest : public AbstractModel
                {
                public:
                    InquireCkafkaPriceRequest();
                    ~InquireCkafkaPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取国内站标准版填写standards2, 国际站标准版填写standard,专业版填写profession,高级版填写premium
                     * @return InstanceType 国内站标准版填写standards2, 国际站标准版填写standard,专业版填写profession,高级版填写premium
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置国内站标准版填写standards2, 国际站标准版填写standard,专业版填写profession,高级版填写premium
                     * @param _instanceType 国内站标准版填写standards2, 国际站标准版填写standard,专业版填写profession,高级版填写premium
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
                     * 获取购买/续费付费类型(购买时不填的话, 默认获取购买包年包月一个月的费用)
                     * @return InstanceChargeParam 购买/续费付费类型(购买时不填的话, 默认获取购买包年包月一个月的费用)
                     * 
                     */
                    InstanceChargeParam GetInstanceChargeParam() const;

                    /**
                     * 设置购买/续费付费类型(购买时不填的话, 默认获取购买包年包月一个月的费用)
                     * @param _instanceChargeParam 购买/续费付费类型(购买时不填的话, 默认获取购买包年包月一个月的费用)
                     * 
                     */
                    void SetInstanceChargeParam(const InstanceChargeParam& _instanceChargeParam);

                    /**
                     * 判断参数 InstanceChargeParam 是否已赋值
                     * @return InstanceChargeParam 是否已赋值
                     * 
                     */
                    bool InstanceChargeParamHasBeenSet() const;

                    /**
                     * 获取购买/续费时购买的实例数量(不填时, 默认为1个)
                     * @return InstanceNum 购买/续费时购买的实例数量(不填时, 默认为1个)
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置购买/续费时购买的实例数量(不填时, 默认为1个)
                     * @param _instanceNum 购买/续费时购买的实例数量(不填时, 默认为1个)
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取实例内网带宽大小, 单位MB/s (购买时必填，专业版/高级版询价时带宽信息必填)
                     * @return Bandwidth 实例内网带宽大小, 单位MB/s (购买时必填，专业版/高级版询价时带宽信息必填)
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置实例内网带宽大小, 单位MB/s (购买时必填，专业版/高级版询价时带宽信息必填)
                     * @param _bandwidth 实例内网带宽大小, 单位MB/s (购买时必填，专业版/高级版询价时带宽信息必填)
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取实例的硬盘购买类型以及大小 (购买时必填，专业版/高级版询价时磁盘信息必填)
                     * @return InquiryDiskParam 实例的硬盘购买类型以及大小 (购买时必填，专业版/高级版询价时磁盘信息必填)
                     * 
                     */
                    InquiryDiskParam GetInquiryDiskParam() const;

                    /**
                     * 设置实例的硬盘购买类型以及大小 (购买时必填，专业版/高级版询价时磁盘信息必填)
                     * @param _inquiryDiskParam 实例的硬盘购买类型以及大小 (购买时必填，专业版/高级版询价时磁盘信息必填)
                     * 
                     */
                    void SetInquiryDiskParam(const InquiryDiskParam& _inquiryDiskParam);

                    /**
                     * 判断参数 InquiryDiskParam 是否已赋值
                     * @return InquiryDiskParam 是否已赋值
                     * 
                     */
                    bool InquiryDiskParamHasBeenSet() const;

                    /**
                     * 获取实例消息保留时间大小, 单位小时 (购买时必填)
                     * @return MessageRetention 实例消息保留时间大小, 单位小时 (购买时必填)
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置实例消息保留时间大小, 单位小时 (购买时必填)
                     * @param _messageRetention 实例消息保留时间大小, 单位小时 (购买时必填)
                     * 
                     */
                    void SetMessageRetention(const int64_t& _messageRetention);

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取购买实例topic数, 单位个 (购买时必填)
                     * @return Topic 购买实例topic数, 单位个 (购买时必填)
                     * 
                     */
                    int64_t GetTopic() const;

                    /**
                     * 设置购买实例topic数, 单位个 (购买时必填)
                     * @param _topic 购买实例topic数, 单位个 (购买时必填)
                     * 
                     */
                    void SetTopic(const int64_t& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取购买实例分区数, 单位个 (购买时必填，专业版/高级版询价时带宽信息必填)
                     * @return Partition 购买实例分区数, 单位个 (购买时必填，专业版/高级版询价时带宽信息必填)
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置购买实例分区数, 单位个 (购买时必填，专业版/高级版询价时带宽信息必填)
                     * @param _partition 购买实例分区数, 单位个 (购买时必填，专业版/高级版询价时带宽信息必填)
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取购买地域, 可通过查看DescribeCkafkaZone这个接口获取ZoneId
                     * @return ZoneIds 购买地域, 可通过查看DescribeCkafkaZone这个接口获取ZoneId
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置购买地域, 可通过查看DescribeCkafkaZone这个接口获取ZoneId
                     * @param _zoneIds 购买地域, 可通过查看DescribeCkafkaZone这个接口获取ZoneId
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
                     * 获取标记操作, 新购填写purchase, 续费填写renew, (不填时, 默认为purchase)
                     * @return CategoryAction 标记操作, 新购填写purchase, 续费填写renew, (不填时, 默认为purchase)
                     * 
                     */
                    std::string GetCategoryAction() const;

                    /**
                     * 设置标记操作, 新购填写purchase, 续费填写renew, (不填时, 默认为purchase)
                     * @param _categoryAction 标记操作, 新购填写purchase, 续费填写renew, (不填时, 默认为purchase)
                     * 
                     */
                    void SetCategoryAction(const std::string& _categoryAction);

                    /**
                     * 判断参数 CategoryAction 是否已赋值
                     * @return CategoryAction 是否已赋值
                     * 
                     */
                    bool CategoryActionHasBeenSet() const;

                    /**
                     * 获取国内站购买的版本, sv_ckafka_instance_s2_1(入门型), sv_ckafka_instance_s2_2(标准版), sv_ckafka_instance_s2_3(进阶型), 如果instanceType为standards2, 但该参数为空, 则默认值为sv_ckafka_instance_s2_1
                     * @return BillType 国内站购买的版本, sv_ckafka_instance_s2_1(入门型), sv_ckafka_instance_s2_2(标准版), sv_ckafka_instance_s2_3(进阶型), 如果instanceType为standards2, 但该参数为空, 则默认值为sv_ckafka_instance_s2_1
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置国内站购买的版本, sv_ckafka_instance_s2_1(入门型), sv_ckafka_instance_s2_2(标准版), sv_ckafka_instance_s2_3(进阶型), 如果instanceType为standards2, 但该参数为空, 则默认值为sv_ckafka_instance_s2_1
                     * @param _billType 国内站购买的版本, sv_ckafka_instance_s2_1(入门型), sv_ckafka_instance_s2_2(标准版), sv_ckafka_instance_s2_3(进阶型), 如果instanceType为standards2, 但该参数为空, 则默认值为sv_ckafka_instance_s2_1
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取公网带宽计费模式, 目前只有专业版支持公网带宽 (购买公网带宽时必填)
                     * @return PublicNetworkParam 公网带宽计费模式, 目前只有专业版支持公网带宽 (购买公网带宽时必填)
                     * 
                     */
                    InquiryPublicNetworkParam GetPublicNetworkParam() const;

                    /**
                     * 设置公网带宽计费模式, 目前只有专业版支持公网带宽 (购买公网带宽时必填)
                     * @param _publicNetworkParam 公网带宽计费模式, 目前只有专业版支持公网带宽 (购买公网带宽时必填)
                     * 
                     */
                    void SetPublicNetworkParam(const InquiryPublicNetworkParam& _publicNetworkParam);

                    /**
                     * 判断参数 PublicNetworkParam 是否已赋值
                     * @return PublicNetworkParam 是否已赋值
                     * 
                     */
                    bool PublicNetworkParamHasBeenSet() const;

                    /**
                     * 获取续费时的实例id, 续费时填写
                     * @return InstanceId 续费时的实例id, 续费时填写
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置续费时的实例id, 续费时填写
                     * @param _instanceId 续费时的实例id, 续费时填写
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 国内站标准版填写standards2, 国际站标准版填写standard,专业版填写profession,高级版填写premium
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 购买/续费付费类型(购买时不填的话, 默认获取购买包年包月一个月的费用)
                     */
                    InstanceChargeParam m_instanceChargeParam;
                    bool m_instanceChargeParamHasBeenSet;

                    /**
                     * 购买/续费时购买的实例数量(不填时, 默认为1个)
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 实例内网带宽大小, 单位MB/s (购买时必填，专业版/高级版询价时带宽信息必填)
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 实例的硬盘购买类型以及大小 (购买时必填，专业版/高级版询价时磁盘信息必填)
                     */
                    InquiryDiskParam m_inquiryDiskParam;
                    bool m_inquiryDiskParamHasBeenSet;

                    /**
                     * 实例消息保留时间大小, 单位小时 (购买时必填)
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * 购买实例topic数, 单位个 (购买时必填)
                     */
                    int64_t m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 购买实例分区数, 单位个 (购买时必填，专业版/高级版询价时带宽信息必填)
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 购买地域, 可通过查看DescribeCkafkaZone这个接口获取ZoneId
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 标记操作, 新购填写purchase, 续费填写renew, (不填时, 默认为purchase)
                     */
                    std::string m_categoryAction;
                    bool m_categoryActionHasBeenSet;

                    /**
                     * 国内站购买的版本, sv_ckafka_instance_s2_1(入门型), sv_ckafka_instance_s2_2(标准版), sv_ckafka_instance_s2_3(进阶型), 如果instanceType为standards2, 但该参数为空, 则默认值为sv_ckafka_instance_s2_1
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * 公网带宽计费模式, 目前只有专业版支持公网带宽 (购买公网带宽时必填)
                     */
                    InquiryPublicNetworkParam m_publicNetworkParam;
                    bool m_publicNetworkParamHasBeenSet;

                    /**
                     * 续费时的实例id, 续费时填写
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRECKAFKAPRICEREQUEST_H_
