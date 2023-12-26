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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TerrorismConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/PornConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/PoliticalConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/ProhibitedConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/UserDefineConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyContentReviewTemplate请求参数结构体
                */
                class ModifyContentReviewTemplateRequest : public AbstractModel
                {
                public:
                    ModifyContentReviewTemplateRequest();
                    ~ModifyContentReviewTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取内容审核模板唯一标识。
                     * @return Definition 内容审核模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置内容审核模板唯一标识。
                     * @param _definition 内容审核模板唯一标识。
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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取内容审核模板名称，长度限制：64 个字符。
                     * @return Name 内容审核模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置内容审核模板名称，长度限制：64 个字符。
                     * @param _name 内容审核模板名称，长度限制：64 个字符。
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
                     * 获取内容审核模板描述信息，长度限制：256 个字符。
                     * @return Comment 内容审核模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置内容审核模板描述信息，长度限制：256 个字符。
                     * @param _comment 内容审核模板描述信息，长度限制：256 个字符。
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
                     * 获取令人不安全的信息的控制参数。
                     * @return TerrorismConfigure 令人不安全的信息的控制参数。
                     * 
                     */
                    TerrorismConfigureInfoForUpdate GetTerrorismConfigure() const;

                    /**
                     * 设置令人不安全的信息的控制参数。
                     * @param _terrorismConfigure 令人不安全的信息的控制参数。
                     * 
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfoForUpdate& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     * 
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取令人反感的信息的控制参数。
                     * @return PornConfigure 令人反感的信息的控制参数。
                     * 
                     */
                    PornConfigureInfoForUpdate GetPornConfigure() const;

                    /**
                     * 设置令人反感的信息的控制参数。
                     * @param _pornConfigure 令人反感的信息的控制参数。
                     * 
                     */
                    void SetPornConfigure(const PornConfigureInfoForUpdate& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     * 
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取令人不适宜的信息控制参数。
                     * @return PoliticalConfigure 令人不适宜的信息控制参数。
                     * 
                     */
                    PoliticalConfigureInfoForUpdate GetPoliticalConfigure() const;

                    /**
                     * 设置令人不适宜的信息控制参数。
                     * @param _politicalConfigure 令人不适宜的信息控制参数。
                     * 
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfoForUpdate& _politicalConfigure);

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
                    ProhibitedConfigureInfoForUpdate GetProhibitedConfigure() const;

                    /**
                     * 设置违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     * @param _prohibitedConfigure 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     * 
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfoForUpdate& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     * 
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取用户自定义内容审核控制参数。
                     * @return UserDefineConfigure 用户自定义内容审核控制参数。
                     * 
                     */
                    UserDefineConfigureInfoForUpdate GetUserDefineConfigure() const;

                    /**
                     * 设置用户自定义内容审核控制参数。
                     * @param _userDefineConfigure 用户自定义内容审核控制参数。
                     * 
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfoForUpdate& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     * 
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取截帧间隔，单位为秒，最小值为 0.5 秒。
                     * @return ScreenshotInterval 截帧间隔，单位为秒，最小值为 0.5 秒。
                     * 
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置截帧间隔，单位为秒，最小值为 0.5 秒。
                     * @param _screenshotInterval 截帧间隔，单位为秒，最小值为 0.5 秒。
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
                     * 获取审核结果是否进入审核墙（对审核结果进行人工识别）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * @return ReviewWallSwitch 审核结果是否进入审核墙（对审核结果进行人工识别）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * 
                     */
                    std::string GetReviewWallSwitch() const;

                    /**
                     * 设置审核结果是否进入审核墙（对审核结果进行人工识别）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * @param _reviewWallSwitch 审核结果是否进入审核墙（对审核结果进行人工识别）的开关。
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

                private:

                    /**
                     * 内容审核模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 内容审核模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 内容审核模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 令人不安全的信息的控制参数。
                     */
                    TerrorismConfigureInfoForUpdate m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * 令人反感的信息的控制参数。
                     */
                    PornConfigureInfoForUpdate m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * 令人不适宜的信息控制参数。
                     */
                    PoliticalConfigureInfoForUpdate m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
                     */
                    ProhibitedConfigureInfoForUpdate m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * 用户自定义内容审核控制参数。
                     */
                    UserDefineConfigureInfoForUpdate m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                    /**
                     * 截帧间隔，单位为秒，最小值为 0.5 秒。
                     */
                    double m_screenshotInterval;
                    bool m_screenshotIntervalHasBeenSet;

                    /**
                     * 审核结果是否进入审核墙（对审核结果进行人工识别）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     */
                    std::string m_reviewWallSwitch;
                    bool m_reviewWallSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
