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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDLIBINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDLIBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播审核，关键词库信息。
                */
                class AuditKeywordLibInfo : public AbstractModel
                {
                public:
                    AuditKeywordLibInfo();
                    ~AuditKeywordLibInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>词库 Id。</p>
                     * @return LibId <p>词库 Id。</p>
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置<p>词库 Id。</p>
                     * @param _libId <p>词库 Id。</p>
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义词库名称。</p>
                     * @return Name <p>自定义词库名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>自定义词库名称。</p>
                     * @param _name <p>自定义词库名称。</p>
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
                     * 获取<p>自定义词库描述。</p>
                     * @return Description <p>自定义词库描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>自定义词库描述。</p>
                     * @param _description <p>自定义词库描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。</li></ol>
                     * @return CreateTime <p>创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。</li></ol>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。</li></ol>
                     * @param _createTime <p>创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。</li></ol>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>处理建议。<br>可取值：Review 疑似，Block 违规。</p>
                     * @return Suggestion <p>处理建议。<br>可取值：Review 疑似，Block 违规。</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>处理建议。<br>可取值：Review 疑似，Block 违规。</p>
                     * @param _suggestion <p>处理建议。<br>可取值：Review 疑似，Block 违规。</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>匹配模式。<br>可取值：ExactMatch 精确匹配， FuzzyMatch 模糊匹配。</p>
                     * @return MatchType <p>匹配模式。<br>可取值：ExactMatch 精确匹配， FuzzyMatch 模糊匹配。</p>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>匹配模式。<br>可取值：ExactMatch 精确匹配， FuzzyMatch 模糊匹配。</p>
                     * @param _matchType <p>匹配模式。<br>可取值：ExactMatch 精确匹配， FuzzyMatch 模糊匹配。</p>
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                private:

                    /**
                     * <p>词库 Id。</p>
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * <p>自定义词库名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>自定义词库描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。</li></ol>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>处理建议。<br>可取值：Review 疑似，Block 违规。</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>匹配模式。<br>可取值：ExactMatch 精确匹配， FuzzyMatch 模糊匹配。</p>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDLIBINFO_H_
