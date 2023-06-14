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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HTTPSPACKAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HTTPSPACKAGE_H_

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
                * CDN HTTPS请求包。
                */
                class HttpsPackage : public AbstractModel
                {
                public:
                    HttpsPackage();
                    ~HttpsPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTPS请求包 Id
                     * @return Id HTTPS请求包 Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置HTTPS请求包 Id
                     * @param _id HTTPS请求包 Id
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
                     * 获取HTTPS请求包类型
                     * @return Type HTTPS请求包类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置HTTPS请求包类型
                     * @param _type HTTPS请求包类型
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
                     * 获取HTTPS请求包大小（单位为：次）
                     * @return Size HTTPS请求包大小（单位为：次）
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置HTTPS请求包大小（单位为：次）
                     * @param _size HTTPS请求包大小（单位为：次）
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取已消耗HTTPS请求包（单位为：次）
                     * @return SizeUsed 已消耗HTTPS请求包（单位为：次）
                     * 
                     */
                    int64_t GetSizeUsed() const;

                    /**
                     * 设置已消耗HTTPS请求包（单位为：次）
                     * @param _sizeUsed 已消耗HTTPS请求包（单位为：次）
                     * 
                     */
                    void SetSizeUsed(const int64_t& _sizeUsed);

                    /**
                     * 判断参数 SizeUsed 是否已赋值
                     * @return SizeUsed 是否已赋值
                     * 
                     */
                    bool SizeUsedHasBeenSet() const;

                    /**
                     * 获取HTTPS请求包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * @return Status HTTPS请求包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置HTTPS请求包状态
enabled：已启用
expired：已过期
disabled：未启用
                     * @param _status HTTPS请求包状态
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
                     * 获取HTTPS请求包发放时间
                     * @return CreateTime HTTPS请求包发放时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置HTTPS请求包发放时间
                     * @param _createTime HTTPS请求包发放时间
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
                     * 获取HTTPS请求包生效时间
                     * @return EnableTime HTTPS请求包生效时间
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置HTTPS请求包生效时间
                     * @param _enableTime HTTPS请求包生效时间
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
                     * 获取HTTPS请求包过期时间
                     * @return ExpireTime HTTPS请求包过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置HTTPS请求包过期时间
                     * @param _expireTime HTTPS请求包过期时间
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
                     * 获取HTTPS请求包来源
                     * @return Channel HTTPS请求包来源
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置HTTPS请求包来源
                     * @param _channel HTTPS请求包来源
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
                     * 获取HTTPS请求包生命周期月数
                     * @return LifeTimeMonth HTTPS请求包生命周期月数
                     * 
                     */
                    int64_t GetLifeTimeMonth() const;

                    /**
                     * 设置HTTPS请求包生命周期月数
                     * @param _lifeTimeMonth HTTPS请求包生命周期月数
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
                     * 获取HTTPS请求包是否支持退费
                     * @return RefundAvailable HTTPS请求包是否支持退费
                     * 
                     */
                    bool GetRefundAvailable() const;

                    /**
                     * 设置HTTPS请求包是否支持退费
                     * @param _refundAvailable HTTPS请求包是否支持退费
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
                     * 获取HTTPS请求包类型id
                     * @return ConfigId HTTPS请求包类型id
                     * 
                     */
                    int64_t GetConfigId() const;

                    /**
                     * 设置HTTPS请求包类型id
                     * @param _configId HTTPS请求包类型id
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
                     * 获取HTTPS请求包实际生效时间
                     * @return TrueEnableTime HTTPS请求包实际生效时间
                     * 
                     */
                    std::string GetTrueEnableTime() const;

                    /**
                     * 设置HTTPS请求包实际生效时间
                     * @param _trueEnableTime HTTPS请求包实际生效时间
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
                     * 获取HTTPS请求包实际过期时间
                     * @return TrueExpireTime HTTPS请求包实际过期时间
                     * 
                     */
                    std::string GetTrueExpireTime() const;

                    /**
                     * 设置HTTPS请求包实际过期时间
                     * @param _trueExpireTime HTTPS请求包实际过期时间
                     * 
                     */
                    void SetTrueExpireTime(const std::string& _trueExpireTime);

                    /**
                     * 判断参数 TrueExpireTime 是否已赋值
                     * @return TrueExpireTime 是否已赋值
                     * 
                     */
                    bool TrueExpireTimeHasBeenSet() const;

                    /**
                     * 获取HTTPS请求包生效区域 
global：全球
                     * @return Area HTTPS请求包生效区域 
global：全球
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置HTTPS请求包生效区域 
global：全球
                     * @param _area HTTPS请求包生效区域 
global：全球
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
                     * 获取HTTPS请求包是否续订
                     * @return ContractExtension HTTPS请求包是否续订
                     * 
                     */
                    bool GetContractExtension() const;

                    /**
                     * 设置HTTPS请求包是否续订
                     * @param _contractExtension HTTPS请求包是否续订
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
                     * 获取HTTPS请求包是否支持续订
                     * @return ExtensionAvailable HTTPS请求包是否支持续订
                     * 
                     */
                    bool GetExtensionAvailable() const;

                    /**
                     * 设置HTTPS请求包是否支持续订
                     * @param _extensionAvailable HTTPS请求包是否支持续订
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
                     * 获取HTTPS请求包当前续订模式
0：未续订
1：到期续订
2：用完续订
3：到期或用完续订
                     * @return ExtensionMode HTTPS请求包当前续订模式
0：未续订
1：到期续订
2：用完续订
3：到期或用完续订
                     * 
                     */
                    uint64_t GetExtensionMode() const;

                    /**
                     * 设置HTTPS请求包当前续订模式
0：未续订
1：到期续订
2：用完续订
3：到期或用完续订
                     * @param _extensionMode HTTPS请求包当前续订模式
0：未续订
1：到期续订
2：用完续订
3：到期或用完续订
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
                     * 获取HTTPS请求包是否自动续订
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoExtension HTTPS请求包是否自动续订
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoExtension() const;

                    /**
                     * 设置HTTPS请求包是否自动续订
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoExtension HTTPS请求包是否自动续订
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoExtension(const bool& _autoExtension);

                    /**
                     * 判断参数 AutoExtension 是否已赋值
                     * @return AutoExtension 是否已赋值
                     * 
                     */
                    bool AutoExtensionHasBeenSet() const;

                private:

                    /**
                     * HTTPS请求包 Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * HTTPS请求包类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * HTTPS请求包大小（单位为：次）
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 已消耗HTTPS请求包（单位为：次）
                     */
                    int64_t m_sizeUsed;
                    bool m_sizeUsedHasBeenSet;

                    /**
                     * HTTPS请求包状态
enabled：已启用
expired：已过期
disabled：未启用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * HTTPS请求包发放时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * HTTPS请求包生效时间
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * HTTPS请求包过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * HTTPS请求包来源
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * HTTPS请求包生命周期月数
                     */
                    int64_t m_lifeTimeMonth;
                    bool m_lifeTimeMonthHasBeenSet;

                    /**
                     * HTTPS请求包是否支持退费
                     */
                    bool m_refundAvailable;
                    bool m_refundAvailableHasBeenSet;

                    /**
                     * HTTPS请求包类型id
                     */
                    int64_t m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * HTTPS请求包实际生效时间
                     */
                    std::string m_trueEnableTime;
                    bool m_trueEnableTimeHasBeenSet;

                    /**
                     * HTTPS请求包实际过期时间
                     */
                    std::string m_trueExpireTime;
                    bool m_trueExpireTimeHasBeenSet;

                    /**
                     * HTTPS请求包生效区域 
global：全球
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * HTTPS请求包是否续订
                     */
                    bool m_contractExtension;
                    bool m_contractExtensionHasBeenSet;

                    /**
                     * HTTPS请求包是否支持续订
                     */
                    bool m_extensionAvailable;
                    bool m_extensionAvailableHasBeenSet;

                    /**
                     * HTTPS请求包当前续订模式
0：未续订
1：到期续订
2：用完续订
3：到期或用完续订
                     */
                    uint64_t m_extensionMode;
                    bool m_extensionModeHasBeenSet;

                    /**
                     * HTTPS请求包是否自动续订
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoExtension;
                    bool m_autoExtensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HTTPSPACKAGE_H_
