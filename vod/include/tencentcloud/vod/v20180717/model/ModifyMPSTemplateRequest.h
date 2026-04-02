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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyMPSTemplate请求参数结构体
                */
                class ModifyMPSTemplateRequest : public AbstractModel
                {
                public:
                    ModifyMPSTemplateRequest();
                    ~ModifyMPSTemplateRequest() = default;
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
                     * 获取<p>需要修改的 MPS 模板的类型。</p><p>枚举值：</p><ul><li>Transcode： 转码模板，目前仅支持修改增强参数</li><li>AIAnalysis： 智能分析模板</li><li>SmartSubtitle： 智能字幕模板</li><li>SmartErase： 智能擦除模板</li></ul>
                     * @return TemplateType <p>需要修改的 MPS 模板的类型。</p><p>枚举值：</p><ul><li>Transcode： 转码模板，目前仅支持修改增强参数</li><li>AIAnalysis： 智能分析模板</li><li>SmartSubtitle： 智能字幕模板</li><li>SmartErase： 智能擦除模板</li></ul>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>需要修改的 MPS 模板的类型。</p><p>枚举值：</p><ul><li>Transcode： 转码模板，目前仅支持修改增强参数</li><li>AIAnalysis： 智能分析模板</li><li>SmartSubtitle： 智能字幕模板</li><li>SmartErase： 智能擦除模板</li></ul>
                     * @param _templateType <p>需要修改的 MPS 模板的类型。</p><p>枚举值：</p><ul><li>Transcode： 转码模板，目前仅支持修改增强参数</li><li>AIAnalysis： 智能分析模板</li><li>SmartSubtitle： 智能字幕模板</li><li>SmartErase： 智能擦除模板</li></ul>
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
                     * 获取<p>MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。<br> 目前仅支持通过此方式修改以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/37578">修改转码模板</a>”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40246">修改内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117001">修改智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123732">修改智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * @return MPSModifyTemplateParams <p>MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。<br> 目前仅支持通过此方式修改以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/37578">修改转码模板</a>”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40246">修改内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117001">修改智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123732">修改智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * 
                     */
                    std::string GetMPSModifyTemplateParams() const;

                    /**
                     * 设置<p>MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。<br> 目前仅支持通过此方式修改以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/37578">修改转码模板</a>”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40246">修改内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117001">修改智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123732">修改智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * @param _mPSModifyTemplateParams <p>MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。<br> 目前仅支持通过此方式修改以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/37578">修改转码模板</a>”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40246">修改内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117001">修改智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123732">修改智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * 
                     */
                    void SetMPSModifyTemplateParams(const std::string& _mPSModifyTemplateParams);

                    /**
                     * 判断参数 MPSModifyTemplateParams 是否已赋值
                     * @return MPSModifyTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSModifyTemplateParamsHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>需要修改的 MPS 模板的类型。</p><p>枚举值：</p><ul><li>Transcode： 转码模板，目前仅支持修改增强参数</li><li>AIAnalysis： 智能分析模板</li><li>SmartSubtitle： 智能字幕模板</li><li>SmartErase： 智能擦除模板</li></ul>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。<br> 目前仅支持通过此方式修改以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/37578">修改转码模板</a>”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/40246">修改内容分析模板</a>”接口中的Name、Comment、ClassificationConfigure、TagConfigure、CoverConfigure、FrameTagConfigure几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/117001">修改智能字幕模板</a>”接口中的Name、Comment、TranslateSwitch、VideoSrcLanguage、SubtitleFormat、SubtitleType、AsrHotWordsConfigure、TranslateDstLanguage、ProcessType几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/api/862/123732">修改智能擦除模板</a>”接口中的Name、Comment、EraseType、EraseSubtitleConfig、EraseWatermarkConfig、ErasePrivacyConfig几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     */
                    std::string m_mPSModifyTemplateParams;
                    bool m_mPSModifyTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_
