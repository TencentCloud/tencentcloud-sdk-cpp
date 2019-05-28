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
#include <tencentcloud/vod/v20180717/model/PornConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TerrorismConfigureInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/PoliticalConfigureInfoForUpdate.h>
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
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置内容审核模板唯一标识。
                     * @param Definition 内容审核模板唯一标识。
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取内容审核模板名称，长度限制：64 个字符。
                     * @return Name 内容审核模板名称，长度限制：64 个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置内容审核模板名称，长度限制：64 个字符。
                     * @param Name 内容审核模板名称，长度限制：64 个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取内容审核模板描述信息，长度限制：256 个字符。
                     * @return Comment 内容审核模板描述信息，长度限制：256 个字符。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置内容审核模板描述信息，长度限制：256 个字符。
                     * @param Comment 内容审核模板描述信息，长度限制：256 个字符。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取鉴黄控制参数。
                     * @return PornConfigure 鉴黄控制参数。
                     */
                    PornConfigureInfoForUpdate GetPornConfigure() const;

                    /**
                     * 设置鉴黄控制参数。
                     * @param PornConfigure 鉴黄控制参数。
                     */
                    void SetPornConfigure(const PornConfigureInfoForUpdate& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取鉴恐控制参数。
                     * @return TerrorismConfigure 鉴恐控制参数。
                     */
                    TerrorismConfigureInfoForUpdate GetTerrorismConfigure() const;

                    /**
                     * 设置鉴恐控制参数。
                     * @param TerrorismConfigure 鉴恐控制参数。
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfoForUpdate& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取鉴政控制参数。
                     * @return PoliticalConfigure 鉴政控制参数。
                     */
                    PoliticalConfigureInfoForUpdate GetPoliticalConfigure() const;

                    /**
                     * 设置鉴政控制参数。
                     * @param PoliticalConfigure 鉴政控制参数。
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfoForUpdate& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取用户自定义内容审核控制参数。
                     * @return UserDefineConfigure 用户自定义内容审核控制参数。
                     */
                    UserDefineConfigureInfoForUpdate GetUserDefineConfigure() const;

                    /**
                     * 设置用户自定义内容审核控制参数。
                     * @param UserDefineConfigure 用户自定义内容审核控制参数。
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfoForUpdate& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取截帧间隔，单位为秒，最小值为 0.5 秒。
                     * @return ScreenshotInterval 截帧间隔，单位为秒，最小值为 0.5 秒。
                     */
                    double GetScreenshotInterval() const;

                    /**
                     * 设置截帧间隔，单位为秒，最小值为 0.5 秒。
                     * @param ScreenshotInterval 截帧间隔，单位为秒，最小值为 0.5 秒。
                     */
                    void SetScreenshotInterval(const double& _screenshotInterval);

                    /**
                     * 判断参数 ScreenshotInterval 是否已赋值
                     * @return ScreenshotInterval 是否已赋值
                     */
                    bool ScreenshotIntervalHasBeenSet() const;

                    /**
                     * 获取审核结果是否进入审核墙（对审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * @return ReviewWallSwitch 审核结果是否进入审核墙（对审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     */
                    std::string GetReviewWallSwitch() const;

                    /**
                     * 设置审核结果是否进入审核墙（对审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     * @param ReviewWallSwitch 审核结果是否进入审核墙（对审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     */
                    void SetReviewWallSwitch(const std::string& _reviewWallSwitch);

                    /**
                     * 判断参数 ReviewWallSwitch 是否已赋值
                     * @return ReviewWallSwitch 是否已赋值
                     */
                    bool ReviewWallSwitchHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 内容审核模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

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
                     * 鉴黄控制参数。
                     */
                    PornConfigureInfoForUpdate m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * 鉴恐控制参数。
                     */
                    TerrorismConfigureInfoForUpdate m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * 鉴政控制参数。
                     */
                    PoliticalConfigureInfoForUpdate m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

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
                     * 审核结果是否进入审核墙（对审核结果进行人工复核）的开关。
<li>ON：是；</li>
<li>OFF：否。</li>
                     */
                    std::string m_reviewWallSwitch;
                    bool m_reviewWallSwitchHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYCONTENTREVIEWTEMPLATEREQUEST_H_
