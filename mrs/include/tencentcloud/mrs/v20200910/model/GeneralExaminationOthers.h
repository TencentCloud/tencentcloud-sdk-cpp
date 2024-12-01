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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONOTHERS_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONOTHERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/ValueUnitItem.h>
#include <tencentcloud/mrs/v20200910/model/ChestCircumferenceItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-其他项
                */
                class GeneralExaminationOthers : public AbstractModel
                {
                public:
                    GeneralExaminationOthers();
                    ~GeneralExaminationOthers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取面容与表情
                     * @return Countenance 面容与表情
                     * 
                     */
                    KeyValueItem GetCountenance() const;

                    /**
                     * 设置面容与表情
                     * @param _countenance 面容与表情
                     * 
                     */
                    void SetCountenance(const KeyValueItem& _countenance);

                    /**
                     * 判断参数 Countenance 是否已赋值
                     * @return Countenance 是否已赋值
                     * 
                     */
                    bool CountenanceHasBeenSet() const;

                    /**
                     * 获取精神状态
                     * @return MentalStatus 精神状态
                     * 
                     */
                    KeyValueItem GetMentalStatus() const;

                    /**
                     * 设置精神状态
                     * @param _mentalStatus 精神状态
                     * 
                     */
                    void SetMentalStatus(const KeyValueItem& _mentalStatus);

                    /**
                     * 判断参数 MentalStatus 是否已赋值
                     * @return MentalStatus 是否已赋值
                     * 
                     */
                    bool MentalStatusHasBeenSet() const;

                    /**
                     * 获取发育及营养状况
                     * @return DevelopmentCondition 发育及营养状况
                     * 
                     */
                    KeyValueItem GetDevelopmentCondition() const;

                    /**
                     * 设置发育及营养状况
                     * @param _developmentCondition 发育及营养状况
                     * 
                     */
                    void SetDevelopmentCondition(const KeyValueItem& _developmentCondition);

                    /**
                     * 判断参数 DevelopmentCondition 是否已赋值
                     * @return DevelopmentCondition 是否已赋值
                     * 
                     */
                    bool DevelopmentConditionHasBeenSet() const;

                    /**
                     * 获取记忆力
                     * @return Memory 记忆力
                     * 
                     */
                    KeyValueItem GetMemory() const;

                    /**
                     * 设置记忆力
                     * @param _memory 记忆力
                     * 
                     */
                    void SetMemory(const KeyValueItem& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取臀围
                     * @return Hipline 臀围
                     * 
                     */
                    ValueUnitItem GetHipline() const;

                    /**
                     * 设置臀围
                     * @param _hipline 臀围
                     * 
                     */
                    void SetHipline(const ValueUnitItem& _hipline);

                    /**
                     * 判断参数 Hipline 是否已赋值
                     * @return Hipline 是否已赋值
                     * 
                     */
                    bool HiplineHasBeenSet() const;

                    /**
                     * 获取腰臀比
                     * @return WaistHipRatio 腰臀比
                     * 
                     */
                    ValueUnitItem GetWaistHipRatio() const;

                    /**
                     * 设置腰臀比
                     * @param _waistHipRatio 腰臀比
                     * 
                     */
                    void SetWaistHipRatio(const ValueUnitItem& _waistHipRatio);

                    /**
                     * 判断参数 WaistHipRatio 是否已赋值
                     * @return WaistHipRatio 是否已赋值
                     * 
                     */
                    bool WaistHipRatioHasBeenSet() const;

                    /**
                     * 获取生活嗜好
                     * @return Addiction 生活嗜好
                     * 
                     */
                    KeyValueItem GetAddiction() const;

                    /**
                     * 设置生活嗜好
                     * @param _addiction 生活嗜好
                     * 
                     */
                    void SetAddiction(const KeyValueItem& _addiction);

                    /**
                     * 判断参数 Addiction 是否已赋值
                     * @return Addiction 是否已赋值
                     * 
                     */
                    bool AddictionHasBeenSet() const;

                    /**
                     * 获取生活能力评定
                     * @return AbilityOfLifeADL 生活能力评定
                     * 
                     */
                    KeyValueItem GetAbilityOfLifeADL() const;

                    /**
                     * 设置生活能力评定
                     * @param _abilityOfLifeADL 生活能力评定
                     * 
                     */
                    void SetAbilityOfLifeADL(const KeyValueItem& _abilityOfLifeADL);

                    /**
                     * 判断参数 AbilityOfLifeADL 是否已赋值
                     * @return AbilityOfLifeADL 是否已赋值
                     * 
                     */
                    bool AbilityOfLifeADLHasBeenSet() const;

                    /**
                     * 获取一般检查其他
                     * @return Others 一般检查其他
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置一般检查其他
                     * @param _others 一般检查其他
                     * 
                     */
                    void SetOthers(const std::vector<KeyValueItem>& _others);

                    /**
                     * 判断参数 Others 是否已赋值
                     * @return Others 是否已赋值
                     * 
                     */
                    bool OthersHasBeenSet() const;

                    /**
                     * 获取胸围
                     * @return ChestCircumference 胸围
                     * 
                     */
                    ChestCircumferenceItem GetChestCircumference() const;

                    /**
                     * 设置胸围
                     * @param _chestCircumference 胸围
                     * 
                     */
                    void SetChestCircumference(const ChestCircumferenceItem& _chestCircumference);

                    /**
                     * 判断参数 ChestCircumference 是否已赋值
                     * @return ChestCircumference 是否已赋值
                     * 
                     */
                    bool ChestCircumferenceHasBeenSet() const;

                private:

                    /**
                     * 面容与表情
                     */
                    KeyValueItem m_countenance;
                    bool m_countenanceHasBeenSet;

                    /**
                     * 精神状态
                     */
                    KeyValueItem m_mentalStatus;
                    bool m_mentalStatusHasBeenSet;

                    /**
                     * 发育及营养状况
                     */
                    KeyValueItem m_developmentCondition;
                    bool m_developmentConditionHasBeenSet;

                    /**
                     * 记忆力
                     */
                    KeyValueItem m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 臀围
                     */
                    ValueUnitItem m_hipline;
                    bool m_hiplineHasBeenSet;

                    /**
                     * 腰臀比
                     */
                    ValueUnitItem m_waistHipRatio;
                    bool m_waistHipRatioHasBeenSet;

                    /**
                     * 生活嗜好
                     */
                    KeyValueItem m_addiction;
                    bool m_addictionHasBeenSet;

                    /**
                     * 生活能力评定
                     */
                    KeyValueItem m_abilityOfLifeADL;
                    bool m_abilityOfLifeADLHasBeenSet;

                    /**
                     * 一般检查其他
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * 胸围
                     */
                    ChestCircumferenceItem m_chestCircumference;
                    bool m_chestCircumferenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_GENERALEXAMINATIONOTHERS_H_
