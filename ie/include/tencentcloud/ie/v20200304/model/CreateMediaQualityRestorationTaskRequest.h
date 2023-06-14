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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_CREATEMEDIAQUALITYRESTORATIONTASKREQUEST_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_CREATEMEDIAQUALITYRESTORATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/DownInfo.h>
#include <tencentcloud/ie/v20200304/model/SubTaskTranscodeInfo.h>
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
                * CreateMediaQualityRestorationTask请求参数结构体
                */
                class CreateMediaQualityRestorationTaskRequest : public AbstractModel
                {
                public:
                    CreateMediaQualityRestorationTaskRequest();
                    ~CreateMediaQualityRestorationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源文件地址。
                     * @return DownInfo 源文件地址。
                     * 
                     */
                    DownInfo GetDownInfo() const;

                    /**
                     * 设置源文件地址。
                     * @param _downInfo 源文件地址。
                     * 
                     */
                    void SetDownInfo(const DownInfo& _downInfo);

                    /**
                     * 判断参数 DownInfo 是否已赋值
                     * @return DownInfo 是否已赋值
                     * 
                     */
                    bool DownInfoHasBeenSet() const;

                    /**
                     * 获取画质重生任务参数信息。
                     * @return TransInfo 画质重生任务参数信息。
                     * 
                     */
                    std::vector<SubTaskTranscodeInfo> GetTransInfo() const;

                    /**
                     * 设置画质重生任务参数信息。
                     * @param _transInfo 画质重生任务参数信息。
                     * 
                     */
                    void SetTransInfo(const std::vector<SubTaskTranscodeInfo>& _transInfo);

                    /**
                     * 判断参数 TransInfo 是否已赋值
                     * @return TransInfo 是否已赋值
                     * 
                     */
                    bool TransInfoHasBeenSet() const;

                    /**
                     * 获取任务结束后文件存储信息。
                     * @return SaveInfo 任务结束后文件存储信息。
                     * 
                     */
                    SaveInfo GetSaveInfo() const;

                    /**
                     * 设置任务结束后文件存储信息。
                     * @param _saveInfo 任务结束后文件存储信息。
                     * 
                     */
                    void SetSaveInfo(const SaveInfo& _saveInfo);

                    /**
                     * 判断参数 SaveInfo 是否已赋值
                     * @return SaveInfo 是否已赋值
                     * 
                     */
                    bool SaveInfoHasBeenSet() const;

                    /**
                     * 获取任务结果回调地址信息。
                     * @return CallbackInfo 任务结果回调地址信息。
                     * 
                     */
                    CallbackInfo GetCallbackInfo() const;

                    /**
                     * 设置任务结果回调地址信息。
                     * @param _callbackInfo 任务结果回调地址信息。
                     * 
                     */
                    void SetCallbackInfo(const CallbackInfo& _callbackInfo);

                    /**
                     * 判断参数 CallbackInfo 是否已赋值
                     * @return CallbackInfo 是否已赋值
                     * 
                     */
                    bool CallbackInfoHasBeenSet() const;

                    /**
                     * 获取极速高清体验馆渠道标志。
                     * @return TopSpeedCodecChannel 极速高清体验馆渠道标志。
                     * 
                     */
                    uint64_t GetTopSpeedCodecChannel() const;

                    /**
                     * 设置极速高清体验馆渠道标志。
                     * @param _topSpeedCodecChannel 极速高清体验馆渠道标志。
                     * 
                     */
                    void SetTopSpeedCodecChannel(const uint64_t& _topSpeedCodecChannel);

                    /**
                     * 判断参数 TopSpeedCodecChannel 是否已赋值
                     * @return TopSpeedCodecChannel 是否已赋值
                     * 
                     */
                    bool TopSpeedCodecChannelHasBeenSet() const;

                private:

                    /**
                     * 源文件地址。
                     */
                    DownInfo m_downInfo;
                    bool m_downInfoHasBeenSet;

                    /**
                     * 画质重生任务参数信息。
                     */
                    std::vector<SubTaskTranscodeInfo> m_transInfo;
                    bool m_transInfoHasBeenSet;

                    /**
                     * 任务结束后文件存储信息。
                     */
                    SaveInfo m_saveInfo;
                    bool m_saveInfoHasBeenSet;

                    /**
                     * 任务结果回调地址信息。
                     */
                    CallbackInfo m_callbackInfo;
                    bool m_callbackInfoHasBeenSet;

                    /**
                     * 极速高清体验馆渠道标志。
                     */
                    uint64_t m_topSpeedCodecChannel;
                    bool m_topSpeedCodecChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_CREATEMEDIAQUALITYRESTORATIONTASKREQUEST_H_
