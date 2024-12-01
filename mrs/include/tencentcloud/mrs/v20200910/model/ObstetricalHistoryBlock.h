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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OBSTETRICALHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OBSTETRICALHISTORYBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/MenstrualHistoryDetailBlock.h>
#include <tencentcloud/mrs/v20200910/model/FertilityHistoryBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 婚姻-生育史
                */
                class ObstetricalHistoryBlock : public AbstractModel
                {
                public:
                    ObstetricalHistoryBlock();
                    ~ObstetricalHistoryBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取婚姻史
                     * @return MarriageHistory 婚姻史
                     * 
                     */
                    MenstrualHistoryDetailBlock GetMarriageHistory() const;

                    /**
                     * 设置婚姻史
                     * @param _marriageHistory 婚姻史
                     * 
                     */
                    void SetMarriageHistory(const MenstrualHistoryDetailBlock& _marriageHistory);

                    /**
                     * 判断参数 MarriageHistory 是否已赋值
                     * @return MarriageHistory 是否已赋值
                     * 
                     */
                    bool MarriageHistoryHasBeenSet() const;

                    /**
                     * 获取婚育史
                     * @return FertilityHistory 婚育史
                     * 
                     */
                    FertilityHistoryBlock GetFertilityHistory() const;

                    /**
                     * 设置婚育史
                     * @param _fertilityHistory 婚育史
                     * 
                     */
                    void SetFertilityHistory(const FertilityHistoryBlock& _fertilityHistory);

                    /**
                     * 判断参数 FertilityHistory 是否已赋值
                     * @return FertilityHistory 是否已赋值
                     * 
                     */
                    bool FertilityHistoryHasBeenSet() const;

                private:

                    /**
                     * 婚姻史
                     */
                    MenstrualHistoryDetailBlock m_marriageHistory;
                    bool m_marriageHistoryHasBeenSet;

                    /**
                     * 婚育史
                     */
                    FertilityHistoryBlock m_fertilityHistory;
                    bool m_fertilityHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OBSTETRICALHISTORYBLOCK_H_
