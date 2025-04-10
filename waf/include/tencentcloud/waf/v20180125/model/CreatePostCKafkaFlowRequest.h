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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPOSTCKAFKAFLOWREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPOSTCKAFKAFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreatePostCKafkaFlow请求参数结构体
                */
                class CreatePostCKafkaFlowRequest : public AbstractModel
                {
                public:
                    CreatePostCKafkaFlowRequest();
                    ~CreatePostCKafkaFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递的CKafka所在区域
                     * @return CKafkaRegion 投递的CKafka所在区域
                     * 
                     */
                    std::string GetCKafkaRegion() const;

                    /**
                     * 设置投递的CKafka所在区域
                     * @param _cKafkaRegion 投递的CKafka所在区域
                     * 
                     */
                    void SetCKafkaRegion(const std::string& _cKafkaRegion);

                    /**
                     * 判断参数 CKafkaRegion 是否已赋值
                     * @return CKafkaRegion 是否已赋值
                     * 
                     */
                    bool CKafkaRegionHasBeenSet() const;

                    /**
                     * 获取客户的CKafka 实例ID
                     * @return CKafkaID 客户的CKafka 实例ID
                     * 
                     */
                    std::string GetCKafkaID() const;

                    /**
                     * 设置客户的CKafka 实例ID
                     * @param _cKafkaID 客户的CKafka 实例ID
                     * 
                     */
                    void SetCKafkaID(const std::string& _cKafkaID);

                    /**
                     * 判断参数 CKafkaID 是否已赋值
                     * @return CKafkaID 是否已赋值
                     * 
                     */
                    bool CKafkaIDHasBeenSet() const;

                    /**
                     * 获取支撑环境是IP:PORT，外网环境是domain:PORT
                     * @return Brokers 支撑环境是IP:PORT，外网环境是domain:PORT
                     * 
                     */
                    std::string GetBrokers() const;

                    /**
                     * 设置支撑环境是IP:PORT，外网环境是domain:PORT
                     * @param _brokers 支撑环境是IP:PORT，外网环境是domain:PORT
                     * 
                     */
                    void SetBrokers(const std::string& _brokers);

                    /**
                     * 判断参数 Brokers 是否已赋值
                     * @return Brokers 是否已赋值
                     * 
                     */
                    bool BrokersHasBeenSet() const;

                    /**
                     * 获取默认为none，支持snappy、gzip和lz4压缩，推荐snappy
                     * @return Compression 默认为none，支持snappy、gzip和lz4压缩，推荐snappy
                     * 
                     */
                    std::string GetCompression() const;

                    /**
                     * 设置默认为none，支持snappy、gzip和lz4压缩，推荐snappy
                     * @param _compression 默认为none，支持snappy、gzip和lz4压缩，推荐snappy
                     * 
                     */
                    void SetCompression(const std::string& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取1-外网TGW，2-支撑环境，默认为支撑环境
                     * @return VipType 1-外网TGW，2-支撑环境，默认为支撑环境
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置1-外网TGW，2-支撑环境，默认为支撑环境
                     * @param _vipType 1-外网TGW，2-支撑环境，默认为支撑环境
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取1-访问日志，2-攻击日志，默认为访问日志
                     * @return LogType 1-访问日志，2-攻击日志，默认为访问日志
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置1-访问日志，2-攻击日志，默认为访问日志
                     * @param _logType 1-访问日志，2-攻击日志，默认为访问日志
                     * 
                     */
                    void SetLogType(const int64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取主题名称，默认不传或者传空字符串，默认值为waf_post_access_log
                     * @return Topic 主题名称，默认不传或者传空字符串，默认值为waf_post_access_log
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称，默认不传或者传空字符串，默认值为waf_post_access_log
                     * @param _topic 主题名称，默认不传或者传空字符串，默认值为waf_post_access_log
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取kafka集群的版本号
                     * @return KafkaVersion kafka集群的版本号
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置kafka集群的版本号
                     * @param _kafkaVersion kafka集群的版本号
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                private:

                    /**
                     * 投递的CKafka所在区域
                     */
                    std::string m_cKafkaRegion;
                    bool m_cKafkaRegionHasBeenSet;

                    /**
                     * 客户的CKafka 实例ID
                     */
                    std::string m_cKafkaID;
                    bool m_cKafkaIDHasBeenSet;

                    /**
                     * 支撑环境是IP:PORT，外网环境是domain:PORT
                     */
                    std::string m_brokers;
                    bool m_brokersHasBeenSet;

                    /**
                     * 默认为none，支持snappy、gzip和lz4压缩，推荐snappy
                     */
                    std::string m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 1-外网TGW，2-支撑环境，默认为支撑环境
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * 1-访问日志，2-攻击日志，默认为访问日志
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 主题名称，默认不传或者传空字符串，默认值为waf_post_access_log
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * kafka集群的版本号
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEPOSTCKAFKAFLOWREQUEST_H_
