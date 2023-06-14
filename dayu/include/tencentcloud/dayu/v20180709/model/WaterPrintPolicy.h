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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTPOLICY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 水印策略参数
                */
                class WaterPrintPolicy : public AbstractModel
                {
                public:
                    WaterPrintPolicy();
                    ~WaterPrintPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TCP端口段，例如["2000-3000","3500-4000"]
                     * @return TcpPortList TCP端口段，例如["2000-3000","3500-4000"]
                     * 
                     */
                    std::vector<std::string> GetTcpPortList() const;

                    /**
                     * 设置TCP端口段，例如["2000-3000","3500-4000"]
                     * @param _tcpPortList TCP端口段，例如["2000-3000","3500-4000"]
                     * 
                     */
                    void SetTcpPortList(const std::vector<std::string>& _tcpPortList);

                    /**
                     * 判断参数 TcpPortList 是否已赋值
                     * @return TcpPortList 是否已赋值
                     * 
                     */
                    bool TcpPortListHasBeenSet() const;

                    /**
                     * 获取UDP端口段，例如["2000-3000","3500-4000"]
                     * @return UdpPortList UDP端口段，例如["2000-3000","3500-4000"]
                     * 
                     */
                    std::vector<std::string> GetUdpPortList() const;

                    /**
                     * 设置UDP端口段，例如["2000-3000","3500-4000"]
                     * @param _udpPortList UDP端口段，例如["2000-3000","3500-4000"]
                     * 
                     */
                    void SetUdpPortList(const std::vector<std::string>& _udpPortList);

                    /**
                     * 判断参数 UdpPortList 是否已赋值
                     * @return UdpPortList 是否已赋值
                     * 
                     */
                    bool UdpPortListHasBeenSet() const;

                    /**
                     * 获取水印偏移量，取值范围[0, 100)
                     * @return Offset 水印偏移量，取值范围[0, 100)
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置水印偏移量，取值范围[0, 100)
                     * @param _offset 水印偏移量，取值范围[0, 100)
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取是否自动剥离，取值[0（不自动剥离），1（自动剥离）]
                     * @return RemoveSwitch 是否自动剥离，取值[0（不自动剥离），1（自动剥离）]
                     * 
                     */
                    uint64_t GetRemoveSwitch() const;

                    /**
                     * 设置是否自动剥离，取值[0（不自动剥离），1（自动剥离）]
                     * @param _removeSwitch 是否自动剥离，取值[0（不自动剥离），1（自动剥离）]
                     * 
                     */
                    void SetRemoveSwitch(const uint64_t& _removeSwitch);

                    /**
                     * 判断参数 RemoveSwitch 是否已赋值
                     * @return RemoveSwitch 是否已赋值
                     * 
                     */
                    bool RemoveSwitchHasBeenSet() const;

                    /**
                     * 获取是否开启，取值[0（没有开启），1（已开启）]
                     * @return OpenStatus 是否开启，取值[0（没有开启），1（已开启）]
                     * 
                     */
                    uint64_t GetOpenStatus() const;

                    /**
                     * 设置是否开启，取值[0（没有开启），1（已开启）]
                     * @param _openStatus 是否开启，取值[0（没有开启），1（已开启）]
                     * 
                     */
                    void SetOpenStatus(const uint64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                private:

                    /**
                     * TCP端口段，例如["2000-3000","3500-4000"]
                     */
                    std::vector<std::string> m_tcpPortList;
                    bool m_tcpPortListHasBeenSet;

                    /**
                     * UDP端口段，例如["2000-3000","3500-4000"]
                     */
                    std::vector<std::string> m_udpPortList;
                    bool m_udpPortListHasBeenSet;

                    /**
                     * 水印偏移量，取值范围[0, 100)
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否自动剥离，取值[0（不自动剥离），1（自动剥离）]
                     */
                    uint64_t m_removeSwitch;
                    bool m_removeSwitchHasBeenSet;

                    /**
                     * 是否开启，取值[0（没有开启），1（已开启）]
                     */
                    uint64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_WATERPRINTPOLICY_H_
