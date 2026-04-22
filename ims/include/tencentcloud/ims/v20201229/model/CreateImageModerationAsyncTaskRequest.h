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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKREQUEST_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/User.h>
#include <tencentcloud/ims/v20201229/model/Device.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateImageModerationAsyncTask请求参数结构体
                */
                class CreateImageModerationAsyncTaskRequest : public AbstractModel
                {
                public:
                    CreateImageModerationAsyncTaskRequest();
                    ~CreateImageModerationAsyncTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     * @return CallbackUrl <p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     * @param _callbackUrl <p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
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
                     * 获取<p>该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     * @return BizType <p>该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置<p>该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     * @param _bizType <p>该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * @return DataId <p>该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置<p>该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * @param _dataId <p>该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示待检测图片文件内容的Base64编码，图片<strong>大小不超过10MB</strong>，建议<strong>分辨率不低于256x256</strong>，否则可能会影响识别效果。<br>备注： <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * @return FileContent <p>该字段表示待检测图片文件内容的Base64编码，图片<strong>大小不超过10MB</strong>，建议<strong>分辨率不低于256x256</strong>，否则可能会影响识别效果。<br>备注： <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置<p>该字段表示待检测图片文件内容的Base64编码，图片<strong>大小不超过10MB</strong>，建议<strong>分辨率不低于256x256</strong>，否则可能会影响识别效果。<br>备注： <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * @param _fileContent <p>该字段表示待检测图片文件内容的Base64编码，图片<strong>大小不超过10MB</strong>，建议<strong>分辨率不低于256x256</strong>，否则可能会影响识别效果。<br>备注： <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示待检测图片文件的访问链接，图片支持PNG、JPG、JPEG、BMP、GIF、WEBP格式，<strong>大小不超过100MB</strong>，建议<strong>分辨率不低于256x256</strong>；图片下载时间限制为3秒，超过则会返回下载超时；由于网络安全策略，<strong>送审带重定向的链接，可能引起下载失败</strong>，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError。<br>备注：<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * @return FileUrl <p>该字段表示待检测图片文件的访问链接，图片支持PNG、JPG、JPEG、BMP、GIF、WEBP格式，<strong>大小不超过100MB</strong>，建议<strong>分辨率不低于256x256</strong>；图片下载时间限制为3秒，超过则会返回下载超时；由于网络安全策略，<strong>送审带重定向的链接，可能引起下载失败</strong>，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError。<br>备注：<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>该字段表示待检测图片文件的访问链接，图片支持PNG、JPG、JPEG、BMP、GIF、WEBP格式，<strong>大小不超过100MB</strong>，建议<strong>分辨率不低于256x256</strong>；图片下载时间限制为3秒，超过则会返回下载超时；由于网络安全策略，<strong>送审带重定向的链接，可能引起下载失败</strong>，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError。<br>备注：<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * @param _fileUrl <p>该字段表示待检测图片文件的访问链接，图片支持PNG、JPG、JPEG、BMP、GIF、WEBP格式，<strong>大小不超过100MB</strong>，建议<strong>分辨率不低于256x256</strong>；图片下载时间限制为3秒，超过则会返回下载超时；由于网络安全策略，<strong>送审带重定向的链接，可能引起下载失败</strong>，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError。<br>备注：<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p><strong>GIF/长图检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测），长图则按照长边：短边取整计算要切割的总图数；默认值为0，此时只会检测GIF的第一帧或对长图不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @return Interval <p><strong>GIF/长图检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测），长图则按照长边：短边取整计算要切割的总图数；默认值为0，此时只会检测GIF的第一帧或对长图不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p><strong>GIF/长图检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测），长图则按照长边：短边取整计算要切割的总图数；默认值为0，此时只会检测GIF的第一帧或对长图不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @param _interval <p><strong>GIF/长图检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测），长图则按照长边：短边取整计算要切割的总图数；默认值为0，此时只会检测GIF的第一帧或对长图不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p><strong>GIF/长图检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧或对长图不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @return MaxFrames <p><strong>GIF/长图检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧或对长图不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * 
                     */
                    int64_t GetMaxFrames() const;

                    /**
                     * 设置<p><strong>GIF/长图检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧或对长图不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @param _maxFrames <p><strong>GIF/长图检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧或对长图不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * 
                     */
                    void SetMaxFrames(const int64_t& _maxFrames);

                    /**
                     * 判断参数 MaxFrames 是否已赋值
                     * @return MaxFrames 是否已赋值
                     * 
                     */
                    bool MaxFramesHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。</p>
                     * @return User <p>该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。</p>
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置<p>该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。</p>
                     * @param _user <p>该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。</p>
                     * 
                     */
                    void SetUser(const User& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。</p>
                     * @return Device <p>该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。</p>
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置<p>该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。</p>
                     * @param _device <p>该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。</p>
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取<p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 一般图片异步检测</li><li>IMAGE_LLM： 大模型图片异步检测</li></ul>
                     * @return Type <p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 一般图片异步检测</li><li>IMAGE_LLM： 大模型图片异步检测</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 一般图片异步检测</li><li>IMAGE_LLM： 大模型图片异步检测</li></ul>
                     * @param _type <p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 一般图片异步检测</li><li>IMAGE_LLM： 大模型图片异步检测</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>该字段表示待审核的图片资源链接，最多支持传入4张图片</p>
                     * @return FileUrlList <p>该字段表示待审核的图片资源链接，最多支持传入4张图片</p>
                     * 
                     */
                    std::vector<std::string> GetFileUrlList() const;

                    /**
                     * 设置<p>该字段表示待审核的图片资源链接，最多支持传入4张图片</p>
                     * @param _fileUrlList <p>该字段表示待审核的图片资源链接，最多支持传入4张图片</p>
                     * 
                     */
                    void SetFileUrlList(const std::vector<std::string>& _fileUrlList);

                    /**
                     * 判断参数 FileUrlList 是否已赋值
                     * @return FileUrlList 是否已赋值
                     * 
                     */
                    bool FileUrlListHasBeenSet() const;

                    /**
                     * 获取<p>待审核的文本内容，需为UTF-8编码并以Base64格式传入，字数限制5000字内。</p>
                     * @return TextContent <p>待审核的文本内容，需为UTF-8编码并以Base64格式传入，字数限制5000字内。</p>
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置<p>待审核的文本内容，需为UTF-8编码并以Base64格式传入，字数限制5000字内。</p>
                     * @param _textContent <p>待审核的文本内容，需为UTF-8编码并以Base64格式传入，字数限制5000字内。</p>
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                private:

                    /**
                     * <p>接收审核信息回调地址，审核过程中产生的所有结果发送至此地址。</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>该字段表示策略的具体编号，用于接口调度，在内容安全控制台中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。<br>备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>该字段表示待检测图片文件内容的Base64编码，图片<strong>大小不超过10MB</strong>，建议<strong>分辨率不低于256x256</strong>，否则可能会影响识别效果。<br>备注： <strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * <p>该字段表示待检测图片文件的访问链接，图片支持PNG、JPG、JPEG、BMP、GIF、WEBP格式，<strong>大小不超过100MB</strong>，建议<strong>分辨率不低于256x256</strong>；图片下载时间限制为3秒，超过则会返回下载超时；由于网络安全策略，<strong>送审带重定向的链接，可能引起下载失败</strong>，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError。<br>备注：<strong>该字段与FileContent必须选择输入其中一个</strong>。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p><strong>GIF/长图检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测），长图则按照长边：短边取整计算要切割的总图数；默认值为0，此时只会检测GIF的第一帧或对长图不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p><strong>GIF/长图检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧或对长图不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF/长图时，将每间隔2帧检测一次且最多检测400帧。</p>
                     */
                    int64_t m_maxFrames;
                    bool m_maxFramesHasBeenSet;

                    /**
                     * <p>该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。</p>
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。</p>
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>服务类型，可为空，默认为 IMAGE。</p><p>枚举值：</p><ul><li>IMAGE： 一般图片异步检测</li><li>IMAGE_LLM： 大模型图片异步检测</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>该字段表示待审核的图片资源链接，最多支持传入4张图片</p>
                     */
                    std::vector<std::string> m_fileUrlList;
                    bool m_fileUrlListHasBeenSet;

                    /**
                     * <p>待审核的文本内容，需为UTF-8编码并以Base64格式传入，字数限制5000字内。</p>
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKREQUEST_H_
