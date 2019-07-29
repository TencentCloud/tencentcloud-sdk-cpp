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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SCANSENSITIVEINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SCANSENSITIVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 安全扫描敏感词
                */
                class ScanSensitiveInfo : public AbstractModel
                {
                public:
                    ScanSensitiveInfo();
                    ~ScanSensitiveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取敏感词
                     * @return WordList 敏感词
                     */
                    std::vector<std::string> GetWordList() const;

                    /**
                     * 设置敏感词
                     * @param WordList 敏感词
                     */
                    void SetWordList(const std::vector<std::string>& _wordList);

                    /**
                     * 判断参数 WordList 是否已赋值
                     * @return WordList 是否已赋值
                     */
                    bool WordListHasBeenSet() const;

                    /**
                     * 获取敏感词对应的文件信息
                     * @return FilePath 敏感词对应的文件信息
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置敏感词对应的文件信息
                     * @param FilePath 敏感词对应的文件信息
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取文件sha1值
                     * @return FileSha 文件sha1值
                     */
                    std::string GetFileSha() const;

                    /**
                     * 设置文件sha1值
                     * @param FileSha 文件sha1值
                     */
                    void SetFileSha(const std::string& _fileSha);

                    /**
                     * 判断参数 FileSha 是否已赋值
                     * @return FileSha 是否已赋值
                     */
                    bool FileShaHasBeenSet() const;

                private:

                    /**
                     * 敏感词
                     */
                    std::vector<std::string> m_wordList;
                    bool m_wordListHasBeenSet;

                    /**
                     * 敏感词对应的文件信息
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件sha1值
                     */
                    std::string m_fileSha;
                    bool m_fileShaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SCANSENSITIVEINFO_H_
