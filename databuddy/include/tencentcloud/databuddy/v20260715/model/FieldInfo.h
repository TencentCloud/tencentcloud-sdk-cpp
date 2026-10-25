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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FIELDINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 统一搜索字段信息
                */
                class FieldInfo : public AbstractModel
                {
                public:
                    FieldInfo();
                    ~FieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字段名称</p>
                     * @return Name <p>字段名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>字段名称</p>
                     * @param _name <p>字段名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>字段描述</p>
                     * @return Comment <p>字段描述</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>字段描述</p>
                     * @param _comment <p>字段描述</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>字段类型</p>
                     * @return Type <p>字段类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>字段类型</p>
                     * @param _type <p>字段类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>语言类型</p>
                     * @return Lang <p>语言类型</p>
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置<p>语言类型</p>
                     * @param _lang <p>语言类型</p>
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取<p>字段内容或代码片段</p>
                     * @return Content <p>字段内容或代码片段</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>字段内容或代码片段</p>
                     * @param _content <p>字段内容或代码片段</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>字段采样值</p>
                     * @return SampleValues <p>字段采样值</p>
                     * 
                     */
                    std::vector<std::string> GetSampleValues() const;

                    /**
                     * 设置<p>字段采样值</p>
                     * @param _sampleValues <p>字段采样值</p>
                     * 
                     */
                    void SetSampleValues(const std::vector<std::string>& _sampleValues);

                    /**
                     * 判断参数 SampleValues 是否已赋值
                     * @return SampleValues 是否已赋值
                     * 
                     */
                    bool SampleValuesHasBeenSet() const;

                private:

                    /**
                     * <p>字段名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>字段描述</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>字段类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>语言类型</p>
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * <p>字段内容或代码片段</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>字段采样值</p>
                     */
                    std::vector<std::string> m_sampleValues;
                    bool m_sampleValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FIELDINFO_H_
