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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CHANNELCONTRACTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CHANNELCONTRACTINFO_H_

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
                * 米大师内部存放的合约信息
                */
                class ChannelContractInfo : public AbstractModel
                {
                public:
                    ChannelContractInfo();
                    ~ChannelContractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部合约协议号
                     * @return OutContractCode 外部合约协议号
                     * 
                     */
                    std::string GetOutContractCode() const;

                    /**
                     * 设置外部合约协议号
                     * @param _outContractCode 外部合约协议号
                     * 
                     */
                    void SetOutContractCode(const std::string& _outContractCode);

                    /**
                     * 判断参数 OutContractCode 是否已赋值
                     * @return OutContractCode 是否已赋值
                     * 
                     */
                    bool OutContractCodeHasBeenSet() const;

                    /**
                     * 获取米大师内部生成的合约协议号
                     * @return ChannelContractCode 米大师内部生成的合约协议号
                     * 
                     */
                    std::string GetChannelContractCode() const;

                    /**
                     * 设置米大师内部生成的合约协议号
                     * @param _channelContractCode 米大师内部生成的合约协议号
                     * 
                     */
                    void SetChannelContractCode(const std::string& _channelContractCode);

                    /**
                     * 判断参数 ChannelContractCode 是否已赋值
                     * @return ChannelContractCode 是否已赋值
                     * 
                     */
                    bool ChannelContractCodeHasBeenSet() const;

                private:

                    /**
                     * 外部合约协议号
                     */
                    std::string m_outContractCode;
                    bool m_outContractCodeHasBeenSet;

                    /**
                     * 米大师内部生成的合约协议号
                     */
                    std::string m_channelContractCode;
                    bool m_channelContractCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CHANNELCONTRACTINFO_H_
