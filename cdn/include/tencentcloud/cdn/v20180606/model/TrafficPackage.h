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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_TRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CDN加速流量包。
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量包 Id
                     * @return Id 流量包 Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置流量包 Id
                     * @param _id 流量包 Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取流量包类型
                     * @return Type 流量包类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置流量包类型
                     * @param _type 流量包类型
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
                     * 获取流量包大小（单位为 Byte）
                     * @return Bytes 流量包大小（单位为 Byte）
                     * 
                     */
                    int64_t GetBytes() const;

                    /**
                     * 设置流量包大小（单位为 Byte）
                     * @param _bytes 流量包大小（单位为 Byte）
                     * 
                     */
                    void SetBytes(const int64_t& _bytes);

                    /**
                     * 判断参数 Bytes 是否已赋值
                     * @return Bytes 是否已赋值
                     * 
                     */
                    bool BytesHasBeenSet() const;

                    /**
                     * 获取已消耗流量（单位为 Byte）
                     * @return BytesUsed 已消耗流量（单位为 Byte）
                     * 
                     */
                    int64_t GetBytesUsed() const;

                    /**
                     * 设置已消耗流量（单位为 Byte）
                     * @param _bytesUsed 已消耗流量（单位为 Byte）
                     * 
                     */
                    void SetBytesUsed(const int64_t& _bytesUsed);

                    /**
                     * 判断参数 BytesUsed 是否已赋值
                     * @return BytesUsed 是否已赋值
                     * 
                     */
                    bool BytesUsedHasBeenSet() const;

                    /**
                     * 获取流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * @return Status 流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * @param _status 流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取流量包发放时间
                     * @return CreateTime 流量包发放时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置流量包发放时间
                     * @param _createTime 流量包发放时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取流量包生效时间
                     * @return EnableTime 流量包生效时间
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置流量包生效时间
                     * @param _enableTime 流量包生效时间
                     * 
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     * 
                     */
                    bool EnableTimeHasBeenSet() const;

                    /**
                     * 获取流量包过期时间
                     * @return ExpireTime 流量包过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置流量包过期时间
                     * @param _expireTime 流量包过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取流量包是否续订
                     * @return ContractExtension 流量包是否续订
                     * 
                     */
                    bool GetContractExtension() const;

                    /**
                     * 设置流量包是否续订
                     * @param _contractExtension 流量包是否续订
                     * 
                     */
                    void SetContractExtension(const bool& _contractExtension);

                    /**
                     * 判断参数 ContractExtension 是否已赋值
                     * @return ContractExtension 是否已赋值
                     * 
                     */
                    bool ContractExtensionHasBeenSet() const;

                    /**
                     * 获取流量包是否自动续订
                     * @return AutoExtension 流量包是否自动续订
                     * 
                     */
                    bool GetAutoExtension() const;

                    /**
                     * 设置流量包是否自动续订
                     * @param _autoExtension 流量包是否自动续订
                     * 
                     */
                    void SetAutoExtension(const bool& _autoExtension);

                    /**
                     * 判断参数 AutoExtension 是否已赋值
                     * @return AutoExtension 是否已赋值
                     * 
                     */
                    bool AutoExtensionHasBeenSet() const;

                    /**
                     * 获取流量包来源
                     * @return Channel 流量包来源
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置流量包来源
                     * @param _channel 流量包来源
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取流量包生效区域，mainland或overseas
                     * @return Area 流量包生效区域，mainland或overseas
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置流量包生效区域，mainland或overseas
                     * @param _area 流量包生效区域，mainland或overseas
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取流量包生命周期月数
                     * @return LifeTimeMonth 流量包生命周期月数
                     * 
                     */
                    int64_t GetLifeTimeMonth() const;

                    /**
                     * 设置流量包生命周期月数
                     * @param _lifeTimeMonth 流量包生命周期月数
                     * 
                     */
                    void SetLifeTimeMonth(const int64_t& _lifeTimeMonth);

                    /**
                     * 判断参数 LifeTimeMonth 是否已赋值
                     * @return LifeTimeMonth 是否已赋值
                     * 
                     */
                    bool LifeTimeMonthHasBeenSet() const;

                    /**
                     * 获取流量包是否支持续订
                     * @return ExtensionAvailable 流量包是否支持续订
                     * 
                     */
                    bool GetExtensionAvailable() const;

                    /**
                     * 设置流量包是否支持续订
                     * @param _extensionAvailable 流量包是否支持续订
                     * 
                     */
                    void SetExtensionAvailable(const bool& _extensionAvailable);

                    /**
                     * 判断参数 ExtensionAvailable 是否已赋值
                     * @return ExtensionAvailable 是否已赋值
                     * 
                     */
                    bool ExtensionAvailableHasBeenSet() const;

                    /**
                     * 获取流量包是否支持退费
                     * @return RefundAvailable 流量包是否支持退费
                     * 
                     */
                    bool GetRefundAvailable() const;

                    /**
                     * 设置流量包是否支持退费
                     * @param _refundAvailable 流量包是否支持退费
                     * 
                     */
                    void SetRefundAvailable(const bool& _refundAvailable);

                    /**
                     * 判断参数 RefundAvailable 是否已赋值
                     * @return RefundAvailable 是否已赋值
                     * 
                     */
                    bool RefundAvailableHasBeenSet() const;

                    /**
                     * 获取流量包生效区域
0：中国大陆
1：亚太一区
2：亚太二区
3：亚太三区
4：中东
5：北美
6：欧洲
7：南美
8：非洲
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 流量包生效区域
0：中国大陆
1：亚太一区
2：亚太二区
3：亚太三区
4：中东
5：北美
6：欧洲
7：南美
8：非洲
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegion() const;

                    /**
                     * 设置流量包生效区域
0：中国大陆
1：亚太一区
2：亚太二区
3：亚太三区
4：中东
5：北美
6：欧洲
7：南美
8：非洲
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 流量包生效区域
0：中国大陆
1：亚太一区
2：亚太二区
3：亚太三区
4：中东
5：北美
6：欧洲
7：南美
8：非洲
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const int64_t& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取流量包类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 流量包类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConfigId() const;

                    /**
                     * 设置流量包类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configId 流量包类型id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigId(const int64_t& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取流量包当前续订模式，0 未续订、1到期续订、2用完续订、3到期或用完续订
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtensionMode 流量包当前续订模式，0 未续订、1到期续订、2用完续订、3到期或用完续订
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExtensionMode() const;

                    /**
                     * 设置流量包当前续订模式，0 未续订、1到期续订、2用完续订、3到期或用完续订
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extensionMode 流量包当前续订模式，0 未续订、1到期续订、2用完续订、3到期或用完续订
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtensionMode(const uint64_t& _extensionMode);

                    /**
                     * 判断参数 ExtensionMode 是否已赋值
                     * @return ExtensionMode 是否已赋值
                     * 
                     */
                    bool ExtensionModeHasBeenSet() const;

                    /**
                     * 获取流量包实际生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrueEnableTime 流量包实际生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrueEnableTime() const;

                    /**
                     * 设置流量包实际生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trueEnableTime 流量包实际生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrueEnableTime(const std::string& _trueEnableTime);

                    /**
                     * 判断参数 TrueEnableTime 是否已赋值
                     * @return TrueEnableTime 是否已赋值
                     * 
                     */
                    bool TrueEnableTimeHasBeenSet() const;

                    /**
                     * 获取流量包实际过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrueExpireTime 流量包实际过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrueExpireTime() const;

                    /**
                     * 设置流量包实际过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trueExpireTime 流量包实际过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrueExpireTime(const std::string& _trueExpireTime);

                    /**
                     * 判断参数 TrueExpireTime 是否已赋值
                     * @return TrueExpireTime 是否已赋值
                     * 
                     */
                    bool TrueExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 流量包 Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 流量包类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 流量包大小（单位为 Byte）
                     */
                    int64_t m_bytes;
                    bool m_bytesHasBeenSet;

                    /**
                     * 已消耗流量（单位为 Byte）
                     */
                    int64_t m_bytesUsed;
                    bool m_bytesUsedHasBeenSet;

                    /**
                     * 流量包状态
enabled：已启用
expired：已过期
disabled：未启用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 流量包发放时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 流量包生效时间
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * 流量包过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 流量包是否续订
                     */
                    bool m_contractExtension;
                    bool m_contractExtensionHasBeenSet;

                    /**
                     * 流量包是否自动续订
                     */
                    bool m_autoExtension;
                    bool m_autoExtensionHasBeenSet;

                    /**
                     * 流量包来源
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 流量包生效区域，mainland或overseas
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 流量包生命周期月数
                     */
                    int64_t m_lifeTimeMonth;
                    bool m_lifeTimeMonthHasBeenSet;

                    /**
                     * 流量包是否支持续订
                     */
                    bool m_extensionAvailable;
                    bool m_extensionAvailableHasBeenSet;

                    /**
                     * 流量包是否支持退费
                     */
                    bool m_refundAvailable;
                    bool m_refundAvailableHasBeenSet;

                    /**
                     * 流量包生效区域
0：中国大陆
1：亚太一区
2：亚太二区
3：亚太三区
4：中东
5：北美
6：欧洲
7：南美
8：非洲
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 流量包类型id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 流量包当前续订模式，0 未续订、1到期续订、2用完续订、3到期或用完续订
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_extensionMode;
                    bool m_extensionModeHasBeenSet;

                    /**
                     * 流量包实际生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trueEnableTime;
                    bool m_trueEnableTimeHasBeenSet;

                    /**
                     * 流量包实际过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trueExpireTime;
                    bool m_trueExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_TRAFFICPACKAGE_H_
