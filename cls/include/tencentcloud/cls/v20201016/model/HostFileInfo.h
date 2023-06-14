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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_HOSTFILEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_HOSTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 自建k8s-节点文件配置信息
                */
                class HostFileInfo : public AbstractModel
                {
                public:
                    HostFileInfo();
                    ~HostFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志文件夹
                     * @return LogPath 日志文件夹
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置日志文件夹
                     * @param _logPath 日志文件夹
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取日志文件名
                     * @return FilePattern 日志文件名
                     * 
                     */
                    std::string GetFilePattern() const;

                    /**
                     * 设置日志文件名
                     * @param _filePattern 日志文件名
                     * 
                     */
                    void SetFilePattern(const std::string& _filePattern);

                    /**
                     * 判断参数 FilePattern 是否已赋值
                     * @return FilePattern 是否已赋值
                     * 
                     */
                    bool FilePatternHasBeenSet() const;

                    /**
                     * 获取metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomLabels metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomLabels() const;

                    /**
                     * 设置metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customLabels metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomLabels(const std::vector<std::string>& _customLabels);

                    /**
                     * 判断参数 CustomLabels 是否已赋值
                     * @return CustomLabels 是否已赋值
                     * 
                     */
                    bool CustomLabelsHasBeenSet() const;

                private:

                    /**
                     * 日志文件夹
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * 日志文件名
                     */
                    std::string m_filePattern;
                    bool m_filePatternHasBeenSet;

                    /**
                     * metadata信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customLabels;
                    bool m_customLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_HOSTFILEINFO_H_
