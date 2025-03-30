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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_GBDEVICESNAPINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_GBDEVICESNAPINFO_H_

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
                * 抓拍结果信息
                */
                class GBDeviceSnapInfo : public AbstractModel
                {
                public:
                    GBDeviceSnapInfo();
                    ~GBDeviceSnapInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取下载地址，空值表示存储图片过期
                     * @return DownloadUrl 下载地址，空值表示存储图片过期
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置下载地址，空值表示存储图片过期
                     * @param _downloadUrl 下载地址，空值表示存储图片过期
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取图片大小，单位B
                     * @return ImageSize 图片大小，单位B
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置图片大小，单位B
                     * @param _imageSize 图片大小，单位B
                     * 
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取文件的创建时间
                     * @return CreatedTime 文件的创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置文件的创建时间
                     * @param _createdTime 文件的创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取图片的接收时间
                     * @return ReceivedTime 图片的接收时间
                     * 
                     */
                    std::string GetReceivedTime() const;

                    /**
                     * 设置图片的接收时间
                     * @param _receivedTime 图片的接收时间
                     * 
                     */
                    void SetReceivedTime(const std::string& _receivedTime);

                    /**
                     * 判断参数 ReceivedTime 是否已赋值
                     * @return ReceivedTime 是否已赋值
                     * 
                     */
                    bool ReceivedTimeHasBeenSet() const;

                    /**
                     * 获取预览地址，空值表示存储图片过期
                     * @return PreviewUrl 预览地址，空值表示存储图片过期
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置预览地址，空值表示存储图片过期
                     * @param _previewUrl 预览地址，空值表示存储图片过期
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取国标信令会话ID，同时对应控制设备抓拍 ( ControlDeviceSnapshot )接口返回的request_id
                     * @return SessionId 国标信令会话ID，同时对应控制设备抓拍 ( ControlDeviceSnapshot )接口返回的request_id
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置国标信令会话ID，同时对应控制设备抓拍 ( ControlDeviceSnapshot )接口返回的request_id
                     * @param _sessionId 国标信令会话ID，同时对应控制设备抓拍 ( ControlDeviceSnapshot )接口返回的request_id
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 下载地址，空值表示存储图片过期
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 图片大小，单位B
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 文件的创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 图片的接收时间
                     */
                    std::string m_receivedTime;
                    bool m_receivedTimeHasBeenSet;

                    /**
                     * 预览地址，空值表示存储图片过期
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 国标信令会话ID，同时对应控制设备抓拍 ( ControlDeviceSnapshot )接口返回的request_id
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_GBDEVICESNAPINFO_H_
