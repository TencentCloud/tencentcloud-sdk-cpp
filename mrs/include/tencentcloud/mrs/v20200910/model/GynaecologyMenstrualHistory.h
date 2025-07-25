/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_GYNAECOLOGYMENSTRUALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_GYNAECOLOGYMENSTRUALHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-妇科-月经史
                */
                class GynaecologyMenstrualHistory : public AbstractModel
                {
                public:
                    GynaecologyMenstrualHistory();
                    ~GynaecologyMenstrualHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取妇科月经史总体描述
                     * @return Text 妇科月经史总体描述
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置妇科月经史总体描述
                     * @param _text 妇科月经史总体描述
                     * 
                     */
                    void SetText(const KeyValueItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 妇科月经史总体描述
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_GYNAECOLOGYMENSTRUALHISTORY_H_
