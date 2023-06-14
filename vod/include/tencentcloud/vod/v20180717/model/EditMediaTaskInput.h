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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaFileInfo.h>
#include <tencentcloud/vod/v20180717/model/EditMediaStreamInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 编辑视频任务的输入。
                */
                class EditMediaTaskInput : public AbstractModel
                {
                public:
                    EditMediaTaskInput();
                    ~EditMediaTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入视频的来源类型，可以取的值为 File，Stream 两种。
                     * @return InputType 输入视频的来源类型，可以取的值为 File，Stream 两种。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置输入视频的来源类型，可以取的值为 File，Stream 两种。
                     * @param _inputType 输入视频的来源类型，可以取的值为 File，Stream 两种。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取输入的视频文件信息，当 InputType 为 File 时，该字段有值。
                     * @return FileInfoSet 输入的视频文件信息，当 InputType 为 File 时，该字段有值。
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfoSet() const;

                    /**
                     * 设置输入的视频文件信息，当 InputType 为 File 时，该字段有值。
                     * @param _fileInfoSet 输入的视频文件信息，当 InputType 为 File 时，该字段有值。
                     * 
                     */
                    void SetFileInfoSet(const std::vector<EditMediaFileInfo>& _fileInfoSet);

                    /**
                     * 判断参数 FileInfoSet 是否已赋值
                     * @return FileInfoSet 是否已赋值
                     * 
                     */
                    bool FileInfoSetHasBeenSet() const;

                    /**
                     * 获取输入的流信息，当 InputType 为 Stream 时，该字段有值。
                     * @return StreamInfoSet 输入的流信息，当 InputType 为 Stream 时，该字段有值。
                     * 
                     */
                    std::vector<EditMediaStreamInfo> GetStreamInfoSet() const;

                    /**
                     * 设置输入的流信息，当 InputType 为 Stream 时，该字段有值。
                     * @param _streamInfoSet 输入的流信息，当 InputType 为 Stream 时，该字段有值。
                     * 
                     */
                    void SetStreamInfoSet(const std::vector<EditMediaStreamInfo>& _streamInfoSet);

                    /**
                     * 判断参数 StreamInfoSet 是否已赋值
                     * @return StreamInfoSet 是否已赋值
                     * 
                     */
                    bool StreamInfoSetHasBeenSet() const;

                private:

                    /**
                     * 输入视频的来源类型，可以取的值为 File，Stream 两种。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 输入的视频文件信息，当 InputType 为 File 时，该字段有值。
                     */
                    std::vector<EditMediaFileInfo> m_fileInfoSet;
                    bool m_fileInfoSetHasBeenSet;

                    /**
                     * 输入的流信息，当 InputType 为 Stream 时，该字段有值。
                     */
                    std::vector<EditMediaStreamInfo> m_streamInfoSet;
                    bool m_streamInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASKINPUT_H_
