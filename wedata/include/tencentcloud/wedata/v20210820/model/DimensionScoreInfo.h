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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONSCOREINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONSCOREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 维度评分信息
                */
                class DimensionScoreInfo : public AbstractModel
                {
                public:
                    DimensionScoreInfo();
                    ~DimensionScoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 维度名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const double& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取设置人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 设置人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUserId() const;

                    /**
                     * 设置设置人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 设置人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const int64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取设置人名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 设置人名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置设置人名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 设置人名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取更新时间 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取参与评估表数量
                     * @return JoinTableNumber 参与评估表数量
                     * 
                     */
                    int64_t GetJoinTableNumber() const;

                    /**
                     * 设置参与评估表数量
                     * @param _joinTableNumber 参与评估表数量
                     * 
                     */
                    void SetJoinTableNumber(const int64_t& _joinTableNumber);

                    /**
                     * 判断参数 JoinTableNumber 是否已赋值
                     * @return JoinTableNumber 是否已赋值
                     * 
                     */
                    bool JoinTableNumberHasBeenSet() const;

                    /**
                     * 获取评分
                     * @return Score 评分
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置评分
                     * @param _score 评分
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取设置人idStr
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserIdStr 设置人idStr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserIdStr() const;

                    /**
                     * 设置设置人idStr
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userIdStr 设置人idStr
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserIdStr(const std::string& _userIdStr);

                    /**
                     * 判断参数 UserIdStr 是否已赋值
                     * @return UserIdStr 是否已赋值
                     * 
                     */
                    bool UserIdStrHasBeenSet() const;

                private:

                    /**
                     * 维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 设置人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 设置人名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 更新时间 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 参与评估表数量
                     */
                    int64_t m_joinTableNumber;
                    bool m_joinTableNumberHasBeenSet;

                    /**
                     * 评分
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 设置人idStr
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userIdStr;
                    bool m_userIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONSCOREINFO_H_
