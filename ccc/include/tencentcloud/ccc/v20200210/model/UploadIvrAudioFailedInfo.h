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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIOFAILEDINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIOFAILEDINFO_H_

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
                * 上传音频文件失败信息
                */
                class UploadIvrAudioFailedInfo : public AbstractModel
                {
                public:
                    UploadIvrAudioFailedInfo();
                    ~UploadIvrAudioFailedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailedMsg 失败原因
                     * 
                     */
                    std::string GetFailedMsg() const;

                    /**
                     * 设置失败原因
                     * @param _failedMsg 失败原因
                     * 
                     */
                    void SetFailedMsg(const std::string& _failedMsg);

                    /**
                     * 判断参数 FailedMsg 是否已赋值
                     * @return FailedMsg 是否已赋值
                     * 
                     */
                    bool FailedMsgHasBeenSet() const;

                private:

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failedMsg;
                    bool m_failedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIOFAILEDINFO_H_
