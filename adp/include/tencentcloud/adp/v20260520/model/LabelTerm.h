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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 标准词（标签值的一项）
                */
                class LabelTerm : public AbstractModel
                {
                public:
                    LabelTerm();
                    ~LabelTerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>同义词列表</p>
                     * @return SynonymList <p>同义词列表</p>
                     * 
                     */
                    std::vector<std::string> GetSynonymList() const;

                    /**
                     * 设置<p>同义词列表</p>
                     * @param _synonymList <p>同义词列表</p>
                     * 
                     */
                    void SetSynonymList(const std::vector<std::string>& _synonymList);

                    /**
                     * 判断参数 SynonymList 是否已赋值
                     * @return SynonymList 是否已赋值
                     * 
                     */
                    bool SynonymListHasBeenSet() const;

                    /**
                     * 获取<p>标准词</p>
                     * @return Term <p>标准词</p>
                     * 
                     */
                    std::string GetTerm() const;

                    /**
                     * 设置<p>标准词</p>
                     * @param _term <p>标准词</p>
                     * 
                     */
                    void SetTerm(const std::string& _term);

                    /**
                     * 判断参数 Term 是否已赋值
                     * @return Term 是否已赋值
                     * 
                     */
                    bool TermHasBeenSet() const;

                    /**
                     * 获取<p>标准词 ID（由后台生成，创建时不传）</p>
                     * @return TermId <p>标准词 ID（由后台生成，创建时不传）</p>
                     * 
                     */
                    std::string GetTermId() const;

                    /**
                     * 设置<p>标准词 ID（由后台生成，创建时不传）</p>
                     * @param _termId <p>标准词 ID（由后台生成，创建时不传）</p>
                     * 
                     */
                    void SetTermId(const std::string& _termId);

                    /**
                     * 判断参数 TermId 是否已赋值
                     * @return TermId 是否已赋值
                     * 
                     */
                    bool TermIdHasBeenSet() const;

                private:

                    /**
                     * <p>同义词列表</p>
                     */
                    std::vector<std::string> m_synonymList;
                    bool m_synonymListHasBeenSet;

                    /**
                     * <p>标准词</p>
                     */
                    std::string m_term;
                    bool m_termHasBeenSet;

                    /**
                     * <p>标准词 ID（由后台生成，创建时不传）</p>
                     */
                    std::string m_termId;
                    bool m_termIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LABELTERM_H_
