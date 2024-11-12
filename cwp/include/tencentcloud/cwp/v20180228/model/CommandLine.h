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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_COMMANDLINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_COMMANDLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 命令行内容
                */
                class CommandLine : public AbstractModel
                {
                public:
                    CommandLine();
                    ~CommandLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路径,需要base64加密
                     * @return Exe 路径,需要base64加密
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置路径,需要base64加密
                     * @param _exe 路径,需要base64加密
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取命令行,需要base64加密
                     * @return Cmdline 命令行,需要base64加密
                     * 
                     */
                    std::string GetCmdline() const;

                    /**
                     * 设置命令行,需要base64加密
                     * @param _cmdline 命令行,需要base64加密
                     * 
                     */
                    void SetCmdline(const std::string& _cmdline);

                    /**
                     * 判断参数 Cmdline 是否已赋值
                     * @return Cmdline 是否已赋值
                     * 
                     */
                    bool CmdlineHasBeenSet() const;

                private:

                    /**
                     * 路径,需要base64加密
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * 命令行,需要base64加密
                     */
                    std::string m_cmdline;
                    bool m_cmdlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_COMMANDLINE_H_
