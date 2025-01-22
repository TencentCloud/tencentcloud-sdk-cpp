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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCATALOGCONFIG_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCATALOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tccatalog/v20241024/model/TccConnectionConfig.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * Tcc数据目录信息
                */
                class TccCatalogConfig : public AbstractModel
                {
                public:
                    TccCatalogConfig();
                    ~TccCatalogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据目录唯一id
                     * @return Id 数据目录唯一id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置数据目录唯一id
                     * @param _id 数据目录唯一id
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
                     * 获取数据目录名字
                     * @return Name 数据目录名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据目录名字
                     * @param _name 数据目录名字
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
                     * 获取数据目录类型,当前支持：TCC-HIVE
                     * @return Type 数据目录类型,当前支持：TCC-HIVE
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据目录类型,当前支持：TCC-HIVE
                     * @param _type 数据目录类型,当前支持：TCC-HIVE
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
                     * 获取描述信息
                     * @return Comment 描述信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述信息
                     * @param _comment 描述信息
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
                     * 获取状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     * @return Status 状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     * @param _status 状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
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
                     * 获取Tcc数据目录连接信息
                     * @return Connection Tcc数据目录连接信息
                     * 
                     */
                    TccConnectionConfig GetConnection() const;

                    /**
                     * 设置Tcc数据目录连接信息
                     * @param _connection Tcc数据目录连接信息
                     * 
                     */
                    void SetConnection(const TccConnectionConfig& _connection);

                    /**
                     * 判断参数 Connection 是否已赋值
                     * @return Connection 是否已赋值
                     * 
                     */
                    bool ConnectionHasBeenSet() const;

                    /**
                     * 获取操作人uin
                     * @return Operator 操作人uin
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人uin
                     * @param _operator 操作人uin
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 数据目录唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据目录名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据目录类型,当前支持：TCC-HIVE
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tcc数据目录连接信息
                     */
                    TccConnectionConfig m_connection;
                    bool m_connectionHasBeenSet;

                    /**
                     * 操作人uin
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_TCCCATALOGCONFIG_H_
