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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERSPECINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERSPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ集群规格信息
                */
                class RabbitMQClusterSpecInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterSpecInfo();
                    ~RabbitMQClusterSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群规格名称
                     * @return SpecName 集群规格名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置集群规格名称
                     * @param _specName 集群规格名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取峰值tps
                     * @return MaxTps 峰值tps
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置峰值tps
                     * @param _maxTps 峰值tps
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取最大队列数
                     * @return MaxQueueNum 最大队列数
                     * 
                     */
                    uint64_t GetMaxQueueNum() const;

                    /**
                     * 设置最大队列数
                     * @param _maxQueueNum 最大队列数
                     * 
                     */
                    void SetMaxQueueNum(const uint64_t& _maxQueueNum);

                    /**
                     * 判断参数 MaxQueueNum 是否已赋值
                     * @return MaxQueueNum 是否已赋值
                     * 
                     */
                    bool MaxQueueNumHasBeenSet() const;

                    /**
                     * 获取最大交换机数
                     * @return MaxExchangeNum 最大交换机数
                     * 
                     */
                    uint64_t GetMaxExchangeNum() const;

                    /**
                     * 设置最大交换机数
                     * @param _maxExchangeNum 最大交换机数
                     * 
                     */
                    void SetMaxExchangeNum(const uint64_t& _maxExchangeNum);

                    /**
                     * 判断参数 MaxExchangeNum 是否已赋值
                     * @return MaxExchangeNum 是否已赋值
                     * 
                     */
                    bool MaxExchangeNumHasBeenSet() const;

                    /**
                     * 获取最大vhost数
                     * @return MaxVhostNum 最大vhost数
                     * 
                     */
                    uint64_t GetMaxVhostNum() const;

                    /**
                     * 设置最大vhost数
                     * @param _maxVhostNum 最大vhost数
                     * 
                     */
                    void SetMaxVhostNum(const uint64_t& _maxVhostNum);

                    /**
                     * 判断参数 MaxVhostNum 是否已赋值
                     * @return MaxVhostNum 是否已赋值
                     * 
                     */
                    bool MaxVhostNumHasBeenSet() const;

                    /**
                     * 获取最大连接数
                     * @return MaxConnNum 最大连接数
                     * 
                     */
                    uint64_t GetMaxConnNum() const;

                    /**
                     * 设置最大连接数
                     * @param _maxConnNum 最大连接数
                     * 
                     */
                    void SetMaxConnNum(const uint64_t& _maxConnNum);

                    /**
                     * 判断参数 MaxConnNum 是否已赋值
                     * @return MaxConnNum 是否已赋值
                     * 
                     */
                    bool MaxConnNumHasBeenSet() const;

                    /**
                     * 获取最大用户数
                     * @return MaxUserNum 最大用户数
                     * 
                     */
                    uint64_t GetMaxUserNum() const;

                    /**
                     * 设置最大用户数
                     * @param _maxUserNum 最大用户数
                     * 
                     */
                    void SetMaxUserNum(const uint64_t& _maxUserNum);

                    /**
                     * 判断参数 MaxUserNum 是否已赋值
                     * @return MaxUserNum 是否已赋值
                     * 
                     */
                    bool MaxUserNumHasBeenSet() const;

                    /**
                     * 获取峰值带宽，已废弃
                     * @return MaxBandWidth 峰值带宽，已废弃
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置峰值带宽，已废弃
                     * @param _maxBandWidth 峰值带宽，已废弃
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取公网带宽，已废弃
                     * @return PublicNetworkTps 公网带宽，已废弃
                     * 
                     */
                    uint64_t GetPublicNetworkTps() const;

                    /**
                     * 设置公网带宽，已废弃
                     * @param _publicNetworkTps 公网带宽，已废弃
                     * 
                     */
                    void SetPublicNetworkTps(const uint64_t& _publicNetworkTps);

                    /**
                     * 判断参数 PublicNetworkTps 是否已赋值
                     * @return PublicNetworkTps 是否已赋值
                     * 
                     */
                    bool PublicNetworkTpsHasBeenSet() const;

                    /**
                     * 获取实例对应的功能列表，true表示支持，false 表示不支持
                     * @return Features 实例对应的功能列表，true表示支持，false 表示不支持
                     * 
                     */
                    std::string GetFeatures() const;

                    /**
                     * 设置实例对应的功能列表，true表示支持，false 表示不支持
                     * @param _features 实例对应的功能列表，true表示支持，false 表示不支持
                     * 
                     */
                    void SetFeatures(const std::string& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                private:

                    /**
                     * 集群规格名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 峰值tps
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * 最大队列数
                     */
                    uint64_t m_maxQueueNum;
                    bool m_maxQueueNumHasBeenSet;

                    /**
                     * 最大交换机数
                     */
                    uint64_t m_maxExchangeNum;
                    bool m_maxExchangeNumHasBeenSet;

                    /**
                     * 最大vhost数
                     */
                    uint64_t m_maxVhostNum;
                    bool m_maxVhostNumHasBeenSet;

                    /**
                     * 最大连接数
                     */
                    uint64_t m_maxConnNum;
                    bool m_maxConnNumHasBeenSet;

                    /**
                     * 最大用户数
                     */
                    uint64_t m_maxUserNum;
                    bool m_maxUserNumHasBeenSet;

                    /**
                     * 峰值带宽，已废弃
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 公网带宽，已废弃
                     */
                    uint64_t m_publicNetworkTps;
                    bool m_publicNetworkTpsHasBeenSet;

                    /**
                     * 实例对应的功能列表，true表示支持，false 表示不支持
                     */
                    std::string m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERSPECINFO_H_
