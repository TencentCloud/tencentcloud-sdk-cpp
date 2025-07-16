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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDINFO_H_

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
                * 直播审核关键词查询信息。
                */
                class AuditKeywordInfo : public AbstractModel
                {
                public:
                    AuditKeywordInfo();
                    ~AuditKeywordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词 Id。
                     * @return KeywordId 关键词 Id。
                     * 
                     */
                    std::string GetKeywordId() const;

                    /**
                     * 设置关键词 Id。
                     * @param _keywordId 关键词 Id。
                     * 
                     */
                    void SetKeywordId(const std::string& _keywordId);

                    /**
                     * 判断参数 KeywordId 是否已赋值
                     * @return KeywordId 是否已赋值
                     * 
                     */
                    bool KeywordIdHasBeenSet() const;

                    /**
                     * 获取关键词内容。
                     * @return Content 关键词内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置关键词内容。
                     * @param _content 关键词内容。
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
                     * 获取关键词标签。
可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。
                     * @return Label 关键词标签。
可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置关键词标签。
可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。
                     * @param _label 关键词标签。
可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：
1. 北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。
                     * @return CreateTime 创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：
1. 北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：
1. 北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。
                     * @param _createTime 创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：
1. 北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 关键词 Id。
                     */
                    std::string m_keywordId;
                    bool m_keywordIdHasBeenSet;

                    /**
                     * 关键词内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 关键词标签。
可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 创建时间。UTC 格式，例如：2018-11-29T19:00:00Z。
注意：
1. 北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITKEYWORDINFO_H_
