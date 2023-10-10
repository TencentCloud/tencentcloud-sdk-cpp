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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULE_H_

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
                * 核心文件监控规则
                */
                class FileTamperRule : public AbstractModel
                {
                public:
                    FileTamperRule();
                    ~FileTamperRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程路径
                     * @return ProcessPath 进程路径
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置进程路径
                     * @param _processPath 进程路径
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取被访问文件路径
                     * @return Target 被访问文件路径
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置被访问文件路径
                     * @param _target 被访问文件路径
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取执行动作 跳过：skip，告警：alert
                     * @return Action 执行动作 跳过：skip，告警：alert
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作 跳过：skip，告警：alert
                     * @param _action 执行动作 跳过：skip，告警：alert
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileAction 监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileAction() const;

                    /**
                     * 设置监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileAction 监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileAction(const std::string& _fileAction);

                    /**
                     * 判断参数 FileAction 是否已赋值
                     * @return FileAction 是否已赋值
                     * 
                     */
                    bool FileActionHasBeenSet() const;

                private:

                    /**
                     * 进程路径
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 被访问文件路径
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 执行动作 跳过：skip，告警：alert
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 监控行为
<li>read 读取文件</li>
<li>write 修改文件</li>
<li>read-write 读取修改文件</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileAction;
                    bool m_fileActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPERRULE_H_
