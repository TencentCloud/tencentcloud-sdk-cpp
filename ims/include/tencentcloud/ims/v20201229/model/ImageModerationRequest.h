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
                     * 获取该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @return BizType 该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @param _bizType 该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
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
                     * 获取该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**。
                     * @return DataId 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**。
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**。
                     * @param _dataId 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**。
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
                     * 获取该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的**Base64编码内容大小不得超过10MB**。<br/>备注：**该字段与FileUrl必须选择输入其中一个**。
                     * @return FileContent 该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的**Base64编码内容大小不得超过10MB**。<br/>备注：**该字段与FileUrl必须选择输入其中一个**。
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的**Base64编码内容大小不得超过10MB**。<br/>备注：**该字段与FileUrl必须选择输入其中一个**。
                     * @param _fileContent 该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的**Base64编码内容大小不得超过10MB**。<br/>备注：**该字段与FileUrl必须选择输入其中一个**。
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
                     * 获取该字段表示待检测图片文件的访问链接，URL源图**大小不超过30MB**。<br />备注：该字段与FileContent必须选择输入其中一个。
                     * @return FileUrl 该字段表示待检测图片文件的访问链接，URL源图**大小不超过30MB**。<br />备注：该字段与FileContent必须选择输入其中一个。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置该字段表示待检测图片文件的访问链接，URL源图**大小不超过30MB**。<br />备注：该字段与FileContent必须选择输入其中一个。
                     * @param _fileUrl 该字段表示待检测图片文件的访问链接，URL源图**大小不超过30MB**。<br />备注：该字段与FileContent必须选择输入其中一个。
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
                     * 获取**GIF检测专用**，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     * @return Interval **GIF检测专用**，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置**GIF检测专用**，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     * @param _interval **GIF检测专用**，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
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
                     * 获取**GIF检测专用**，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     * @return MaxFrames **GIF检测专用**，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     * 
                     */
                    int64_t GetMaxFrames() const;

                    /**
                     * 设置**GIF检测专用**，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     * @param _maxFrames **GIF检测专用**，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
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
                     * 获取该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。
                     * @return User 该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。
                     * @param _user 该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。
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
                     * 获取该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。
                     * @return Device 该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。
                     * @param _device 该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。
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
                     * 获取该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。
                     * @return Type 该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。
                     * @param _type 该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 该字段表示使用的策略的具体编号，该字段需要先在[内容安全控制台](#https://console.cloud.tencent.com/cms/clouds/manage)中配置。
备注：不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 该字段表示您为待检测对象分配的数据ID，传入后可方便您对文件进行标识和管理。<br>取值：由英文字母（大小写均可）、数字及四个特殊符号（_，-，@，#）组成，**长度不超过64个字符**。
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 该字段表示待检测图片文件内容的Base64编码，由于云API对请求包体有大小限制，图片的**Base64编码内容大小不得超过10MB**。<br/>备注：**该字段与FileUrl必须选择输入其中一个**。
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 该字段表示待检测图片文件的访问链接，URL源图**大小不超过30MB**。<br />备注：该字段与FileContent必须选择输入其中一个。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * **GIF检测专用**，用于表示GIF截帧频率（每隔多少张图片抽取一帧进行检测）；默认值为0，此时只会检测GIF的第一帧或不进行切分处理。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * **GIF检测专用**，用于标识最大截帧数量；默认值为1，此时只会检测输入GIF的第一帧不进行切分处理（可能会造成处理超时）。<br>备注：Interval与MaxFrames参数需要组合使用。例如，Interval=3, MaxFrames=400，则代表在检测GIF时，将每间隔2帧检测一次且最多检测400帧。
                     */
                    int64_t m_maxFrames;
                    bool m_maxFramesHasBeenSet;

                    /**
                     * 该字段表示待检测对象对应的用户相关信息，若填入则可甄别相应违规风险用户。
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 该字段表示待检测对象对应的设备相关信息，若填入则可甄别相应违规风险设备。
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * 该字段表示输入的图片审核类型，取值含：IMAGE（内容安全）、IMAGE_AIGC（AI生成识别）两种，默认值为IMAGE。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONREQUEST_H_
