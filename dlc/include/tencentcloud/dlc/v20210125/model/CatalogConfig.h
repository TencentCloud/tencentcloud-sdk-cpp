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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CATALOGCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CATALOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>
#include <tencentcloud/dlc/v20210125/model/ConnectionConfig.h>
#include <tencentcloud/dlc/v20210125/model/Audit.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据目录配置
                */
                class CatalogConfig : public AbstractModel
                {
                public:
                    CatalogConfig();
                    ~CatalogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据目录唯一 ID</p>
                     * @return Id <p>数据目录唯一 ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>数据目录唯一 ID</p>
                     * @param _id <p>数据目录唯一 ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>数据目录名字</p>
                     * @return Name <p>数据目录名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据目录名字</p>
                     * @param _name <p>数据目录名字</p>
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
                     * 获取<p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： LAKEHOUSE类型</li></ul>
                     * @return Type <p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： LAKEHOUSE类型</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： LAKEHOUSE类型</li></ul>
                     * @param _type <p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： LAKEHOUSE类型</li></ul>
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
                     * 获取<p>数据目录描述信息</p>
                     * @return Comment <p>数据目录描述信息</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>数据目录描述信息</p>
                     * @param _comment <p>数据目录描述信息</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>2： 连接成功</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>2： 连接成功</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>2： 连接成功</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>2： 连接成功</li></ul>
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
                     * 获取<p>数据目录属性</p>
                     * @return Properties <p>数据目录属性</p>
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>数据目录属性</p>
                     * @param _properties <p>数据目录属性</p>
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取<p>连接信息</p>
                     * @return Connection <p>连接信息</p>
                     * 
                     */
                    ConnectionConfig GetConnection() const;

                    /**
                     * 设置<p>连接信息</p>
                     * @param _connection <p>连接信息</p>
                     * 
                     */
                    void SetConnection(const ConnectionConfig& _connection);

                    /**
                     * 判断参数 Connection 是否已赋值
                     * @return Connection 是否已赋值
                     * 
                     */
                    bool ConnectionHasBeenSet() const;

                    /**
                     * 获取<p>操作人 uin</p>
                     * @return Operator <p>操作人 uin</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作人 uin</p>
                     * @param _operator <p>操作人 uin</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>连接日志</p>
                     * @return Message <p>连接日志</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>连接日志</p>
                     * @param _message <p>连接日志</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>审计信息</p>
                     * @return Audit <p>审计信息</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>审计信息</p>
                     * @param _audit <p>审计信息</p>
                     * 
                     */
                    void SetAudit(const Audit& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     * @return CreateTime <p>创建时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     * @param _createTime <p>创建时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
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
                     * 获取<p>更新时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     * @return UpdateTime <p>更新时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     * @param _updateTime <p>更新时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>数据目录唯一 ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>数据目录名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： LAKEHOUSE类型</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>数据目录描述信息</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>2： 连接成功</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据目录属性</p>
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>连接信息</p>
                     */
                    ConnectionConfig m_connection;
                    bool m_connectionHasBeenSet;

                    /**
                     * <p>操作人 uin</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>连接日志</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>审计信息</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * <p>创建时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（已废弃）</p><p>参数格式：2024-01-01 12:00:00</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CATALOGCONFIG_H_
