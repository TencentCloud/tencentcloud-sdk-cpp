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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEXTENDKLINGJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEXTENDKLINGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitVideoExtendKlingJob请求参数结构体
                */
                class SubmitVideoExtendKlingJobRequest : public AbstractModel
                {
                public:
                    SubmitVideoExtendKlingJobRequest();
                    ~SubmitVideoExtendKlingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>视频ID  支持通过文本、图片和视频延长生成的视频的ID（原视频不能超过3分钟）  请注意，基于目前的清理策略、视频生成30天之后会被清理，则无法进行延长</p>
                     * @return VideoId <p>视频ID  支持通过文本、图片和视频延长生成的视频的ID（原视频不能超过3分钟）  请注意，基于目前的清理策略、视频生成30天之后会被清理，则无法进行延长</p>
                     * 
                     */
                    std::string GetVideoId() const;

                    /**
                     * 设置<p>视频ID  支持通过文本、图片和视频延长生成的视频的ID（原视频不能超过3分钟）  请注意，基于目前的清理策略、视频生成30天之后会被清理，则无法进行延长</p>
                     * @param _videoId <p>视频ID  支持通过文本、图片和视频延长生成的视频的ID（原视频不能超过3分钟）  请注意，基于目前的清理策略、视频生成30天之后会被清理，则无法进行延长</p>
                     * 
                     */
                    void SetVideoId(const std::string& _videoId);

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     * 
                     */
                    bool VideoIdHasBeenSet() const;

                    /**
                     * 获取<p>正向文本提示词  不能超过2500个字符</p>
                     * @return Prompt <p>正向文本提示词  不能超过2500个字符</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>正向文本提示词  不能超过2500个字符</p>
                     * @param _prompt <p>正向文本提示词  不能超过2500个字符</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>负向文本提示词  不能超过2500个字符</p>
                     * @return NegativePrompt <p>负向文本提示词  不能超过2500个字符</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>负向文本提示词  不能超过2500个字符</p>
                     * @param _negativePrompt <p>负向文本提示词  不能超过2500个字符</p>
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExternalTaskId 
                     * 
                     */
                    std::string GetExternalTaskId() const;

                    /**
                     * 设置
                     * @param _externalTaskId 
                     * 
                     */
                    void SetExternalTaskId(const std::string& _externalTaskId);

                    /**
                     * 判断参数 ExternalTaskId 是否已赋值
                     * @return ExternalTaskId 是否已赋值
                     * 
                     */
                    bool ExternalTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>提示词参考强度  取值范围：[0,1]，数值越大参考强度越大</p>
                     * @return CfgScale <p>提示词参考强度  取值范围：[0,1]，数值越大参考强度越大</p>
                     * 
                     */
                    double GetCfgScale() const;

                    /**
                     * 设置<p>提示词参考强度  取值范围：[0,1]，数值越大参考强度越大</p>
                     * @param _cfgScale <p>提示词参考强度  取值范围：[0,1]，数值越大参考强度越大</p>
                     * 
                     */
                    void SetCfgScale(const double& _cfgScale);

                    /**
                     * 判断参数 CfgScale 是否已赋值
                     * @return CfgScale 是否已赋值
                     * 
                     */
                    bool CfgScaleHasBeenSet() const;

                    /**
                     * 获取<p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * @return CallbackUrl <p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * @param _callbackUrl <p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * @return LogoAdd <p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * @param _logoAdd <p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取<p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成。</p>
                     * @return LogoParam <p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成。</p>
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置<p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成。</p>
                     * @param _logoParam <p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成。</p>
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * <p>视频ID  支持通过文本、图片和视频延长生成的视频的ID（原视频不能超过3分钟）  请注意，基于目前的清理策略、视频生成30天之后会被清理，则无法进行延长</p>
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                    /**
                     * <p>正向文本提示词  不能超过2500个字符</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>负向文本提示词  不能超过2500个字符</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_externalTaskId;
                    bool m_externalTaskIdHasBeenSet;

                    /**
                     * <p>提示词参考强度  取值范围：[0,1]，数值越大参考强度越大</p>
                     */
                    double m_cfgScale;
                    bool m_cfgScaleHasBeenSet;

                    /**
                     * <p>本次任务结果回调通知地址，如果配置，服务端会在任务状态发生变更时主动通知</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a>  申请开启显式标识自主完成。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEXTENDKLINGJOBREQUEST_H_
