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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETADBINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETADBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 用户Hive-MetaDB信息
                */
                class CustomMetaDBInfo : public AbstractModel
                {
                public:
                    CustomMetaDBInfo();
                    ~CustomMetaDBInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义MetaDB的JDBC连接，示例: jdbc:mysql://10.10.10.10:3306/dbname
                     * @return MetaDataJdbcUrl 自定义MetaDB的JDBC连接，示例: jdbc:mysql://10.10.10.10:3306/dbname
                     * 
                     */
                    std::string GetMetaDataJdbcUrl() const;

                    /**
                     * 设置自定义MetaDB的JDBC连接，示例: jdbc:mysql://10.10.10.10:3306/dbname
                     * @param _metaDataJdbcUrl 自定义MetaDB的JDBC连接，示例: jdbc:mysql://10.10.10.10:3306/dbname
                     * 
                     */
                    void SetMetaDataJdbcUrl(const std::string& _metaDataJdbcUrl);

                    /**
                     * 判断参数 MetaDataJdbcUrl 是否已赋值
                     * @return MetaDataJdbcUrl 是否已赋值
                     * 
                     */
                    bool MetaDataJdbcUrlHasBeenSet() const;

                    /**
                     * 获取自定义MetaDB用户名
                     * @return MetaDataUser 自定义MetaDB用户名
                     * 
                     */
                    std::string GetMetaDataUser() const;

                    /**
                     * 设置自定义MetaDB用户名
                     * @param _metaDataUser 自定义MetaDB用户名
                     * 
                     */
                    void SetMetaDataUser(const std::string& _metaDataUser);

                    /**
                     * 判断参数 MetaDataUser 是否已赋值
                     * @return MetaDataUser 是否已赋值
                     * 
                     */
                    bool MetaDataUserHasBeenSet() const;

                    /**
                     * 获取自定义MetaDB密码
                     * @return MetaDataPass 自定义MetaDB密码
                     * 
                     */
                    std::string GetMetaDataPass() const;

                    /**
                     * 设置自定义MetaDB密码
                     * @param _metaDataPass 自定义MetaDB密码
                     * 
                     */
                    void SetMetaDataPass(const std::string& _metaDataPass);

                    /**
                     * 判断参数 MetaDataPass 是否已赋值
                     * @return MetaDataPass 是否已赋值
                     * 
                     */
                    bool MetaDataPassHasBeenSet() const;

                    /**
                     * 获取hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @return MetaType hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @param _metaType hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取EMR-MetaDB实例
                     * @return UnifyMetaInstanceId EMR-MetaDB实例
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置EMR-MetaDB实例
                     * @param _unifyMetaInstanceId EMR-MetaDB实例
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 自定义MetaDB的JDBC连接，示例: jdbc:mysql://10.10.10.10:3306/dbname
                     */
                    std::string m_metaDataJdbcUrl;
                    bool m_metaDataJdbcUrlHasBeenSet;

                    /**
                     * 自定义MetaDB用户名
                     */
                    std::string m_metaDataUser;
                    bool m_metaDataUserHasBeenSet;

                    /**
                     * 自定义MetaDB密码
                     */
                    std::string m_metaDataPass;
                    bool m_metaDataPassHasBeenSet;

                    /**
                     * hive共享元数据库类型。取值范围：
<li>EMR_DEFAULT_META：表示集群默认创建</li>
<li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li>
<li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * EMR-MetaDB实例
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMMETADBINFO_H_
