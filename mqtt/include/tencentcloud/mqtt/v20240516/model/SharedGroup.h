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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDGROUP_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * 共享订阅组
                */
                class SharedGroup : public AbstractModel
                {
                public:
                    SharedGroup();
                    ~SharedGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云MQTT实例ID
                     * @return InstanceId 腾讯云MQTT实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID
                     * @param _instanceId 腾讯云MQTT实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取共享订阅组名
                     * @return SharedName 共享订阅组名
                     * 
                     */
                    std::string GetSharedName() const;

                    /**
                     * 设置共享订阅组名
                     * @param _sharedName 共享订阅组名
                     * 
                     */
                    void SetSharedName(const std::string& _sharedName);

                    /**
                     * 判断参数 SharedName 是否已赋值
                     * @return SharedName 是否已赋值
                     * 
                     */
                    bool SharedNameHasBeenSet() const;

                    /**
                     * 获取共享组消费负载均衡策略 1.RANDOM 2.HASH_PARTITION
                     * @return LbStrategy 共享组消费负载均衡策略 1.RANDOM 2.HASH_PARTITION
                     * 
                     */
                    int64_t GetLbStrategy() const;

                    /**
                     * 设置共享组消费负载均衡策略 1.RANDOM 2.HASH_PARTITION
                     * @param _lbStrategy 共享组消费负载均衡策略 1.RANDOM 2.HASH_PARTITION
                     * 
                     */
                    void SetLbStrategy(const int64_t& _lbStrategy);

                    /**
                     * 判断参数 LbStrategy 是否已赋值
                     * @return LbStrategy 是否已赋值
                     * 
                     */
                    bool LbStrategyHasBeenSet() const;

                    /**
                     * 获取HASH_PARTITION 策略下生效，表示Client掉线或新Client上线加入共享订阅组消费的延迟时间。
范围：0～600秒
                     * @return ExpiryInterval HASH_PARTITION 策略下生效，表示Client掉线或新Client上线加入共享订阅组消费的延迟时间。
范围：0～600秒
                     * 
                     */
                    int64_t GetExpiryInterval() const;

                    /**
                     * 设置HASH_PARTITION 策略下生效，表示Client掉线或新Client上线加入共享订阅组消费的延迟时间。
范围：0～600秒
                     * @param _expiryInterval HASH_PARTITION 策略下生效，表示Client掉线或新Client上线加入共享订阅组消费的延迟时间。
范围：0～600秒
                     * 
                     */
                    void SetExpiryInterval(const int64_t& _expiryInterval);

                    /**
                     * 判断参数 ExpiryInterval 是否已赋值
                     * @return ExpiryInterval 是否已赋值
                     * 
                     */
                    bool ExpiryIntervalHasBeenSet() const;

                    /**
                     * 获取备注，长度不超过128个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注，长度不超过128个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，长度不超过128个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注，长度不超过128个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取创建时间，毫秒级时间戳 。
                     * @return CreateTime 创建时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，毫秒级时间戳 。
                     * @param _createTime 创建时间，毫秒级时间戳 。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取上次更新时间，毫秒级时间戳 。
                     * @return UpdateTime 上次更新时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置上次更新时间，毫秒级时间戳 。
                     * @param _updateTime 上次更新时间，毫秒级时间戳 。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 共享订阅组名
                     */
                    std::string m_sharedName;
                    bool m_sharedNameHasBeenSet;

                    /**
                     * 共享组消费负载均衡策略 1.RANDOM 2.HASH_PARTITION
                     */
                    int64_t m_lbStrategy;
                    bool m_lbStrategyHasBeenSet;

                    /**
                     * HASH_PARTITION 策略下生效，表示Client掉线或新Client上线加入共享订阅组消费的延迟时间。
范围：0～600秒
                     */
                    int64_t m_expiryInterval;
                    bool m_expiryIntervalHasBeenSet;

                    /**
                     * 备注，长度不超过128个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间，毫秒级时间戳 。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 上次更新时间，毫秒级时间戳 。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDGROUP_H_
