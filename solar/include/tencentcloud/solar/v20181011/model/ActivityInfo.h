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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_ACTIVITYINFO_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_ACTIVITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * 活动详情
                */
                class ActivityInfo : public AbstractModel
                {
                public:
                    ActivityInfo();
                    ~ActivityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活动使用模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 活动使用模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置活动使用模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 活动使用模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取活动标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityTitle 活动标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityTitle() const;

                    /**
                     * 设置活动标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityTitle 活动标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityTitle(const std::string& _activityTitle);

                    /**
                     * 判断参数 ActivityTitle 是否已赋值
                     * @return ActivityTitle 是否已赋值
                     * 
                     */
                    bool ActivityTitleHasBeenSet() const;

                    /**
                     * 获取活动描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityDesc 活动描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityDesc() const;

                    /**
                     * 设置活动描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityDesc 活动描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityDesc(const std::string& _activityDesc);

                    /**
                     * 判断参数 ActivityDesc 是否已赋值
                     * @return ActivityDesc 是否已赋值
                     * 
                     */
                    bool ActivityDescHasBeenSet() const;

                    /**
                     * 获取活动封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityCover 活动封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityCover() const;

                    /**
                     * 设置活动封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityCover 活动封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityCover(const std::string& _activityCover);

                    /**
                     * 判断参数 ActivityCover 是否已赋值
                     * @return ActivityCover 是否已赋值
                     * 
                     */
                    bool ActivityCoverHasBeenSet() const;

                    /**
                     * 获取活动类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityType 活动类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置活动类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityType 活动类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityId 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityId 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取活动模板自定义配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonalConfig 活动模板自定义配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPersonalConfig() const;

                    /**
                     * 设置活动模板自定义配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _personalConfig 活动模板自定义配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPersonalConfig(const std::string& _personalConfig);

                    /**
                     * 判断参数 PersonalConfig 是否已赋值
                     * @return PersonalConfig 是否已赋值
                     * 
                     */
                    bool PersonalConfigHasBeenSet() const;

                private:

                    /**
                     * 活动使用模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 活动标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityTitle;
                    bool m_activityTitleHasBeenSet;

                    /**
                     * 活动描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityDesc;
                    bool m_activityDescHasBeenSet;

                    /**
                     * 活动封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityCover;
                    bool m_activityCoverHasBeenSet;

                    /**
                     * 活动类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 活动模板自定义配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_personalConfig;
                    bool m_personalConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_ACTIVITYINFO_H_
