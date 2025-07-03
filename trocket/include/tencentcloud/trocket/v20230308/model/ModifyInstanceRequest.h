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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ModifyInstance请求参数结构体
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”
                     * @return Name 实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”
                     * @param _name 实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”
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
                     * 获取备注信息，最多 128 个字符
                     * @return Remark 备注信息，最多 128 个字符
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，最多 128 个字符
                     * @param _remark 备注信息，最多 128 个字符
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
                     * 获取消息发送和接收的比例
                     * @return SendReceiveRatio 消息发送和接收的比例
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置消息发送和接收的比例
                     * @param _sendReceiveRatio 消息发送和接收的比例
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                    /**
                     * 获取商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参获得。
                     * @return SkuCode 商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参获得。
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参获得。
                     * @param _skuCode 商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参获得。
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
                     * 获取消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     * @return MessageRetention 消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     * @param _messageRetention 消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

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
                     * 获取是否开启弹性TPS
                     * @return ScaledTpsEnabled 是否开启弹性TPS
                     * 
                     */
                    bool GetScaledTpsEnabled() const;

                    /**
                     * 设置是否开启弹性TPS
                     * @param _scaledTpsEnabled 是否开启弹性TPS
                     * 
                     */
                    void SetScaledTpsEnabled(const bool& _scaledTpsEnabled);

                    /**
                     * 判断参数 ScaledTpsEnabled 是否已赋值
                     * @return ScaledTpsEnabled 是否已赋值
                     * 
                     */
                    bool ScaledTpsEnabledHasBeenSet() const;

                    /**
                     * 获取是否开启ACL
                     * @return AclEnabled 是否开启ACL
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置是否开启ACL
                     * @param _aclEnabled 是否开启ACL
                     * 
                     */
                    void SetAclEnabled(const bool& _aclEnabled);

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取最大可创建主题数，取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 最小值和默认值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     * @return MaxTopicNum 最大可创建主题数，取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 最小值和默认值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     * 
                     */
                    int64_t GetMaxTopicNum() const;

                    /**
                     * 设置最大可创建主题数，取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 最小值和默认值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     * @param _maxTopicNum 最大可创建主题数，取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 最小值和默认值：TopicNumLimit 参数
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
                     * 获取免费额度之外的主题个数，免费额度参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参中的 TopicNumLimit 参数。
                     * @return ExtraTopicNum 免费额度之外的主题个数，免费额度参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参中的 TopicNumLimit 参数。
                     * 
                     */
                    std::string GetExtraTopicNum() const;

                    /**
                     * 设置免费额度之外的主题个数，免费额度参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参中的 TopicNumLimit 参数。
                     * @param _extraTopicNum 免费额度之外的主题个数，免费额度参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参中的 TopicNumLimit 参数。
                     * 
                     */
                    void SetExtraTopicNum(const std::string& _extraTopicNum);

                    /**
                     * 判断参数 ExtraTopicNum 是否已赋值
                     * @return ExtraTopicNum 是否已赋值
                     * 
                     */
                    bool ExtraTopicNumHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护
                     * @return EnableDeletionProtection 是否开启删除保护
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置是否开启删除保护
                     * @param _enableDeletionProtection 是否开启删除保护
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称，不能为空, 3-64个字符，只能包含数字、字母、“-”和“_”
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注信息，最多 128 个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 消息发送和接收的比例
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * 商品规格，从 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参获得。
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 消息保留时长（单位：小时），取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 默认值：DefaultRetention 参数
- 最小值：RetentionLowerLimit 参数
- 最大值：RetentionUpperLimit 参数
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * 是否开启弹性TPS
                     */
                    bool m_scaledTpsEnabled;
                    bool m_scaledTpsEnabledHasBeenSet;

                    /**
                     * 是否开启ACL
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * 最大可创建主题数，取值范围参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参：

- 最小值和默认值：TopicNumLimit 参数
- 最大值：TopicNumUpperLimit 参数
                     */
                    int64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * 免费额度之外的主题个数，免费额度参考 [DescribeProductSKUs](https://cloud.tencent.com/document/api/1493/107676) 接口中的 [ProductSKU](https://cloud.tencent.com/document/api/1493/96031#ProductSKU) 出参中的 TopicNumLimit 参数。
                     */
                    std::string m_extraTopicNum;
                    bool m_extraTopicNumHasBeenSet;

                    /**
                     * 是否开启删除保护
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEREQUEST_H_
