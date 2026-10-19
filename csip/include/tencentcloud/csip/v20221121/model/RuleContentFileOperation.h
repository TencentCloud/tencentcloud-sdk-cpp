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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTFILEOPERATION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTFILEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR文件操作规则（ContentType=file_operation，高危命令聚合降噪新增）
                */
                class RuleContentFileOperation : public AbstractModel
                {
                public:
                    RuleContentFileOperation();
                    ~RuleContentFileOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * @return Process <p>当前进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * 
                     */
                    RuleContentProcessInfo GetProcess() const;

                    /**
                     * 设置<p>当前进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * @param _process <p>当前进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * 
                     */
                    void SetProcess(const RuleContentProcessInfo& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取<p>父进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * @return ParentProcess <p>父进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * 
                     */
                    RuleContentProcessInfo GetParentProcess() const;

                    /**
                     * 设置<p>父进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * @param _parentProcess <p>父进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     * 
                     */
                    void SetParentProcess(const RuleContentProcessInfo& _parentProcess);

                    /**
                     * 判断参数 ParentProcess 是否已赋值
                     * @return ParentProcess 是否已赋值
                     * 
                     */
                    bool ParentProcessHasBeenSet() const;

                    /**
                     * 获取<p>目标文件路径（正则）</p>
                     * @return FilePath <p>目标文件路径（正则）</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>目标文件路径（正则）</p>
                     * @param _filePath <p>目标文件路径（正则）</p>
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
                     * 获取<p>动作列表（多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     * @return FileActions <p>动作列表（多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     * 
                     */
                    std::vector<std::string> GetFileActions() const;

                    /**
                     * 设置<p>动作列表（多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     * @param _fileActions <p>动作列表（多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
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
                     * <p>当前进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     */
                    RuleContentProcessInfo m_process;
                    bool m_processHasBeenSet;

                    /**
                     * <p>父进程命令行信息（可选，未配置时该维度不参与匹配）</p>
                     */
                    RuleContentProcessInfo m_parentProcess;
                    bool m_parentProcessHasBeenSet;

                    /**
                     * <p>目标文件路径（正则）</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>动作列表（多选为或关系）：read-读 write-写 rename-重命名 delete-删除 truncate-清空内容</p>
                     */
                    std::vector<std::string> m_fileActions;
                    bool m_fileActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTFILEOPERATION_H_
