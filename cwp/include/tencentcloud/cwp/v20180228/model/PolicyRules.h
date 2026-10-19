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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_POLICYRULES_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_POLICYRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CommandLine.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 策略规则表达式
                */
                class PolicyRules : public AbstractModel
                {
                public:
                    PolicyRules();
                    ~PolicyRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>进程</p>
                     * @return Process <p>进程</p>
                     * 
                     */
                    CommandLine GetProcess() const;

                    /**
                     * 设置<p>进程</p>
                     * @param _process <p>进程</p>
                     * 
                     */
                    void SetProcess(const CommandLine& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取<p>父进程</p>
                     * @return PProcess <p>父进程</p>
                     * 
                     */
                    CommandLine GetPProcess() const;

                    /**
                     * 设置<p>父进程</p>
                     * @param _pProcess <p>父进程</p>
                     * 
                     */
                    void SetPProcess(const CommandLine& _pProcess);

                    /**
                     * 判断参数 PProcess 是否已赋值
                     * @return PProcess 是否已赋值
                     * 
                     */
                    bool PProcessHasBeenSet() const;

                    /**
                     * 获取<p>祖先进程</p>
                     * @return AProcess <p>祖先进程</p>
                     * 
                     */
                    CommandLine GetAProcess() const;

                    /**
                     * 设置<p>祖先进程</p>
                     * @param _aProcess <p>祖先进程</p>
                     * 
                     */
                    void SetAProcess(const CommandLine& _aProcess);

                    /**
                     * 判断参数 AProcess 是否已赋值
                     * @return AProcess 是否已赋值
                     * 
                     */
                    bool AProcessHasBeenSet() const;

                    /**
                     * 获取<p>目标文件路径（匹配类型=文件操作时有效）</p>
                     * @return FilePath <p>目标文件路径（匹配类型=文件操作时有效）</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>目标文件路径（匹配类型=文件操作时有效）</p>
                     * @param _filePath <p>目标文件路径（匹配类型=文件操作时有效）</p>
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取<p>动作列表（匹配类型=文件操作时有效，多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     * @return FileActions <p>动作列表（匹配类型=文件操作时有效，多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     * 
                     */
                    std::vector<std::string> GetFileActions() const;

                    /**
                     * 设置<p>动作列表（匹配类型=文件操作时有效，多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     * @param _fileActions <p>动作列表（匹配类型=文件操作时有效，多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     * 
                     */
                    void SetFileActions(const std::vector<std::string>& _fileActions);

                    /**
                     * 判断参数 FileActions 是否已赋值
                     * @return FileActions 是否已赋值
                     * 
                     */
                    bool FileActionsHasBeenSet() const;

                private:

                    /**
                     * <p>进程</p>
                     */
                    CommandLine m_process;
                    bool m_processHasBeenSet;

                    /**
                     * <p>父进程</p>
                     */
                    CommandLine m_pProcess;
                    bool m_pProcessHasBeenSet;

                    /**
                     * <p>祖先进程</p>
                     */
                    CommandLine m_aProcess;
                    bool m_aProcessHasBeenSet;

                    /**
                     * <p>目标文件路径（匹配类型=文件操作时有效）</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>动作列表（匹配类型=文件操作时有效，多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     */
                    std::vector<std::string> m_fileActions;
                    bool m_fileActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_POLICYRULES_H_
