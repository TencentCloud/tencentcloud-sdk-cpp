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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_GETVRSVOICETYPEINFOREQUEST_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_GETVRSVOICETYPEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * GetVRSVoiceTypeInfo请求参数结构体
                */
                class GetVRSVoiceTypeInfoRequest : public AbstractModel
                {
                public:
                    GetVRSVoiceTypeInfoRequest();
                    ~GetVRSVoiceTypeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取音色id。
                     * @return VoiceType 音色id。
                     * 
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置音色id。
                     * @param _voiceType 音色id。
                     * 
                     */
                    void SetVoiceType(const int64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取0 - 除快速声音复刻外其他复刻类型（默认）； 5 - 快速声音复刻。 默认为0。
                     * @return TaskType 0 - 除快速声音复刻外其他复刻类型（默认）； 5 - 快速声音复刻。 默认为0。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置0 - 除快速声音复刻外其他复刻类型（默认）； 5 - 快速声音复刻。 默认为0。
                     * @param _taskType 0 - 除快速声音复刻外其他复刻类型（默认）； 5 - 快速声音复刻。 默认为0。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取快速复刻音色id。
                     * @return FastVoiceType 快速复刻音色id。
                     * 
                     */
                    std::string GetFastVoiceType() const;

                    /**
                     * 设置快速复刻音色id。
                     * @param _fastVoiceType 快速复刻音色id。
                     * 
                     */
                    void SetFastVoiceType(const std::string& _fastVoiceType);

                    /**
                     * 判断参数 FastVoiceType 是否已赋值
                     * @return FastVoiceType 是否已赋值
                     * 
                     */
                    bool FastVoiceTypeHasBeenSet() const;

                private:

                    /**
                     * 音色id。
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 0 - 除快速声音复刻外其他复刻类型（默认）； 5 - 快速声音复刻。 默认为0。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 快速复刻音色id。
                     */
                    std::string m_fastVoiceType;
                    bool m_fastVoiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_GETVRSVOICETYPEINFOREQUEST_H_
