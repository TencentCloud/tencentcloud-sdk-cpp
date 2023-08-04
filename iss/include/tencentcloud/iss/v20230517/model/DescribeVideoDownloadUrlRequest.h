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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeVideoDownloadUrl请求参数结构体
                */
                class DescribeVideoDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeVideoDownloadUrlRequest();
                    ~DescribeVideoDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道 ID
                     * @return ChannelId 通道 ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道 ID
                     * @param _channelId 通道 ID
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
                     * 获取下载的开始时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * @return BeginTime 下载的开始时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置下载的开始时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * @param _beginTime 下载的开始时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取下载的结束时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * @return EndTime 下载的结束时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置下载的结束时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * @param _endTime 下载的结束时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取文件格式，"mp4"：mp4格式，"ts"：ts文件格式
                     * @return FileType 文件格式，"mp4"：mp4格式，"ts"：ts文件格式
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件格式，"mp4"：mp4格式，"ts"：ts文件格式
                     * @param _fileType 文件格式，"mp4"：mp4格式，"ts"：ts文件格式
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取响应data中是否携带实际下载录像的开始时间与结束时间
                     * @return IsRespActualTime 响应data中是否携带实际下载录像的开始时间与结束时间
                     * 
                     */
                    bool GetIsRespActualTime() const;

                    /**
                     * 设置响应data中是否携带实际下载录像的开始时间与结束时间
                     * @param _isRespActualTime 响应data中是否携带实际下载录像的开始时间与结束时间
                     * 
                     */
                    void SetIsRespActualTime(const bool& _isRespActualTime);

                    /**
                     * 判断参数 IsRespActualTime 是否已赋值
                     * @return IsRespActualTime 是否已赋值
                     * 
                     */
                    bool IsRespActualTimeHasBeenSet() const;

                private:

                    /**
                     * 通道 ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 下载的开始时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 下载的结束时间，UTC 秒数，开始和结束时间段最长为30分钟，且不能跨天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 文件格式，"mp4"：mp4格式，"ts"：ts文件格式
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 响应data中是否携带实际下载录像的开始时间与结束时间
                     */
                    bool m_isRespActualTime;
                    bool m_isRespActualTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLREQUEST_H_
