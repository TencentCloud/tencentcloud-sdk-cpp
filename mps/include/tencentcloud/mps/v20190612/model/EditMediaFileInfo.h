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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAFILEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编辑点播视频文件信息
                */
                class EditMediaFileInfo : public AbstractModel
                {
                public:
                    EditMediaFileInfo();
                    ~EditMediaFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频的输入信息。
                     * @return InputInfo 视频的输入信息。
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置视频的输入信息。
                     * @param InputInfo 视频的输入信息。
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取视频剪辑的起始时间偏移，单位：秒。
                     * @return StartTimeOffset 视频剪辑的起始时间偏移，单位：秒。
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置视频剪辑的起始时间偏移，单位：秒。
                     * @param StartTimeOffset 视频剪辑的起始时间偏移，单位：秒。
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取视频剪辑的结束时间偏移，单位：秒。
                     * @return EndTimeOffset 视频剪辑的结束时间偏移，单位：秒。
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置视频剪辑的结束时间偏移，单位：秒。
                     * @param EndTimeOffset 视频剪辑的结束时间偏移，单位：秒。
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 视频的输入信息。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 视频剪辑的起始时间偏移，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 视频剪辑的结束时间偏移，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAFILEINFO_H_
