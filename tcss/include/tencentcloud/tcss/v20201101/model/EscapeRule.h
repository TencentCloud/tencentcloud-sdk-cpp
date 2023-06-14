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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器逃逸扫描策略开关信息
                */
                class EscapeRule : public AbstractModel
                {
                public:
                    EscapeRule();
                    ~EscapeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型   
ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
ESCAPE_SYSCALL:Syscall逃逸
                     * @return Type 规则类型   
ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
ESCAPE_SYSCALL:Syscall逃逸
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置规则类型   
ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
ESCAPE_SYSCALL:Syscall逃逸
                     * @param _type 规则类型   
ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
ESCAPE_SYSCALL:Syscall逃逸
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取规则名称
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     * @return Name 规则名称
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     * @param _name 规则名称
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
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
                     * 获取是否打开：false否 ，true是
                     * @return IsEnable 是否打开：false否 ，true是
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置是否打开：false否 ，true是
                     * @param _isEnable 是否打开：false否 ，true是
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取规则组别。RISK_CONTAINER：风险容器，PROCESS_PRIVILEGE：程序特权，CONTAINER_ESCAPE：容器逃逸
                     * @return Group 规则组别。RISK_CONTAINER：风险容器，PROCESS_PRIVILEGE：程序特权，CONTAINER_ESCAPE：容器逃逸
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置规则组别。RISK_CONTAINER：风险容器，PROCESS_PRIVILEGE：程序特权，CONTAINER_ESCAPE：容器逃逸
                     * @param _group 规则组别。RISK_CONTAINER：风险容器，PROCESS_PRIVILEGE：程序特权，CONTAINER_ESCAPE：容器逃逸
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                private:

                    /**
                     * 规则类型   
ESCAPE_HOST_ACESS_FILE:宿主机文件访问逃逸
   ESCAPE_MOUNT_NAMESPACE:MountNamespace逃逸
   ESCAPE_PRIVILEDGE:程序提权逃逸
   ESCAPE_PRIVILEDGE_CONTAINER_START:特权容器启动逃逸
   ESCAPE_MOUNT_SENSITIVE_PTAH:敏感路径挂载
ESCAPE_SYSCALL:Syscall逃逸
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 规则名称
宿主机文件访问逃逸、
Syscall逃逸、
MountNamespace逃逸、
程序提权逃逸、
特权容器启动逃逸、
敏感路径挂载
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否打开：false否 ，true是
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * 规则组别。RISK_CONTAINER：风险容器，PROCESS_PRIVILEGE：程序特权，CONTAINER_ESCAPE：容器逃逸
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ESCAPERULE_H_
