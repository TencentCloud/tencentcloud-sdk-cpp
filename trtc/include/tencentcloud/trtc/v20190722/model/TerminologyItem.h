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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TERMINOLOGYITEM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TERMINOLOGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TermPair.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 伴生转录术语表项
                */
                class TerminologyItem : public AbstractModel
                {
                public:
                    TerminologyItem();
                    ~TerminologyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>翻译目标语言。</p>
                     * @return TargetLang <p>翻译目标语言。</p>
                     * 
                     */
                    std::string GetTargetLang() const;

                    /**
                     * 设置<p>翻译目标语言。</p>
                     * @param _targetLang <p>翻译目标语言。</p>
                     * 
                     */
                    void SetTargetLang(const std::string& _targetLang);

                    /**
                     * 判断参数 TargetLang 是否已赋值
                     * @return TargetLang 是否已赋值
                     * 
                     */
                    bool TargetLangHasBeenSet() const;

                    /**
                     * 获取<p>翻译目标语言对应的翻译术语配置。</p>
                     * @return Terminology <p>翻译目标语言对应的翻译术语配置。</p>
                     * 
                     */
                    std::vector<TermPair> GetTerminology() const;

                    /**
                     * 设置<p>翻译目标语言对应的翻译术语配置。</p>
                     * @param _terminology <p>翻译目标语言对应的翻译术语配置。</p>
                     * 
                     */
                    void SetTerminology(const std::vector<TermPair>& _terminology);

                    /**
                     * 判断参数 Terminology 是否已赋值
                     * @return Terminology 是否已赋值
                     * 
                     */
                    bool TerminologyHasBeenSet() const;

                private:

                    /**
                     * <p>翻译目标语言。</p>
                     */
                    std::string m_targetLang;
                    bool m_targetLangHasBeenSet;

                    /**
                     * <p>翻译目标语言对应的翻译术语配置。</p>
                     */
                    std::vector<TermPair> m_terminology;
                    bool m_terminologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TERMINOLOGYITEM_H_
