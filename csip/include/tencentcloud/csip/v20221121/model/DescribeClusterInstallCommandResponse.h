/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterInstallCommand返回参数结构体
                */
                class DescribeClusterInstallCommandResponse : public AbstractModel
                {
                public:
                    DescribeClusterInstallCommandResponse();
                    ~DescribeClusterInstallCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入命令</p>
                     * @return Command <p>接入命令</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取<p>接入文件下载地址</p>
                     * @return URL <p>接入文件下载地址</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>接入文件内容</p>
                     * @return FileContent <p>接入文件内容</p>
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * <p>接入命令</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>接入文件下载地址</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>接入文件内容</p>
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDRESPONSE_H_
