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
                     * 获取模型名称。取值：<li>Hailuo：海螺；</li><li>Kling：可灵；</li><li> Jimeng：即梦；</li><li>Vidu；</li><li>GV：Google Veo；</li><li>OS：OpenAI Sora；</li><li>Hunyuan：混元；</li><li>Mingmou：明眸；</li>
                     * @return ModelName 模型名称。取值：<li>Hailuo：海螺；</li><li>Kling：可灵；</li><li> Jimeng：即梦；</li><li>Vidu；</li><li>GV：Google Veo；</li><li>OS：OpenAI Sora；</li><li>Hunyuan：混元；</li><li>Mingmou：明眸；</li>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称。取值：<li>Hailuo：海螺；</li><li>Kling：可灵；</li><li> Jimeng：即梦；</li><li>Vidu；</li><li>GV：Google Veo；</li><li>OS：OpenAI Sora；</li><li>Hunyuan：混元；</li><li>Mingmou：明眸；</li>
                     * @param _modelName 模型名称。取值：<li>Hailuo：海螺；</li><li>Kling：可灵；</li><li> Jimeng：即梦；</li><li>Vidu；</li><li>GV：Google Veo；</li><li>OS：OpenAI Sora；</li><li>Hunyuan：混元；</li><li>Mingmou：明眸；</li>
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
                     * 获取模型版本。取值：<li>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；</li><li>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、O1；</li><li>当 ModelName 是 Jimeng，可选值为 3.0pro；</li><li>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo；</li><li>当 ModelName 是 GV，可选值为 3.1、3.1-Fast；</li><li>当 ModelName 是 OS，可选值为 2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 1.5；</li><li>当 ModelName 是 Mingmou，可选值为 1.0；</li>
                     * @return ModelVersion 模型版本。取值：<li>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；</li><li>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、O1；</li><li>当 ModelName 是 Jimeng，可选值为 3.0pro；</li><li>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo；</li><li>当 ModelName 是 GV，可选值为 3.1、3.1-Fast；</li><li>当 ModelName 是 OS，可选值为 2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 1.5；</li><li>当 ModelName 是 Mingmou，可选值为 1.0；</li>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置模型版本。取值：<li>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；</li><li>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、O1；</li><li>当 ModelName 是 Jimeng，可选值为 3.0pro；</li><li>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo；</li><li>当 ModelName 是 GV，可选值为 3.1、3.1-Fast；</li><li>当 ModelName 是 OS，可选值为 2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 1.5；</li><li>当 ModelName 是 Mingmou，可选值为 1.0；</li>
                     * @param _modelVersion 模型版本。取值：<li>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；</li><li>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、O1；</li><li>当 ModelName 是 Jimeng，可选值为 3.0pro；</li><li>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo；</li><li>当 ModelName 是 GV，可选值为 3.1、3.1-Fast；</li><li>当 ModelName 是 OS，可选值为 2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 1.5；</li><li>当 ModelName 是 Mingmou，可选值为 1.0；</li>
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
                     * 获取最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用LastFrameFileId和LastFrameUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过FileInfos里面的ObjectId作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     * @return FileInfos 最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用LastFrameFileId和LastFrameUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过FileInfos里面的ObjectId作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用LastFrameFileId和LastFrameUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过FileInfos里面的ObjectId作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     * @param _fileInfos 最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用LastFrameFileId和LastFrameUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过FileInfos里面的ObjectId作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
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
                     * 获取用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @return LastFrameFileId 用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 图片格式的取值为：jpeg，jpg, png, webp。
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @param _lastFrameFileId 用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 图片格式的取值为：jpeg，jpg, png, webp。
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
                     * 获取用于作为尾帧画面来生成视频的媒体文件 URL。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 3. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @return LastFrameUrl 用于作为尾帧画面来生成视频的媒体文件 URL。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 3. 图片格式的取值为：jpeg，jpg, png, webp。
                     * 
                     */
                    std::string GetLastFrameUrl() const;

                    /**
                     * 设置用于作为尾帧画面来生成视频的媒体文件 URL。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 3. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @param _lastFrameUrl 用于作为尾帧画面来生成视频的媒体文件 URL。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 3. 图片格式的取值为：jpeg，jpg, png, webp。
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
                     * 获取生成视频的提示词。当 FileInfos 为空时，此参数必填。
示例值：move the picture
                     * @return Prompt 生成视频的提示词。当 FileInfos 为空时，此参数必填。
示例值：move the picture
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置生成视频的提示词。当 FileInfos 为空时，此参数必填。
示例值：move the picture
                     * @param _prompt 生成视频的提示词。当 FileInfos 为空时，此参数必填。
示例值：move the picture
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
                     * 获取要阻止模型生成视频的提示词。
                     * @return NegativePrompt 要阻止模型生成视频的提示词。
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置要阻止模型生成视频的提示词。
                     * @param _negativePrompt 要阻止模型生成视频的提示词。
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
                     * 获取是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @return EnhancePrompt 是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     * @param _enhancePrompt 是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
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
                     * 获取生视频任务的输出媒体文件配置。
                     * @return OutputConfig 生视频任务的输出媒体文件配置。
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置生视频任务的输出媒体文件配置。
                     * @param _outputConfig 生视频任务的输出媒体文件配置。
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
                     * 获取用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param _sessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
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
                     * 获取来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     * @return SessionContext 来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     * @param _sessionContext 来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
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
                     * 获取任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @return TasksPriority 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @param _tasksPriority 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
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
                     * 获取保留字段，特殊用途时使用。
                     * @return ExtInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置保留字段，特殊用途时使用。
                     * @param _extInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取输入图片的区域信息。当图片url是国外地址时候，可选Oversea。默认Mainland。
                     * @return InputRegion 输入图片的区域信息。当图片url是国外地址时候，可选Oversea。默认Mainland。
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置输入图片的区域信息。当图片url是国外地址时候，可选Oversea。默认Mainland。
                     * @param _inputRegion 输入图片的区域信息。当图片url是国外地址时候，可选Oversea。默认Mainland。
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 模型名称。取值：<li>Hailuo：海螺；</li><li>Kling：可灵；</li><li> Jimeng：即梦；</li><li>Vidu；</li><li>GV：Google Veo；</li><li>OS：OpenAI Sora；</li><li>Hunyuan：混元；</li><li>Mingmou：明眸；</li>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型版本。取值：<li>当 ModelName 是 Hailuo，可选值为 02、2.3、2.3-fast；</li><li>当 ModelName 是 Kling，可选值为 1.6、2.0、2.1、2.5、O1；</li><li>当 ModelName 是 Jimeng，可选值为 3.0pro；</li><li>当 ModelName 是 Vidu，可选值为 q2、q2-pro、q2-turbo；</li><li>当 ModelName 是 GV，可选值为 3.1、3.1-Fast；</li><li>当 ModelName 是 OS，可选值为 2.0；</li><li>当 ModelName 是 Hunyuan，可选值为 1.5；</li><li>当 ModelName 是 Mingmou，可选值为 1.0；</li>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 最多包含三张素材资源图片的列表，用于描述模型在生成视频时要使用的资源图片。

支持多图输入的模型：
1. GV，使用多图输入时，不可使用LastFrameFileId和LastFrameUrl。
2. Vidu，支持多图参考生视频。q2模型1-7张图片，可通过FileInfos里面的ObjectId作为主体id来传入。

注意：
1. 图片大小不超过10M。
2. 支持的图片格式：jpeg、png。
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 用于作为尾帧画面来生成视频的媒体文件 ID。该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 图片格式的取值为：jpeg，jpg, png, webp。
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * 用于作为尾帧画面来生成视频的媒体文件 URL。说明：
1. 只支持模型 GV 、Kling、Vidu，其他模型暂不支持。当 ModelName 为 GV 时，如果指定该参数，则需同时指定 FileInfos 作为待生成视频的首帧。当 ModelName 为 Kling 、ModelVersion 为 2.1 并且指定输出分辨率 Resolution 为 1080P 时，才能指定该参数。当 ModelName 为 Vidu、ModelVersion 为 q2-pro、q2-turbo 时，才能指定该参数。
2. 图片大小需小于5M。
3. 3. 图片格式的取值为：jpeg，jpg, png, webp。
                     */
                    std::string m_lastFrameUrl;
                    bool m_lastFrameUrlHasBeenSet;

                    /**
                     * 生成视频的提示词。当 FileInfos 为空时，此参数必填。
示例值：move the picture
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 要阻止模型生成视频的提示词。
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 是否自动优化提示词。开启时将自动优化传入的 Prompt，以提升生成质量。取值有： <li>Enabled：开启；</li> <li>Disabled：关闭；</li> 
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * 生视频任务的输出媒体文件配置。
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，音画质重生完成回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 保留字段，特殊用途时使用。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 输入图片的区域信息。当图片url是国外地址时候，可选Oversea。默认Mainland。
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOTASKREQUEST_H_
