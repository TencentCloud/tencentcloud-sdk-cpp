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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GLOSSARYENTRYUPDATEITEM_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GLOSSARYENTRYUPDATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 术语条目
                */
                class GlossaryEntryUpdateItem : public AbstractModel
                {
                public:
                    GlossaryEntryUpdateItem();
                    ~GlossaryEntryUpdateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取术语条目 ID
                     * @return EntryId 术语条目 ID
                     * 
                     */
                    std::string GetEntryId() const;

                    /**
                     * 设置术语条目 ID
                     * @param _entryId 术语条目 ID
                     * 
                     */
                    void SetEntryId(const std::string& _entryId);

                    /**
                     * 判断参数 EntryId 是否已赋值
                     * @return EntryId 是否已赋值
                     * 
                     */
                    bool EntryIdHasBeenSet() const;

                    /**
                     * 获取源语言术语，限制1000字符

                     * @return SourceTerm 源语言术语，限制1000字符

                     * 
                     */
                    std::string GetSourceTerm() const;

                    /**
                     * 设置源语言术语，限制1000字符

                     * @param _sourceTerm 源语言术语，限制1000字符

                     * 
                     */
                    void SetSourceTerm(const std::string& _sourceTerm);

                    /**
                     * 判断参数 SourceTerm 是否已赋值
                     * @return SourceTerm 是否已赋值
                     * 
                     */
                    bool SourceTermHasBeenSet() const;

                    /**
                     * 获取目标语言术语，限制1000字符

                     * @return TargetTerm 目标语言术语，限制1000字符

                     * 
                     */
                    std::string GetTargetTerm() const;

                    /**
                     * 设置目标语言术语，限制1000字符

                     * @param _targetTerm 目标语言术语，限制1000字符

                     * 
                     */
                    void SetTargetTerm(const std::string& _targetTerm);

                    /**
                     * 判断参数 TargetTerm 是否已赋值
                     * @return TargetTerm 是否已赋值
                     * 
                     */
                    bool TargetTermHasBeenSet() const;

                private:

                    /**
                     * 术语条目 ID
                     */
                    std::string m_entryId;
                    bool m_entryIdHasBeenSet;

                    /**
                     * 源语言术语，限制1000字符

                     */
                    std::string m_sourceTerm;
                    bool m_sourceTermHasBeenSet;

                    /**
                     * 目标语言术语，限制1000字符

                     */
                    std::string m_targetTerm;
                    bool m_targetTermHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GLOSSARYENTRYUPDATEITEM_H_
