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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSETTLEORDERRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSETTLEORDERRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 云企付结算申请结果
                */
                class ApplyOpenBankSettleOrderResult : public AbstractModel
                {
                public:
                    ApplyOpenBankSettleOrderResult();
                    ~ApplyOpenBankSettleOrderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部结算流水号
                     * @return OutSettleId 外部结算流水号
                     * 
                     */
                    std::string GetOutSettleId() const;

                    /**
                     * 设置外部结算流水号
                     * @param _outSettleId 外部结算流水号
                     * 
                     */
                    void SetOutSettleId(const std::string& _outSettleId);

                    /**
                     * 判断参数 OutSettleId 是否已赋值
                     * @return OutSettleId 是否已赋值
                     * 
                     */
                    bool OutSettleIdHasBeenSet() const;

                    /**
                     * 获取渠道结算流水号
                     * @return ChannelSettleId 渠道结算流水号
                     * 
                     */
                    std::string GetChannelSettleId() const;

                    /**
                     * 设置渠道结算流水号
                     * @param _channelSettleId 渠道结算流水号
                     * 
                     */
                    void SetChannelSettleId(const std::string& _channelSettleId);

                    /**
                     * 判断参数 ChannelSettleId 是否已赋值
                     * @return ChannelSettleId 是否已赋值
                     * 
                     */
                    bool ChannelSettleIdHasBeenSet() const;

                    /**
                     * 获取退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
                     * @return SettleStatus 退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
                     * 
                     */
                    std::string GetSettleStatus() const;

                    /**
                     * 设置退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
                     * @param _settleStatus 退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
                     * 
                     */
                    void SetSettleStatus(const std::string& _settleStatus);

                    /**
                     * 判断参数 SettleStatus 是否已赋值
                     * @return SettleStatus 是否已赋值
                     * 
                     */
                    bool SettleStatusHasBeenSet() const;

                private:

                    /**
                     * 外部结算流水号
                     */
                    std::string m_outSettleId;
                    bool m_outSettleIdHasBeenSet;

                    /**
                     * 渠道结算流水号
                     */
                    std::string m_channelSettleId;
                    bool m_channelSettleIdHasBeenSet;

                    /**
                     * 退款状态。
SUCCESS：结算成功；
FAILED：结算失败；
PROCESSING：结算中;
INIT:初始化;
ACCEPT_FAILED:受理失败,底层银行返回订单不存在
ACCEPTED：受理成功
_UNKNOWN：默认未知
                     */
                    std::string m_settleStatus;
                    bool m_settleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSETTLEORDERRESULT_H_
