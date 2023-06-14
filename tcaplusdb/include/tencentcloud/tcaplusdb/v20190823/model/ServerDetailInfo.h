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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERDETAILINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * server独占机器的详细信息
                */
                class ServerDetailInfo : public AbstractModel
                {
                public:
                    ServerDetailInfo();
                    ~ServerDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取svr唯一id
                     * @return ServerUid svr唯一id
                     * 
                     */
                    std::string GetServerUid() const;

                    /**
                     * 设置svr唯一id
                     * @param _serverUid svr唯一id
                     * 
                     */
                    void SetServerUid(const std::string& _serverUid);

                    /**
                     * 判断参数 ServerUid 是否已赋值
                     * @return ServerUid 是否已赋值
                     * 
                     */
                    bool ServerUidHasBeenSet() const;

                    /**
                     * 获取机器类型
                     * @return MachineType 机器类型
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器类型
                     * @param _machineType 机器类型
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取内存占用量
                     * @return MemoryRate 内存占用量
                     * 
                     */
                    int64_t GetMemoryRate() const;

                    /**
                     * 设置内存占用量
                     * @param _memoryRate 内存占用量
                     * 
                     */
                    void SetMemoryRate(const int64_t& _memoryRate);

                    /**
                     * 判断参数 MemoryRate 是否已赋值
                     * @return MemoryRate 是否已赋值
                     * 
                     */
                    bool MemoryRateHasBeenSet() const;

                    /**
                     * 获取磁盘占用量
                     * @return DiskRate 磁盘占用量
                     * 
                     */
                    int64_t GetDiskRate() const;

                    /**
                     * 设置磁盘占用量
                     * @param _diskRate 磁盘占用量
                     * 
                     */
                    void SetDiskRate(const int64_t& _diskRate);

                    /**
                     * 判断参数 DiskRate 是否已赋值
                     * @return DiskRate 是否已赋值
                     * 
                     */
                    bool DiskRateHasBeenSet() const;

                    /**
                     * 获取读次数
                     * @return ReadNum 读次数
                     * 
                     */
                    int64_t GetReadNum() const;

                    /**
                     * 设置读次数
                     * @param _readNum 读次数
                     * 
                     */
                    void SetReadNum(const int64_t& _readNum);

                    /**
                     * 判断参数 ReadNum 是否已赋值
                     * @return ReadNum 是否已赋值
                     * 
                     */
                    bool ReadNumHasBeenSet() const;

                    /**
                     * 获取写次数
                     * @return WriteNum 写次数
                     * 
                     */
                    int64_t GetWriteNum() const;

                    /**
                     * 设置写次数
                     * @param _writeNum 写次数
                     * 
                     */
                    void SetWriteNum(const int64_t& _writeNum);

                    /**
                     * 判断参数 WriteNum 是否已赋值
                     * @return WriteNum 是否已赋值
                     * 
                     */
                    bool WriteNumHasBeenSet() const;

                    /**
                     * 获取版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * svr唯一id
                     */
                    std::string m_serverUid;
                    bool m_serverUidHasBeenSet;

                    /**
                     * 机器类型
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 内存占用量
                     */
                    int64_t m_memoryRate;
                    bool m_memoryRateHasBeenSet;

                    /**
                     * 磁盘占用量
                     */
                    int64_t m_diskRate;
                    bool m_diskRateHasBeenSet;

                    /**
                     * 读次数
                     */
                    int64_t m_readNum;
                    bool m_readNumHasBeenSet;

                    /**
                     * 写次数
                     */
                    int64_t m_writeNum;
                    bool m_writeNumHasBeenSet;

                    /**
                     * 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SERVERDETAILINFO_H_
