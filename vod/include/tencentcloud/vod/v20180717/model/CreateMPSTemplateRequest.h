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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAIAnalysisTemplate.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartSubtitleTemplate.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseTemplate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateMPSTemplate请求参数结构体
                */
                class CreateMPSTemplateRequest : public AbstractModel
                {
                public:
                    CreateMPSTemplateRequest();
                    ~CreateMPSTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
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
                     * 获取<p>需要创建的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li>
                     * @return TemplateType <p>需要创建的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>需要创建的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li>
                     * @param _templateType <p>需要创建的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li>
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。<br>目前仅支持通过此方式创建以下任务类型的模板：</p><ol><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40249">创建内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117004">创建智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123735">创建智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol><p>目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。</p>
                     * @return MPSCreateTemplateParams <p>MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。<br>目前仅支持通过此方式创建以下任务类型的模板：</p><ol><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40249">创建内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117004">创建智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123735">创建智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol><p>目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。</p>
                     * 
                     */
                    std::string GetMPSCreateTemplateParams() const;

                    /**
                     * 设置<p>MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。<br>目前仅支持通过此方式创建以下任务类型的模板：</p><ol><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40249">创建内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117004">创建智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123735">创建智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol><p>目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。</p>
                     * @param _mPSCreateTemplateParams <p>MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。<br>目前仅支持通过此方式创建以下任务类型的模板：</p><ol><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40249">创建内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117004">创建智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123735">创建智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol><p>目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。</p>
                     * 
                     */
                    void SetMPSCreateTemplateParams(const std::string& _mPSCreateTemplateParams);

                    /**
                     * 判断参数 MPSCreateTemplateParams 是否已赋值
                     * @return MPSCreateTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSCreateTemplateParamsHasBeenSet() const;

                    /**
                     * 获取<p>智能分析模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * @return AIAnalysisTemplate <p>智能分析模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * 
                     */
                    MPSAIAnalysisTemplate GetAIAnalysisTemplate() const;

                    /**
                     * 设置<p>智能分析模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * @param _aIAnalysisTemplate <p>智能分析模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * 
                     */
                    void SetAIAnalysisTemplate(const MPSAIAnalysisTemplate& _aIAnalysisTemplate);

                    /**
                     * 判断参数 AIAnalysisTemplate 是否已赋值
                     * @return AIAnalysisTemplate 是否已赋值
                     * 
                     */
                    bool AIAnalysisTemplateHasBeenSet() const;

                    /**
                     * 获取<p>智能字幕模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * @return SmartSubtitleTemplate <p>智能字幕模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * 
                     */
                    MPSSmartSubtitleTemplate GetSmartSubtitleTemplate() const;

                    /**
                     * 设置<p>智能字幕模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * @param _smartSubtitleTemplate <p>智能字幕模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * 
                     */
                    void SetSmartSubtitleTemplate(const MPSSmartSubtitleTemplate& _smartSubtitleTemplate);

                    /**
                     * 判断参数 SmartSubtitleTemplate 是否已赋值
                     * @return SmartSubtitleTemplate 是否已赋值
                     * 
                     */
                    bool SmartSubtitleTemplateHasBeenSet() const;

                    /**
                     * 获取<p>智能擦除模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * @return SmartEraseTemplate <p>智能擦除模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * 
                     */
                    MPSSmartEraseTemplate GetSmartEraseTemplate() const;

                    /**
                     * 设置<p>智能擦除模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * @param _smartEraseTemplate <p>智能擦除模板参数，MPSCreateTemplateParams为空时有效。</p>
                     * 
                     */
                    void SetSmartEraseTemplate(const MPSSmartEraseTemplate& _smartEraseTemplate);

                    /**
                     * 判断参数 SmartEraseTemplate 是否已赋值
                     * @return SmartEraseTemplate 是否已赋值
                     * 
                     */
                    bool SmartEraseTemplateHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>需要创建的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。<br>目前仅支持通过此方式创建以下任务类型的模板：</p><ol><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40249">创建内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117004">创建智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123735">创建智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol><p>目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。</p>
                     */
                    std::string m_mPSCreateTemplateParams;
                    bool m_mPSCreateTemplateParamsHasBeenSet;

                    /**
                     * <p>智能分析模板参数，MPSCreateTemplateParams为空时有效。</p>
                     */
                    MPSAIAnalysisTemplate m_aIAnalysisTemplate;
                    bool m_aIAnalysisTemplateHasBeenSet;

                    /**
                     * <p>智能字幕模板参数，MPSCreateTemplateParams为空时有效。</p>
                     */
                    MPSSmartSubtitleTemplate m_smartSubtitleTemplate;
                    bool m_smartSubtitleTemplateHasBeenSet;

                    /**
                     * <p>智能擦除模板参数，MPSCreateTemplateParams为空时有效。</p>
                     */
                    MPSSmartEraseTemplate m_smartEraseTemplate;
                    bool m_smartEraseTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_
