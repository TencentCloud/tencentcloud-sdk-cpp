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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERTOPICCONFIG_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERTOPICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 源集群主题配置
                */
                class SourceClusterTopicConfig : public AbstractModel
                {
                public:
                    SourceClusterTopicConfig();
                    ~SourceClusterTopicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称，可在[DescribeMigratingTopicList](https://cloud.tencent.com/document/api/1493/118007)接口返回的[MigratingTopic](https://cloud.tencent.com/document/api/1493/96031#MigratingTopic)数据结构中获得。
                     * @return TopicName 主题名称，可在[DescribeMigratingTopicList](https://cloud.tencent.com/document/api/1493/118007)接口返回的[MigratingTopic](https://cloud.tencent.com/document/api/1493/96031#MigratingTopic)数据结构中获得。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称，可在[DescribeMigratingTopicList](https://cloud.tencent.com/document/api/1493/118007)接口返回的[MigratingTopic](https://cloud.tencent.com/document/api/1493/96031#MigratingTopic)数据结构中获得。
                     * @param _topicName 主题名称，可在[DescribeMigratingTopicList](https://cloud.tencent.com/document/api/1493/118007)接口返回的[MigratingTopic](https://cloud.tencent.com/document/api/1493/96031#MigratingTopic)数据结构中获得。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取主题类型，
5.x版本
UNSPECIFIED 未指定
NORMAL 普通消息
FIFO 顺序消息
DELAY 延迟消息
TRANSACTION 事务消息

4.x版本
Normal 普通消息
PartitionedOrder 分区顺序消息
Transaction 事务消息
DelayScheduled 延时消息

                     * @return TopicType 主题类型，
5.x版本
UNSPECIFIED 未指定
NORMAL 普通消息
FIFO 顺序消息
DELAY 延迟消息
TRANSACTION 事务消息

4.x版本
Normal 普通消息
PartitionedOrder 分区顺序消息
Transaction 事务消息
DelayScheduled 延时消息

                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置主题类型，
5.x版本
UNSPECIFIED 未指定
NORMAL 普通消息
FIFO 顺序消息
DELAY 延迟消息
TRANSACTION 事务消息

4.x版本
Normal 普通消息
PartitionedOrder 分区顺序消息
Transaction 事务消息
DelayScheduled 延时消息

                     * @param _topicType 主题类型，
5.x版本
UNSPECIFIED 未指定
NORMAL 普通消息
FIFO 顺序消息
DELAY 延迟消息
TRANSACTION 事务消息

4.x版本
Normal 普通消息
PartitionedOrder 分区顺序消息
Transaction 事务消息
DelayScheduled 延时消息

                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取队列数
                     * @return QueueNum 队列数
                     * 
                     */
                    int64_t GetQueueNum() const;

                    /**
                     * 设置队列数
                     * @param _queueNum 队列数
                     * 
                     */
                    void SetQueueNum(const int64_t& _queueNum);

                    /**
                     * 判断参数 QueueNum 是否已赋值
                     * @return QueueNum 是否已赋值
                     * 
                     */
                    bool QueueNumHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否已导入，作为入参时无效
                     * @return Imported 是否已导入，作为入参时无效
                     * 
                     */
                    bool GetImported() const;

                    /**
                     * 设置是否已导入，作为入参时无效
                     * @param _imported 是否已导入，作为入参时无效
                     * 
                     */
                    void SetImported(const bool& _imported);

                    /**
                     * 判断参数 Imported 是否已赋值
                     * @return Imported 是否已赋值
                     * 
                     */
                    bool ImportedHasBeenSet() const;

                    /**
                     * 获取命名空间，仅4.x集群有效
                     * @return Namespace 命名空间，仅4.x集群有效
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，仅4.x集群有效
                     * @param _namespace 命名空间，仅4.x集群有效
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取导入状态，
Unknown 未知，
AlreadyExists 已存在，
Success 成功，
Failure 失败

仅作为出参可用
                     * @return ImportStatus 导入状态，
Unknown 未知，
AlreadyExists 已存在，
Success 成功，
Failure 失败

仅作为出参可用
                     * 
                     */
                    std::string GetImportStatus() const;

                    /**
                     * 设置导入状态，
Unknown 未知，
AlreadyExists 已存在，
Success 成功，
Failure 失败

仅作为出参可用
                     * @param _importStatus 导入状态，
Unknown 未知，
AlreadyExists 已存在，
Success 成功，
Failure 失败

仅作为出参可用
                     * 
                     */
                    void SetImportStatus(const std::string& _importStatus);

                    /**
                     * 判断参数 ImportStatus 是否已赋值
                     * @return ImportStatus 是否已赋值
                     * 
                     */
                    bool ImportStatusHasBeenSet() const;

                    /**
                     * 获取4.x的命名空间，出参使用
                     * @return NamespaceV4 4.x的命名空间，出参使用
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置4.x的命名空间，出参使用
                     * @param _namespaceV4 4.x的命名空间，出参使用
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取4.x的主题名，出参使用
                     * @return TopicNameV4 4.x的主题名，出参使用
                     * 
                     */
                    std::string GetTopicNameV4() const;

                    /**
                     * 设置4.x的主题名，出参使用
                     * @param _topicNameV4 4.x的主题名，出参使用
                     * 
                     */
                    void SetTopicNameV4(const std::string& _topicNameV4);

                    /**
                     * 判断参数 TopicNameV4 是否已赋值
                     * @return TopicNameV4 是否已赋值
                     * 
                     */
                    bool TopicNameV4HasBeenSet() const;

                    /**
                     * 获取4.x的完整命名空间，出参使用
                     * @return FullNamespaceV4 4.x的完整命名空间，出参使用
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置4.x的完整命名空间，出参使用
                     * @param _fullNamespaceV4 4.x的完整命名空间，出参使用
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                private:

                    /**
                     * 主题名称，可在[DescribeMigratingTopicList](https://cloud.tencent.com/document/api/1493/118007)接口返回的[MigratingTopic](https://cloud.tencent.com/document/api/1493/96031#MigratingTopic)数据结构中获得。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题类型，
5.x版本
UNSPECIFIED 未指定
NORMAL 普通消息
FIFO 顺序消息
DELAY 延迟消息
TRANSACTION 事务消息

4.x版本
Normal 普通消息
PartitionedOrder 分区顺序消息
Transaction 事务消息
DelayScheduled 延时消息

                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * 队列数
                     */
                    int64_t m_queueNum;
                    bool m_queueNumHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否已导入，作为入参时无效
                     */
                    bool m_imported;
                    bool m_importedHasBeenSet;

                    /**
                     * 命名空间，仅4.x集群有效
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 导入状态，
Unknown 未知，
AlreadyExists 已存在，
Success 成功，
Failure 失败

仅作为出参可用
                     */
                    std::string m_importStatus;
                    bool m_importStatusHasBeenSet;

                    /**
                     * 4.x的命名空间，出参使用
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * 4.x的主题名，出参使用
                     */
                    std::string m_topicNameV4;
                    bool m_topicNameV4HasBeenSet;

                    /**
                     * 4.x的完整命名空间，出参使用
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_SOURCECLUSTERTOPICCONFIG_H_
