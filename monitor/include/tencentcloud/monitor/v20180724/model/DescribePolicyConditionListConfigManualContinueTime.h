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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCONTINUETIME_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCONTINUETIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.ConfigManual.ContinueTime
                */
                class DescribePolicyConditionListConfigManualContinueTime : public AbstractModel
                {
                public:
                    DescribePolicyConditionListConfigManualContinueTime();
                    ~DescribePolicyConditionListConfigManualContinueTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Default 默认持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefault() const;

                    /**
                     * 设置默认持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _default 默认持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefault(const int64_t& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取可选持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 可选持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetKeys() const;

                    /**
                     * 设置可选持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keys 可选持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeys(const std::vector<int64_t>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取是否必须
                     * @return Need 是否必须
                     * 
                     */
                    bool GetNeed() const;

                    /**
                     * 设置是否必须
                     * @param _need 是否必须
                     * 
                     */
                    void SetNeed(const bool& _need);

                    /**
                     * 判断参数 Need 是否已赋值
                     * @return Need 是否已赋值
                     * 
                     */
                    bool NeedHasBeenSet() const;

                private:

                    /**
                     * 默认持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 可选持续时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 是否必须
                     */
                    bool m_need;
                    bool m_needHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALCONTINUETIME_H_
