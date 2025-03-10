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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_COMMANDDOCUMENT_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_COMMANDDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 命令执行详情。
                */
                class CommandDocument : public AbstractModel
                {
                public:
                    CommandDocument();
                    ~CommandDocument() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64 编码后的执行命令。
                     * @return Content Base64 编码后的执行命令。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64 编码后的执行命令。
                     * @param _content Base64 编码后的执行命令。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     * @return CommandType 命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     * @param _commandType 命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     * 
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     * 
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取超时时间。单位：秒。
                     * @return Timeout 超时时间。单位：秒。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置超时时间。单位：秒。
                     * @param _timeout 超时时间。单位：秒。
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取执行路径。
                     * @return WorkingDirectory 执行路径。
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置执行路径。
                     * @param _workingDirectory 执行路径。
                     * 
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     * 
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取执行用户。
                     * @return Username 执行用户。
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置执行用户。
                     * @param _username 执行用户。
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取保存输出的 COS Bucket 链接。
                     * @return OutputCOSBucketUrl 保存输出的 COS Bucket 链接。
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置保存输出的 COS Bucket 链接。
                     * @param _outputCOSBucketUrl 保存输出的 COS Bucket 链接。
                     * 
                     */
                    void SetOutputCOSBucketUrl(const std::string& _outputCOSBucketUrl);

                    /**
                     * 判断参数 OutputCOSBucketUrl 是否已赋值
                     * @return OutputCOSBucketUrl 是否已赋值
                     * 
                     */
                    bool OutputCOSBucketUrlHasBeenSet() const;

                    /**
                     * 获取保存输出的文件名称前缀。
                     * @return OutputCOSKeyPrefix 保存输出的文件名称前缀。
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置保存输出的文件名称前缀。
                     * @param _outputCOSKeyPrefix 保存输出的文件名称前缀。
                     * 
                     */
                    void SetOutputCOSKeyPrefix(const std::string& _outputCOSKeyPrefix);

                    /**
                     * 判断参数 OutputCOSKeyPrefix 是否已赋值
                     * @return OutputCOSKeyPrefix 是否已赋值
                     * 
                     */
                    bool OutputCOSKeyPrefixHasBeenSet() const;

                private:

                    /**
                     * Base64 编码后的执行命令。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 命令类型。取值为 SHELL、POWERSHELL、BAT 之一。
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * 超时时间。单位：秒。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 执行路径。
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * 执行用户。
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 保存输出的 COS Bucket 链接。
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * 保存输出的文件名称前缀。
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_COMMANDDOCUMENT_H_
