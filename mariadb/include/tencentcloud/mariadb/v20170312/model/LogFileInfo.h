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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_LOGFILEINFO_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_LOGFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 拉取的日志信息
                */
                class LogFileInfo : public AbstractModel
                {
                public:
                    LogFileInfo();
                    ~LogFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log最后修改时间
                     * @return Mtime Log最后修改时间
                     * 
                     */
                    uint64_t GetMtime() const;

                    /**
                     * 设置Log最后修改时间
                     * @param _mtime Log最后修改时间
                     * 
                     */
                    void SetMtime(const uint64_t& _mtime);

                    /**
                     * 判断参数 Mtime 是否已赋值
                     * @return Mtime 是否已赋值
                     * 
                     */
                    bool MtimeHasBeenSet() const;

                    /**
                     * 获取文件长度
                     * @return Length 文件长度
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置文件长度
                     * @param _length 文件长度
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取下载Log时用到的统一资源标识符
                     * @return Uri 下载Log时用到的统一资源标识符
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置下载Log时用到的统一资源标识符
                     * @param _uri 下载Log时用到的统一资源标识符
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

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

                private:

                    /**
                     * Log最后修改时间
                     */
                    uint64_t m_mtime;
                    bool m_mtimeHasBeenSet;

                    /**
                     * 文件长度
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 下载Log时用到的统一资源标识符
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_LOGFILEINFO_H_
