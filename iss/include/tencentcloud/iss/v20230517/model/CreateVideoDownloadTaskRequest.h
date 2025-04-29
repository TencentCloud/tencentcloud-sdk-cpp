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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEODOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEODOWNLOADTASKREQUEST_H_

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
                * CreateVideoDownloadTask请求参数结构体
                */
                class CreateVideoDownloadTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoDownloadTaskRequest();
                    ~CreateVideoDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
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
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param _beginTime 开始时间
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取默认1倍速，支持（1,2,4,8）倍速
                     * @return Scale 默认1倍速，支持（1,2,4,8）倍速
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置默认1倍速，支持（1,2,4,8）倍速
                     * @param _scale 默认1倍速，支持（1,2,4,8）倍速
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取转码后的mp4文件过期时间（支持7,15,30,60,90,180,365）
                     * @return Expire 转码后的mp4文件过期时间（支持7,15,30,60,90,180,365）
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置转码后的mp4文件过期时间（支持7,15,30,60,90,180,365）
                     * @param _expire 转码后的mp4文件过期时间（支持7,15,30,60,90,180,365）
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取下载文件格式，当前仅支持（1：mp4）
                     * @return FileType 下载文件格式，当前仅支持（1：mp4）
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置下载文件格式，当前仅支持（1：mp4）
                     * @param _fileType 下载文件格式，当前仅支持（1：mp4）
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取完成策略（0：拉流失败但是录像不完整则认为任务失败，不生成 MP4；1：拉流失败但是录像不完整则认为任务成功，生成 mp4）
                     * @return CompletionPolicy 完成策略（0：拉流失败但是录像不完整则认为任务失败，不生成 MP4；1：拉流失败但是录像不完整则认为任务成功，生成 mp4）
                     * 
                     */
                    int64_t GetCompletionPolicy() const;

                    /**
                     * 设置完成策略（0：拉流失败但是录像不完整则认为任务失败，不生成 MP4；1：拉流失败但是录像不完整则认为任务成功，生成 mp4）
                     * @param _completionPolicy 完成策略（0：拉流失败但是录像不完整则认为任务失败，不生成 MP4；1：拉流失败但是录像不完整则认为任务成功，生成 mp4）
                     * 
                     */
                    void SetCompletionPolicy(const int64_t& _completionPolicy);

                    /**
                     * 判断参数 CompletionPolicy 是否已赋值
                     * @return CompletionPolicy 是否已赋值
                     * 
                     */
                    bool CompletionPolicyHasBeenSet() const;

                private:

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 默认1倍速，支持（1,2,4,8）倍速
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 转码后的mp4文件过期时间（支持7,15,30,60,90,180,365）
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * 下载文件格式，当前仅支持（1：mp4）
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 完成策略（0：拉流失败但是录像不完整则认为任务失败，不生成 MP4；1：拉流失败但是录像不完整则认为任务成功，生成 mp4）
                     */
                    int64_t m_completionPolicy;
                    bool m_completionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEODOWNLOADTASKREQUEST_H_
