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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDCHANNELDATAREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDCHANNELDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryCloudChannelData请求参数结构体
                */
                class QueryCloudChannelDataRequest : public AbstractModel
                {
                public:
                    QueryCloudChannelDataRequest();
                    ~QueryCloudChannelDataRequest() = default;
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
                     * 获取业务订单号，外部订单号
                     * @return OutOrderNo 业务订单号，外部订单号
                     * 
                     */
                    std::string GetOutOrderNo() const;

                    /**
                     * 设置业务订单号，外部订单号
                     * @param _outOrderNo 业务订单号，外部订单号
                     * 
                     */
                    void SetOutOrderNo(const std::string& _outOrderNo);

                    /**
                     * 判断参数 OutOrderNo 是否已赋值
                     * @return OutOrderNo 是否已赋值
                     * 
                     */
                    bool OutOrderNoHasBeenSet() const;

                    /**
                     * 获取数据类型
PAYMENT:支付
                     * @return ExternalChannelDataType 数据类型
PAYMENT:支付
                     * 
                     */
                    std::string GetExternalChannelDataType() const;

                    /**
                     * 设置数据类型
PAYMENT:支付
                     * @param _externalChannelDataType 数据类型
PAYMENT:支付
                     * 
                     */
                    void SetExternalChannelDataType(const std::string& _externalChannelDataType);

                    /**
                     * 判断参数 ExternalChannelDataType 是否已赋值
                     * @return ExternalChannelDataType 是否已赋值
                     * 
                     */
                    bool ExternalChannelDataTypeHasBeenSet() const;

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
                     * 获取子应用ID
                     * @return SubAppId 子应用ID
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置子应用ID
                     * @param _subAppId 子应用ID
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取渠道订单号
                     * @return ChannelOrderId 渠道订单号
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置渠道订单号
                     * @param _channelOrderId 渠道订单号
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
                     * 获取渠道名称，指定渠道查询
wechat:微信支付
                     * @return Channel 渠道名称，指定渠道查询
wechat:微信支付
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道名称，指定渠道查询
wechat:微信支付
                     * @param _channel 渠道名称，指定渠道查询
wechat:微信支付
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * 米大师分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 业务订单号，外部订单号
                     */
                    std::string m_outOrderNo;
                    bool m_outOrderNoHasBeenSet;

                    /**
                     * 数据类型
PAYMENT:支付
                     */
                    std::string m_externalChannelDataType;
                    bool m_externalChannelDataTypeHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 子应用ID
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 渠道订单号
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 渠道名称，指定渠道查询
wechat:微信支付
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDCHANNELDATAREQUEST_H_
