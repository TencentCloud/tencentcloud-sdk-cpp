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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * java内存马事件信息
                */
                class JavaMemShellInfo : public AbstractModel
                {
                public:
                    JavaMemShellInfo();
                    ~JavaMemShellInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
                     * @return Id 事件ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件ID
                     * @param _id 事件ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取服务器名称
                     * @return Alias 服务器名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置服务器名称
                     * @param _alias 服务器名称
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取服务器IP
                     * @return HostIp 服务器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置服务器IP
                     * @param _hostIp 服务器IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * @return Type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * @param _type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取说明
                     * @return Description 说明
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置说明
                     * @param _description 说明
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取首次发现时间
                     * @return CreateTime 首次发现时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次发现时间
                     * @param _createTime 首次发现时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近检测时间
                     * @return RecentFoundTime 最近检测时间
                     * 
                     */
                    std::string GetRecentFoundTime() const;

                    /**
                     * 设置最近检测时间
                     * @param _recentFoundTime 最近检测时间
                     * 
                     */
                    void SetRecentFoundTime(const std::string& _recentFoundTime);

                    /**
                     * 判断参数 RecentFoundTime 是否已赋值
                     * @return RecentFoundTime 是否已赋值
                     * 
                     */
                    bool RecentFoundTimeHasBeenSet() const;

                    /**
                     * 获取处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * @return Status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * @param _status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务器quuid
                     * @return Quuid 服务器quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器quuid
                     * @param _quuid 服务器quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机额外信息
                     * @return MachineExtraInfo 主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
                     * @param _machineExtraInfo 主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取服务器uuid
                     * @return Uuid 服务器uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置服务器uuid
                     * @param _uuid 服务器uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取类名
                     * @return ClassName 类名
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置类名
                     * @param _className 类名
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取父类名
                     * @return SuperClassName 父类名
                     * 
                     */
                    std::string GetSuperClassName() const;

                    /**
                     * 设置父类名
                     * @param _superClassName 父类名
                     * 
                     */
                    void SetSuperClassName(const std::string& _superClassName);

                    /**
                     * 判断参数 SuperClassName 是否已赋值
                     * @return SuperClassName 是否已赋值
                     * 
                     */
                    bool SuperClassNameHasBeenSet() const;

                    /**
                     * 获取继承的接口
                     * @return Interfaces 继承的接口
                     * 
                     */
                    std::string GetInterfaces() const;

                    /**
                     * 设置继承的接口
                     * @param _interfaces 继承的接口
                     * 
                     */
                    void SetInterfaces(const std::string& _interfaces);

                    /**
                     * 判断参数 Interfaces 是否已赋值
                     * @return Interfaces 是否已赋值
                     * 
                     */
                    bool InterfacesHasBeenSet() const;

                    /**
                     * 获取注释
                     * @return Annotations 注释
                     * 
                     */
                    std::string GetAnnotations() const;

                    /**
                     * 设置注释
                     * @param _annotations 注释
                     * 
                     */
                    void SetAnnotations(const std::string& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取所属的类加载器
                     * @return LoaderClassName 所属的类加载器
                     * 
                     */
                    std::string GetLoaderClassName() const;

                    /**
                     * 设置所属的类加载器
                     * @param _loaderClassName 所属的类加载器
                     * 
                     */
                    void SetLoaderClassName(const std::string& _loaderClassName);

                    /**
                     * 判断参数 LoaderClassName 是否已赋值
                     * @return LoaderClassName 是否已赋值
                     * 
                     */
                    bool LoaderClassNameHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 服务器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 首次发现时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近检测时间
                     */
                    std::string m_recentFoundTime;
                    bool m_recentFoundTimeHasBeenSet;

                    /**
                     * 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务器quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 服务器uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 类名
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 父类名
                     */
                    std::string m_superClassName;
                    bool m_superClassNameHasBeenSet;

                    /**
                     * 继承的接口
                     */
                    std::string m_interfaces;
                    bool m_interfacesHasBeenSet;

                    /**
                     * 注释
                     */
                    std::string m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 所属的类加载器
                     */
                    std::string m_loaderClassName;
                    bool m_loaderClassNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLINFO_H_
