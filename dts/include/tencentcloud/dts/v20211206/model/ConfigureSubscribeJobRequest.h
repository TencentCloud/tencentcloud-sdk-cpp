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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESUBSCRIBEJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESUBSCRIBEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/EndpointItem.h>
#include <tencentcloud/dts/v20211206/model/SubscribeKafkaConfig.h>
#include <tencentcloud/dts/v20211206/model/SubscribeObject.h>
#include <tencentcloud/dts/v20211206/model/PipelineInfo.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ConfigureSubscribeJob请求参数结构体
                */
                class ConfigureSubscribeJobRequest : public AbstractModel
                {
                public:
                    ConfigureSubscribeJobRequest();
                    ~ConfigureSubscribeJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的 ID
                     * @return SubscribeId 数据订阅实例的 ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅实例的 ID
                     * @param _subscribeId 数据订阅实例的 ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取数据订阅的类型，当 DatabaseType 不为 mongodb 时，枚举值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 DatabaseType 为 mongodb 时，枚举值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     * @return SubscribeMode 数据订阅的类型，当 DatabaseType 不为 mongodb 时，枚举值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 DatabaseType 为 mongodb 时，枚举值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     * 
                     */
                    std::string GetSubscribeMode() const;

                    /**
                     * 设置数据订阅的类型，当 DatabaseType 不为 mongodb 时，枚举值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 DatabaseType 为 mongodb 时，枚举值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     * @param _subscribeMode 数据订阅的类型，当 DatabaseType 不为 mongodb 时，枚举值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 DatabaseType 为 mongodb 时，枚举值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     * 
                     */
                    void SetSubscribeMode(const std::string& _subscribeMode);

                    /**
                     * 判断参数 SubscribeMode 是否已赋值
                     * @return SubscribeMode 是否已赋值
                     * 
                     */
                    bool SubscribeModeHasBeenSet() const;

                    /**
                     * 获取源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     * @return AccessType 源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     * @param _accessType 源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取数据库节点信息
                     * @return Endpoints 数据库节点信息
                     * 
                     */
                    std::vector<EndpointItem> GetEndpoints() const;

                    /**
                     * 设置数据库节点信息
                     * @param _endpoints 数据库节点信息
                     * 
                     */
                    void SetEndpoints(const std::vector<EndpointItem>& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取Kafka配置
                     * @return KafkaConfig Kafka配置
                     * 
                     */
                    SubscribeKafkaConfig GetKafkaConfig() const;

                    /**
                     * 设置Kafka配置
                     * @param _kafkaConfig Kafka配置
                     * 
                     */
                    void SetKafkaConfig(const SubscribeKafkaConfig& _kafkaConfig);

                    /**
                     * 判断参数 KafkaConfig 是否已赋值
                     * @return KafkaConfig 是否已赋值
                     * 
                     */
                    bool KafkaConfigHasBeenSet() const;

                    /**
                     * 获取订阅的数据库表信息，当 SubscribeMode 不为 all和ddl 时，SubscribeObjects 为必选参数
                     * @return SubscribeObjects 订阅的数据库表信息，当 SubscribeMode 不为 all和ddl 时，SubscribeObjects 为必选参数
                     * 
                     */
                    std::vector<SubscribeObject> GetSubscribeObjects() const;

                    /**
                     * 设置订阅的数据库表信息，当 SubscribeMode 不为 all和ddl 时，SubscribeObjects 为必选参数
                     * @param _subscribeObjects 订阅的数据库表信息，当 SubscribeMode 不为 all和ddl 时，SubscribeObjects 为必选参数
                     * 
                     */
                    void SetSubscribeObjects(const std::vector<SubscribeObject>& _subscribeObjects);

                    /**
                     * 判断参数 SubscribeObjects 是否已赋值
                     * @return SubscribeObjects 是否已赋值
                     * 
                     */
                    bool SubscribeObjectsHasBeenSet() const;

                    /**
                     * 获取订阅数据格式，如：protobuf、json、avro。注意具体可选值依赖当前链路支持能力，数据格式详情参考官网的消费demo文档
                     * @return Protocol 订阅数据格式，如：protobuf、json、avro。注意具体可选值依赖当前链路支持能力，数据格式详情参考官网的消费demo文档
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置订阅数据格式，如：protobuf、json、avro。注意具体可选值依赖当前链路支持能力，数据格式详情参考官网的消费demo文档
                     * @param _protocol 订阅数据格式，如：protobuf、json、avro。注意具体可选值依赖当前链路支持能力，数据格式详情参考官网的消费demo文档
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取mongo选填参数：输出聚合设置。
                     * @return PipelineInfo mongo选填参数：输出聚合设置。
                     * 
                     */
                    std::vector<PipelineInfo> GetPipelineInfo() const;

                    /**
                     * 设置mongo选填参数：输出聚合设置。
                     * @param _pipelineInfo mongo选填参数：输出聚合设置。
                     * 
                     */
                    void SetPipelineInfo(const std::vector<PipelineInfo>& _pipelineInfo);

                    /**
                     * 判断参数 PipelineInfo 是否已赋值
                     * @return PipelineInfo 是否已赋值
                     * 
                     */
                    bool PipelineInfoHasBeenSet() const;

                    /**
                     * 获取为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，填true处理，不填或填其他值不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream，不填也是默认changeStream。
其他业务暂没有可选参数。
                     * @return ExtraAttr 为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，填true处理，不填或填其他值不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream，不填也是默认changeStream。
其他业务暂没有可选参数。
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，填true处理，不填或填其他值不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream，不填也是默认changeStream。
其他业务暂没有可选参数。
                     * @param _extraAttr 为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，填true处理，不填或填其他值不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream，不填也是默认changeStream。
其他业务暂没有可选参数。
                     * 
                     */
                    void SetExtraAttr(const std::vector<KeyValuePairOption>& _extraAttr);

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的 ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 数据订阅的类型，当 DatabaseType 不为 mongodb 时，枚举值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 DatabaseType 为 mongodb 时，枚举值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     */
                    std::string m_subscribeMode;
                    bool m_subscribeModeHasBeenSet;

                    /**
                     * 源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 数据库节点信息
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * Kafka配置
                     */
                    SubscribeKafkaConfig m_kafkaConfig;
                    bool m_kafkaConfigHasBeenSet;

                    /**
                     * 订阅的数据库表信息，当 SubscribeMode 不为 all和ddl 时，SubscribeObjects 为必选参数
                     */
                    std::vector<SubscribeObject> m_subscribeObjects;
                    bool m_subscribeObjectsHasBeenSet;

                    /**
                     * 订阅数据格式，如：protobuf、json、avro。注意具体可选值依赖当前链路支持能力，数据格式详情参考官网的消费demo文档
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * mongo选填参数：输出聚合设置。
                     */
                    std::vector<PipelineInfo> m_pipelineInfo;
                    bool m_pipelineInfoHasBeenSet;

                    /**
                     * 为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，填true处理，不填或填其他值不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream，不填也是默认changeStream。
其他业务暂没有可选参数。
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESUBSCRIBEJOBREQUEST_H_
