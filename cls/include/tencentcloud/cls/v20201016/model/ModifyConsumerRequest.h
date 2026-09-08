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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_

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
                * ModifyConsumer请求参数结构体
                */
                class ModifyConsumerRequest : public AbstractModel
                {
                public:
                    ModifyConsumerRequest();
                    ~ModifyConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>投递任务绑定的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * @return TopicId <p>投递任务绑定的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>投递任务绑定的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * @param _topicId <p>投递任务绑定的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
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
                     * 获取<p>投递任务是否生效，默认不生效</p>
                     * @return Effective <p>投递任务是否生效，默认不生效</p>
                     * 
                     */
                    bool GetEffective() const;

                    /**
                     * 设置<p>投递任务是否生效，默认不生效</p>
                     * @param _effective <p>投递任务是否生效，默认不生效</p>
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
                     * 获取<p>是否投递日志的元数据信息，默认为 true。<br>当NeedContent为true时：字段Content有效。<br>当NeedContent为false时：字段Content无效。</p>
                     * @return NeedContent <p>是否投递日志的元数据信息，默认为 true。<br>当NeedContent为true时：字段Content有效。<br>当NeedContent为false时：字段Content无效。</p>
                     * 
                     */
                    bool GetNeedContent() const;

                    /**
                     * 设置<p>是否投递日志的元数据信息，默认为 true。<br>当NeedContent为true时：字段Content有效。<br>当NeedContent为false时：字段Content无效。</p>
                     * @param _needContent <p>是否投递日志的元数据信息，默认为 true。<br>当NeedContent为true时：字段Content有效。<br>当NeedContent为false时：字段Content无效。</p>
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
                     * 获取<p>如果需要投递元数据信息，元数据信息的描述</p>
                     * @return Content <p>如果需要投递元数据信息，元数据信息的描述</p>
                     * 
                     */
                    ConsumerContent GetContent() const;

                    /**
                     * 设置<p>如果需要投递元数据信息，元数据信息的描述</p>
                     * @param _content <p>如果需要投递元数据信息，元数据信息的描述</p>
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
                     * 获取<p>CKafka的描述</p>
                     * @return Ckafka <p>CKafka的描述</p>
                     * 
                     */
                    Ckafka GetCkafka() const;

                    /**
                     * 设置<p>CKafka的描述</p>
                     * @param _ckafka <p>CKafka的描述</p>
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
                     * 获取<p>投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]</p>
                     * @return Compression <p>投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]</p>
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 设置<p>投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]</p>
                     * @param _compression <p>投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]</p>
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
                     * 获取<p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * @return RoleArn <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * @param _roleArn <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
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
                     * 获取<p>外部ID</p>
                     * @return ExternalId <p>外部ID</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>外部ID</p>
                     * @param _externalId <p>外部ID</p>
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
                     * 获取<p>高级配置</p>
                     * @return AdvancedConfig <p>高级配置</p>
                     * 
                     */
                    AdvancedConsumerConfiguration GetAdvancedConfig() const;

                    /**
                     * 设置<p>高级配置</p>
                     * @param _advancedConfig <p>高级配置</p>
                     * 
                     */
                    void SetAdvancedConfig(const AdvancedConsumerConfiguration& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                    /**
                     * 获取<p>日志预过滤-数据写入 ckafka 的原始数据进行预过滤处理</p>
                     * @return DSLFilter <p>日志预过滤-数据写入 ckafka 的原始数据进行预过滤处理</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>日志预过滤-数据写入 ckafka 的原始数据进行预过滤处理</p>
                     * @param _dSLFilter <p>日志预过滤-数据写入 ckafka 的原始数据进行预过滤处理</p>
                     * 
                     */
                    void SetDSLFilter(const std::string& _dSLFilter);

                    /**
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                private:

                    /**
                     * <p>投递任务绑定的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>投递任务是否生效，默认不生效</p>
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

                    /**
                     * <p>是否投递日志的元数据信息，默认为 true。<br>当NeedContent为true时：字段Content有效。<br>当NeedContent为false时：字段Content无效。</p>
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * <p>如果需要投递元数据信息，元数据信息的描述</p>
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>CKafka的描述</p>
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * <p>投递时压缩方式，取值0，2，3。[0：NONE；2：SNAPPY；3：LZ4]</p>
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>外部ID</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * <p>高级配置</p>
                     */
                    AdvancedConsumerConfiguration m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                    /**
                     * <p>日志预过滤-数据写入 ckafka 的原始数据进行预过滤处理</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_
