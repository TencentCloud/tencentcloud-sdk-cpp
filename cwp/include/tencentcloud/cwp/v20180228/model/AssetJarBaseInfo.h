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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETJARBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETJARBASEINFO_H_

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
                * 资产管理jar包列表
                */
                class AssetJarBaseInfo : public AbstractModel
                {
                public:
                    AssetJarBaseInfo();
                    ~AssetJarBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param Name 名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取类型：1应用程序，2系统类库，3Web服务自带库，8:其他，
                     * @return Type 类型：1应用程序，2系统类库，3Web服务自带库，8:其他，
                     */
                    int64_t GetType() const;

                    /**
                     * 设置类型：1应用程序，2系统类库，3Web服务自带库，8:其他，
                     * @param Type 类型：1应用程序，2系统类库，3Web服务自带库，8:其他，
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否可执行：0未知，1是，2否
                     * @return Status 是否可执行：0未知，1是，2否
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否可执行：0未知，1是，2否
                     * @param Status 是否可执行：0未知，1是，2否
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param Version 版本
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取路径
                     * @return Path 路径
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
                     * @param Path 路径
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取服务器IP
                     * @return MachineIp 服务器IP
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置服务器IP
                     * @param MachineIp 服务器IP
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取服务器名称
                     * @return MachineName 服务器名称
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置服务器名称
                     * @param MachineName 服务器名称
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return OsInfo 操作系统
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置操作系统
                     * @param OsInfo 操作系统
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取Jar包ID
                     * @return Id Jar包ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Jar包ID
                     * @param Id Jar包ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Jar包Md5
                     * @return Md5 Jar包Md5
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Jar包Md5
                     * @param Md5 Jar包Md5
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param Quuid 主机Quuid
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param Uuid 主机uuid
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型：1应用程序，2系统类库，3Web服务自带库，8:其他，
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否可执行：0未知，1是，2否
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 服务器IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * Jar包ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Jar包Md5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETJARBASEINFO_H_
