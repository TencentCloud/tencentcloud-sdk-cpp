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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADAUDIOINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADAUDIOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 上传音频文件信息
                */
                class UploadAudioInfo : public AbstractModel
                {
                public:
                    UploadAudioInfo();
                    ~UploadAudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件别名（可重复）
                     * @return CustomFileName 文件别名（可重复）
                     * 
                     */
                    std::string GetCustomFileName() const;

                    /**
                     * 设置文件别名（可重复）
                     * @param _customFileName 文件别名（可重复）
                     * 
                     */
                    void SetCustomFileName(const std::string& _customFileName);

                    /**
                     * 判断参数 CustomFileName 是否已赋值
                     * @return CustomFileName 是否已赋值
                     * 
                     */
                    bool CustomFileNameHasBeenSet() const;

                    /**
                     * 获取音频文件链接。(支持mp3和wav格式，文件不超过5MB)
                     * @return AudioUrl 音频文件链接。(支持mp3和wav格式，文件不超过5MB)
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置音频文件链接。(支持mp3和wav格式，文件不超过5MB)
                     * @param _audioUrl 音频文件链接。(支持mp3和wav格式，文件不超过5MB)
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                private:

                    /**
                     * 文件别名（可重复）
                     */
                    std::string m_customFileName;
                    bool m_customFileNameHasBeenSet;

                    /**
                     * 音频文件链接。(支持mp3和wav格式，文件不超过5MB)
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADAUDIOINFO_H_
