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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERCODEINFO_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 注册码信息。
                */
                class RegisterCodeInfo : public AbstractModel
                {
                public:
                    RegisterCodeInfo();
                    ~RegisterCodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取注册码ID。
                     * @return RegisterCodeId 注册码ID。
                     * 
                     */
                    std::string GetRegisterCodeId() const;

                    /**
                     * 设置注册码ID。
                     * @param _registerCodeId 注册码ID。
                     * 
                     */
                    void SetRegisterCodeId(const std::string& _registerCodeId);

                    /**
                     * 判断参数 RegisterCodeId 是否已赋值
                     * @return RegisterCodeId 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdHasBeenSet() const;

                    /**
                     * 获取注册码描述。
                     * @return Description 注册码描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置注册码描述。
                     * @param _description 注册码描述。
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
                     * 获取注册实例名称前缀。
                     * @return InstanceNamePrefix 注册实例名称前缀。
                     * 
                     */
                    std::string GetInstanceNamePrefix() const;

                    /**
                     * 设置注册实例名称前缀。
                     * @param _instanceNamePrefix 注册实例名称前缀。
                     * 
                     */
                    void SetInstanceNamePrefix(const std::string& _instanceNamePrefix);

                    /**
                     * 判断参数 InstanceNamePrefix 是否已赋值
                     * @return InstanceNamePrefix 是否已赋值
                     * 
                     */
                    bool InstanceNamePrefixHasBeenSet() const;

                    /**
                     * 获取该注册码允许注册的实例数目。
                     * @return RegisterLimit 该注册码允许注册的实例数目。
                     * 
                     */
                    int64_t GetRegisterLimit() const;

                    /**
                     * 设置该注册码允许注册的实例数目。
                     * @param _registerLimit 该注册码允许注册的实例数目。
                     * 
                     */
                    void SetRegisterLimit(const int64_t& _registerLimit);

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     * 
                     */
                    bool RegisterLimitHasBeenSet() const;

                    /**
                     * 获取该注册码的过期时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 该注册码的过期时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置该注册码的过期时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime 该注册码的过期时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取该注册码限制tat_agent只能从IpAddressRange所描述公网出口进行注册。
                     * @return IpAddressRange 该注册码限制tat_agent只能从IpAddressRange所描述公网出口进行注册。
                     * 
                     */
                    std::string GetIpAddressRange() const;

                    /**
                     * 设置该注册码限制tat_agent只能从IpAddressRange所描述公网出口进行注册。
                     * @param _ipAddressRange 该注册码限制tat_agent只能从IpAddressRange所描述公网出口进行注册。
                     * 
                     */
                    void SetIpAddressRange(const std::string& _ipAddressRange);

                    /**
                     * 判断参数 IpAddressRange 是否已赋值
                     * @return IpAddressRange 是否已赋值
                     * 
                     */
                    bool IpAddressRangeHasBeenSet() const;

                    /**
                     * 获取该注册码是否可用。
                     * @return Enabled 该注册码是否可用。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置该注册码是否可用。
                     * @param _enabled 该注册码是否可用。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取该注册码已注册数目。
                     * @return RegisteredCount 该注册码已注册数目。
                     * 
                     */
                    int64_t GetRegisteredCount() const;

                    /**
                     * 设置该注册码已注册数目。
                     * @param _registeredCount 该注册码已注册数目。
                     * 
                     */
                    void SetRegisteredCount(const int64_t& _registeredCount);

                    /**
                     * 判断参数 RegisteredCount 是否已赋值
                     * @return RegisteredCount 是否已赋值
                     * 
                     */
                    bool RegisteredCountHasBeenSet() const;

                    /**
                     * 获取注册码创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 注册码创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置注册码创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 注册码创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取注册码最近一次更新时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 注册码最近一次更新时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置注册码最近一次更新时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime 注册码最近一次更新时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * 注册码ID。
                     */
                    std::string m_registerCodeId;
                    bool m_registerCodeIdHasBeenSet;

                    /**
                     * 注册码描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 注册实例名称前缀。
                     */
                    std::string m_instanceNamePrefix;
                    bool m_instanceNamePrefixHasBeenSet;

                    /**
                     * 该注册码允许注册的实例数目。
                     */
                    int64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                    /**
                     * 该注册码的过期时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 该注册码限制tat_agent只能从IpAddressRange所描述公网出口进行注册。
                     */
                    std::string m_ipAddressRange;
                    bool m_ipAddressRangeHasBeenSet;

                    /**
                     * 该注册码是否可用。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 该注册码已注册数目。
                     */
                    int64_t m_registeredCount;
                    bool m_registeredCountHasBeenSet;

                    /**
                     * 注册码创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 注册码最近一次更新时间，按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_REGISTERCODEINFO_H_
