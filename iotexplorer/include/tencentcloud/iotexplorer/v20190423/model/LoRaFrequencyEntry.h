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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LORAFREQUENCYENTRY_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LORAFREQUENCYENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * LoRa自定义频点信息
                */
                class LoRaFrequencyEntry : public AbstractModel
                {
                public:
                    LoRaFrequencyEntry();
                    ~LoRaFrequencyEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取频点唯一ID
                     * @return FreqId 频点唯一ID
                     * 
                     */
                    std::string GetFreqId() const;

                    /**
                     * 设置频点唯一ID
                     * @param _freqId 频点唯一ID
                     * 
                     */
                    void SetFreqId(const std::string& _freqId);

                    /**
                     * 判断参数 FreqId 是否已赋值
                     * @return FreqId 是否已赋值
                     * 
                     */
                    bool FreqIdHasBeenSet() const;

                    /**
                     * 获取频点名称
                     * @return FreqName 频点名称
                     * 
                     */
                    std::string GetFreqName() const;

                    /**
                     * 设置频点名称
                     * @param _freqName 频点名称
                     * 
                     */
                    void SetFreqName(const std::string& _freqName);

                    /**
                     * 判断参数 FreqName 是否已赋值
                     * @return FreqName 是否已赋值
                     * 
                     */
                    bool FreqNameHasBeenSet() const;

                    /**
                     * 获取频点描述
                     * @return Description 频点描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置频点描述
                     * @param _description 频点描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取数据上行信道
                     * @return ChannelsDataUp 数据上行信道
                     * 
                     */
                    std::vector<uint64_t> GetChannelsDataUp() const;

                    /**
                     * 设置数据上行信道
                     * @param _channelsDataUp 数据上行信道
                     * 
                     */
                    void SetChannelsDataUp(const std::vector<uint64_t>& _channelsDataUp);

                    /**
                     * 判断参数 ChannelsDataUp 是否已赋值
                     * @return ChannelsDataUp 是否已赋值
                     * 
                     */
                    bool ChannelsDataUpHasBeenSet() const;

                    /**
                     * 获取数据下行信道RX1
                     * @return ChannelsDataRX1 数据下行信道RX1
                     * 
                     */
                    std::vector<uint64_t> GetChannelsDataRX1() const;

                    /**
                     * 设置数据下行信道RX1
                     * @param _channelsDataRX1 数据下行信道RX1
                     * 
                     */
                    void SetChannelsDataRX1(const std::vector<uint64_t>& _channelsDataRX1);

                    /**
                     * 判断参数 ChannelsDataRX1 是否已赋值
                     * @return ChannelsDataRX1 是否已赋值
                     * 
                     */
                    bool ChannelsDataRX1HasBeenSet() const;

                    /**
                     * 获取数据下行信道RX2
                     * @return ChannelsDataRX2 数据下行信道RX2
                     * 
                     */
                    std::vector<uint64_t> GetChannelsDataRX2() const;

                    /**
                     * 设置数据下行信道RX2
                     * @param _channelsDataRX2 数据下行信道RX2
                     * 
                     */
                    void SetChannelsDataRX2(const std::vector<uint64_t>& _channelsDataRX2);

                    /**
                     * 判断参数 ChannelsDataRX2 是否已赋值
                     * @return ChannelsDataRX2 是否已赋值
                     * 
                     */
                    bool ChannelsDataRX2HasBeenSet() const;

                    /**
                     * 获取入网上行信道
                     * @return ChannelsJoinUp 入网上行信道
                     * 
                     */
                    std::vector<uint64_t> GetChannelsJoinUp() const;

                    /**
                     * 设置入网上行信道
                     * @param _channelsJoinUp 入网上行信道
                     * 
                     */
                    void SetChannelsJoinUp(const std::vector<uint64_t>& _channelsJoinUp);

                    /**
                     * 判断参数 ChannelsJoinUp 是否已赋值
                     * @return ChannelsJoinUp 是否已赋值
                     * 
                     */
                    bool ChannelsJoinUpHasBeenSet() const;

                    /**
                     * 获取入网下行RX1信道
                     * @return ChannelsJoinRX1 入网下行RX1信道
                     * 
                     */
                    std::vector<uint64_t> GetChannelsJoinRX1() const;

                    /**
                     * 设置入网下行RX1信道
                     * @param _channelsJoinRX1 入网下行RX1信道
                     * 
                     */
                    void SetChannelsJoinRX1(const std::vector<uint64_t>& _channelsJoinRX1);

                    /**
                     * 判断参数 ChannelsJoinRX1 是否已赋值
                     * @return ChannelsJoinRX1 是否已赋值
                     * 
                     */
                    bool ChannelsJoinRX1HasBeenSet() const;

                    /**
                     * 获取入网下行RX2信道
                     * @return ChannelsJoinRX2 入网下行RX2信道
                     * 
                     */
                    std::vector<uint64_t> GetChannelsJoinRX2() const;

                    /**
                     * 设置入网下行RX2信道
                     * @param _channelsJoinRX2 入网下行RX2信道
                     * 
                     */
                    void SetChannelsJoinRX2(const std::vector<uint64_t>& _channelsJoinRX2);

                    /**
                     * 判断参数 ChannelsJoinRX2 是否已赋值
                     * @return ChannelsJoinRX2 是否已赋值
                     * 
                     */
                    bool ChannelsJoinRX2HasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 频点唯一ID
                     */
                    std::string m_freqId;
                    bool m_freqIdHasBeenSet;

                    /**
                     * 频点名称
                     */
                    std::string m_freqName;
                    bool m_freqNameHasBeenSet;

                    /**
                     * 频点描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据上行信道
                     */
                    std::vector<uint64_t> m_channelsDataUp;
                    bool m_channelsDataUpHasBeenSet;

                    /**
                     * 数据下行信道RX1
                     */
                    std::vector<uint64_t> m_channelsDataRX1;
                    bool m_channelsDataRX1HasBeenSet;

                    /**
                     * 数据下行信道RX2
                     */
                    std::vector<uint64_t> m_channelsDataRX2;
                    bool m_channelsDataRX2HasBeenSet;

                    /**
                     * 入网上行信道
                     */
                    std::vector<uint64_t> m_channelsJoinUp;
                    bool m_channelsJoinUpHasBeenSet;

                    /**
                     * 入网下行RX1信道
                     */
                    std::vector<uint64_t> m_channelsJoinRX1;
                    bool m_channelsJoinRX1HasBeenSet;

                    /**
                     * 入网下行RX2信道
                     */
                    std::vector<uint64_t> m_channelsJoinRX2;
                    bool m_channelsJoinRX2HasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LORAFREQUENCYENTRY_H_
