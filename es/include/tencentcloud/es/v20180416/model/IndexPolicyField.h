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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXPOLICYFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXPOLICYFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 索引生命周期字段
                */
                class IndexPolicyField : public AbstractModel
                {
                public:
                    IndexPolicyField();
                    ~IndexPolicyField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启warm阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmEnable 是否开启warm阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarmEnable() const;

                    /**
                     * 设置是否开启warm阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmEnable 是否开启warm阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmEnable(const std::string& _warmEnable);

                    /**
                     * 判断参数 WarmEnable 是否已赋值
                     * @return WarmEnable 是否已赋值
                     * 
                     */
                    bool WarmEnableHasBeenSet() const;

                    /**
                     * 获取warm阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarmMinAge warm阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarmMinAge() const;

                    /**
                     * 设置warm阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warmMinAge warm阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarmMinAge(const std::string& _warmMinAge);

                    /**
                     * 判断参数 WarmMinAge 是否已赋值
                     * @return WarmMinAge 是否已赋值
                     * 
                     */
                    bool WarmMinAgeHasBeenSet() const;

                    /**
                     * 获取是否开启cold阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdEnable 是否开启cold阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColdEnable() const;

                    /**
                     * 设置是否开启cold阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldEnable 是否开启cold阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdEnable(const std::string& _coldEnable);

                    /**
                     * 判断参数 ColdEnable 是否已赋值
                     * @return ColdEnable 是否已赋值
                     * 
                     */
                    bool ColdEnableHasBeenSet() const;

                    /**
                     * 获取cold阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdMinAge cold阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColdMinAge() const;

                    /**
                     * 设置cold阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldMinAge cold阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdMinAge(const std::string& _coldMinAge);

                    /**
                     * 判断参数 ColdMinAge 是否已赋值
                     * @return ColdMinAge 是否已赋值
                     * 
                     */
                    bool ColdMinAgeHasBeenSet() const;

                    /**
                     * 获取是否开启frozen阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenEnable 是否开启frozen阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrozenEnable() const;

                    /**
                     * 设置是否开启frozen阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenEnable 是否开启frozen阶段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenEnable(const std::string& _frozenEnable);

                    /**
                     * 判断参数 FrozenEnable 是否已赋值
                     * @return FrozenEnable 是否已赋值
                     * 
                     */
                    bool FrozenEnableHasBeenSet() const;

                    /**
                     * 获取frozen阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrozenMinAge frozen阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrozenMinAge() const;

                    /**
                     * 设置frozen阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frozenMinAge frozen阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrozenMinAge(const std::string& _frozenMinAge);

                    /**
                     * 判断参数 FrozenMinAge 是否已赋值
                     * @return FrozenMinAge 是否已赋值
                     * 
                     */
                    bool FrozenMinAgeHasBeenSet() const;

                    /**
                     * 获取/
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColdAction /
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColdAction() const;

                    /**
                     * 设置/
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coldAction /
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColdAction(const std::string& _coldAction);

                    /**
                     * 判断参数 ColdAction 是否已赋值
                     * @return ColdAction 是否已赋值
                     * 
                     */
                    bool ColdActionHasBeenSet() const;

                private:

                    /**
                     * 是否开启warm阶段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warmEnable;
                    bool m_warmEnableHasBeenSet;

                    /**
                     * warm阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warmMinAge;
                    bool m_warmMinAgeHasBeenSet;

                    /**
                     * 是否开启cold阶段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coldEnable;
                    bool m_coldEnableHasBeenSet;

                    /**
                     * cold阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coldMinAge;
                    bool m_coldMinAgeHasBeenSet;

                    /**
                     * 是否开启frozen阶段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frozenEnable;
                    bool m_frozenEnableHasBeenSet;

                    /**
                     * frozen阶段转入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frozenMinAge;
                    bool m_frozenMinAgeHasBeenSet;

                    /**
                     * /
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coldAction;
                    bool m_coldActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXPOLICYFIELD_H_
