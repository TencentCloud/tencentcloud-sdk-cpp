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
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置片区Id，(至少大于0)
                     * @param AreaId 片区Id，(至少大于0)
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取计费类型, (1=后付费，2=预付费)
                     * @return ChargeType 计费类型, (1=后付费，2=预付费)
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置计费类型, (1=后付费，2=预付费)
                     * @param ChargeType 计费类型, (1=后付费，2=预付费)
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取数据保存时间，(至少大于0)
                     * @return DataRetentionDays 数据保存时间，(至少大于0)
                     */
                    int64_t GetDataRetentionDays() const;

                    /**
                     * 设置数据保存时间，(至少大于0)
                     * @param DataRetentionDays 数据保存时间，(至少大于0)
                     */
                    void SetDataRetentionDays(const int64_t& _dataRetentionDays);

                    /**
                     * 判断参数 DataRetentionDays 是否已赋值
                     * @return DataRetentionDays 是否已赋值
                     */
                    bool DataRetentionDaysHasBeenSet() const;

                    /**
                     * 获取实例名称，(最大长度不超过255字节)
                     * @return InstanceName 实例名称，(最大长度不超过255字节)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，(最大长度不超过255字节)
                     * @param InstanceName 实例名称，(最大长度不超过255字节)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param Tags 标签列表
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例描述，(最大长度不超过1024字节)
                     * @return InstanceDesc 实例描述，(最大长度不超过1024字节)
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置实例描述，(最大长度不超过1024字节)
                     * @param InstanceDesc 实例描述，(最大长度不超过1024字节)
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取每天数据上报量
                     * @return CountNum 每天数据上报量
                     */
                    std::string GetCountNum() const;

                    /**
                     * 设置每天数据上报量
                     * @param CountNum 每天数据上报量
                     */
                    void SetCountNum(const std::string& _countNum);

                    /**
                     * 判断参数 CountNum 是否已赋值
                     * @return CountNum 是否已赋值
                     */
                    bool CountNumHasBeenSet() const;

                    /**
                     * 获取数据存储时长计费
                     * @return PeriodRetain 数据存储时长计费
                     */
                    std::string GetPeriodRetain() const;

                    /**
                     * 设置数据存储时长计费
                     * @param PeriodRetain 数据存储时长计费
                     */
                    void SetPeriodRetain(const std::string& _periodRetain);

                    /**
                     * 判断参数 PeriodRetain 是否已赋值
                     * @return PeriodRetain 是否已赋值
                     */
                    bool PeriodRetainHasBeenSet() const;

                    /**
                     * 获取实例购买渠道("cdn" 等)
                     * @return BuyingChannel 实例购买渠道("cdn" 等)
                     */
                    std::string GetBuyingChannel() const;

                    /**
                     * 设置实例购买渠道("cdn" 等)
                     * @param BuyingChannel 实例购买渠道("cdn" 等)
                     */
                    void SetBuyingChannel(const std::string& _buyingChannel);

                    /**
                     * 判断参数 BuyingChannel 是否已赋值
                     * @return BuyingChannel 是否已赋值
                     */
                    bool BuyingChannelHasBeenSet() const;

                private:

                    /**
                     * 片区Id，(至少大于0)
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 计费类型, (1=后付费，2=预付费)
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
                     * 每天数据上报量
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETAWINSTANCEREQUEST_H_
