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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OPHTHALMOLOGYBAREEYESIGHT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OPHTHALMOLOGYBAREEYESIGHT_H_

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
                * 体检报告-眼科-裸眼视力
                */
                class OphthalmologyBareEyeSight : public AbstractModel
                {
                public:
                    OphthalmologyBareEyeSight();
                    ~OphthalmologyBareEyeSight() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取左眼视力
                     * @return LeftEyeVisual 左眼视力
                     * 
                     */
                    KeyValueItem GetLeftEyeVisual() const;

                    /**
                     * 设置左眼视力
                     * @param _leftEyeVisual 左眼视力
                     * 
                     */
                    void SetLeftEyeVisual(const KeyValueItem& _leftEyeVisual);

                    /**
                     * 判断参数 LeftEyeVisual 是否已赋值
                     * @return LeftEyeVisual 是否已赋值
                     * 
                     */
                    bool LeftEyeVisualHasBeenSet() const;

                    /**
                     * 获取裸眼视力
                     * @return Text 裸眼视力
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置裸眼视力
                     * @param _text 裸眼视力
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
                     * 获取右眼视力
                     * @return RightEyeVisual 右眼视力
                     * 
                     */
                    KeyValueItem GetRightEyeVisual() const;

                    /**
                     * 设置右眼视力
                     * @param _rightEyeVisual 右眼视力
                     * 
                     */
                    void SetRightEyeVisual(const KeyValueItem& _rightEyeVisual);

                    /**
                     * 判断参数 RightEyeVisual 是否已赋值
                     * @return RightEyeVisual 是否已赋值
                     * 
                     */
                    bool RightEyeVisualHasBeenSet() const;

                private:

                    /**
                     * 左眼视力
                     */
                    KeyValueItem m_leftEyeVisual;
                    bool m_leftEyeVisualHasBeenSet;

                    /**
                     * 裸眼视力
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 右眼视力
                     */
                    KeyValueItem m_rightEyeVisual;
                    bool m_rightEyeVisualHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OPHTHALMOLOGYBAREEYESIGHT_H_
