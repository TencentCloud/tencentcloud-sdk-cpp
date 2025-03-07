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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyProject请求参数结构体
                */
                class ModifyProjectRequest : public AbstractModel
                {
                public:
                    ModifyProjectRequest();
                    ~ModifyProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目 id
                     * @return ID 项目 id
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置项目 id
                     * @param _iD 项目 id
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取应用名称(可选，不为空且最长为 200字符)
                     * @return Name 应用名称(可选，不为空且最长为 200字符)
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称(可选，不为空且最长为 200字符)
                     * @param _name 应用名称(可选，不为空且最长为 200字符)
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取项目网页地址(可选，最长为 256)
                     * @return URL 项目网页地址(可选，最长为 256)
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置项目网页地址(可选，最长为 256)
                     * @param _uRL 项目网页地址(可选，最长为 256)
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取项目仓库地址(可选，最长为 256)
                     * @return Repo 项目仓库地址(可选，最长为 256)
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置项目仓库地址(可选，最长为 256)
                     * @param _repo 项目仓库地址(可选，最长为 256)
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取项目需要转移到的实例 id(可选)
                     * @return InstanceID 项目需要转移到的实例 id(可选)
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置项目需要转移到的实例 id(可选)
                     * @param _instanceID 项目需要转移到的实例 id(可选)
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取项目采样率(可选)
                     * @return Rate 项目采样率(可选)
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置项目采样率(可选)
                     * @param _rate 项目采样率(可选)
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取是否开启聚类(可选)
                     * @return EnableURLGroup 是否开启聚类(可选)
                     * 
                     */
                    uint64_t GetEnableURLGroup() const;

                    /**
                     * 设置是否开启聚类(可选)
                     * @param _enableURLGroup 是否开启聚类(可选)
                     * 
                     */
                    void SetEnableURLGroup(const uint64_t& _enableURLGroup);

                    /**
                     * 判断参数 EnableURLGroup 是否已赋值
                     * @return EnableURLGroup 是否已赋值
                     * 
                     */
                    bool EnableURLGroupHasBeenSet() const;

                    /**
                     * 获取项目类型(可接受值为 "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * @return Type 项目类型(可接受值为 "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置项目类型(可接受值为 "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * @param _type 项目类型(可接受值为 "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取应用描述(可选，最长为 1000字符)
                     * @return Desc 应用描述(可选，最长为 1000字符)
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置应用描述(可选，最长为 1000字符)
                     * @param _desc 应用描述(可选，最长为 1000字符)
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取启动kafka配置
                     * @return EnableKafka 启动kafka配置
                     * 
                     */
                    uint64_t GetEnableKafka() const;

                    /**
                     * 设置启动kafka配置
                     * @param _enableKafka 启动kafka配置
                     * 
                     */
                    void SetEnableKafka(const uint64_t& _enableKafka);

                    /**
                     * 判断参数 EnableKafka 是否已赋值
                     * @return EnableKafka 是否已赋值
                     * 
                     */
                    bool EnableKafkaHasBeenSet() const;

                    /**
                     * 获取kafka_host
                     * @return KafkaHost kafka_host
                     * 
                     */
                    std::string GetKafkaHost() const;

                    /**
                     * 设置kafka_host
                     * @param _kafkaHost kafka_host
                     * 
                     */
                    void SetKafkaHost(const std::string& _kafkaHost);

                    /**
                     * 判断参数 KafkaHost 是否已赋值
                     * @return KafkaHost 是否已赋值
                     * 
                     */
                    bool KafkaHostHasBeenSet() const;

                    /**
                     * 获取topic
                     * @return KafkaTopic topic
                     * 
                     */
                    std::string GetKafkaTopic() const;

                    /**
                     * 设置topic
                     * @param _kafkaTopic topic
                     * 
                     */
                    void SetKafkaTopic(const std::string& _kafkaTopic);

                    /**
                     * 判断参数 KafkaTopic 是否已赋值
                     * @return KafkaTopic 是否已赋值
                     * 
                     */
                    bool KafkaTopicHasBeenSet() const;

                    /**
                     * 获取kafka_version
                     * @return KafkaVersion kafka_version
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置kafka_version
                     * @param _kafkaVersion kafka_version
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取kafka_username
                     * @return SaslUserName kafka_username
                     * 
                     */
                    std::string GetSaslUserName() const;

                    /**
                     * 设置kafka_username
                     * @param _saslUserName kafka_username
                     * 
                     */
                    void SetSaslUserName(const std::string& _saslUserName);

                    /**
                     * 判断参数 SaslUserName 是否已赋值
                     * @return SaslUserName 是否已赋值
                     * 
                     */
                    bool SaslUserNameHasBeenSet() const;

                    /**
                     * 获取kafka_pwd
                     * @return SaslPassword kafka_pwd
                     * 
                     */
                    std::string GetSaslPassword() const;

                    /**
                     * 设置kafka_pwd
                     * @param _saslPassword kafka_pwd
                     * 
                     */
                    void SetSaslPassword(const std::string& _saslPassword);

                    /**
                     * 判断参数 SaslPassword 是否已赋值
                     * @return SaslPassword 是否已赋值
                     * 
                     */
                    bool SaslPasswordHasBeenSet() const;

                    /**
                     * 获取SaslMechanism
                     * @return SaslMechanism SaslMechanism
                     * 
                     */
                    std::string GetSaslMechanism() const;

                    /**
                     * 设置SaslMechanism
                     * @param _saslMechanism SaslMechanism
                     * 
                     */
                    void SetSaslMechanism(const std::string& _saslMechanism);

                    /**
                     * 判断参数 SaslMechanism 是否已赋值
                     * @return SaslMechanism 是否已赋值
                     * 
                     */
                    bool SaslMechanismHasBeenSet() const;

                    /**
                     * 获取sink_id，日知汇算子id
                     * @return SinkId sink_id，日知汇算子id
                     * 
                     */
                    uint64_t GetSinkId() const;

                    /**
                     * 设置sink_id，日知汇算子id
                     * @param _sinkId sink_id，日知汇算子id
                     * 
                     */
                    void SetSinkId(const uint64_t& _sinkId);

                    /**
                     * 判断参数 SinkId 是否已赋值
                     * @return SinkId 是否已赋值
                     * 
                     */
                    bool SinkIdHasBeenSet() const;

                private:

                    /**
                     * 项目 id
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 应用名称(可选，不为空且最长为 200字符)
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目网页地址(可选，最长为 256)
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 项目仓库地址(可选，最长为 256)
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * 项目需要转移到的实例 id(可选)
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 项目采样率(可选)
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 是否开启聚类(可选)
                     */
                    uint64_t m_enableURLGroup;
                    bool m_enableURLGroupHasBeenSet;

                    /**
                     * 项目类型(可接受值为 "web", "mp", "android", "ios", "node", "hippy", "weex", "viola", "rn")
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 应用描述(可选，最长为 1000字符)
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 启动kafka配置
                     */
                    uint64_t m_enableKafka;
                    bool m_enableKafkaHasBeenSet;

                    /**
                     * kafka_host
                     */
                    std::string m_kafkaHost;
                    bool m_kafkaHostHasBeenSet;

                    /**
                     * topic
                     */
                    std::string m_kafkaTopic;
                    bool m_kafkaTopicHasBeenSet;

                    /**
                     * kafka_version
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * kafka_username
                     */
                    std::string m_saslUserName;
                    bool m_saslUserNameHasBeenSet;

                    /**
                     * kafka_pwd
                     */
                    std::string m_saslPassword;
                    bool m_saslPasswordHasBeenSet;

                    /**
                     * SaslMechanism
                     */
                    std::string m_saslMechanism;
                    bool m_saslMechanismHasBeenSet;

                    /**
                     * sink_id，日知汇算子id
                     */
                    uint64_t m_sinkId;
                    bool m_sinkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTREQUEST_H_
