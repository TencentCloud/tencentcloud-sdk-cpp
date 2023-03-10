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
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件ID
                     * @param Id 事件ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Alias 服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostIp 服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostIp 服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * @return Type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     * @param Type 内存马类型  0:Filter型 1:Listener型 2:Servlet型 3:Interceptors型 4:Agent型 5:其他
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取说明
                     * @return Description 说明
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置说明
                     * @param Description 说明
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取首次发现时间
                     * @return CreateTime 首次发现时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次发现时间
                     * @param CreateTime 首次发现时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近检测时间
                     * @return RecentFoundTime 最近检测时间
                     */
                    std::string GetRecentFoundTime() const;

                    /**
                     * 设置最近检测时间
                     * @param RecentFoundTime 最近检测时间
                     */
                    void SetRecentFoundTime(const std::string& _recentFoundTime);

                    /**
                     * 判断参数 RecentFoundTime 是否已赋值
                     * @return RecentFoundTime 是否已赋值
                     */
                    bool RecentFoundTimeHasBeenSet() const;

                    /**
                     * 获取处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * @return Status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     * @param Status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略  4 - 已手动处理
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务器quuid
                     * @return Quuid 服务器quuid
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器quuid
                     * @param Quuid 服务器quuid
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineExtraInfo 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineExtraInfo 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取服务器uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 服务器uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置服务器uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid 服务器uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 服务器IP
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 服务器uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLINFO_H_
