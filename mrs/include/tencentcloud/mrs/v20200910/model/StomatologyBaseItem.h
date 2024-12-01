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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_STOMATOLOGYBASEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_STOMATOLOGYBASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/StomatologyToothDecay.h>
#include <tencentcloud/mrs/v20200910/model/StomatologyGingiva.h>
#include <tencentcloud/mrs/v20200910/model/StomatologyPeriodontics.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/StomatologyBriefSummary.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-口腔科
                */
                class StomatologyBaseItem : public AbstractModel
                {
                public:
                    StomatologyBaseItem();
                    ~StomatologyBaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取龋齿
                     * @return ToothDecay 龋齿
                     * 
                     */
                    StomatologyToothDecay GetToothDecay() const;

                    /**
                     * 设置龋齿
                     * @param _toothDecay 龋齿
                     * 
                     */
                    void SetToothDecay(const StomatologyToothDecay& _toothDecay);

                    /**
                     * 判断参数 ToothDecay 是否已赋值
                     * @return ToothDecay 是否已赋值
                     * 
                     */
                    bool ToothDecayHasBeenSet() const;

                    /**
                     * 获取牙龈
                     * @return Gingiva 牙龈
                     * 
                     */
                    StomatologyGingiva GetGingiva() const;

                    /**
                     * 设置牙龈
                     * @param _gingiva 牙龈
                     * 
                     */
                    void SetGingiva(const StomatologyGingiva& _gingiva);

                    /**
                     * 判断参数 Gingiva 是否已赋值
                     * @return Gingiva 是否已赋值
                     * 
                     */
                    bool GingivaHasBeenSet() const;

                    /**
                     * 获取牙周
                     * @return Periodontics 牙周
                     * 
                     */
                    StomatologyPeriodontics GetPeriodontics() const;

                    /**
                     * 设置牙周
                     * @param _periodontics 牙周
                     * 
                     */
                    void SetPeriodontics(const StomatologyPeriodontics& _periodontics);

                    /**
                     * 判断参数 Periodontics 是否已赋值
                     * @return Periodontics 是否已赋值
                     * 
                     */
                    bool PeriodonticsHasBeenSet() const;

                    /**
                     * 获取口腔其他
                     * @return Others 口腔其他
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置口腔其他
                     * @param _others 口腔其他
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
                     * 获取小结
                     * @return BriefSummary 小结
                     * 
                     */
                    StomatologyBriefSummary GetBriefSummary() const;

                    /**
                     * 设置小结
                     * @param _briefSummary 小结
                     * 
                     */
                    void SetBriefSummary(const StomatologyBriefSummary& _briefSummary);

                    /**
                     * 判断参数 BriefSummary 是否已赋值
                     * @return BriefSummary 是否已赋值
                     * 
                     */
                    bool BriefSummaryHasBeenSet() const;

                private:

                    /**
                     * 龋齿
                     */
                    StomatologyToothDecay m_toothDecay;
                    bool m_toothDecayHasBeenSet;

                    /**
                     * 牙龈
                     */
                    StomatologyGingiva m_gingiva;
                    bool m_gingivaHasBeenSet;

                    /**
                     * 牙周
                     */
                    StomatologyPeriodontics m_periodontics;
                    bool m_periodonticsHasBeenSet;

                    /**
                     * 口腔其他
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * 小结
                     */
                    StomatologyBriefSummary m_briefSummary;
                    bool m_briefSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_STOMATOLOGYBASEITEM_H_
