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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Tag.h>
#include <tencentcloud/mqtt/v20240516/model/VpcInfo.h>
#include <tencentcloud/mqtt/v20240516/model/IpRule.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
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
                     * 获取实例类型，需要和SkuCode保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
BASIC 基础版
PRO  专业版
PLATINUM 铂金版

                     * @return InstanceType 实例类型，需要和SkuCode保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
BASIC 基础版
PRO  专业版
PLATINUM 铂金版

                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，需要和SkuCode保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
BASIC 基础版
PRO  专业版
PLATINUM 铂金版

                     * @param _instanceType 实例类型，需要和SkuCode保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
BASIC 基础版
PRO  专业版
PLATINUM 铂金版

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
                     * 获取集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     * @return Name 集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     * @param _name 集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
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
                     * 获取商品规格，需要和InstanceType保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
                     * @return SkuCode 商品规格，需要和InstanceType保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置商品规格，需要和InstanceType保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
                     * @param _skuCode 商品规格，需要和InstanceType保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
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
                     * 获取备注信息，最长 128 字符
                     * @return Remark 备注信息，最长 128 字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，最长 128 字符
                     * @param _remark 备注信息，最长 128 字符
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
                     * 获取实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET
                     * @return VpcList 实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET
                     * 
                     */
                    std::vector<VpcInfo> GetVpcList() const;

                    /**
                     * 设置实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET
                     * @param _vpcList 实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET
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
                     * 获取是否开启公网，默认false（关闭）
                     * @return EnablePublic 是否开启公网，默认false（关闭）
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置是否开启公网，默认false（关闭）
                     * @param _enablePublic 是否开启公网，默认false（关闭）
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
                     * 获取公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.
                     * @return Bandwidth 公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.
                     * @param _bandwidth 公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.
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
                     * 获取公网访问白名单，不传表示拒绝所有IP网络访问。
                     * @return IpRules 公网访问白名单，不传表示拒绝所有IP网络访问。
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置公网访问白名单，不传表示拒绝所有IP网络访问。
                     * @param _ipRules 公网访问白名单，不传表示拒绝所有IP网络访问。
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
                     * 获取是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费
                     * @return RenewFlag 是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费
                     * @param _renewFlag 是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费
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
                     * 获取购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；
                     * @return TimeSpan 购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；
                     * @param _timeSpan 购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；
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
                     * 获取付费模式（0: 后付费；1: 预付费），默认0（后付费）。
                     * @return PayMode 付费模式（0: 后付费；1: 预付费），默认0（后付费）。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式（0: 后付费；1: 预付费），默认0（后付费）。
                     * @param _payMode 付费模式（0: 后付费；1: 预付费），默认0（后付费）。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 实例类型，需要和SkuCode保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
BASIC 基础版
PRO  专业版
PLATINUM 铂金版

                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商品规格，需要和InstanceType保持对应关系，可参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/api/1778/116232) 接口获取。
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 备注信息，最长 128 字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET
                     */
                    std::vector<VpcInfo> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 是否开启公网，默认false（关闭）
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * 公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 公网访问白名单，不传表示拒绝所有IP网络访问。
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * 是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 付费模式（0: 后付费；1: 预付费），默认0（后付费）。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEINSTANCEREQUEST_H_
