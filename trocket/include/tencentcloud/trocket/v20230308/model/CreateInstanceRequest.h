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
                     * 获取实例类型，
EXPERIMENT 体验版
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     * @return InstanceType 实例类型，
EXPERIMENT 体验版
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，
EXPERIMENT 体验版
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     * @param _instanceType 实例类型，
EXPERIMENT 体验版
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
                     * 获取实例名称
                     * @return Name 实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param _name 实例名称
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
                     * 获取商品规格，可用规格如下：
experiment_500,
basic_1k,
basic_2k,
basic_4k,
basic_6k
                     * @return SkuCode 商品规格，可用规格如下：
experiment_500,
basic_1k,
basic_2k,
basic_4k,
basic_6k
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置商品规格，可用规格如下：
experiment_500,
basic_1k,
basic_2k,
basic_4k,
basic_6k
                     * @param _skuCode 商品规格，可用规格如下：
experiment_500,
basic_1k,
basic_2k,
basic_4k,
basic_6k
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
                     * 获取实例绑定的VPC信息
                     * @return VpcList 实例绑定的VPC信息
                     * 
                     */
                    std::vector<VpcInfo> GetVpcList() const;

                    /**
                     * 设置实例绑定的VPC信息
                     * @param _vpcList 实例绑定的VPC信息
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
                     * 获取是否开启公网
                     * @return EnablePublic 是否开启公网
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置是否开启公网
                     * @param _enablePublic 是否开启公网
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
                     * 获取公网带宽
                     * @return Bandwidth 公网带宽
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置公网带宽
                     * @param _bandwidth 公网带宽
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
                     * 获取公网访问白名单
                     * @return IpRules 公网访问白名单
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置公网访问白名单
                     * @param _ipRules 公网访问白名单
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
                     * 获取消息保留时长，小时为单位
                     * @return MessageRetention 消息保留时长，小时为单位
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置消息保留时长，小时为单位
                     * @param _messageRetention 消息保留时长，小时为单位
                     * 
                     */
                    void SetMessageRetention(const int64_t& _messageRetention);

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                private:

                    /**
                     * 实例类型，
EXPERIMENT 体验版
BASIC 基础版
PRO  专业版
PLATINUM 铂金版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商品规格，可用规格如下：
experiment_500,
basic_1k,
basic_2k,
basic_4k,
basic_6k
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
                     * 实例绑定的VPC信息
                     */
                    std::vector<VpcInfo> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 是否开启公网
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * 公网带宽
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 公网访问白名单
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * 消息保留时长，小时为单位
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEINSTANCEREQUEST_H_
