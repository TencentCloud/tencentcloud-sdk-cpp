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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_FILEDOWNLOADURL_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_FILEDOWNLOADURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 文件下载URL
                */
                class FileDownloadURL : public AbstractModel
                {
                public:
                    FileDownloadURL();
                    ~FileDownloadURL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载地址

                     * @return FileURL 下载地址

                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 设置下载地址

                     * @param _fileURL 下载地址

                     * 
                     */
                    void SetFileURL(const std::string& _fileURL);

                    /**
                     * 判断参数 FileURL 是否已赋值
                     * @return FileURL 是否已赋值
                     * 
                     */
                    bool FileURLHasBeenSet() const;

                private:

                    /**
                     * 下载地址

                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_FILEDOWNLOADURL_H_
