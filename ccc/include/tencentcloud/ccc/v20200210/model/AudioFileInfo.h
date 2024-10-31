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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AUDIOFILEINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AUDIOFILEINFO_H_

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
                * 音频文件审核信息
                */
                class AudioFileInfo : public AbstractModel
                {
                public:
                    AudioFileInfo();
                    ~AudioFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件ID
                     * @return FileId 文件ID
                     * 
                     */
                    uint64_t GetFileId() const;

                    /**
                     * 设置文件ID
                     * @param _fileId 文件ID
                     * 
                     */
                    void SetFileId(const uint64_t& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件别名
                     * @return CustomFileName 文件别名
                     * 
                     */
                    std::string GetCustomFileName() const;

                    /**
                     * 设置文件别名
                     * @param _customFileName 文件别名
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
                     * 获取文件名
                     * @return AudioFileName 文件名
                     * 
                     */
                    std::string GetAudioFileName() const;

                    /**
                     * 设置文件名
                     * @param _audioFileName 文件名
                     * 
                     */
                    void SetAudioFileName(const std::string& _audioFileName);

                    /**
                     * 判断参数 AudioFileName 是否已赋值
                     * @return AudioFileName 是否已赋值
                     * 
                     */
                    bool AudioFileNameHasBeenSet() const;

                    /**
                     * 获取审核状态，0-未审核，1-审核通过，2-审核拒绝
                     * @return Status 审核状态，0-未审核，1-审核通过，2-审核拒绝
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置审核状态，0-未审核，1-审核通过，2-审核拒绝
                     * @param _status 审核状态，0-未审核，1-审核通过，2-审核拒绝
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 文件ID
                     */
                    uint64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件别名
                     */
                    std::string m_customFileName;
                    bool m_customFileNameHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_audioFileName;
                    bool m_audioFileNameHasBeenSet;

                    /**
                     * 审核状态，0-未审核，1-审核通过，2-审核拒绝
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AUDIOFILEINFO_H_
