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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>
#include <tencentcloud/cls/v20201016/model/Ckafka.h>
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
                * CreateConsumer请求参数结构体
                */
                class CreateConsumerRequest : public AbstractModel
                {
                public:
                    CreateConsumerRequest();
                    ~CreateConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递任务绑定的日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @return TopicId 投递任务绑定的日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置投递任务绑定的日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @param _topicId 投递任务绑定的日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
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
                     * 获取是否投递日志的元数据信息，默认为 true。
当NeedContent为true时：字段Content有效。
当NeedContent为false时：字段Content无效。
                     * @return NeedContent 是否投递日志的元数据信息，默认为 true。
当NeedContent为true时：字段Content有效。
当NeedContent为false时：字段Content无效。
                     * 
                     */
                    bool GetNeedContent() const;

                    /**
                     * 设置是否投递日志的元数据信息，默认为 true。
当NeedContent为true时：字段Content有效。
当NeedContent为false时：字段Content无效。
                     * @param _needContent 是否投递日志的元数据信息，默认为 true。
当NeedContent为true时：字段Content有效。
当NeedContent为false时：字段Content无效。
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
                     * @return Content 如果需要投递元数据信息，元数据信息的描述
                     * 
                     */
                    ConsumerContent GetContent() const;

                    /**
                     * 设置如果需要投递元数据信息，元数据信息的描述
                     * @param _content 如果需要投递元数据信息，元数据信息的描述
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
                     * 获取投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]
                     * @return Compression 投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]
                     * @param _compression 投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]
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
                     * 获取角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     * @return RoleArn 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     * @param _roleArn 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
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
                     * @return ExternalId 外部ID
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置外部ID
                     * @param _externalId 外部ID
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
                     * 获取高级配置项
                     * @return AdvancedConfig 高级配置项
                     * 
                     */
                    AdvancedConsumerConfiguration GetAdvancedConfig() const;

                    /**
                     * 设置高级配置项
                     * @param _advancedConfig 高级配置项
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
                     * 投递任务绑定的日志主题Id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 是否投递日志的元数据信息，默认为 true。
当NeedContent为true时：字段Content有效。
当NeedContent为false时：字段Content无效。
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * 如果需要投递元数据信息，元数据信息的描述
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * CKafka的描述
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * 投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 外部ID
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * 高级配置项
                     */
                    AdvancedConsumerConfiguration m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERREQUEST_H_
