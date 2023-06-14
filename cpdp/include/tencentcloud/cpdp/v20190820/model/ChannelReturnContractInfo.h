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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CHANNELRETURNCONTRACTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CHANNELRETURNCONTRACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ChannelContractInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 米大师内部生成的合约信息
                */
                class ChannelReturnContractInfo : public AbstractModel
                {
                public:
                    ChannelReturnContractInfo();
                    ~ChannelReturnContractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
                     * @return ContractStatus 平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
                     * 
                     */
                    std::string GetContractStatus() const;

                    /**
                     * 设置平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
                     * @param _contractStatus 平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
                     * 
                     */
                    void SetContractStatus(const std::string& _contractStatus);

                    /**
                     * 判断参数 ContractStatus 是否已赋值
                     * @return ContractStatus 是否已赋值
                     * 
                     */
                    bool ContractStatusHasBeenSet() const;

                    /**
                     * 获取米大师内部存放的合约信息
                     * @return ChannelContractInfo 米大师内部存放的合约信息
                     * 
                     */
                    ChannelContractInfo GetChannelContractInfo() const;

                    /**
                     * 设置米大师内部存放的合约信息
                     * @param _channelContractInfo 米大师内部存放的合约信息
                     * 
                     */
                    void SetChannelContractInfo(const ChannelContractInfo& _channelContractInfo);

                    /**
                     * 判断参数 ChannelContractInfo 是否已赋值
                     * @return ChannelContractInfo 是否已赋值
                     * 
                     */
                    bool ChannelContractInfoHasBeenSet() const;

                private:

                    /**
                     * 平台合约状态
协议状态，枚举值：
CONTRACT_STATUS_SIGNED：已签约
CONTRACT_STATUS_TERMINATED：未签约
CONTRACT_STATUS_PENDING：签约进行中
                     */
                    std::string m_contractStatus;
                    bool m_contractStatusHasBeenSet;

                    /**
                     * 米大师内部存放的合约信息
                     */
                    ChannelContractInfo m_channelContractInfo;
                    bool m_channelContractInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CHANNELRETURNCONTRACTINFO_H_
