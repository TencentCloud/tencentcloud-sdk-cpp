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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_RULEDETAIL_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_RULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 自动化规则详细信息
                */
                class RuleDetail : public AbstractModel
                {
                public:
                    RuleDetail();
                    ~RuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取规则ID
                     * @return ID 规则ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置规则ID
                     * @param _iD 规则ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletedAt 删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeletedAt() const;

                    /**
                     * 设置删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deletedAt 删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeletedAt(const std::string& _deletedAt);

                    /**
                     * 判断参数 DeletedAt 是否已赋值
                     * @return DeletedAt 是否已赋值
                     * 
                     */
                    bool DeletedAtHasBeenSet() const;

                    /**
                     * 获取规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 规则类型
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
                     * 获取是否激活
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsActive 是否激活
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsActive() const;

                    /**
                     * 设置是否激活
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isActive 是否激活
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsActive(const bool& _isActive);

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取触发动作：1 邮件 2 API请求 5 停卡 6 地图标识为盲点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notice 触发动作：1 邮件 2 API请求 5 停卡 6 地图标识为盲点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNotice() const;

                    /**
                     * 设置触发动作：1 邮件 2 API请求 5 停卡 6 地图标识为盲点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notice 触发动作：1 邮件 2 API请求 5 停卡 6 地图标识为盲点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotice(const int64_t& _notice);

                    /**
                     * 判断参数 Notice 是否已赋值
                     * @return Notice 是否已赋值
                     * 
                     */
                    bool NoticeHasBeenSet() const;

                    /**
                     * 获取邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Email 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _email 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取回调API地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 回调API地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置回调API地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 回调API地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取用量类：用量阈值,单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataThreshold 用量类：用量阈值,单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataThreshold() const;

                    /**
                     * 设置用量类：用量阈值,单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataThreshold 用量类：用量阈值,单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataThreshold(const int64_t& _dataThreshold);

                    /**
                     * 判断参数 DataThreshold 是否已赋值
                     * @return DataThreshold 是否已赋值
                     * 
                     */
                    bool DataThresholdHasBeenSet() const;

                    /**
                     * 获取行政区类型：1. 省份 2. 城市 3. 区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return District 行政区类型：1. 省份 2. 城市 3. 区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDistrict() const;

                    /**
                     * 设置行政区类型：1. 省份 2. 城市 3. 区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _district 行政区类型：1. 省份 2. 城市 3. 区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDistrict(const int64_t& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取移动距离阈值，单位KM
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Distance 移动距离阈值，单位KM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDistance() const;

                    /**
                     * 设置移动距离阈值，单位KM
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _distance 移动距离阈值，单位KM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDistance(const int64_t& _distance);

                    /**
                     * 判断参数 Distance 是否已赋值
                     * @return Distance 是否已赋值
                     * 
                     */
                    bool DistanceHasBeenSet() const;

                    /**
                     * 获取信号强度阈值(-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignalStrength 信号强度阈值(-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSignalStrength() const;

                    /**
                     * 设置信号强度阈值(-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signalStrength 信号强度阈值(-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignalStrength(const int64_t& _signalStrength);

                    /**
                     * 判断参数 SignalStrength 是否已赋值
                     * @return SignalStrength 是否已赋值
                     * 
                     */
                    bool SignalStrengthHasBeenSet() const;

                    /**
                     * 获取盲点阈值天数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LostDay 盲点阈值天数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLostDay() const;

                    /**
                     * 设置盲点阈值天数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lostDay 盲点阈值天数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLostDay(const int64_t& _lostDay);

                    /**
                     * 判断参数 LostDay 是否已赋值
                     * @return LostDay 是否已赋值
                     * 
                     */
                    bool LostDayHasBeenSet() const;

                    /**
                     * 获取标签ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagIDs 标签ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetTagIDs() const;

                    /**
                     * 设置标签ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagIDs 标签ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagIDs(const std::vector<int64_t>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取资费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SalePlan 资费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSalePlan() const;

                    /**
                     * 设置资费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _salePlan 资费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSalePlan(const std::string& _salePlan);

                    /**
                     * 判断参数 SalePlan 是否已赋值
                     * @return SalePlan 是否已赋值
                     * 
                     */
                    bool SalePlanHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deletedAt;
                    bool m_deletedAtHasBeenSet;

                    /**
                     * 规则类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否激活
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     * 触发动作：1 邮件 2 API请求 5 停卡 6 地图标识为盲点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_notice;
                    bool m_noticeHasBeenSet;

                    /**
                     * 邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 回调API地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 用量类：用量阈值,单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataThreshold;
                    bool m_dataThresholdHasBeenSet;

                    /**
                     * 行政区类型：1. 省份 2. 城市 3. 区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 移动距离阈值，单位KM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_distance;
                    bool m_distanceHasBeenSet;

                    /**
                     * 信号强度阈值(-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_signalStrength;
                    bool m_signalStrengthHasBeenSet;

                    /**
                     * 盲点阈值天数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lostDay;
                    bool m_lostDayHasBeenSet;

                    /**
                     * 标签ID集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * 资费信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_salePlan;
                    bool m_salePlanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_RULEDETAIL_H_
