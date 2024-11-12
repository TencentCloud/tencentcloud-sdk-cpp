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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGINSETTING_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGINSETTING_H_

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
                * Java内存马插件配置
                */
                class JavaMemShellPluginSetting : public AbstractModel
                {
                public:
                    JavaMemShellPluginSetting();
                    ~JavaMemShellPluginSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器quuid
                     * @return Quuid 容器quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置容器quuid
                     * @param _quuid 容器quuid
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
                     * 获取服务器名
                     * @return Alias 服务器名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置服务器名
                     * @param _alias 服务器名
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
                     * 获取服务器ip
                     * @return HostIp 服务器ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置服务器ip
                     * @param _hostIp 服务器ip
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
                     * 获取javashell插件开关 0: 关闭 1: 开启
                     * @return JavaShellStatus javashell插件开关 0: 关闭 1: 开启
                     * 
                     */
                    uint64_t GetJavaShellStatus() const;

                    /**
                     * 设置javashell插件开关 0: 关闭 1: 开启
                     * @param _javaShellStatus javashell插件开关 0: 关闭 1: 开启
                     * 
                     */
                    void SetJavaShellStatus(const uint64_t& _javaShellStatus);

                    /**
                     * 判断参数 JavaShellStatus 是否已赋值
                     * @return JavaShellStatus 是否已赋值
                     * 
                     */
                    bool JavaShellStatusHasBeenSet() const;

                    /**
                     * 获取插件是否存在异常 0: 正常 1: 异常
                     * @return Exception 插件是否存在异常 0: 正常 1: 异常
                     * 
                     */
                    uint64_t GetException() const;

                    /**
                     * 设置插件是否存在异常 0: 正常 1: 异常
                     * @param _exception 插件是否存在异常 0: 正常 1: 异常
                     * 
                     */
                    void SetException(const uint64_t& _exception);

                    /**
                     * 判断参数 Exception 是否已赋值
                     * @return Exception 是否已赋值
                     * 
                     */
                    bool ExceptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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

                private:

                    /**
                     * 容器quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 服务器名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 服务器ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * javashell插件开关 0: 关闭 1: 开启
                     */
                    uint64_t m_javaShellStatus;
                    bool m_javaShellStatusHasBeenSet;

                    /**
                     * 插件是否存在异常 0: 正常 1: 异常
                     */
                    uint64_t m_exception;
                    bool m_exceptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 服务器uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGINSETTING_H_
