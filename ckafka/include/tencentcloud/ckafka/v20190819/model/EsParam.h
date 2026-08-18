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
                     * 获取<p>Es实例资源Id</p>
                     * @return Resource <p>Es实例资源Id</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>Es实例资源Id</p>
                     * @param _resource <p>Es实例资源Id</p>
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
                     * 获取<p>Es的连接port</p>
                     * @return Port <p>Es的连接port</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Es的连接port</p>
                     * @param _port <p>Es的连接port</p>
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
                     * 获取<p>Es用户名</p>
                     * @return UserName <p>Es用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Es用户名</p>
                     * @param _userName <p>Es用户名</p>
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
                     * 获取<p>Es密码</p>
                     * @return Password <p>Es密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Es密码</p>
                     * @param _password <p>Es密码</p>
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
                     * 获取<p>是否为自建集群</p>
                     * @return SelfBuilt <p>是否为自建集群</p>
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置<p>是否为自建集群</p>
                     * @param _selfBuilt <p>是否为自建集群</p>
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
                     * 获取<p>实例vip</p>
                     * @return ServiceVip <p>实例vip</p>
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置<p>实例vip</p>
                     * @param _serviceVip <p>实例vip</p>
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
                     * 获取<p>实例的vpcId</p>
                     * @return UniqVpcId <p>实例的vpcId</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>实例的vpcId</p>
                     * @param _uniqVpcId <p>实例的vpcId</p>
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
                     * 获取<p>Es是否抛弃解析失败的消息</p>
                     * @return DropInvalidMessage <p>Es是否抛弃解析失败的消息</p>
                     * 
                     */
                    bool GetDropInvalidMessage() const;

                    /**
                     * 设置<p>Es是否抛弃解析失败的消息</p>
                     * @param _dropInvalidMessage <p>Es是否抛弃解析失败的消息</p>
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
                     * 获取<p>Es自定义index名称</p>
                     * @return Index <p>Es自定义index名称</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>Es自定义index名称</p>
                     * @param _index <p>Es自定义index名称</p>
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
                     * 获取<p>Es自定义日期后缀</p>
                     * @return DateFormat <p>Es自定义日期后缀</p>
                     * 
                     */
                    std::string GetDateFormat() const;

                    /**
                     * 设置<p>Es自定义日期后缀</p>
                     * @param _dateFormat <p>Es自定义日期后缀</p>
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
                     * 获取<p>非json格式数据的自定义key</p>
                     * @return ContentKey <p>非json格式数据的自定义key</p>
                     * 
                     */
                    std::string GetContentKey() const;

                    /**
                     * 设置<p>非json格式数据的自定义key</p>
                     * @param _contentKey <p>非json格式数据的自定义key</p>
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
                     * 获取<p>Es是否抛弃非json格式的消息</p>
                     * @return DropInvalidJsonMessage <p>Es是否抛弃非json格式的消息</p>
                     * 
                     */
                    bool GetDropInvalidJsonMessage() const;

                    /**
                     * 设置<p>Es是否抛弃非json格式的消息</p>
                     * @param _dropInvalidJsonMessage <p>Es是否抛弃非json格式的消息</p>
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
                     * 获取<p>转储到Es中的文档ID取值字段名</p>
                     * @return DocumentIdField <p>转储到Es中的文档ID取值字段名</p>
                     * 
                     */
                    std::string GetDocumentIdField() const;

                    /**
                     * 设置<p>转储到Es中的文档ID取值字段名</p>
                     * @param _documentIdField <p>转储到Es中的文档ID取值字段名</p>
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
                     * 获取<p>Es自定义index名称的类型，STRING，JSONPATH，默认为STRING</p>
                     * @return IndexType <p>Es自定义index名称的类型，STRING，JSONPATH，默认为STRING</p>
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置<p>Es自定义index名称的类型，STRING，JSONPATH，默认为STRING</p>
                     * @param _indexType <p>Es自定义index名称的类型，STRING，JSONPATH，默认为STRING</p>
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
                     * 获取<p>当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效</p>
                     * @return DropCls <p>当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效</p>
                     * 
                     */
                    DropCls GetDropCls() const;

                    /**
                     * 设置<p>当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效</p>
                     * @param _dropCls <p>当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效</p>
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
                     * 获取<p>转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键</p>
                     * @return DatabasePrimaryKey <p>转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键</p>
                     * 
                     */
                    std::string GetDatabasePrimaryKey() const;

                    /**
                     * 设置<p>转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键</p>
                     * @param _databasePrimaryKey <p>转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键</p>
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
                     * 获取<p>死信队列</p>
                     * @return DropDlq <p>死信队列</p>
                     * 
                     */
                    FailureParam GetDropDlq() const;

                    /**
                     * 设置<p>死信队列</p>
                     * @param _dropDlq <p>死信队列</p>
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
                     * 获取<p>使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配</p>
                     * @return RecordMappingList <p>使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配</p>
                     * 
                     */
                    std::vector<EsRecordMapping> GetRecordMappingList() const;

                    /**
                     * 设置<p>使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配</p>
                     * @param _recordMappingList <p>使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配</p>
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
                     * 获取<p>消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射</p>
                     * @return DateField <p>消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射</p>
                     * 
                     */
                    std::string GetDateField() const;

                    /**
                     * 设置<p>消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射</p>
                     * @param _dateField <p>消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射</p>
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
                     * 获取<p>用来区分当前索引映射，属于新建索引还是存量索引。&quot;EXIST_MAPPING&quot;：从存量索引中选择；&quot;NEW_MAPPING&quot;：新建索引</p>
                     * @return RecordMappingMode <p>用来区分当前索引映射，属于新建索引还是存量索引。&quot;EXIST_MAPPING&quot;：从存量索引中选择；&quot;NEW_MAPPING&quot;：新建索引</p>
                     * 
                     */
                    std::string GetRecordMappingMode() const;

                    /**
                     * 设置<p>用来区分当前索引映射，属于新建索引还是存量索引。&quot;EXIST_MAPPING&quot;：从存量索引中选择；&quot;NEW_MAPPING&quot;：新建索引</p>
                     * @param _recordMappingMode <p>用来区分当前索引映射，属于新建索引还是存量索引。&quot;EXIST_MAPPING&quot;：从存量索引中选择；&quot;NEW_MAPPING&quot;：新建索引</p>
                     * 
                     */
                    void SetRecordMappingMode(const std::string& _recordMappingMode);

                    /**
                     * 判断参数 RecordMappingMode 是否已赋值
                     * @return RecordMappingMode 是否已赋值
                     * 
                     */
                    bool RecordMappingModeHasBeenSet() const;

                    /**
                     * 获取<p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * @return Protocol <p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * @param _protocol <p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * <p>Es实例资源Id</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>Es的连接port</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Es用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Es密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>是否为自建集群</p>
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * <p>实例vip</p>
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * <p>实例的vpcId</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>Es是否抛弃解析失败的消息</p>
                     */
                    bool m_dropInvalidMessage;
                    bool m_dropInvalidMessageHasBeenSet;

                    /**
                     * <p>Es自定义index名称</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>Es自定义日期后缀</p>
                     */
                    std::string m_dateFormat;
                    bool m_dateFormatHasBeenSet;

                    /**
                     * <p>非json格式数据的自定义key</p>
                     */
                    std::string m_contentKey;
                    bool m_contentKeyHasBeenSet;

                    /**
                     * <p>Es是否抛弃非json格式的消息</p>
                     */
                    bool m_dropInvalidJsonMessage;
                    bool m_dropInvalidJsonMessageHasBeenSet;

                    /**
                     * <p>转储到Es中的文档ID取值字段名</p>
                     */
                    std::string m_documentIdField;
                    bool m_documentIdFieldHasBeenSet;

                    /**
                     * <p>Es自定义index名称的类型，STRING，JSONPATH，默认为STRING</p>
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * <p>当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效</p>
                     */
                    DropCls m_dropCls;
                    bool m_dropClsHasBeenSet;

                    /**
                     * <p>转储到ES的消息为Database的binlog时，如果需要同步数据库操作，即增删改的操作到ES时填写数据库表主键</p>
                     */
                    std::string m_databasePrimaryKey;
                    bool m_databasePrimaryKeyHasBeenSet;

                    /**
                     * <p>死信队列</p>
                     */
                    FailureParam m_dropDlq;
                    bool m_dropDlqHasBeenSet;

                    /**
                     * <p>使用数据订阅格式导入 es 时，消息与 es 索引字段映射关系。不填默认为默认字段匹配</p>
                     */
                    std::vector<EsRecordMapping> m_recordMappingList;
                    bool m_recordMappingListHasBeenSet;

                    /**
                     * <p>消息要映射为 es 索引中 @timestamp 的字段，如果当前配置为空，则使用消息的时间戳进行映射</p>
                     */
                    std::string m_dateField;
                    bool m_dateFieldHasBeenSet;

                    /**
                     * <p>用来区分当前索引映射，属于新建索引还是存量索引。&quot;EXIST_MAPPING&quot;：从存量索引中选择；&quot;NEW_MAPPING&quot;：新建索引</p>
                     */
                    std::string m_recordMappingMode;
                    bool m_recordMappingModeHasBeenSet;

                    /**
                     * <p>集群版 ES 连接协议，默认http协议</p><p>枚举值：</p><ul><li>http： http协议</li><li>https： https协议</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESPARAM_H_
