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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBPROCESSITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBPROCESSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * mongodb会话详情
                */
                class MongoDBProcessItem : public AbstractModel
                {
                public:
                    MongoDBProcessItem();
                    ~MongoDBProcessItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否内部IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsInternalIp 是否内部IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsInternalIp() const;

                    /**
                     * 设置是否内部IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isInternalIp 是否内部IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsInternalIp(const bool& _isInternalIp);

                    /**
                     * 判断参数 IsInternalIp 是否已赋值
                     * @return IsInternalIp 是否已赋值
                     * 
                     */
                    bool IsInternalIpHasBeenSet() const;

                    /**
                     * 获取语句类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 语句类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置语句类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 语句类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取语句详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Command 语句详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置语句详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _command 语句详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceNodeId 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceNodeId() const;

                    /**
                     * 设置节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceNodeId 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceNodeId(const std::string& _instanceNodeId);

                    /**
                     * 判断参数 InstanceNodeId 是否已赋值
                     * @return InstanceNodeId 是否已赋值
                     * 
                     */
                    bool InstanceNodeIdHasBeenSet() const;

                    /**
                     * 获取客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host 客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host 客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTime() const;

                    /**
                     * 设置运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const double& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取会话ID

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 会话ID

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置会话ID

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 会话ID

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取分片名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardName 分片名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardName() const;

                    /**
                     * 设置分片名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardName 分片名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardName(const std::string& _shardName);

                    /**
                     * 判断参数 ShardName 是否已赋值
                     * @return ShardName 是否已赋值
                     * 
                     */
                    bool ShardNameHasBeenSet() const;

                    /**
                     * 获取用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User 用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user 用户
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

                    /**
                     * 获取数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DB 数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dB 数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDB(const std::string& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                private:

                    /**
                     * 是否内部IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isInternalIp;
                    bool m_isInternalIpHasBeenSet;

                    /**
                     * 语句类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 语句详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceNodeId;
                    bool m_instanceNodeIdHasBeenSet;

                    /**
                     * 客户端ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 会话ID

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 分片名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardName;
                    bool m_shardNameHasBeenSet;

                    /**
                     * 用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBPROCESSITEM_H_
