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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_CREATETASKREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_CREATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/MediaPreknownInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * CreateTask请求参数结构体
                */
                class CreateTaskRequest : public AbstractModel
                {
                public:
                    CreateTaskRequest();
                    ~CreateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒资文件ID
                     * @return MediaId 媒资文件ID
                     * 
                     */
                    std::string GetMediaId() const;

                    /**
                     * 设置媒资文件ID
                     * @param _mediaId 媒资文件ID
                     * 
                     */
                    void SetMediaId(const std::string& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取媒资素材先验知识，相关限制参考MediaPreknownInfo
                     * @return MediaPreknownInfo 媒资素材先验知识，相关限制参考MediaPreknownInfo
                     * 
                     */
                    MediaPreknownInfo GetMediaPreknownInfo() const;

                    /**
                     * 设置媒资素材先验知识，相关限制参考MediaPreknownInfo
                     * @param _mediaPreknownInfo 媒资素材先验知识，相关限制参考MediaPreknownInfo
                     * 
                     */
                    void SetMediaPreknownInfo(const MediaPreknownInfo& _mediaPreknownInfo);

                    /**
                     * 判断参数 MediaPreknownInfo 是否已赋值
                     * @return MediaPreknownInfo 是否已赋值
                     * 
                     */
                    bool MediaPreknownInfoHasBeenSet() const;

                    /**
                     * 获取任务名称，最长100个中文字符
                     * @return TaskName 任务名称，最长100个中文字符
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称，最长100个中文字符
                     * @param _taskName 任务名称，最长100个中文字符
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取是否上传转码后的视频，仅设置true时上传，默认为false
                     * @return UploadVideo 是否上传转码后的视频，仅设置true时上传，默认为false
                     * 
                     */
                    bool GetUploadVideo() const;

                    /**
                     * 设置是否上传转码后的视频，仅设置true时上传，默认为false
                     * @param _uploadVideo 是否上传转码后的视频，仅设置true时上传，默认为false
                     * 
                     */
                    void SetUploadVideo(const bool& _uploadVideo);

                    /**
                     * 判断参数 UploadVideo 是否已赋值
                     * @return UploadVideo 是否已赋值
                     * 
                     */
                    bool UploadVideoHasBeenSet() const;

                    /**
                     * 获取自定义标签，可用于查询
                     * @return Label 自定义标签，可用于查询
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置自定义标签，可用于查询
                     * @param _label 自定义标签，可用于查询
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取任务分析完成的回调地址，该设置优先级高于控制台全局的设置；
                     * @return CallbackURL 任务分析完成的回调地址，该设置优先级高于控制台全局的设置；
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置任务分析完成的回调地址，该设置优先级高于控制台全局的设置；
                     * @param _callbackURL 任务分析完成的回调地址，该设置优先级高于控制台全局的设置；
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                private:

                    /**
                     * 媒资文件ID
                     */
                    std::string m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * 媒资素材先验知识，相关限制参考MediaPreknownInfo
                     */
                    MediaPreknownInfo m_mediaPreknownInfo;
                    bool m_mediaPreknownInfoHasBeenSet;

                    /**
                     * 任务名称，最长100个中文字符
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 是否上传转码后的视频，仅设置true时上传，默认为false
                     */
                    bool m_uploadVideo;
                    bool m_uploadVideoHasBeenSet;

                    /**
                     * 自定义标签，可用于查询
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 任务分析完成的回调地址，该设置优先级高于控制台全局的设置；
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_CREATETASKREQUEST_H_
