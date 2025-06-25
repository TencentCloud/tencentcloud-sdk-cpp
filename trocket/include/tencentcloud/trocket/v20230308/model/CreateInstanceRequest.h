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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>
#include <tencentcloud/trocket/v20230308/model/VpcInfo.h>
#include <tencentcloud/trocket/v20230308/model/IpRule.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例类型，枚举值如下：

- EXPERIMENT：体验版

- BASIC：基础版

- PRO：专业版

- PLATINUM：铂金版
                     * @return InstanceType 实例类型，枚举值如下：

- EXPERIMENT：体验版

- BASIC：基础版

- PRO：专业版

- PLATINUM：铂金版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，枚举值如下：

- EXPERIMENT：体验版

- BASIC：基础版

- PRO：专业版

- PLATINUM：铂金版
                     * @param _instanceType 实例类型，枚举值如下：

- EXPERIMENT：体验版

- BASIC：基础版

- PRO：专业版

- PLATINUM：铂金版
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
                     * 获取集群名称，不能为空， 3-64个字符，只能包含数字、字母、“-”和“_”
                     * @return Name 集群名称，不能为空， 3-64个字符，只能包含数字、字母、“-”和“_”
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群名称，不能为空， 3-64个字符，只能包含数字、字母、“-”和“_”
                     * @param _name 集群名称，不能为空， 3-64个字符，只能包含数字、字母、“-”和“_”
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参获得。
                     * @return SkuCode 商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参获得。
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参获得。
                     * @param _skuCode 商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参获得。
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagList 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置标签列表
                     * @param _tagList 标签列表
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取集群绑定的VPC信息，必填
                     * @return VpcList 集群绑定的VPC信息，必填
                     * 
                     */
                    std::vector<VpcInfo> GetVpcList() const;

                    /**
                     * 设置集群绑定的VPC信息，必填
                     * @param _vpcList 集群绑定的VPC信息，必填
                     * 
                     */
                    void SetVpcList(const std::vector<VpcInfo>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取是否开启公网，默认值为false表示不开启
                     * @return EnablePublic 是否开启公网，默认值为false表示不开启
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置是否开启公网，默认值为false表示不开启
                     * @param _enablePublic 是否开启公网，默认值为false表示不开启
                     * 
                     */
                    void SetEnablePublic(const bool& _enablePublic);

                    /**
                     * 判断参数 EnablePublic 是否已赋值
                     * @return EnablePublic 是否已赋值
                     * 
                     */
                    bool EnablePublicHasBeenSet() const;

                    /**
                     * 获取公网是否按流量计费，默认值为false表示不按流量计费
                     * @return BillingFlow 公网是否按流量计费，默认值为false表示不按流量计费
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 设置公网是否按流量计费，默认值为false表示不按流量计费
                     * @param _billingFlow 公网是否按流量计费，默认值为false表示不按流量计费
                     * 
                     */
                    void SetBillingFlow(const bool& _billingFlow);

                    /**
                     * 判断参数 BillingFlow 是否已赋值
                     * @return BillingFlow 是否已赋值
                     * 
                     */
                    bool BillingFlowHasBeenSet() const;

                    /**
                     * 获取公网带宽（单位：兆），默认值为0。如果开启公网，该字段必须为大于0的正整数
                     * @return Bandwidth 公网带宽（单位：兆），默认值为0。如果开启公网，该字段必须为大于0的正整数
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置公网带宽（单位：兆），默认值为0。如果开启公网，该字段必须为大于0的正整数
                     * @param _bandwidth 公网带宽（单位：兆），默认值为0。如果开启公网，该字段必须为大于0的正整数
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
                     * 获取公网访问白名单，不填表示拒绝所有 IP 访问
                     * @return IpRules 公网访问白名单，不填表示拒绝所有 IP 访问
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置公网访问白名单，不填表示拒绝所有 IP 访问
                     * @param _ipRules 公网访问白名单，不填表示拒绝所有 IP 访问
                     * 
                     */
                    void SetIpRules(const std::vector<IpRule>& _ipRules);

                    /**
                     * 判断参数 IpRules 是否已赋值
                     * @return IpRules 是否已赋值
                     * 
                     */
                    bool IpRulesHasBeenSet() const;

                    /**
                     * 获取消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     * @return MessageRetention 消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     * @param _messageRetention 消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
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
                     * 获取付费模式（0: 后付费；1: 预付费），默认值为0
                     * @return PayMode 付费模式（0: 后付费；1: 预付费），默认值为0
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式（0: 后付费；1: 预付费），默认值为0
                     * @param _payMode 付费模式（0: 后付费；1: 预付费），默认值为0
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取预付费集群是否自动续费（0: 不自动续费；1: 自动续费），默认值为0
                     * @return RenewFlag 预付费集群是否自动续费（0: 不自动续费；1: 自动续费），默认值为0
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置预付费集群是否自动续费（0: 不自动续费；1: 自动续费），默认值为0
                     * @param _renewFlag 预付费集群是否自动续费（0: 不自动续费；1: 自动续费），默认值为0
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取预付费集群的购买时长（单位：月），取值范围为1～60，默认值为1
                     * @return TimeSpan 预付费集群的购买时长（单位：月），取值范围为1～60，默认值为1
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置预付费集群的购买时长（单位：月），取值范围为1～60，默认值为1
                     * @param _timeSpan 预付费集群的购买时长（单位：月），取值范围为1～60，默认值为1
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
                     * 获取最大可创建主题数，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值和最小值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     * @return MaxTopicNum 最大可创建主题数，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值和最小值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     * 
                     */
                    int64_t GetMaxTopicNum() const;

                    /**
                     * 设置最大可创建主题数，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值和最小值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     * @param _maxTopicNum 最大可创建主题数，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值和最小值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     * 
                     */
                    void SetMaxTopicNum(const int64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     * 
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取部署可用区列表，从 [DescribeZones](https://cloud.tencent.com/document/product/1596/77929) 接口获得。
                     * @return ZoneIds 部署可用区列表，从 [DescribeZones](https://cloud.tencent.com/document/product/1596/77929) 接口获得。
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置部署可用区列表，从 [DescribeZones](https://cloud.tencent.com/document/product/1596/77929) 接口获得。
                     * @param _zoneIds 部署可用区列表，从 [DescribeZones](https://cloud.tencent.com/document/product/1596/77929) 接口获得。
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * 实例类型，枚举值如下：

- EXPERIMENT：体验版

- BASIC：基础版

- PRO：专业版

- PLATINUM：铂金版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 集群名称，不能为空， 3-64个字符，只能包含数字、字母、“-”和“_”
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参获得。
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 集群绑定的VPC信息，必填
                     */
                    std::vector<VpcInfo> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 是否开启公网，默认值为false表示不开启
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * 公网是否按流量计费，默认值为false表示不按流量计费
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                    /**
                     * 公网带宽（单位：兆），默认值为0。如果开启公网，该字段必须为大于0的正整数
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 公网访问白名单，不填表示拒绝所有 IP 访问
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * 消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * 付费模式（0: 后付费；1: 预付费），默认值为0
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 预付费集群是否自动续费（0: 不自动续费；1: 自动续费），默认值为0
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 预付费集群的购买时长（单位：月），取值范围为1～60，默认值为1
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 最大可创建主题数，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/107676) 出参：

- 默认值和最小值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     */
                    int64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * 部署可用区列表，从 [DescribeZones](https://cloud.tencent.com/document/product/1596/77929) 接口获得。
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEINSTANCEREQUEST_H_
