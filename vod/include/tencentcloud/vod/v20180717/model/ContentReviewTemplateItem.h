/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PornConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/TerrorismConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/PoliticalConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/UserDefineConfigureInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音视频审核模板详情
                */
                class ContentReviewTemplateItem : public AbstractModel
                {
                public:
                    ContentReviewTemplateItem();
                    ~ContentReviewTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音视频审核模板唯一标识。
                     * @return Definition 音视频审核模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置音视频审核模板唯一标识。
                     * @param _definition 音视频审核模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取音视频审核模板名称，长度限制：64 个字符。
                     * @return Name 音视频审核模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置音视频审核模板名称，长度限制：64 个字符。
                     * @param _name 音视频审核模板名称，长度限制：64 个字符。
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
                     * 获取音视频审核模板描述信息，长度限制：256 个字符。
                     * @return Comment 音视频审核模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置音视频审核模板描述信息，长度限制：256 个字符。
                     * @param _comment 音视频审核模板描述信息，长度限制：256 个字符。
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
                     * 获取鉴别涉及令人反感的信息的控制参数。
                     * @return PornConfigure 鉴别涉及令人反感的信息的控制参数。
                     * 
                     */
                    PornConfigureInfo GetPornConfigure() const;

                    /**
                     * 设置鉴别涉及令人反感的信息的控制参数。
                     * @param _pornConfigure 鉴别涉及令人反感的信息的控制参数。
                     * 
                     */
                    void SetPornConfigure(const PornConfigureInfo& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     * 
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取鉴别涉及令人不安全的信息的控制参数。
                     * @return TerrorismConfigure 鉴别涉及令人不安全的信息的控制参数。
                     * 
                     */
                    TerrorismConfigureInfo GetTerrorismConfigure() const;

                    /**
                     * 设置鉴别涉及令人不安全的信息的控制参数。
                     * @param _terrorismConfigure 鉴别涉及令人不安全的信息的控制参数。
                     * 
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     * 
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取鉴别涉及令人不适宜的信息的控制参数。
                     * @return PoliticalConfigure 鉴别涉及令人不适宜的信息的控制参数。
                     * 
                     */
                    PoliticalConfigureInfo GetPoliticalConfigure() const;

                    /**
                     * 设置鉴别涉及令人不适宜的信息的控制参数。
                     * @param _politicalConfigure 鉴别涉及令人不适宜的信息的控制参数。
                     * 
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     * 
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     * @return ProhibitedConfigure 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     * 
                     */
                    ProhibitedConfigureInfo GetProhibitedConfigure() const;

                    /**
                     * 设置违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     * @param _prohibitedConfigure 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     * 
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     * 
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取用户自定义音视频审核控制参数。
                     * @return UserDefineConfigure 用户自定义音视频审核控制参数。
                     * 
                     */
                    UserDefineConfigureInfo GetUserDefineConfigure() const;

                    /**
                     * 设置用户自定义音视频审核控制参数。
                     * @param _userDefineConfigure 用户自定义音视频审核控制参数。
                     * 
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     * 
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取音视频审核结果是否进入音视频审核墙（对音视频审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * @return ReviewWallSwitch 音视频审核结果是否进入音视频审核墙（对音视频审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * 
                     */
                    std::string GetReviewWallSwitch() const;

                    /**
                     * 设置音视频审核结果是否进入音视频审核墙（对音视频审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * @param _reviewWallSwitch 音视频审核结果是否进入音视频审核墙（对音视频审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * 
                     */
                    void SetReviewWallSwitch(const std::string& _reviewWallSwitch);

                    /**
                     * 判断参数 ReviewWallSwitch 是否已赋值
                     * @return ReviewWallSwitch 是否已赋值
                     * 
                     */
                    bool ReviewWallSwitchHasBeenSet() const;

                    /**
                     * 获取截帧间隔，单位为秒。当不填时，默认截帧间隔为 1 秒，最小值为 0.5 秒。
                     * @return ScreenshotInterval 截帧间隔，单位为秒。当不填时，默认截帧间隔为 1 秒，最小值为 0.5 秒。
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置截帧间隔，单位为秒。当不填时，默认截帧间隔为 1 秒，最小值为 0.5 秒。
                     * @param _screenshotInterval 截帧间隔，单位为秒。当不填时，默认截帧间隔为 1 秒，最小值为 0.5 秒。
                     * 
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     * 
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 音视频审核模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 音视频审核模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 音视频审核模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 鉴别涉及令人反感的信息的控制参数。
                     */
                    PornConfigureInfo m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * 鉴别涉及令人不安全的信息的控制参数。
                     */
                    TerrorismConfigureInfo m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * 鉴别涉及令人不适宜的信息的控制参数。
                     */
                    PoliticalConfigureInfo m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     */
                    ProhibitedConfigureInfo m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * 用户自定义音视频审核控制参数。
                     */
                    UserDefineConfigureInfo m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                    /**
                     * 音视频审核结果是否进入音视频审核墙（对音视频审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     */
                    std::string m_reviewWallSwitch;
                    bool m_reviewWallSwitchHasBeenSet;

                    /**
                     * 截帧间隔，单位为秒。当不填时，默认截帧间隔为 1 秒，最小值为 0.5 秒。
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
