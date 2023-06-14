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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_CREATEMEDIAPROCESSTASKREQUEST_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_CREATEMEDIAPROCESSTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/MediaProcessInfo.h>
#include <tencentcloud/ie/v20200304/model/MediaSourceInfo.h>
#include <tencentcloud/ie/v20200304/model/SaveInfo.h>
#include <tencentcloud/ie/v20200304/model/CallbackInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * CreateMediaProcessTask请求参数结构体
                */
                class CreateMediaProcessTaskRequest : public AbstractModel
                {
                public:
                    CreateMediaProcessTaskRequest();
                    ~CreateMediaProcessTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编辑处理任务参数。
                     * @return MediaProcessInfo 编辑处理任务参数。
                     * 
                     */
                    MediaProcessInfo GetMediaProcessInfo() const;

                    /**
                     * 设置编辑处理任务参数。
                     * @param _mediaProcessInfo 编辑处理任务参数。
                     * 
                     */
                    void SetMediaProcessInfo(const MediaProcessInfo& _mediaProcessInfo);

                    /**
                     * 判断参数 MediaProcessInfo 是否已赋值
                     * @return MediaProcessInfo 是否已赋值
                     * 
                     */
                    bool MediaProcessInfoHasBeenSet() const;

                    /**
                     * 获取编辑处理任务输入源列表。
                     * @return SourceInfoSet 编辑处理任务输入源列表。
                     * 
                     */
                    std::vector<MediaSourceInfo> GetSourceInfoSet() const;

                    /**
                     * 设置编辑处理任务输入源列表。
                     * @param _sourceInfoSet 编辑处理任务输入源列表。
                     * 
                     */
                    void SetSourceInfoSet(const std::vector<MediaSourceInfo>& _sourceInfoSet);

                    /**
                     * 判断参数 SourceInfoSet 是否已赋值
                     * @return SourceInfoSet 是否已赋值
                     * 
                     */
                    bool SourceInfoSetHasBeenSet() const;

                    /**
                     * 获取结果存储信息，对于涉及存储的请求必选。部子任务支持数组备份写，具体以对应任务文档为准。
                     * @return SaveInfoSet 结果存储信息，对于涉及存储的请求必选。部子任务支持数组备份写，具体以对应任务文档为准。
                     * 
                     */
                    std::vector<SaveInfo> GetSaveInfoSet() const;

                    /**
                     * 设置结果存储信息，对于涉及存储的请求必选。部子任务支持数组备份写，具体以对应任务文档为准。
                     * @param _saveInfoSet 结果存储信息，对于涉及存储的请求必选。部子任务支持数组备份写，具体以对应任务文档为准。
                     * 
                     */
                    void SetSaveInfoSet(const std::vector<SaveInfo>& _saveInfoSet);

                    /**
                     * 判断参数 SaveInfoSet 是否已赋值
                     * @return SaveInfoSet 是否已赋值
                     * 
                     */
                    bool SaveInfoSetHasBeenSet() const;

                    /**
                     * 获取任务结果回调地址信息。部子任务支持数组备份回调，具体以对应任务文档为准。
                     * @return CallbackInfoSet 任务结果回调地址信息。部子任务支持数组备份回调，具体以对应任务文档为准。
                     * 
                     */
                    std::vector<CallbackInfo> GetCallbackInfoSet() const;

                    /**
                     * 设置任务结果回调地址信息。部子任务支持数组备份回调，具体以对应任务文档为准。
                     * @param _callbackInfoSet 任务结果回调地址信息。部子任务支持数组备份回调，具体以对应任务文档为准。
                     * 
                     */
                    void SetCallbackInfoSet(const std::vector<CallbackInfo>& _callbackInfoSet);

                    /**
                     * 判断参数 CallbackInfoSet 是否已赋值
                     * @return CallbackInfoSet 是否已赋值
                     * 
                     */
                    bool CallbackInfoSetHasBeenSet() const;

                private:

                    /**
                     * 编辑处理任务参数。
                     */
                    MediaProcessInfo m_mediaProcessInfo;
                    bool m_mediaProcessInfoHasBeenSet;

                    /**
                     * 编辑处理任务输入源列表。
                     */
                    std::vector<MediaSourceInfo> m_sourceInfoSet;
                    bool m_sourceInfoSetHasBeenSet;

                    /**
                     * 结果存储信息，对于涉及存储的请求必选。部子任务支持数组备份写，具体以对应任务文档为准。
                     */
                    std::vector<SaveInfo> m_saveInfoSet;
                    bool m_saveInfoSetHasBeenSet;

                    /**
                     * 任务结果回调地址信息。部子任务支持数组备份回调，具体以对应任务文档为准。
                     */
                    std::vector<CallbackInfo> m_callbackInfoSet;
                    bool m_callbackInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_CREATEMEDIAPROCESSTASKREQUEST_H_
