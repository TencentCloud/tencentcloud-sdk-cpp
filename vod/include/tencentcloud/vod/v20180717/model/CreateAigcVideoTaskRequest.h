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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputSubjectInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcVideoTask请求参数结构体
                */
                class CreateAigcVideoTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcVideoTaskRequest();
                    ~CreateAigcVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
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
                     * 获取<p>模型名称。取值：<br>Kling：可灵；<br>Vidu；<br>Hailuo：海螺；<br>Jimeng：即梦；<br>Hunyuan：混元；<br>Mingmou：明眸；<br>GV；<br>OS；<br>PixVerse;</p>
                     * @return ModelName <p>模型名称。取值：<br>Kling：可灵；<br>Vidu；<br>Hailuo：海螺；<br>Jimeng：即梦；<br>Hunyuan：混元；<br>Mingmou：明眸；<br>GV；<br>OS；<br>PixVerse;</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称。取值：<br>Kling：可灵；<br>Vidu；<br>Hailuo：海螺；<br>Jimeng：即梦；<br>Hunyuan：混元；<br>Mingmou：明眸；<br>GV；<br>OS；<br>PixVerse;</p>
                     * @param _modelName <p>模型名称。取值：<br>Kling：可灵；<br>Vidu；<br>Hailuo：海螺；<br>Jimeng：即梦；<br>Hunyuan：混元；<br>Mingmou：明眸；<br>GV；<br>OS；<br>PixVerse;</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型版本。取值：<br>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；<br>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、2.6、O1、3.0、3.0-Omni；<br>当 ModelName 是 Jimeng，可选值为 3.0pro；<br>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo、q3、q3-pro、q3-turbo；<br>当 ModelName 是 GV，可选值为 3.1、3.1-fast；<br>当 ModelName 是 OS，可选值为 2.0；<br>当 ModelName 是 Hunyuan，可选值为 1.5；<br>当 ModelName 是 Mingmou，可选值为 1.0；<br>当 ModelName 是 PixVerse，可选值为 v5.6、v6、c1；</p>
                     * @return ModelVersion <p>模型版本。取值：<br>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；<br>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、2.6、O1、3.0、3.0-Omni；<br>当 ModelName 是 Jimeng，可选值为 3.0pro；<br>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo、q3、q3-pro、q3-turbo；<br>当 ModelName 是 GV，可选值为 3.1、3.1-fast；<br>当 ModelName 是 OS，可选值为 2.0；<br>当 ModelName 是 Hunyuan，可选值为 1.5；<br>当 ModelName 是 Mingmou，可选值为 1.0；<br>当 ModelName 是 PixVerse，可选值为 v5.6、v6、c1；</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本。取值：<br>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；<br>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、2.6、O1、3.0、3.0-Omni；<br>当 ModelName 是 Jimeng，可选值为 3.0pro；<br>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo、q3、q3-pro、q3-turbo；<br>当 ModelName 是 GV，可选值为 3.1、3.1-fast；<br>当 ModelName 是 OS，可选值为 2.0；<br>当 ModelName 是 Hunyuan，可选值为 1.5；<br>当 ModelName 是 Mingmou，可选值为 1.0；<br>当 ModelName 是 PixVerse，可选值为 v5.6、v6、c1；</p>
                     * @param _modelVersion <p>模型版本。取值：<br>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；<br>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、2.6、O1、3.0、3.0-Omni；<br>当 ModelName 是 Jimeng，可选值为 3.0pro；<br>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo、q3、q3-pro、q3-turbo；<br>当 ModelName 是 GV，可选值为 3.1、3.1-fast；<br>当 ModelName 是 OS，可选值为 2.0；<br>当 ModelName 是 Hunyuan，可选值为 1.5；<br>当 ModelName 是 Mingmou，可选值为 1.0；<br>当 ModelName 是 PixVerse，可选值为 v5.6、v6、c1；</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>用于描述模型在生成视频时要使用的资源文件，分为<strong>首尾帧模式、参考图、视频参考、视频编辑等模式</strong>。</p><p><strong>首尾帧视频生成</strong>：首帧图片只支持<strong>一张</strong>图片，<strong>图片的Usage字段为FirstFrame</strong>，LastFrameFileId 或者 LastFrameUrl 表示尾帧。可以单独传首帧，不能单独传尾帧。<strong>首尾帧生成会参考图片比例</strong>。<br><strong>参考图片生成</strong>：可传入单张图片或者多张，<strong>图片的Usage字段为Reference</strong>；参考图片，可以调整生成视频的宽高比例。<br><strong>视频编辑、视频参考</strong>：Vidu、Kling可输入视频作为参考或者进行编辑。传入视频的同时也可以传入图片，<strong>图片的Usage字段为Reference</strong>。</p><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、jpg、png。x0b</li><li>关于模型某个版本是否支持参考图、首尾帧、视频编辑等功能，可向我们索取文档或者参考原厂文档信息。</li></ol>
                     * @return FileInfos <p>用于描述模型在生成视频时要使用的资源文件，分为<strong>首尾帧模式、参考图、视频参考、视频编辑等模式</strong>。</p><p><strong>首尾帧视频生成</strong>：首帧图片只支持<strong>一张</strong>图片，<strong>图片的Usage字段为FirstFrame</strong>，LastFrameFileId 或者 LastFrameUrl 表示尾帧。可以单独传首帧，不能单独传尾帧。<strong>首尾帧生成会参考图片比例</strong>。<br><strong>参考图片生成</strong>：可传入单张图片或者多张，<strong>图片的Usage字段为Reference</strong>；参考图片，可以调整生成视频的宽高比例。<br><strong>视频编辑、视频参考</strong>：Vidu、Kling可输入视频作为参考或者进行编辑。传入视频的同时也可以传入图片，<strong>图片的Usage字段为Reference</strong>。</p><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、jpg、png。x0b</li><li>关于模型某个版本是否支持参考图、首尾帧、视频编辑等功能，可向我们索取文档或者参考原厂文档信息。</li></ol>
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>用于描述模型在生成视频时要使用的资源文件，分为<strong>首尾帧模式、参考图、视频参考、视频编辑等模式</strong>。</p><p><strong>首尾帧视频生成</strong>：首帧图片只支持<strong>一张</strong>图片，<strong>图片的Usage字段为FirstFrame</strong>，LastFrameFileId 或者 LastFrameUrl 表示尾帧。可以单独传首帧，不能单独传尾帧。<strong>首尾帧生成会参考图片比例</strong>。<br><strong>参考图片生成</strong>：可传入单张图片或者多张，<strong>图片的Usage字段为Reference</strong>；参考图片，可以调整生成视频的宽高比例。<br><strong>视频编辑、视频参考</strong>：Vidu、Kling可输入视频作为参考或者进行编辑。传入视频的同时也可以传入图片，<strong>图片的Usage字段为Reference</strong>。</p><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、jpg、png。x0b</li><li>关于模型某个版本是否支持参考图、首尾帧、视频编辑等功能，可向我们索取文档或者参考原厂文档信息。</li></ol>
                     * @param _fileInfos <p>用于描述模型在生成视频时要使用的资源文件，分为<strong>首尾帧模式、参考图、视频参考、视频编辑等模式</strong>。</p><p><strong>首尾帧视频生成</strong>：首帧图片只支持<strong>一张</strong>图片，<strong>图片的Usage字段为FirstFrame</strong>，LastFrameFileId 或者 LastFrameUrl 表示尾帧。可以单独传首帧，不能单独传尾帧。<strong>首尾帧生成会参考图片比例</strong>。<br><strong>参考图片生成</strong>：可传入单张图片或者多张，<strong>图片的Usage字段为Reference</strong>；参考图片，可以调整生成视频的宽高比例。<br><strong>视频编辑、视频参考</strong>：Vidu、Kling可输入视频作为参考或者进行编辑。传入视频的同时也可以传入图片，<strong>图片的Usage字段为Reference</strong>。</p><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、jpg、png。x0b</li><li>关于模型某个版本是否支持参考图、首尾帧、视频编辑等功能，可向我们索取文档或者参考原厂文档信息。</li></ol>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取<p>主体输入信息。</p>
                     * @return SubjectInfos <p>主体输入信息。</p>
                     * 
                     */
                    std::vector<AigcVideoTaskInputSubjectInfo> GetSubjectInfos() const;

                    /**
                     * 设置<p>主体输入信息。</p>
                     * @param _subjectInfos <p>主体输入信息。</p>
                     * 
                     */
                    void SetSubjectInfos(const std::vector<AigcVideoTaskInputSubjectInfo>& _subjectInfos);

                    /**
                     * 判断参数 SubjectInfos 是否已赋值
                     * @return SubjectInfos 是否已赋值
                     * 
                     */
                    bool SubjectInfosHasBeenSet() const;

                    /**
                     * 获取<p>用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于10M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @return LastFrameFileId <p>用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于10M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置<p>用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于10M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @param _lastFrameFileId <p>用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于10M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * 
                     */
                    void SetLastFrameFileId(const std::string& _lastFrameFileId);

                    /**
                     * 判断参数 LastFrameFileId 是否已赋值
                     * @return LastFrameFileId 是否已赋值
                     * 
                     */
                    bool LastFrameFileIdHasBeenSet() const;

                    /**
                     * 获取<p>用于作为尾帧画面来生成视频的媒体文件 URL。说明：</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于5M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @return LastFrameUrl <p>用于作为尾帧画面来生成视频的媒体文件 URL。说明：</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于5M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * 
                     */
                    std::string GetLastFrameUrl() const;

                    /**
                     * 设置<p>用于作为尾帧画面来生成视频的媒体文件 URL。说明：</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于5M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @param _lastFrameUrl <p>用于作为尾帧画面来生成视频的媒体文件 URL。说明：</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于5M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * 
                     */
                    void SetLastFrameUrl(const std::string& _lastFrameUrl);

                    /**
                     * 判断参数 LastFrameUrl 是否已赋值
                     * @return LastFrameUrl 是否已赋值
                     * 
                     */
                    bool LastFrameUrlHasBeenSet() const;

                    /**
                     * 获取<p>生成视频的提示词。<br>当未传入参考文件，没有使用场景类型，ExtInfo不为空，Prompt 为必填。</p>
                     * @return Prompt <p>生成视频的提示词。<br>当未传入参考文件，没有使用场景类型，ExtInfo不为空，Prompt 为必填。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>生成视频的提示词。<br>当未传入参考文件，没有使用场景类型，ExtInfo不为空，Prompt 为必填。</p>
                     * @param _prompt <p>生成视频的提示词。<br>当未传入参考文件，没有使用场景类型，ExtInfo不为空，Prompt 为必填。</p>
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
                     * 获取<p>要阻止模型生成视频的提示词。</p>
                     * @return NegativePrompt <p>要阻止模型生成视频的提示词。</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>要阻止模型生成视频的提示词。</p>
                     * @param _negativePrompt <p>要阻止模型生成视频的提示词。</p>
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
                     * 获取<p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @return EnhancePrompt <p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置<p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * @param _enhancePrompt <p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     * 
                     */
                    void SetEnhancePrompt(const std::string& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取<p>生视频任务的输出媒体文件配置。</p>
                     * @return OutputConfig <p>生视频任务的输出媒体文件配置。</p>
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>生视频任务的输出媒体文件配置。</p>
                     * @param _outputConfig <p>生视频任务的输出媒体文件配置。</p>
                     * 
                     */
                    void SetOutputConfig(const AigcVideoOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>输入文件的区域信息。当文件url是国外地址时候，可选Oversea。默认Mainland。</p>
                     * @return InputRegion <p>输入文件的区域信息。当文件url是国外地址时候，可选Oversea。默认Mainland。</p>
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置<p>输入文件的区域信息。当文件url是国外地址时候，可选Oversea。默认Mainland。</p>
                     * @param _inputRegion <p>输入文件的区域信息。当文件url是国外地址时候，可选Oversea。默认Mainland。</p>
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取<p>场景类型。取值如下：</p><li>当 ModelName 为 Kling 时：    motion_control 表示动作控制；    avatar_i2v 表示数字人；    lip_sync 表示对口型；</li><li>当 ModelName 为 Vidu 时：    template_effect 表示特效模板；</li><li>其他 ModelName 暂不支持。</li>
                     * @return SceneType <p>场景类型。取值如下：</p><li>当 ModelName 为 Kling 时：    motion_control 表示动作控制；    avatar_i2v 表示数字人；    lip_sync 表示对口型；</li><li>当 ModelName 为 Vidu 时：    template_effect 表示特效模板；</li><li>其他 ModelName 暂不支持。</li>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>场景类型。取值如下：</p><li>当 ModelName 为 Kling 时：    motion_control 表示动作控制；    avatar_i2v 表示数字人；    lip_sync 表示对口型；</li><li>当 ModelName 为 Vidu 时：    template_effect 表示特效模板；</li><li>其他 ModelName 暂不支持。</li>
                     * @param _sceneType <p>场景类型。取值如下：</p><li>当 ModelName 为 Kling 时：    motion_control 表示动作控制；    avatar_i2v 表示数字人；    lip_sync 表示对口型；</li><li>当 ModelName 为 Vidu 时：    template_effect 表示特效模板；</li><li>其他 ModelName 暂不支持。</li>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型随机种子。</p>
                     * @return Seed <p>模型随机种子。</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>模型随机种子。</p>
                     * @param _seed <p>模型随机种子。</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @return TasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @param _tasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取<p>保留字段，特殊用途时使用。<br>可用于传入模型特殊参数、分镜prompt等</p>
                     * @return ExtInfo <p>保留字段，特殊用途时使用。<br>可用于传入模型特殊参数、分镜prompt等</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>保留字段，特殊用途时使用。<br>可用于传入模型特殊参数、分镜prompt等</p>
                     * @param _extInfo <p>保留字段，特殊用途时使用。<br>可用于传入模型特殊参数、分镜prompt等</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>模型名称。取值：<br>Kling：可灵；<br>Vidu；<br>Hailuo：海螺；<br>Jimeng：即梦；<br>Hunyuan：混元；<br>Mingmou：明眸；<br>GV；<br>OS；<br>PixVerse;</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本。取值：<br>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；<br>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、2.6、O1、3.0、3.0-Omni；<br>当 ModelName 是 Jimeng，可选值为 3.0pro；<br>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo、q3、q3-pro、q3-turbo；<br>当 ModelName 是 GV，可选值为 3.1、3.1-fast；<br>当 ModelName 是 OS，可选值为 2.0；<br>当 ModelName 是 Hunyuan，可选值为 1.5；<br>当 ModelName 是 Mingmou，可选值为 1.0；<br>当 ModelName 是 PixVerse，可选值为 v5.6、v6、c1；</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>用于描述模型在生成视频时要使用的资源文件，分为<strong>首尾帧模式、参考图、视频参考、视频编辑等模式</strong>。</p><p><strong>首尾帧视频生成</strong>：首帧图片只支持<strong>一张</strong>图片，<strong>图片的Usage字段为FirstFrame</strong>，LastFrameFileId 或者 LastFrameUrl 表示尾帧。可以单独传首帧，不能单独传尾帧。<strong>首尾帧生成会参考图片比例</strong>。<br><strong>参考图片生成</strong>：可传入单张图片或者多张，<strong>图片的Usage字段为Reference</strong>；参考图片，可以调整生成视频的宽高比例。<br><strong>视频编辑、视频参考</strong>：Vidu、Kling可输入视频作为参考或者进行编辑。传入视频的同时也可以传入图片，<strong>图片的Usage字段为Reference</strong>。</p><p>注意：</p><ol><li>图片大小不超过10M。</li><li>支持的图片格式：jpeg、jpg、png。x0b</li><li>关于模型某个版本是否支持参考图、首尾帧、视频编辑等功能，可向我们索取文档或者参考原厂文档信息。</li></ol>
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>主体输入信息。</p>
                     */
                    std::vector<AigcVideoTaskInputSubjectInfo> m_subjectInfos;
                    bool m_subjectInfosHasBeenSet;

                    /**
                     * <p>用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于10M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * <p>用于作为尾帧画面来生成视频的媒体文件 URL。说明：</p><ol><li>指定该参数时，须同时通过 FileInfos 指定首帧画面。</li><li>图片大小需小于5M。</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     */
                    std::string m_lastFrameUrl;
                    bool m_lastFrameUrlHasBeenSet;

                    /**
                     * <p>生成视频的提示词。<br>当未传入参考文件，没有使用场景类型，ExtInfo不为空，Prompt 为必填。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>要阻止模型生成视频的提示词。</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li></p>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>生视频任务的输出媒体文件配置。</p>
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>输入文件的区域信息。当文件url是国外地址时候，可选Oversea。默认Mainland。</p>
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * <p>场景类型。取值如下：</p><li>当 ModelName 为 Kling 时：    motion_control 表示动作控制；    avatar_i2v 表示数字人；    lip_sync 表示对口型；</li><li>当 ModelName 为 Vidu 时：    template_effect 表示特效模板；</li><li>其他 ModelName 暂不支持。</li>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>模型随机种子。</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>保留字段，特殊用途时使用。<br>可用于传入模型特殊参数、分镜prompt等</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
