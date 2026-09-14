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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATELABELRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATELABELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/LabelTerm.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateLabel返回参数结构体
                */
                class CreateLabelResponse : public AbstractModel
                {
                public:
                    CreateLabelResponse();
                    ~CreateLabelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标签 ID</p>
                     * @return LabelId <p>标签 ID</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>标签值（标准词 + 同义词列表，含后台生成的 term_id）</p>
                     * @return TermList <p>标签值（标准词 + 同义词列表，含后台生成的 term_id）</p>
                     * 
                     */
                    std::vector<LabelTerm> GetTermList() const;

                    /**
                     * 判断参数 TermList 是否已赋值
                     * @return TermList 是否已赋值
                     * 
                     */
                    bool TermListHasBeenSet() const;

                private:

                    /**
                     * <p>标签 ID</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>标签值（标准词 + 同义词列表，含后台生成的 term_id）</p>
                     */
                    std::vector<LabelTerm> m_termList;
                    bool m_termListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATELABELRESPONSE_H_
