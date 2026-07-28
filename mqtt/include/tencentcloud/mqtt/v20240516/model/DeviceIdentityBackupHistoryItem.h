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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICEIDENTITYBACKUPHISTORYITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICEIDENTITYBACKUPHISTORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/PropagatingProperty.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * 设备标识列表
                */
                class DeviceIdentityBackupHistoryItem : public AbstractModel
                {
                public:
                    DeviceIdentityBackupHistoryItem();
                    ~DeviceIdentityBackupHistoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>设备id</p>
                     * @return DeviceId <p>设备id</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备id</p>
                     * @param _deviceId <p>设备id</p>
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>1:ENABLED-可用2:DISABLE-不可用</p>
                     * @return Status <p>1:ENABLED-可用2:DISABLE-不可用</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>1:ENABLED-可用2:DISABLE-不可用</p>
                     * @param _status <p>1:ENABLED-可用2:DISABLE-不可用</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>主要签名key（Base64编码）</p>
                     * @return PrimaryKey <p>主要签名key（Base64编码）</p>
                     * 
                     */
                    std::string GetPrimaryKey() const;

                    /**
                     * 设置<p>主要签名key（Base64编码）</p>
                     * @param _primaryKey <p>主要签名key（Base64编码）</p>
                     * 
                     */
                    void SetPrimaryKey(const std::string& _primaryKey);

                    /**
                     * 判断参数 PrimaryKey 是否已赋值
                     * @return PrimaryKey 是否已赋值
                     * 
                     */
                    bool PrimaryKeyHasBeenSet() const;

                    /**
                     * 获取<p>次要签名key（Base64编码）</p>
                     * @return SecondaryKey <p>次要签名key（Base64编码）</p>
                     * 
                     */
                    std::string GetSecondaryKey() const;

                    /**
                     * 设置<p>次要签名key（Base64编码）</p>
                     * @param _secondaryKey <p>次要签名key（Base64编码）</p>
                     * 
                     */
                    void SetSecondaryKey(const std::string& _secondaryKey);

                    /**
                     * 判断参数 SecondaryKey 是否已赋值
                     * @return SecondaryKey 是否已赋值
                     * 
                     */
                    bool SecondaryKeyHasBeenSet() const;

                    /**
                     * 获取<p>传播属性列表</p>
                     * @return PropagatingProperties <p>传播属性列表</p>
                     * 
                     */
                    std::vector<PropagatingProperty> GetPropagatingProperties() const;

                    /**
                     * 设置<p>传播属性列表</p>
                     * @param _propagatingProperties <p>传播属性列表</p>
                     * 
                     */
                    void SetPropagatingProperties(const std::vector<PropagatingProperty>& _propagatingProperties);

                    /**
                     * 判断参数 PropagatingProperties 是否已赋值
                     * @return PropagatingProperties 是否已赋值
                     * 
                     */
                    bool PropagatingPropertiesHasBeenSet() const;

                    /**
                     * 获取<p>数据来源</p>
                     * @return Source <p>数据来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>数据来源</p>
                     * @param _source <p>数据来源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * @return ModificationTime <p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    int64_t GetModificationTime() const;

                    /**
                     * 设置<p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * @param _modificationTime <p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    void SetModificationTime(const int64_t& _modificationTime);

                    /**
                     * 判断参数 ModificationTime 是否已赋值
                     * @return ModificationTime 是否已赋值
                     * 
                     */
                    bool ModificationTimeHasBeenSet() const;

                private:

                    /**
                     * <p>设备id</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>1:ENABLED-可用2:DISABLE-不可用</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>主要签名key（Base64编码）</p>
                     */
                    std::string m_primaryKey;
                    bool m_primaryKeyHasBeenSet;

                    /**
                     * <p>次要签名key（Base64编码）</p>
                     */
                    std::string m_secondaryKey;
                    bool m_secondaryKeyHasBeenSet;

                    /**
                     * <p>传播属性列表</p>
                     */
                    std::vector<PropagatingProperty> m_propagatingProperties;
                    bool m_propagatingPropertiesHasBeenSet;

                    /**
                     * <p>数据来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>修改时间</p><p>单位：毫秒级时间戳</p>
                     */
                    int64_t m_modificationTime;
                    bool m_modificationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICEIDENTITYBACKUPHISTORYITEM_H_
