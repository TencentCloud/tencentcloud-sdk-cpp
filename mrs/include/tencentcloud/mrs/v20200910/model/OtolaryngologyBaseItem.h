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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OTOLARYNGOLOGYBASEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OTOLARYNGOLOGYBASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/OtolaryngologyEar.h>
#include <tencentcloud/mrs/v20200910/model/OtolaryngologyNose.h>
#include <tencentcloud/mrs/v20200910/model/OtolaryngologyLarynx.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/OtolaryngologyBriefSummary.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-耳鼻喉科
                */
                class OtolaryngologyBaseItem : public AbstractModel
                {
                public:
                    OtolaryngologyBaseItem();
                    ~OtolaryngologyBaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取耳朵
                     * @return Ear 耳朵
                     * 
                     */
                    OtolaryngologyEar GetEar() const;

                    /**
                     * 设置耳朵
                     * @param _ear 耳朵
                     * 
                     */
                    void SetEar(const OtolaryngologyEar& _ear);

                    /**
                     * 判断参数 Ear 是否已赋值
                     * @return Ear 是否已赋值
                     * 
                     */
                    bool EarHasBeenSet() const;

                    /**
                     * 获取鼻
                     * @return Nose 鼻
                     * 
                     */
                    OtolaryngologyNose GetNose() const;

                    /**
                     * 设置鼻
                     * @param _nose 鼻
                     * 
                     */
                    void SetNose(const OtolaryngologyNose& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取喉
                     * @return Larynx 喉
                     * 
                     */
                    OtolaryngologyLarynx GetLarynx() const;

                    /**
                     * 设置喉
                     * @param _larynx 喉
                     * 
                     */
                    void SetLarynx(const OtolaryngologyLarynx& _larynx);

                    /**
                     * 判断参数 Larynx 是否已赋值
                     * @return Larynx 是否已赋值
                     * 
                     */
                    bool LarynxHasBeenSet() const;

                    /**
                     * 获取耳鼻喉其他
                     * @return Others 耳鼻喉其他
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置耳鼻喉其他
                     * @param _others 耳鼻喉其他
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
                    OtolaryngologyBriefSummary GetBriefSummary() const;

                    /**
                     * 设置小结
                     * @param _briefSummary 小结
                     * 
                     */
                    void SetBriefSummary(const OtolaryngologyBriefSummary& _briefSummary);

                    /**
                     * 判断参数 BriefSummary 是否已赋值
                     * @return BriefSummary 是否已赋值
                     * 
                     */
                    bool BriefSummaryHasBeenSet() const;

                private:

                    /**
                     * 耳朵
                     */
                    OtolaryngologyEar m_ear;
                    bool m_earHasBeenSet;

                    /**
                     * 鼻
                     */
                    OtolaryngologyNose m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * 喉
                     */
                    OtolaryngologyLarynx m_larynx;
                    bool m_larynxHasBeenSet;

                    /**
                     * 耳鼻喉其他
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * 小结
                     */
                    OtolaryngologyBriefSummary m_briefSummary;
                    bool m_briefSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OTOLARYNGOLOGYBASEITEM_H_
