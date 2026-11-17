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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 视频截图信息
                */
                class VideoSnapshotInfo : public AbstractModel
                {
                public:
                    VideoSnapshotInfo();
                    ~VideoSnapshotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片Id</p>
                     * @return ImageId <p>图片Id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>图片Id</p>
                     * @param _imageId <p>图片Id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>截图配置Id</p>
                     * @return ConfigId <p>截图配置Id</p>
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置<p>截图配置Id</p>
                     * @param _configId <p>截图配置Id</p>
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>截图配置名称</p>
                     * @return ConfigName <p>截图配置名称</p>
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置<p>截图配置名称</p>
                     * @param _configName <p>截图配置名称</p>
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取<p>通道Id</p>
                     * @return ChannelId <p>通道Id</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>通道Id</p>
                     * @param _channelId <p>通道Id</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>通道名称</p>
                     * @return ChannelName <p>通道名称</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>通道名称</p>
                     * @param _channelName <p>通道名称</p>
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @return Type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @param _type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>图片Url</p>
                     * @return ImageUrl <p>图片Url</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片Url</p>
                     * @param _imageUrl <p>图片Url</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>图片Url有效期</p>
                     * @return ImageUrlExpires <p>图片Url有效期</p>
                     * 
                     */
                    int64_t GetImageUrlExpires() const;

                    /**
                     * 设置<p>图片Url有效期</p>
                     * @param _imageUrlExpires <p>图片Url有效期</p>
                     * 
                     */
                    void SetImageUrlExpires(const int64_t& _imageUrlExpires);

                    /**
                     * 判断参数 ImageUrlExpires 是否已赋值
                     * @return ImageUrlExpires 是否已赋值
                     * 
                     */
                    bool ImageUrlExpiresHasBeenSet() const;

                    /**
                     * 获取<p>截图时间点</p>
                     * @return Timestamp <p>截图时间点</p>
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>截图时间点</p>
                     * @param _timestamp <p>截图时间点</p>
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>图片大小</p><p>单位：字节</p>
                     * @return FileSize <p>图片大小</p><p>单位：字节</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>图片大小</p><p>单位：字节</p>
                     * @param _fileSize <p>图片大小</p><p>单位：字节</p>
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * <p>图片Id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>截图配置Id</p>
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>截图配置名称</p>
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * <p>通道Id</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>通道名称</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>图片Url</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>图片Url有效期</p>
                     */
                    int64_t m_imageUrlExpires;
                    bool m_imageUrlExpiresHasBeenSet;

                    /**
                     * <p>截图时间点</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>图片大小</p><p>单位：字节</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTINFO_H_
