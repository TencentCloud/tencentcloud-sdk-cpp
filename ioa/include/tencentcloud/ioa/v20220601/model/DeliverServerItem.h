/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DELIVERSERVERITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DELIVERSERVERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 编辑的数据内容
                */
                class DeliverServerItem : public AbstractModel
                {
                public:
                    DeliverServerItem();
                    ~DeliverServerItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务器id  (创建时忽略)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID <p>服务器id  (创建时忽略)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>服务器id  (创建时忽略)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD <p>服务器id  (创建时忽略)</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>转发服务器地址类型 4:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>转发服务器地址类型 4:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>转发服务器地址类型 4:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>转发服务器地址类型 4:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>服务器描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>服务器描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>服务器描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>服务器描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>syslog服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSyslogAddress <p>syslog服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSyslogAddress() const;

                    /**
                     * 设置<p>syslog服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSyslogAddress <p>syslog服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSyslogAddress(const std::string& _targetSyslogAddress);

                    /**
                     * 判断参数 TargetSyslogAddress 是否已赋值
                     * @return TargetSyslogAddress 是否已赋值
                     * 
                     */
                    bool TargetSyslogAddressHasBeenSet() const;

                    /**
                     * 获取<p>syslog协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSyslogProtocol <p>syslog协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSyslogProtocol() const;

                    /**
                     * 设置<p>syslog协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSyslogProtocol <p>syslog协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSyslogProtocol(const std::string& _targetSyslogProtocol);

                    /**
                     * 判断参数 TargetSyslogProtocol 是否已赋值
                     * @return TargetSyslogProtocol 是否已赋值
                     * 
                     */
                    bool TargetSyslogProtocolHasBeenSet() const;

                    /**
                     * 获取<p>syslog协议端口(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSyslogPort <p>syslog协议端口(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTargetSyslogPort() const;

                    /**
                     * 设置<p>syslog协议端口(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSyslogPort <p>syslog协议端口(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSyslogPort(const uint64_t& _targetSyslogPort);

                    /**
                     * 判断参数 TargetSyslogPort 是否已赋值
                     * @return TargetSyslogPort 是否已赋值
                     * 
                     */
                    bool TargetSyslogPortHasBeenSet() const;

                    /**
                     * 获取<p>syslog设备/Facility</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyslogFacility <p>syslog设备/Facility</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSyslogFacility() const;

                    /**
                     * 设置<p>syslog设备/Facility</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syslogFacility <p>syslog设备/Facility</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyslogFacility(const std::string& _syslogFacility);

                    /**
                     * 判断参数 SyslogFacility 是否已赋值
                     * @return SyslogFacility 是否已赋值
                     * 
                     */
                    bool SyslogFacilityHasBeenSet() const;

                    /**
                     * 获取<p>Kafka服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetKafkaAddress <p>Kafka服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetKafkaAddress() const;

                    /**
                     * 设置<p>Kafka服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetKafkaAddress <p>Kafka服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetKafkaAddress(const std::string& _targetKafkaAddress);

                    /**
                     * 判断参数 TargetKafkaAddress 是否已赋值
                     * @return TargetKafkaAddress 是否已赋值
                     * 
                     */
                    bool TargetKafkaAddressHasBeenSet() const;

                    /**
                     * 获取<p>Kafka主题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetKafkaTopic <p>Kafka主题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetKafkaTopic() const;

                    /**
                     * 设置<p>Kafka主题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetKafkaTopic <p>Kafka主题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetKafkaTopic(const std::string& _targetKafkaTopic);

                    /**
                     * 判断参数 TargetKafkaTopic 是否已赋值
                     * @return TargetKafkaTopic 是否已赋值
                     * 
                     */
                    bool TargetKafkaTopicHasBeenSet() const;

                    /**
                     * 获取<p>Kafka版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaVersion <p>Kafka版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置<p>Kafka版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaVersion <p>Kafka版本</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>Kafka sasl用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaSaslUserName <p>Kafka sasl用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaSaslUserName() const;

                    /**
                     * 设置<p>Kafka sasl用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaSaslUserName <p>Kafka sasl用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaSaslUserName(const std::string& _kafkaSaslUserName);

                    /**
                     * 判断参数 KafkaSaslUserName 是否已赋值
                     * @return KafkaSaslUserName 是否已赋值
                     * 
                     */
                    bool KafkaSaslUserNameHasBeenSet() const;

                    /**
                     * 获取<p>Kafka sasl密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaSaslPassword <p>Kafka sasl密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaSaslPassword() const;

                    /**
                     * 设置<p>Kafka sasl密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaSaslPassword <p>Kafka sasl密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaSaslPassword(const std::string& _kafkaSaslPassword);

                    /**
                     * 判断参数 KafkaSaslPassword 是否已赋值
                     * @return KafkaSaslPassword 是否已赋值
                     * 
                     */
                    bool KafkaSaslPasswordHasBeenSet() const;

                    /**
                     * 获取<p>http服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHttpUrl <p>http服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetHttpUrl() const;

                    /**
                     * 设置<p>http服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetHttpUrl <p>http服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetHttpUrl(const std::string& _targetHttpUrl);

                    /**
                     * 判断参数 TargetHttpUrl 是否已赋值
                     * @return TargetHttpUrl 是否已赋值
                     * 
                     */
                    bool TargetHttpUrlHasBeenSet() const;

                    /**
                     * 获取<p>http服务超时时间(只支持32位)</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHttpTimeout <p>http服务超时时间(只支持32位)</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTargetHttpTimeout() const;

                    /**
                     * 设置<p>http服务超时时间(只支持32位)</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetHttpTimeout <p>http服务超时时间(只支持32位)</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetHttpTimeout(const uint64_t& _targetHttpTimeout);

                    /**
                     * 判断参数 TargetHttpTimeout 是否已赋值
                     * @return TargetHttpTimeout 是否已赋值
                     * 
                     */
                    bool TargetHttpTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>连接器分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectorGroupId <p>连接器分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectorGroupId() const;

                    /**
                     * 设置<p>连接器分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectorGroupId <p>连接器分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectorGroupId(const std::string& _connectorGroupId);

                    /**
                     * 判断参数 ConnectorGroupId 是否已赋值
                     * @return ConnectorGroupId 是否已赋值
                     * 
                     */
                    bool ConnectorGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>连接器分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectorGroupName <p>连接器分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectorGroupName() const;

                    /**
                     * 设置<p>连接器分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectorGroupName <p>连接器分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectorGroupName(const std::string& _connectorGroupName);

                    /**
                     * 判断参数 ConnectorGroupName 是否已赋值
                     * @return ConnectorGroupName 是否已赋值
                     * 
                     */
                    bool ConnectorGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>KAFKA是否启用SSL</p>
                     * @return KafkaSSLEnable <p>KAFKA是否启用SSL</p>
                     * 
                     */
                    bool GetKafkaSSLEnable() const;

                    /**
                     * 设置<p>KAFKA是否启用SSL</p>
                     * @param _kafkaSSLEnable <p>KAFKA是否启用SSL</p>
                     * 
                     */
                    void SetKafkaSSLEnable(const bool& _kafkaSSLEnable);

                    /**
                     * 判断参数 KafkaSSLEnable 是否已赋值
                     * @return KafkaSSLEnable 是否已赋值
                     * 
                     */
                    bool KafkaSSLEnableHasBeenSet() const;

                    /**
                     * 获取<p>跳过证书检查</p>
                     * @return SSLSkipVerify <p>跳过证书检查</p>
                     * 
                     */
                    bool GetSSLSkipVerify() const;

                    /**
                     * 设置<p>跳过证书检查</p>
                     * @param _sSLSkipVerify <p>跳过证书检查</p>
                     * 
                     */
                    void SetSSLSkipVerify(const bool& _sSLSkipVerify);

                    /**
                     * 判断参数 SSLSkipVerify 是否已赋值
                     * @return SSLSkipVerify 是否已赋值
                     * 
                     */
                    bool SSLSkipVerifyHasBeenSet() const;

                private:

                    /**
                     * <p>服务器id  (创建时忽略)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>转发服务器地址类型 4:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>服务器描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>syslog服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSyslogAddress;
                    bool m_targetSyslogAddressHasBeenSet;

                    /**
                     * <p>syslog协议类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSyslogProtocol;
                    bool m_targetSyslogProtocolHasBeenSet;

                    /**
                     * <p>syslog协议端口(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetSyslogPort;
                    bool m_targetSyslogPortHasBeenSet;

                    /**
                     * <p>syslog设备/Facility</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_syslogFacility;
                    bool m_syslogFacilityHasBeenSet;

                    /**
                     * <p>Kafka服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetKafkaAddress;
                    bool m_targetKafkaAddressHasBeenSet;

                    /**
                     * <p>Kafka主题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetKafkaTopic;
                    bool m_targetKafkaTopicHasBeenSet;

                    /**
                     * <p>Kafka版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <p>Kafka sasl用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaSaslUserName;
                    bool m_kafkaSaslUserNameHasBeenSet;

                    /**
                     * <p>Kafka sasl密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaSaslPassword;
                    bool m_kafkaSaslPasswordHasBeenSet;

                    /**
                     * <p>http服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetHttpUrl;
                    bool m_targetHttpUrlHasBeenSet;

                    /**
                     * <p>http服务超时时间(只支持32位)</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetHttpTimeout;
                    bool m_targetHttpTimeoutHasBeenSet;

                    /**
                     * <p>连接器分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectorGroupId;
                    bool m_connectorGroupIdHasBeenSet;

                    /**
                     * <p>连接器分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectorGroupName;
                    bool m_connectorGroupNameHasBeenSet;

                    /**
                     * <p>KAFKA是否启用SSL</p>
                     */
                    bool m_kafkaSSLEnable;
                    bool m_kafkaSSLEnableHasBeenSet;

                    /**
                     * <p>跳过证书检查</p>
                     */
                    bool m_sSLSkipVerify;
                    bool m_sSLSkipVerifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DELIVERSERVERITEM_H_
