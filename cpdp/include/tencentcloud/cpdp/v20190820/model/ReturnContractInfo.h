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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_RETURNCONTRACTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_RETURNCONTRACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ContractInfo.h>
#include <tencentcloud/cpdp/v20190820/model/ChannelReturnContractInfo.h>
#include <tencentcloud/cpdp/v20190820/model/ExternalReturnContractInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 返回的合约信息
                */
                class ReturnContractInfo : public AbstractModel
                {
                public:
                    ReturnContractInfo();
                    ~ReturnContractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合约信息
                     * @return ContractInfo 合约信息
                     * 
                     */
                    ContractInfo GetContractInfo() const;

                    /**
                     * 设置合约信息
                     * @param _contractInfo 合约信息
                     * 
                     */
                    void SetContractInfo(const ContractInfo& _contractInfo);

                    /**
                     * 判断参数 ContractInfo 是否已赋值
                     * @return ContractInfo 是否已赋值
                     * 
                     */
                    bool ContractInfoHasBeenSet() const;

                    /**
                     * 获取米大师内部生成的合约信息
                     * @return ChannelReturnContractInfo 米大师内部生成的合约信息
                     * 
                     */
                    ChannelReturnContractInfo GetChannelReturnContractInfo() const;

                    /**
                     * 设置米大师内部生成的合约信息
                     * @param _channelReturnContractInfo 米大师内部生成的合约信息
                     * 
                     */
                    void SetChannelReturnContractInfo(const ChannelReturnContractInfo& _channelReturnContractInfo);

                    /**
                     * 判断参数 ChannelReturnContractInfo 是否已赋值
                     * @return ChannelReturnContractInfo 是否已赋值
                     * 
                     */
                    bool ChannelReturnContractInfoHasBeenSet() const;

                    /**
                     * 获取第三方渠道合约信息
                     * @return ExternalReturnContractInfo 第三方渠道合约信息
                     * 
                     */
                    ExternalReturnContractInfo GetExternalReturnContractInfo() const;

                    /**
                     * 设置第三方渠道合约信息
                     * @param _externalReturnContractInfo 第三方渠道合约信息
                     * 
                     */
                    void SetExternalReturnContractInfo(const ExternalReturnContractInfo& _externalReturnContractInfo);

                    /**
                     * 判断参数 ExternalReturnContractInfo 是否已赋值
                     * @return ExternalReturnContractInfo 是否已赋值
                     * 
                     */
                    bool ExternalReturnContractInfoHasBeenSet() const;

                private:

                    /**
                     * 合约信息
                     */
                    ContractInfo m_contractInfo;
                    bool m_contractInfoHasBeenSet;

                    /**
                     * 米大师内部生成的合约信息
                     */
                    ChannelReturnContractInfo m_channelReturnContractInfo;
                    bool m_channelReturnContractInfoHasBeenSet;

                    /**
                     * 第三方渠道合约信息
                     */
                    ExternalReturnContractInfo m_externalReturnContractInfo;
                    bool m_externalReturnContractInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_RETURNCONTRACTINFO_H_
