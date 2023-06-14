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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDCLOUDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDCLOUDORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSubOrderRefund.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * RefundCloudOrder请求参数结构体
                */
                class RefundCloudOrderRequest : public AbstractModel
                {
                public:
                    RefundCloudOrderRequest();
                    ~RefundCloudOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取米大师分配的支付主MidasAppId
                     * @return MidasAppId 米大师分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置米大师分配的支付主MidasAppId
                     * @param _midasAppId 米大师分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取用户Id，长度不小于5位，仅支持字母和数字的组合
                     * @return UserId 用户Id，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，长度不小于5位，仅支持字母和数字的组合
                     * @param _userId 用户Id，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @return RefundId 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * 
                     */
                    std::string GetRefundId() const;

                    /**
                     * 设置退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @param _refundId 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * 
                     */
                    void SetRefundId(const std::string& _refundId);

                    /**
                     * 判断参数 RefundId 是否已赋值
                     * @return RefundId 是否已赋值
                     * 
                     */
                    bool RefundIdHasBeenSet() const;

                    /**
                     * 获取退款金额，单位：分
当该字段为空或者为0时，系统会默认使用订单当实付金额作为退款金额
                     * @return TotalRefundAmt 退款金额，单位：分
当该字段为空或者为0时，系统会默认使用订单当实付金额作为退款金额
                     * 
                     */
                    int64_t GetTotalRefundAmt() const;

                    /**
                     * 设置退款金额，单位：分
当该字段为空或者为0时，系统会默认使用订单当实付金额作为退款金额
                     * @param _totalRefundAmt 退款金额，单位：分
当该字段为空或者为0时，系统会默认使用订单当实付金额作为退款金额
                     * 
                     */
                    void SetTotalRefundAmt(const int64_t& _totalRefundAmt);

                    /**
                     * 判断参数 TotalRefundAmt 是否已赋值
                     * @return TotalRefundAmt 是否已赋值
                     * 
                     */
                    bool TotalRefundAmtHasBeenSet() const;

                    /**
                     * 获取商品订单，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @return OutTradeNo 商品订单，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置商品订单，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * @param _outTradeNo 商品订单，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     * 
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return MidasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _midasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取平台应收金额，单位：分
                     * @return PlatformRefundAmt 平台应收金额，单位：分
                     * 
                     */
                    int64_t GetPlatformRefundAmt() const;

                    /**
                     * 设置平台应收金额，单位：分
                     * @param _platformRefundAmt 平台应收金额，单位：分
                     * 
                     */
                    void SetPlatformRefundAmt(const int64_t& _platformRefundAmt);

                    /**
                     * 判断参数 PlatformRefundAmt 是否已赋值
                     * @return PlatformRefundAmt 是否已赋值
                     * 
                     */
                    bool PlatformRefundAmtHasBeenSet() const;

                    /**
                     * 获取结算应收金额，单位：分
                     * @return MchRefundAmt 结算应收金额，单位：分
                     * 
                     */
                    int64_t GetMchRefundAmt() const;

                    /**
                     * 设置结算应收金额，单位：分
                     * @param _mchRefundAmt 结算应收金额，单位：分
                     * 
                     */
                    void SetMchRefundAmt(const int64_t& _mchRefundAmt);

                    /**
                     * 判断参数 MchRefundAmt 是否已赋值
                     * @return MchRefundAmt 是否已赋值
                     * 
                     */
                    bool MchRefundAmtHasBeenSet() const;

                    /**
                     * 获取支持多个子订单批量退款单个子订单退款支持传SubOutTradeNo
也支持传SubOrderRefundList，都传的时候以SubOrderRefundList为准。
如果传了子单退款细节，外部不需要再传退款金额，平台应退，商户应退金额
                     * @return SubOrderRefundList 支持多个子订单批量退款单个子订单退款支持传SubOutTradeNo
也支持传SubOrderRefundList，都传的时候以SubOrderRefundList为准。
如果传了子单退款细节，外部不需要再传退款金额，平台应退，商户应退金额
                     * 
                     */
                    std::vector<CloudSubOrderRefund> GetSubOrderRefundList() const;

                    /**
                     * 设置支持多个子订单批量退款单个子订单退款支持传SubOutTradeNo
也支持传SubOrderRefundList，都传的时候以SubOrderRefundList为准。
如果传了子单退款细节，外部不需要再传退款金额，平台应退，商户应退金额
                     * @param _subOrderRefundList 支持多个子订单批量退款单个子订单退款支持传SubOutTradeNo
也支持传SubOrderRefundList，都传的时候以SubOrderRefundList为准。
如果传了子单退款细节，外部不需要再传退款金额，平台应退，商户应退金额
                     * 
                     */
                    void SetSubOrderRefundList(const std::vector<CloudSubOrderRefund>& _subOrderRefundList);

                    /**
                     * 判断参数 SubOrderRefundList 是否已赋值
                     * @return SubOrderRefundList 是否已赋值
                     * 
                     */
                    bool SubOrderRefundListHasBeenSet() const;

                    /**
                     * 获取渠道订单号，当出现重复支付时，可以将重复支付订单的渠道订单号传入，以进行退款（注意：目前该重复支付订单的渠道订单号仅能通过米大师内部获取），更多重复支付订单退款说明，请参考[重复支付订单退款说明](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/receive-order/Refund.html#%E9%87%8D%E5%A4%8D%E6%94%AF%E4%BB%98%E8%AE%A2%E5%8D%95%E9%80%80%E6%AC%BE%E8%AF%B4%E6%98%8E)
                     * @return ChannelOrderId 渠道订单号，当出现重复支付时，可以将重复支付订单的渠道订单号传入，以进行退款（注意：目前该重复支付订单的渠道订单号仅能通过米大师内部获取），更多重复支付订单退款说明，请参考[重复支付订单退款说明](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/receive-order/Refund.html#%E9%87%8D%E5%A4%8D%E6%94%AF%E4%BB%98%E8%AE%A2%E5%8D%95%E9%80%80%E6%AC%BE%E8%AF%B4%E6%98%8E)
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置渠道订单号，当出现重复支付时，可以将重复支付订单的渠道订单号传入，以进行退款（注意：目前该重复支付订单的渠道订单号仅能通过米大师内部获取），更多重复支付订单退款说明，请参考[重复支付订单退款说明](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/receive-order/Refund.html#%E9%87%8D%E5%A4%8D%E6%94%AF%E4%BB%98%E8%AE%A2%E5%8D%95%E9%80%80%E6%AC%BE%E8%AF%B4%E6%98%8E)
                     * @param _channelOrderId 渠道订单号，当出现重复支付时，可以将重复支付订单的渠道订单号传入，以进行退款（注意：目前该重复支付订单的渠道订单号仅能通过米大师内部获取），更多重复支付订单退款说明，请参考[重复支付订单退款说明](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/receive-order/Refund.html#%E9%87%8D%E5%A4%8D%E6%94%AF%E4%BB%98%E8%AE%A2%E5%8D%95%E9%80%80%E6%AC%BE%E8%AF%B4%E6%98%8E)
                     * 
                     */
                    void SetChannelOrderId(const std::string& _channelOrderId);

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取通知地址
                     * @return RefundNotifyUrl 通知地址
                     * 
                     */
                    std::string GetRefundNotifyUrl() const;

                    /**
                     * 设置通知地址
                     * @param _refundNotifyUrl 通知地址
                     * 
                     */
                    void SetRefundNotifyUrl(const std::string& _refundNotifyUrl);

                    /**
                     * 判断参数 RefundNotifyUrl 是否已赋值
                     * @return RefundNotifyUrl 是否已赋值
                     * 
                     */
                    bool RefundNotifyUrlHasBeenSet() const;

                    /**
                     * 获取透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     * @return Metadata 透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     * @param _metadata 透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取渠道扩展退款促销列表，可将各个渠道的退款促销信息放于该列表
                     * @return ExternalRefundPromptGroupList 渠道扩展退款促销列表，可将各个渠道的退款促销信息放于该列表
                     * 
                     */
                    std::string GetExternalRefundPromptGroupList() const;

                    /**
                     * 设置渠道扩展退款促销列表，可将各个渠道的退款促销信息放于该列表
                     * @param _externalRefundPromptGroupList 渠道扩展退款促销列表，可将各个渠道的退款促销信息放于该列表
                     * 
                     */
                    void SetExternalRefundPromptGroupList(const std::string& _externalRefundPromptGroupList);

                    /**
                     * 判断参数 ExternalRefundPromptGroupList 是否已赋值
                     * @return ExternalRefundPromptGroupList 是否已赋值
                     * 
                     */
                    bool ExternalRefundPromptGroupListHasBeenSet() const;

                private:

                    /**
                     * 米大师分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 用户Id，长度不小于5位，仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 退款订单号，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    std::string m_refundId;
                    bool m_refundIdHasBeenSet;

                    /**
                     * 退款金额，单位：分
当该字段为空或者为0时，系统会默认使用订单当实付金额作为退款金额
                     */
                    int64_t m_totalRefundAmt;
                    bool m_totalRefundAmtHasBeenSet;

                    /**
                     * 商品订单，仅支持数字、字母、下划线（_）、横杠字符（-）、点（.）的组合
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 平台应收金额，单位：分
                     */
                    int64_t m_platformRefundAmt;
                    bool m_platformRefundAmtHasBeenSet;

                    /**
                     * 结算应收金额，单位：分
                     */
                    int64_t m_mchRefundAmt;
                    bool m_mchRefundAmtHasBeenSet;

                    /**
                     * 支持多个子订单批量退款单个子订单退款支持传SubOutTradeNo
也支持传SubOrderRefundList，都传的时候以SubOrderRefundList为准。
如果传了子单退款细节，外部不需要再传退款金额，平台应退，商户应退金额
                     */
                    std::vector<CloudSubOrderRefund> m_subOrderRefundList;
                    bool m_subOrderRefundListHasBeenSet;

                    /**
                     * 渠道订单号，当出现重复支付时，可以将重复支付订单的渠道订单号传入，以进行退款（注意：目前该重复支付订单的渠道订单号仅能通过米大师内部获取），更多重复支付订单退款说明，请参考[重复支付订单退款说明](https://dev.tke.midas.qq.com/juxin-doc-next/apidocs/receive-order/Refund.html#%E9%87%8D%E5%A4%8D%E6%94%AF%E4%BB%98%E8%AE%A2%E5%8D%95%E9%80%80%E6%AC%BE%E8%AF%B4%E6%98%8E)
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 通知地址
                     */
                    std::string m_refundNotifyUrl;
                    bool m_refundNotifyUrlHasBeenSet;

                    /**
                     * 透传字段，退款成功回调透传给应用，用于开发者透传自定义内容
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 渠道扩展退款促销列表，可将各个渠道的退款促销信息放于该列表
                     */
                    std::string m_externalRefundPromptGroupList;
                    bool m_externalRefundPromptGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDCLOUDORDERREQUEST_H_
