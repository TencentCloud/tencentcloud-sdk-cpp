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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OTOLARYNGOLOGYEAR_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OTOLARYNGOLOGYEAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/HearingItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-耳鼻喉科-耳朵
                */
                class OtolaryngologyEar : public AbstractModel
                {
                public:
                    OtolaryngologyEar();
                    ~OtolaryngologyEar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取耳总体描述
                     * @return Text 耳总体描述
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置耳总体描述
                     * @param _text 耳总体描述
                     * 
                     */
                    void SetText(const KeyValueItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取听力
                     * @return Hearing 听力
                     * 
                     */
                    HearingItem GetHearing() const;

                    /**
                     * 设置听力
                     * @param _hearing 听力
                     * 
                     */
                    void SetHearing(const HearingItem& _hearing);

                    /**
                     * 判断参数 Hearing 是否已赋值
                     * @return Hearing 是否已赋值
                     * 
                     */
                    bool HearingHasBeenSet() const;

                private:

                    /**
                     * 耳总体描述
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 听力
                     */
                    HearingItem m_hearing;
                    bool m_hearingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OTOLARYNGOLOGYEAR_H_
