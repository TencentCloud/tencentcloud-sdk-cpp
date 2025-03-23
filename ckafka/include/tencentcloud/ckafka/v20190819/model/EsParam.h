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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DropCls.h>
#include <tencentcloud/ckafka/v20190819/model/FailureParam.h>
#include <tencentcloud/ckafka/v20190819/model/EsRecordMapping.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Es类型入参
                */
                class EsParam : public AbstractModel
                {
                public:
                    EsParam();
                    ~EsParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Es实例资源Id
                     * @return Resource Es实例资源Id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Es实例资源Id
                     * @param _resource Es实例资源Id
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Es的连接port
                     * @return Port Es的连接port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Es的连接port
                     * @param _port Es的连接port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Es用户名
                     * @return UserName Es用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Es用户名
                     * @param _userName Es用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Es密码
                     * @return Password Es密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Es密码
                     * @param _password Es密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取是否为自建集群
                     * @return SelfBuilt 是否为自建集群
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置是否为自建集群
                     * @param _selfBuilt 是否为自建集群
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取实例vip
                     * @return ServiceVip 实例vip
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置实例vip
                     * @param _serviceVip 实例vip
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取实例的vpcId
                     * @return UniqVpcId 实例的vpcId
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置实例的vpcId
                     * @param _uniqVpcId 实例的vpcId
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Es是否抛弃解析失败的消息
                     * @return DropInvalidMessage Es是否抛弃解析失败的消息
                     * 
                     */
                    bool GetDropInvalidMessage() const;

                    /**
                     * 设置Es是否抛弃解析失败的消息
                     * @param _dropInvalidMessage Es是否抛弃解析失败的消息
                     * 
                     */
                    void SetDropInvalidMessage(const bool& _dropInvalidMessage);

                    /**
                     * 判断参数 DropInvalidMessage 是否已赋值
                     * @return DropInvalidMessage 是否已赋值
                     * 
                     */
                    bool DropInvalidMessageHasBeenSet() const;

                    /**
                     * 获取Es自定义index名称
                     * @return Index Es自定义index名称
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Es自定义index名称
                     * @param _index Es自定义index名称
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Es自定义日期后缀
                     * @return DateFormat Es自定义日期后缀
                     * 
                     */
                    std::string GetDateFormat() const;

                    /**
                     * 设置Es自定义日期后缀
                     * @param _dateFormat Es自定义日期后缀
                     * 
                     */
                    void SetDateFormat(const std::string& _dateFormat);

                    /**
                     * 判断参数 DateFormat 是否已赋值
                     * @return DateFormat 是否已赋值
                     * 
                     */
                    bool DateFormatHasBeenSet() const;

                    /**
                     * 获取非json格式数据的自定义key
                     * @return ContentKey 非json格式数据的自定义key
                     * 
                     */
                    std::string GetContentKey() const;

                    /**
                     * 设置非json格式数据的自定义key
                     * @param _contentKey 非json格式数据的自定义key
                     * 
                     */
                    void SetContentKey(const std::string& _contentKey);

                    /**
                     * 判断参数 ContentKey 是否已赋值
                     * @return ContentKey 是否已赋值
                     * 
                     */
                    bool ContentKeyHasBeenSet() const;

                    /**
                     * 获取Es是否抛弃非json格式的消息
                     * @return DropInvalidJsonMessage Es是否抛弃非json格式的消息
                     * 
                     */
                    bool GetDropInvalidJsonMessage() const;

                    /**
                     * 设置Es是否抛弃非json格式的消息
                     * @param _dropInvalidJsonMessage Es是否抛弃非json格式的消息
                     * 
                     */
                    void SetDropInvalidJsonMessage(const bool& _dropInvalidJsonMessage);

                    /**
                     * 判断参数 DropInvalidJsonMessage 是否已赋值
                     * @return DropInvalidJsonMessage 是否已赋值
                     * 
                     */
                    bool DropInvalidJsonMessageHasBeenSet() const;

                    /**
                     * 获取转储到Es中的文档ID取值字段名
                     * @return DocumentIdField 转储到Es中的文档ID取值字段名
                     * 
                     */
                    std::string GetDocumentIdField() const;

                    /**
                     * 设置转储到Es中的文档ID取值字段名
                     * @param _documentIdField 转储到Es中的文档ID取值字段名
                     * 
                     */
                    void SetDocumentIdField(const std::string& _documentIdField);

                    /**
                     * 判断参数 DocumentIdField 是否已赋值
                     * @return DocumentIdField 是否已赋值
                     * 
                     */
                    bool DocumentIdFieldHasBeenSet() const;

                    /**
                     * 获取Es自定义index名称的类型，STRING，JSONPATH，默认为STRING
                     * @return IndexType Es自定义index名称的类型，STRING，JSONPATH，默认为STRING
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置Es自定义index名称的类型，STRING，JSONPATH，默认为STRING
                     * @param _indexType Es自定义index名称的类型，STRING，JSONPATH，默认为STRING
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * @return DropCls 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * 
                     */
                    DropCls GetDropCls() const;

                    /**
                     * 设置当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * @param _dropCls 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * 
                     */
                    void SetDropCls(const DropCls& _dropCls);

                    /**
                     * 判断参数 DropCls 是否已赋值
                     * @return DropCls 是否已赋值
                     * 
                     */
                    bool DropClsHasBeenSet() const;

                    /**
                     * 获取转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键
                     * @return DatabasePrimaryKey 转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键
                     * 
                     */
                    std::string GetDatabasePrimaryKey() const;

                    /**
                     * 设置转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键
                     * @param _databasePrimaryKey 转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键
                     * 
                     */
                    void SetDatabasePrimaryKey(const std::string& _databasePrimaryKey);

                    /**
                     * 判断参数 DatabasePrimaryKey 是否已赋值
                     * @return DatabasePrimaryKey 是否已赋值
                     * 
                     */
                    bool DatabasePrimaryKeyHasBeenSet() const;

                    /**
                     * 获取死信队列
                     * @return DropDlq 死信队列
                     * 
                     */
                    FailureParam GetDropDlq() const;

                    /**
                     * 设置死信队列
                     * @param _dropDlq 死信队列
                     * 
                     */
                    void SetDropDlq(const FailureParam& _dropDlq);

                    /**
                     * 判断参数 DropDlq 是否已赋值
                     * @return DropDlq 是否已赋值
                     * 
                     */
                    bool DropDlqHasBeenSet() const;

                    /**
                     * 获取使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配
                     * @return RecordMappingList 使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配
                     * 
                     */
                    std::vector<EsRecordMapping> GetRecordMappingList() const;

                    /**
                     * 设置使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配
                     * @param _recordMappingList 使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配
                     * 
                     */
                    void SetRecordMappingList(const std::vector<EsRecordMapping>& _recordMappingList);

                    /**
                     * 判断参数 RecordMappingList 是否已赋值
                     * @return RecordMappingList 是否已赋值
                     * 
                     */
                    bool RecordMappingListHasBeenSet() const;

                    /**
                     * 获取消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射
                     * @return DateField 消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射
                     * 
                     */
                    std::string GetDateField() const;

                    /**
                     * 设置消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射
                     * @param _dateField 消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射
                     * 
                     */
                    void SetDateField(const std::string& _dateField);

                    /**
                     * 判断参数 DateField 是否已赋值
                     * @return DateField 是否已赋值
                     * 
                     */
                    bool DateFieldHasBeenSet() const;

                    /**
                     * 获取用来区分当前索引映射，属于新建索引还是存量索引。"EXIST_MAPPING"：从存量索引中选择；"NEW_MAPPING"：新建索引
                     * @return RecordMappingMode 用来区分当前索引映射，属于新建索引还是存量索引。"EXIST_MAPPING"：从存量索引中选择；"NEW_MAPPING"：新建索引
                     * 
                     */
                    std::string GetRecordMappingMode() const;

                    /**
                     * 设置用来区分当前索引映射，属于新建索引还是存量索引。"EXIST_MAPPING"：从存量索引中选择；"NEW_MAPPING"：新建索引
                     * @param _recordMappingMode 用来区分当前索引映射，属于新建索引还是存量索引。"EXIST_MAPPING"：从存量索引中选择；"NEW_MAPPING"：新建索引
                     * 
                     */
                    void SetRecordMappingMode(const std::string& _recordMappingMode);

                    /**
                     * 判断参数 RecordMappingMode 是否已赋值
                     * @return RecordMappingMode 是否已赋值
                     * 
                     */
                    bool RecordMappingModeHasBeenSet() const;

                private:

                    /**
                     * Es实例资源Id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Es的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Es用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Es密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * 实例vip
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * 实例的vpcId
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Es是否抛弃解析失败的消息
                     */
                    bool m_dropInvalidMessage;
                    bool m_dropInvalidMessageHasBeenSet;

                    /**
                     * Es自定义index名称
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Es自定义日期后缀
                     */
                    std::string m_dateFormat;
                    bool m_dateFormatHasBeenSet;

                    /**
                     * 非json格式数据的自定义key
                     */
                    std::string m_contentKey;
                    bool m_contentKeyHasBeenSet;

                    /**
                     * Es是否抛弃非json格式的消息
                     */
                    bool m_dropInvalidJsonMessage;
                    bool m_dropInvalidJsonMessageHasBeenSet;

                    /**
                     * 转储到Es中的文档ID取值字段名
                     */
                    std::string m_documentIdField;
                    bool m_documentIdFieldHasBeenSet;

                    /**
                     * Es自定义index名称的类型，STRING，JSONPATH，默认为STRING
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     */
                    DropCls m_dropCls;
                    bool m_dropClsHasBeenSet;

                    /**
                     * 转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键
                     */
                    std::string m_databasePrimaryKey;
                    bool m_databasePrimaryKeyHasBeenSet;

                    /**
                     * 死信队列
                     */
                    FailureParam m_dropDlq;
                    bool m_dropDlqHasBeenSet;

                    /**
                     * 使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配
                     */
                    std::vector<EsRecordMapping> m_recordMappingList;
                    bool m_recordMappingListHasBeenSet;

                    /**
                     * 消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射
                     */
                    std::string m_dateField;
                    bool m_dateFieldHasBeenSet;

                    /**
                     * 用来区分当前索引映射，属于新建索引还是存量索引。"EXIST_MAPPING"：从存量索引中选择；"NEW_MAPPING"：新建索引
                     */
                    std::string m_recordMappingMode;
                    bool m_recordMappingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESPARAM_H_
