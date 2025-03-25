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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_FEATURE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_FEATURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 功能描述模型
                */
                class Feature : public AbstractModel
                {
                public:
                    Feature();
                    ~Feature() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引
                     * @return Id 索引
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置索引
                     * @param _id 索引
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取功能ID
                     * @return FeatureId 功能ID
                     * 
                     */
                    uint64_t GetFeatureId() const;

                    /**
                     * 设置功能ID
                     * @param _featureId 功能ID
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
                     * 获取功能名称
                     * @return Name 功能名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置功能名称
                     * @param _name 功能名称
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
                     * 获取功能类型
                     * @return Type 功能类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置功能类型
                     * @param _type 功能类型
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
                     * 获取是否可以申请试用
                     * @return Trial 是否可以申请试用
                     * 
                     */
                    bool GetTrial() const;

                    /**
                     * 设置是否可以申请试用
                     * @param _trial 是否可以申请试用
                     * 
                     */
                    void SetTrial(const bool& _trial);

                    /**
                     * 判断参数 Trial 是否已赋值
                     * @return Trial 是否已赋值
                     * 
                     */
                    bool TrialHasBeenSet() const;

                    /**
                     * 获取可以试用的次数
                     * @return TrialCount 可以试用的次数
                     * 
                     */
                    uint64_t GetTrialCount() const;

                    /**
                     * 设置可以试用的次数
                     * @param _trialCount 可以试用的次数
                     * 
                     */
                    void SetTrialCount(const uint64_t& _trialCount);

                    /**
                     * 判断参数 TrialCount 是否已赋值
                     * @return TrialCount 是否已赋值
                     * 
                     */
                    bool TrialCountHasBeenSet() const;

                    /**
                     * 获取可以试用的时长，单位天
                     * @return Duration 可以试用的时长，单位天
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置可以试用的时长，单位天
                     * @param _duration 可以试用的时长，单位天
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

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

                private:

                    /**
                     * 索引
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 功能ID
                     */
                    uint64_t m_featureId;
                    bool m_featureIdHasBeenSet;

                    /**
                     * 功能名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 功能类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否可以申请试用
                     */
                    bool m_trial;
                    bool m_trialHasBeenSet;

                    /**
                     * 可以试用的次数
                     */
                    uint64_t m_trialCount;
                    bool m_trialCountHasBeenSet;

                    /**
                     * 可以试用的时长，单位天
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_FEATURE_H_
