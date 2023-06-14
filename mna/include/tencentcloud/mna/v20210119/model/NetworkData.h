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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_NETWORKDATA_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_NETWORKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 测速数据
                */
                class NetworkData : public AbstractModel
                {
                public:
                    NetworkData();
                    ~NetworkData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时延数组，最大长度30
                     * @return RTT 时延数组，最大长度30
                     * 
                     */
                    std::vector<double> GetRTT() const;

                    /**
                     * 设置时延数组，最大长度30
                     * @param _rTT 时延数组，最大长度30
                     * 
                     */
                    void SetRTT(const std::vector<double>& _rTT);

                    /**
                     * 判断参数 RTT 是否已赋值
                     * @return RTT 是否已赋值
                     * 
                     */
                    bool RTTHasBeenSet() const;

                    /**
                     * 获取丢包率
                     * @return Loss 丢包率
                     * 
                     */
                    double GetLoss() const;

                    /**
                     * 设置丢包率
                     * @param _loss 丢包率
                     * 
                     */
                    void SetLoss(const double& _loss);

                    /**
                     * 判断参数 Loss 是否已赋值
                     * @return Loss 是否已赋值
                     * 
                     */
                    bool LossHasBeenSet() const;

                    /**
                     * 获取抖动
                     * @return Jitter 抖动
                     * 
                     */
                    double GetJitter() const;

                    /**
                     * 设置抖动
                     * @param _jitter 抖动
                     * 
                     */
                    void SetJitter(const double& _jitter);

                    /**
                     * 判断参数 Jitter 是否已赋值
                     * @return Jitter 是否已赋值
                     * 
                     */
                    bool JitterHasBeenSet() const;

                    /**
                     * 获取10位秒级时间戳
                     * @return Timestamp 10位秒级时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置10位秒级时间戳
                     * @param _timestamp 10位秒级时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 时延数组，最大长度30
                     */
                    std::vector<double> m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * 丢包率
                     */
                    double m_loss;
                    bool m_lossHasBeenSet;

                    /**
                     * 抖动
                     */
                    double m_jitter;
                    bool m_jitterHasBeenSet;

                    /**
                     * 10位秒级时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_NETWORKDATA_H_
