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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATETAWINSTANCEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATETAWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Tag.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateTawInstance请求参数结构体
                */
                class CreateTawInstanceRequest : public AbstractModel
                {
                public:
                    CreateTawInstanceRequest();
                    ~CreateTawInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取片区Id，(至少大于0)
                     * @return AreaId 片区Id，(至少大于0)
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置片区Id，(至少大于0)
                     * @param _areaId 片区Id，(至少大于0)
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取计费类型, (1=后付费)
                     * @return ChargeType 计费类型, (1=后付费)
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置计费类型, (1=后付费)
                     * @param _chargeType 计费类型, (1=后付费)
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取数据保存时间，(至少大于0)
                     * @return DataRetentionDays 数据保存时间，(至少大于0)
                     * 
                     */
                    int64_t GetDataRetentionDays() const;

                    /**
                     * 设置数据保存时间，(至少大于0)
                     * @param _dataRetentionDays 数据保存时间，(至少大于0)
                     * 
                     */
                    void SetDataRetentionDays(const int64_t& _dataRetentionDays);

                    /**
                     * 判断参数 DataRetentionDays 是否已赋值
                     * @return DataRetentionDays 是否已赋值
                     * 
                     */
                    bool DataRetentionDaysHasBeenSet() const;

                    /**
                     * 获取实例名称，(最大长度不超过255字节)
                     * @return InstanceName 实例名称，(最大长度不超过255字节)
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，(最大长度不超过255字节)
                     * @param _instanceName 实例名称，(最大长度不超过255字节)
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取实例描述，(最大长度不超过1024字节)
                     * @return InstanceDesc 实例描述，(最大长度不超过1024字节)
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置实例描述，(最大长度不超过1024字节)
                     * @param _instanceDesc 实例描述，(最大长度不超过1024字节)
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取每天数据上报量，（不作量级限制）
                     * @return CountNum 每天数据上报量，（不作量级限制）
                     * 
                     */
                    std::string GetCountNum() const;

                    /**
                     * 设置每天数据上报量，（不作量级限制）
                     * @param _countNum 每天数据上报量，（不作量级限制）
                     * 
                     */
                    void SetCountNum(const std::string& _countNum);

                    /**
                     * 判断参数 CountNum 是否已赋值
                     * @return CountNum 是否已赋值
                     * 
                     */
                    bool CountNumHasBeenSet() const;

                    /**
                     * 获取数据存储时长计费
                     * @return PeriodRetain 数据存储时长计费
                     * 
                     */
                    std::string GetPeriodRetain() const;

                    /**
                     * 设置数据存储时长计费
                     * @param _periodRetain 数据存储时长计费
                     * 
                     */
                    void SetPeriodRetain(const std::string& _periodRetain);

                    /**
                     * 判断参数 PeriodRetain 是否已赋值
                     * @return PeriodRetain 是否已赋值
                     * 
                     */
                    bool PeriodRetainHasBeenSet() const;

                    /**
                     * 获取实例购买渠道("cdn" 等)
                     * @return BuyingChannel 实例购买渠道("cdn" 等)
                     * 
                     */
                    std::string GetBuyingChannel() const;

                    /**
                     * 设置实例购买渠道("cdn" 等)
                     * @param _buyingChannel 实例购买渠道("cdn" 等)
                     * 
                     */
                    void SetBuyingChannel(const std::string& _buyingChannel);

                    /**
                     * 判断参数 BuyingChannel 是否已赋值
                     * @return BuyingChannel 是否已赋值
                     * 
                     */
                    bool BuyingChannelHasBeenSet() const;

                    /**
                     * 获取预付费资源包类型(仅预付费需要)
                     * @return ResourcePackageType 预付费资源包类型(仅预付费需要)
                     * 
                     */
                    uint64_t GetResourcePackageType() const;

                    /**
                     * 设置预付费资源包类型(仅预付费需要)
                     * @param _resourcePackageType 预付费资源包类型(仅预付费需要)
                     * 
                     */
                    void SetResourcePackageType(const uint64_t& _resourcePackageType);

                    /**
                     * 判断参数 ResourcePackageType 是否已赋值
                     * @return ResourcePackageType 是否已赋值
                     * 
                     */
                    bool ResourcePackageTypeHasBeenSet() const;

                    /**
                     * 获取预付费资源包数量(仅预付费需要)
                     * @return ResourcePackageNum 预付费资源包数量(仅预付费需要)
                     * 
                     */
                    uint64_t GetResourcePackageNum() const;

                    /**
                     * 设置预付费资源包数量(仅预付费需要)
                     * @param _resourcePackageNum 预付费资源包数量(仅预付费需要)
                     * 
                     */
                    void SetResourcePackageNum(const uint64_t& _resourcePackageNum);

                    /**
                     * 判断参数 ResourcePackageNum 是否已赋值
                     * @return ResourcePackageNum 是否已赋值
                     * 
                     */
                    bool ResourcePackageNumHasBeenSet() const;

                    /**
                     * 获取实例类型 1:原web相关类型 2:app端类型
                     * @return InstanceType 实例类型 1:原web相关类型 2:app端类型
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型 1:原web相关类型 2:app端类型
                     * @param _instanceType 实例类型 1:原web相关类型 2:app端类型
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * 片区Id，(至少大于0)
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 计费类型, (1=后付费)
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 数据保存时间，(至少大于0)
                     */
                    int64_t m_dataRetentionDays;
                    bool m_dataRetentionDaysHasBeenSet;

                    /**
                     * 实例名称，(最大长度不超过255字节)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例描述，(最大长度不超过1024字节)
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * 每天数据上报量，（不作量级限制）
                     */
                    std::string m_countNum;
                    bool m_countNumHasBeenSet;

                    /**
                     * 数据存储时长计费
                     */
                    std::string m_periodRetain;
                    bool m_periodRetainHasBeenSet;

                    /**
                     * 实例购买渠道("cdn" 等)
                     */
                    std::string m_buyingChannel;
                    bool m_buyingChannelHasBeenSet;

                    /**
                     * 预付费资源包类型(仅预付费需要)
                     */
                    uint64_t m_resourcePackageType;
                    bool m_resourcePackageTypeHasBeenSet;

                    /**
                     * 预付费资源包数量(仅预付费需要)
                     */
                    uint64_t m_resourcePackageNum;
                    bool m_resourcePackageNumHasBeenSet;

                    /**
                     * 实例类型 1:原web相关类型 2:app端类型
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETAWINSTANCEREQUEST_H_
