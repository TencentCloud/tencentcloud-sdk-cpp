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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_IMAGEMODERATIONREQUEST_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_IMAGEMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20200713/model/User.h>
#include <tencentcloud/ims/v20200713/model/Device.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
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
                     * 获取该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略。 -- 该字段暂未开放。
                     * @return BizType 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略。 -- 该字段暂未开放。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略。 -- 该字段暂未开放。
                     * @param _bizType 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略。 -- 该字段暂未开放。
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
                     * 获取数据ID，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * @return DataId 数据ID，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置数据ID，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * @param _dataId 数据ID，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
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
                     * 获取数据Base64编码，图片检测接口为图片文件内容，大小不能超过5M
                     * @return FileContent 数据Base64编码，图片检测接口为图片文件内容，大小不能超过5M
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置数据Base64编码，图片检测接口为图片文件内容，大小不能超过5M
                     * @param _fileContent 数据Base64编码，图片检测接口为图片文件内容，大小不能超过5M
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
                     * 获取图片资源访问链接，__与FileContent参数必须二选一输入__ 。由于网络安全策略，送审带重定向的链接，可能引起下载失败，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError
                     * @return FileUrl 图片资源访问链接，__与FileContent参数必须二选一输入__ 。由于网络安全策略，送审带重定向的链接，可能引起下载失败，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置图片资源访问链接，__与FileContent参数必须二选一输入__ 。由于网络安全策略，送审带重定向的链接，可能引起下载失败，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError
                     * @param _fileUrl 图片资源访问链接，__与FileContent参数必须二选一输入__ 。由于网络安全策略，送审带重定向的链接，可能引起下载失败，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError
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
                     * 获取截帧频率，GIF图/长图检测专用，默认值为0，表示只会检测GIF图/长图的第一帧
                     * @return Interval 截帧频率，GIF图/长图检测专用，默认值为0，表示只会检测GIF图/长图的第一帧
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置截帧频率，GIF图/长图检测专用，默认值为0，表示只会检测GIF图/长图的第一帧
                     * @param _interval 截帧频率，GIF图/长图检测专用，默认值为0，表示只会检测GIF图/长图的第一帧
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
                     * 获取GIF图/长图检测专用，代表均匀最大截帧数量，默认值为1（即只取GIF第一张，或长图不做切分处理（可能会造成处理超时））。
                     * @return MaxFrames GIF图/长图检测专用，代表均匀最大截帧数量，默认值为1（即只取GIF第一张，或长图不做切分处理（可能会造成处理超时））。
                     * 
                     */
                    int64_t GetMaxFrames() const;

                    /**
                     * 设置GIF图/长图检测专用，代表均匀最大截帧数量，默认值为1（即只取GIF第一张，或长图不做切分处理（可能会造成处理超时））。
                     * @param _maxFrames GIF图/长图检测专用，代表均匀最大截帧数量，默认值为1（即只取GIF第一张，或长图不做切分处理（可能会造成处理超时））。
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
                     * 获取账号相关信息字段，填入后可识别违规风险账号。
                     * @return User 账号相关信息字段，填入后可识别违规风险账号。
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置账号相关信息字段，填入后可识别违规风险账号。
                     * @param _user 账号相关信息字段，填入后可识别违规风险账号。
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
                     * 获取设备相关信息字段，填入后可识别违规风险设备。
                     * @return Device 设备相关信息字段，填入后可识别违规风险设备。
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置设备相关信息字段，填入后可识别违规风险设备。
                     * @param _device 设备相关信息字段，填入后可识别违规风险设备。
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                private:

                    /**
                     * 该字段用于标识业务场景。您可以在内容安全控制台创建对应的ID，配置不同的内容审核策略，通过接口调用，默认不填为0，后端使用默认策略。 -- 该字段暂未开放。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 数据ID，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 数据Base64编码，图片检测接口为图片文件内容，大小不能超过5M
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 图片资源访问链接，__与FileContent参数必须二选一输入__ 。由于网络安全策略，送审带重定向的链接，可能引起下载失败，请尽量避免，比如Http返回302状态码的链接，可能导致接口返回ResourceUnavailable.ImageDownloadError
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 截帧频率，GIF图/长图检测专用，默认值为0，表示只会检测GIF图/长图的第一帧
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * GIF图/长图检测专用，代表均匀最大截帧数量，默认值为1（即只取GIF第一张，或长图不做切分处理（可能会造成处理超时））。
                     */
                    int64_t m_maxFrames;
                    bool m_maxFramesHasBeenSet;

                    /**
                     * 账号相关信息字段，填入后可识别违规风险账号。
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 设备相关信息字段，填入后可识别违规风险设备。
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_IMAGEMODERATIONREQUEST_H_
