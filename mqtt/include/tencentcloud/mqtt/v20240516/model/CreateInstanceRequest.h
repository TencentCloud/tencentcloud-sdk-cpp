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
                     * 获取<p>实例类型，需要和SkuCode保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
                     * @return InstanceType <p>实例类型，需要和SkuCode保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型，需要和SkuCode保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
                     * @param _instanceType <p>实例类型，需要和SkuCode保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
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
                     * 获取<p>集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     * @return Name <p>集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     * @param _name <p>集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
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
                     * 获取<p>商品规格，需要和InstanceType保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。</p>
                     * @return SkuCode <p>商品规格，需要和InstanceType保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。</p>
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置<p>商品规格，需要和InstanceType保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。</p>
                     * @param _skuCode <p>商品规格，需要和InstanceType保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。</p>
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
                     * 获取<p>备注信息，最长 128 字符</p>
                     * @return Remark <p>备注信息，最长 128 字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息，最长 128 字符</p>
                     * @param _remark <p>备注信息，最长 128 字符</p>
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
                     * 获取<p>标签列表</p>
                     * @return TagList <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tagList <p>标签列表</p>
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
                     * 获取<p>实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET</p>
                     * @return VpcList <p>实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET</p>
                     * 
                     */
                    std::vector<VpcInfo> GetVpcList() const;

                    /**
                     * 设置<p>实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET</p>
                     * @param _vpcList <p>实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET</p>
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
                     * 获取<p>是否开启公网，默认false（关闭）</p>
                     * @return EnablePublic <p>是否开启公网，默认false（关闭）</p>
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置<p>是否开启公网，默认false（关闭）</p>
                     * @param _enablePublic <p>是否开启公网，默认false（关闭）</p>
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
                     * 获取<p>公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.</p>
                     * @return Bandwidth <p>公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.</p>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.</p>
                     * @param _bandwidth <p>公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.</p>
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
                     * 获取<p>公网访问白名单，不传表示拒绝所有IP网络访问。</p>
                     * @return IpRules <p>公网访问白名单，不传表示拒绝所有IP网络访问。</p>
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置<p>公网访问白名单，不传表示拒绝所有IP网络访问。</p>
                     * @param _ipRules <p>公网访问白名单，不传表示拒绝所有IP网络访问。</p>
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
                     * 获取<p>是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费</p>
                     * @return RenewFlag <p>是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费</p>
                     * @param _renewFlag <p>是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费</p>
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
                     * 获取<p>购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；</p>
                     * @return TimeSpan <p>购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；</p>
                     * @param _timeSpan <p>购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；</p>
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
                     * 获取<p>付费模式（0: 后付费；1: 预付费），默认0（后付费）。</p>
                     * @return PayMode <p>付费模式（0: 后付费；1: 预付费），默认0（后付费）。</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式（0: 后付费；1: 预付费），默认0（后付费）。</p>
                     * @param _payMode <p>付费模式（0: 后付费；1: 预付费），默认0（后付费）。</p>
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
                     * <p>实例类型，需要和SkuCode保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。<br>BASIC 基础版<br>PRO  专业版<br>PLATINUM 铂金版</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>集群名称不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>商品规格，需要和InstanceType保持对应关系，可参考 <a href="https://cloud.tencent.com/document/api/1778/116232">获取MQTT产品售卖规格</a> 接口获取。</p>
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * <p>备注信息，最长 128 字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>实例绑定的VPC信息，需要传当前用户下可用的VPC和SUBNET</p>
                     */
                    std::vector<VpcInfo> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * <p>是否开启公网，默认false（关闭）</p>
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * <p>公网带宽（单位：Mbps），EnablePublic 为True时，该字段必须填写且大于0.</p>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>公网访问白名单，不传表示拒绝所有IP网络访问。</p>
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * <p>是否自动续费（0: 不自动续费；1: 自动续费），仅购买预付费集群时生效。默认1:自动续费</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>购买时长（单位：月），购买预付费集群时生效，默认1m（月）。可选范围：1~12、24、36、48、60；</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>付费模式（0: 后付费；1: 预付费），默认0（后付费）。</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CREATEINSTANCEREQUEST_H_
