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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYLEAKAGEDATA_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYLEAKAGEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 数据泄露详情
                */
                class DisplayLeakageData : public AbstractModel
                {
                public:
                    DisplayLeakageData();
                    ~DisplayLeakageData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return Name 事件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名称
                     * @param _name 事件名称
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
                     * 获取事件描述
                     * @return Description 事件描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件描述
                     * @param _description 事件描述
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
                     * 获取数据源
                     * @return Source 数据源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置数据源
                     * @param _source 数据源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取风险等级：1-低危 2-中危 3-高危 4-严重 5-误报
                     * @return RiskLevel 风险等级：1-低危 2-中危 3-高危 4-严重 5-误报
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级：1-低危 2-中危 3-高危 4-严重 5-误报
                     * @param _riskLevel 风险等级：1-低危 2-中危 3-高危 4-严重 5-误报
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取链接
                     * @return Url 链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置链接
                     * @param _url 链接
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取截图
                     * @return Screenshot 截图
                     * 
                     */
                    std::string GetScreenshot() const;

                    /**
                     * 设置截图
                     * @param _screenshot 截图
                     * 
                     */
                    void SetScreenshot(const std::string& _screenshot);

                    /**
                     * 判断参数 Screenshot 是否已赋值
                     * @return Screenshot 是否已赋值
                     * 
                     */
                    bool ScreenshotHasBeenSet() const;

                    /**
                     * 获取建议
                     * @return Suggestion 建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议
                     * @param _suggestion 建议
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
                     * 获取关键词
                     * @return Keyword 关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词
                     * @param _keyword 关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取处置状态：0-待处理 1-处理中 2-已处理
                     * @return HandlingStatus 处置状态：0-待处理 1-处理中 2-已处理
                     * 
                     */
                    int64_t GetHandlingStatus() const;

                    /**
                     * 设置处置状态：0-待处理 1-处理中 2-已处理
                     * @param _handlingStatus 处置状态：0-待处理 1-处理中 2-已处理
                     * 
                     */
                    void SetHandlingStatus(const int64_t& _handlingStatus);

                    /**
                     * 判断参数 HandlingStatus 是否已赋值
                     * @return HandlingStatus 是否已赋值
                     * 
                     */
                    bool HandlingStatusHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 风险等级：1-低危 2-中危 3-高危 4-严重 5-误报
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 截图
                     */
                    std::string m_screenshot;
                    bool m_screenshotHasBeenSet;

                    /**
                     * 建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 处置状态：0-待处理 1-处理中 2-已处理
                     */
                    int64_t m_handlingStatus;
                    bool m_handlingStatusHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYLEAKAGEDATA_H_
