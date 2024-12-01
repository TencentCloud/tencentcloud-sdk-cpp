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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OBSTERICALMEDICALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OBSTERICALMEDICALHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 孕产史
                */
                class ObstericalMedicalHistory : public AbstractModel
                {
                public:
                    ObstericalMedicalHistory();
                    ~ObstericalMedicalHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取婚史
                     * @return MarriageHistory 婚史
                     * 
                     */
                    std::string GetMarriageHistory() const;

                    /**
                     * 设置婚史
                     * @param _marriageHistory 婚史
                     * 
                     */
                    void SetMarriageHistory(const std::string& _marriageHistory);

                    /**
                     * 判断参数 MarriageHistory 是否已赋值
                     * @return MarriageHistory 是否已赋值
                     * 
                     */
                    bool MarriageHistoryHasBeenSet() const;

                    /**
                     * 获取孕史
                     * @return FertilityHistory 孕史
                     * 
                     */
                    std::string GetFertilityHistory() const;

                    /**
                     * 设置孕史
                     * @param _fertilityHistory 孕史
                     * 
                     */
                    void SetFertilityHistory(const std::string& _fertilityHistory);

                    /**
                     * 判断参数 FertilityHistory 是否已赋值
                     * @return FertilityHistory 是否已赋值
                     * 
                     */
                    bool FertilityHistoryHasBeenSet() const;

                private:

                    /**
                     * 婚史
                     */
                    std::string m_marriageHistory;
                    bool m_marriageHistoryHasBeenSet;

                    /**
                     * 孕史
                     */
                    std::string m_fertilityHistory;
                    bool m_fertilityHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OBSTERICALMEDICALHISTORY_H_
