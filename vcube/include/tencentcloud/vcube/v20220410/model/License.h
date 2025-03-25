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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_LICENSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_LICENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/RenewResource.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 视立方应用license
                */
                class License : public AbstractModel
                {
                public:
                    License();
                    ~License() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取license类型
                     * @return Type license类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置license类型
                     * @param _type license类型
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
                     * 获取老系统迁移备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 老系统迁移备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置老系统迁移备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 老系统迁移备注
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
                     * 获取license生效时间
                     * @return StartTime license生效时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置license生效时间
                     * @param _startTime license生效时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取license失效时间
                     * @return EndTime license失效时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置license失效时间
                     * @param _endTime license失效时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取license对应的功能Id
                     * @return FeatureId license对应的功能Id
                     * 
                     */
                    uint64_t GetFeatureId() const;

                    /**
                     * 设置license对应的功能Id
                     * @param _featureId license对应的功能Id
                     * 
                     */
                    void SetFeatureId(const uint64_t& _featureId);

                    /**
                     * 判断参数 FeatureId 是否已赋值
                     * @return FeatureId 是否已赋值
                     * 
                     */
                    bool FeatureIdHasBeenSet() const;

                    /**
                     * 获取license是测试：test还是正式：formal
                     * @return LicenseType license是测试：test还是正式：formal
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置license是测试：test还是正式：formal
                     * @param _licenseType license是测试：test还是正式：formal
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取测试license 是否可以续期
                     * @return Renewal 测试license 是否可以续期
                     * 
                     */
                    bool GetRenewal() const;

                    /**
                     * 设置测试license 是否可以续期
                     * @param _renewal 测试license 是否可以续期
                     * 
                     */
                    void SetRenewal(const bool& _renewal);

                    /**
                     * 判断参数 Renewal 是否已赋值
                     * @return Renewal 是否已赋值
                     * 
                     */
                    bool RenewalHasBeenSet() const;

                    /**
                     * 获取license索引
                     * @return LicenseId license索引
                     * 
                     */
                    uint64_t GetLicenseId() const;

                    /**
                     * 设置license索引
                     * @param _licenseId license索引
                     * 
                     */
                    void SetLicenseId(const uint64_t& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取license名称
                     * @return Name license名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置license名称
                     * @param _name license名称
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
                     * 获取测试license 是否升级
                     * @return Update 测试license 是否升级
                     * 
                     */
                    bool GetUpdate() const;

                    /**
                     * 设置测试license 是否升级
                     * @param _update 测试license 是否升级
                     * 
                     */
                    void SetUpdate(const bool& _update);

                    /**
                     * 判断参数 Update 是否已赋值
                     * @return Update 是否已赋值
                     * 
                     */
                    bool UpdateHasBeenSet() const;

                    /**
                     * 获取兼容老的licenseUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldLicenseUrl 兼容老的licenseUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldLicenseUrl() const;

                    /**
                     * 设置兼容老的licenseUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldLicenseUrl 兼容老的licenseUrl
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldLicenseUrl(const std::string& _oldLicenseUrl);

                    /**
                     * 判断参数 OldLicenseUrl 是否已赋值
                     * @return OldLicenseUrl 是否已赋值
                     * 
                     */
                    bool OldLicenseUrlHasBeenSet() const;

                    /**
                     * 获取视立方url分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group 视立方url分组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGroup() const;

                    /**
                     * 设置视立方url分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group 视立方url分组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const uint64_t& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取过期：true ，未过期：其它
                     * @return Expired 过期：true ，未过期：其它
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置过期：true ，未过期：其它
                     * @param _expired 过期：true ，未过期：其它
                     * 
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取返回还有多少秒过期，过期返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestTime 返回还有多少秒过期，过期返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRestTime() const;

                    /**
                     * 设置返回还有多少秒过期，过期返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restTime 返回还有多少秒过期，过期返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestTime(const uint64_t& _restTime);

                    /**
                     * 判断参数 RestTime 是否已赋值
                     * @return RestTime 是否已赋值
                     * 
                     */
                    bool RestTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取计费资源相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 计费资源相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RenewResource GetResource() const;

                    /**
                     * 设置计费资源相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 计费资源相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const RenewResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取是否为马甲包
                     * @return IsVest 是否为马甲包
                     * 
                     */
                    bool GetIsVest() const;

                    /**
                     * 设置是否为马甲包
                     * @param _isVest 是否为马甲包
                     * 
                     */
                    void SetIsVest(const bool& _isVest);

                    /**
                     * 判断参数 IsVest 是否已赋值
                     * @return IsVest 是否已赋值
                     * 
                     */
                    bool IsVestHasBeenSet() const;

                private:

                    /**
                     * license类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 老系统迁移备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * license生效时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * license失效时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * license对应的功能Id
                     */
                    uint64_t m_featureId;
                    bool m_featureIdHasBeenSet;

                    /**
                     * license是测试：test还是正式：formal
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 测试license 是否可以续期
                     */
                    bool m_renewal;
                    bool m_renewalHasBeenSet;

                    /**
                     * license索引
                     */
                    uint64_t m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * license名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 测试license 是否升级
                     */
                    bool m_update;
                    bool m_updateHasBeenSet;

                    /**
                     * 兼容老的licenseUrl
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldLicenseUrl;
                    bool m_oldLicenseUrlHasBeenSet;

                    /**
                     * 视立方url分组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 过期：true ，未过期：其它
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 返回还有多少秒过期，过期返回0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_restTime;
                    bool m_restTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 计费资源相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RenewResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 是否为马甲包
                     */
                    bool m_isVest;
                    bool m_isVestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_LICENSE_H_
