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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Ckafka.h>
#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>
#include <tencentcloud/cls/v20201016/model/AdvancedConsumerConfiguration.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递规则
                */
                class ConsumerInfo : public AbstractModel
                {
                public:
                    ConsumerInfo();
                    ~ConsumerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递规则ID
                     * @return ConsumerId 投递规则ID
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置投递规则ID
                     * @param _consumerId 投递规则ID
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取投递任务是否生效
                     * @return Effective 投递任务是否生效
                     * 
                     */
                    bool GetEffective() const;

                    /**
                     * 设置投递任务是否生效
                     * @param _effective 投递任务是否生效
                     * 
                     */
                    void SetEffective(const bool& _effective);

                    /**
                     * 判断参数 Effective 是否已赋值
                     * @return Effective 是否已赋值
                     * 
                     */
                    bool EffectiveHasBeenSet() const;

                    /**
                     * 获取CKafka的描述
                     * @return Ckafka CKafka的描述
                     * 
                     */
                    Ckafka GetCkafka() const;

                    /**
                     * 设置CKafka的描述
                     * @param _ckafka CKafka的描述
                     * 
                     */
                    void SetCkafka(const Ckafka& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     * 
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取是否投递日志的元数据信息
                     * @return NeedContent 是否投递日志的元数据信息
                     * 
                     */
                    bool GetNeedContent() const;

                    /**
                     * 设置是否投递日志的元数据信息
                     * @param _needContent 是否投递日志的元数据信息
                     * 
                     */
                    void SetNeedContent(const bool& _needContent);

                    /**
                     * 判断参数 NeedContent 是否已赋值
                     * @return NeedContent 是否已赋值
                     * 
                     */
                    bool NeedContentHasBeenSet() const;

                    /**
                     * 获取如果需要投递元数据信息，元数据信息的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 如果需要投递元数据信息，元数据信息的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsumerContent GetContent() const;

                    /**
                     * 设置如果需要投递元数据信息，元数据信息的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 如果需要投递元数据信息，元数据信息的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const ConsumerContent& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取压缩方式[0:NONE；2:SNAPPY；3:LZ4]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 压缩方式[0:NONE；2:SNAPPY；3:LZ4]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置压缩方式[0:NONE；2:SNAPPY；3:LZ4]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compression 压缩方式[0:NONE；2:SNAPPY；3:LZ4]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompression(const int64_t& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取投递任务创建毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 投递任务创建毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置投递任务创建毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 投递任务创建毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleArn 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleArn 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取外部ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalId 外部ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置外部ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalId 外部ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取任务运行状态。支持`0`,`1`,`2` - `0`: 停止 - `1`: 运行中 - `2`: 异常	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 任务运行状态。支持`0`,`1`,`2` - `0`: 停止 - `1`: 运行中 - `2`: 异常	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置任务运行状态。支持`0`,`1`,`2` - `0`: 停止 - `1`: 运行中 - `2`: 异常	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskStatus 任务运行状态。支持`0`,`1`,`2` - `0`: 停止 - `1`: 运行中 - `2`: 异常	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取高级配置
                     * @return AdvancedConfig 高级配置
                     * 
                     */
                    AdvancedConsumerConfiguration GetAdvancedConfig() const;

                    /**
                     * 设置高级配置
                     * @param _advancedConfig 高级配置
                     * 
                     */
                    void SetAdvancedConfig(const AdvancedConsumerConfiguration& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                private:

                    /**
                     * 投递规则ID
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递任务是否生效
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

                    /**
                     * CKafka的描述
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * 是否投递日志的元数据信息
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * 如果需要投递元数据信息，元数据信息的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 压缩方式[0:NONE；2:SNAPPY；3:LZ4]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 投递任务创建毫秒时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 外部ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * 任务运行状态。支持`0`,`1`,`2` - `0`: 停止 - `1`: 运行中 - `2`: 异常	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 高级配置
                     */
                    AdvancedConsumerConfiguration m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERINFO_H_
