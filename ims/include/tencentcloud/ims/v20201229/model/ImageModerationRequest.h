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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONREQUEST_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONREQUEST_H_

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
                * ImageModeration请求参数结构体
                */
                class ImageModerationRequest : public AbstractModel
                {
                public:
                    ImageModerationRequest();
                    ~ImageModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>该字段表示使用的策略的具体编号，该字段需要先在<a href="https://console.cloud.tencent.com/cms/clouds/manage">内容安全控制台</a>中配置。<br>备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     * @return BizType <p>该字段表示使用的策略的具体编号，该字段需要先在<a href="https://console.cloud.tencent.com/cms/clouds/manage">内容安全控制台</a>中配置。<br>备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置<p>该字段表示使用的策略的具体编号，该字段需要先在<a href="https://console.cloud.tencent.com/cms/clouds/manage">内容安全控制台</a>中配置。<br>备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     * @param _bizType <p>该字段表示使用的策略的具体编号，该字段需要先在<a href="https://console.cloud.tencent.com/cms/clouds/manage">内容安全控制台</a>中配置。<br>备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
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
                     * 获取<p>该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的<strong>Base64编码内容大小不得超过10MB</strong>。<br>备注：<strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * @return FileContent <p>该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的<strong>Base64编码内容大小不得超过10MB</strong>。<br>备注：<strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置<p>该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的<strong>Base64编码内容大小不得超过10MB</strong>。<br>备注：<strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     * @param _fileContent <p>该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的<strong>Base64编码内容大小不得超过10MB</strong>。<br>备注：<strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
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
                     * 获取<p>该字段表示待检测图片文件的访问链接，URL源图<strong>大小不超过30MB</strong>。<br>备注：该字段与FileContent必须选择输入其中一个。</p>
                     * @return FileUrl <p>该字段表示待检测图片文件的访问链接，URL源图<strong>大小不超过30MB</strong>。<br>备注：该字段与FileContent必须选择输入其中一个。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>该字段表示待检测图片文件的访问链接，URL源图<strong>大小不超过30MB</strong>。<br>备注：该字段与FileContent必须选择输入其中一个。</p>
                     * @param _fileUrl <p>该字段表示待检测图片文件的访问链接，URL源图<strong>大小不超过30MB</strong>。<br>备注：该字段与FileContent必须选择输入其中一个。</p>
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
                     * 获取<p><strong>GIF检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @return Interval <p><strong>GIF检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p><strong>GIF检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @param _interval <p><strong>GIF检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
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
                     * 获取<p><strong>GIF检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @return MaxFrames <p><strong>GIF检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * 
                     */
                    int64_t GetMaxFrames() const;

                    /**
                     * 设置<p><strong>GIF检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
                     * @param _maxFrames <p><strong>GIF检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
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
                     * 获取<p>该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。</p>
                     * @return Type <p>该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。</p>
                     * @param _type <p>该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。</p>
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
                     * 获取<p>该字段表示输入的策略标识用于调用业务来区分策略场景</p>
                     * @return BizTag <p>该字段表示输入的策略标识用于调用业务来区分策略场景</p>
                     * 
                     */
                    std::string GetBizTag() const;

                    /**
                     * 设置<p>该字段表示输入的策略标识用于调用业务来区分策略场景</p>
                     * @param _bizTag <p>该字段表示输入的策略标识用于调用业务来区分策略场景</p>
                     * 
                     */
                    void SetBizTag(const std::string& _bizTag);

                    /**
                     * 判断参数 BizTag 是否已赋值
                     * @return BizTag 是否已赋值
                     * 
                     */
                    bool BizTagHasBeenSet() const;

                private:

                    /**
                     * <p>该字段表示使用的策略的具体编号，该字段需要先在<a href="https://console.cloud.tencent.com/cms/clouds/manage">内容安全控制台</a>中配置。<br>备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。</p>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，<strong>长度不超过64个字符</strong>。</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的<strong>Base64编码内容大小不得超过10MB</strong>。<br>备注：<strong>该字段与FileUrl必须选择输入其中一个</strong>。</p>
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * <p>该字段表示待检测图片文件的访问链接，URL源图<strong>大小不超过30MB</strong>。<br>备注：该字段与FileContent必须选择输入其中一个。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p><strong>GIF检测专用</strong>，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p><strong>GIF检测专用</strong>，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。</p>
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
                     * <p>该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>该字段表示输入的策略标识用于调用业务来区分策略场景</p>
                     */
                    std::string m_bizTag;
                    bool m_bizTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONREQUEST_H_
