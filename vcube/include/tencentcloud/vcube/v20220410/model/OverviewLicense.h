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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEWLICENSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEWLICENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/OverviewAppInfo.h>


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
                class OverviewLicense : public AbstractModel
                {
                public:
                    OverviewLicense();
                    ~OverviewLicense() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属应用
                     * @return Application 所属应用
                     * 
                     */
                    OverviewAppInfo GetApplication() const;

                    /**
                     * 设置所属应用
                     * @param _application 所属应用
                     * 
                     */
                    void SetApplication(const OverviewAppInfo& _application);

                    /**
                     * 判断参数 Application 是否已赋值
                     * @return Application 是否已赋值
                     * 
                     */
                    bool ApplicationHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeatureId license对应的功能Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFeatureId() const;

                    /**
                     * 设置license对应的功能Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _featureId license对应的功能Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取返回还有多少秒过期，过期返回负值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestTime 返回还有多少秒过期，过期返回负值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRestTime() const;

                    /**
                     * 设置返回还有多少秒过期，过期返回负值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restTime 返回还有多少秒过期，过期返回负值
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
                     * 获取优图套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Plan 优图套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlan() const;

                    /**
                     * 设置优图套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plan 优图套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlan(const std::string& _plan);

                    /**
                     * 判断参数 Plan 是否已赋值
                     * @return Plan 是否已赋值
                     * 
                     */
                    bool PlanHasBeenSet() const;

                    /**
                     * 获取licenseType
                     * @return Type licenseType
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置licenseType
                     * @param _type licenseType
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 所属应用
                     */
                    OverviewAppInfo m_application;
                    bool m_applicationHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_featureId;
                    bool m_featureIdHasBeenSet;

                    /**
                     * license是测试：test还是正式：formal
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

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
                     * 返回还有多少秒过期，过期返回负值
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
                     * 优图套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_plan;
                    bool m_planHasBeenSet;

                    /**
                     * licenseType
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEWLICENSE_H_
