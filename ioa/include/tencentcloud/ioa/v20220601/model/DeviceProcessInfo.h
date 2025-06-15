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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEPROCESSINFO_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEPROCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 分页的具体数据对象
                */
                class DeviceProcessInfo : public AbstractModel
                {
                public:
                    DeviceProcessInfo();
                    ~DeviceProcessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CmdLine 命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cmdLine 命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProcessId() const;

                    /**
                     * 设置进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processId 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessId(const int64_t& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User 启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user 启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * 命令行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 进程id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEPROCESSINFO_H_
