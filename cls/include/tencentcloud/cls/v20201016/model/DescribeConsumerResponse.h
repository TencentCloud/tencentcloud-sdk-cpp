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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_

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
                * DescribeConsumer返回参数结构体
                */
                class DescribeConsumerResponse : public AbstractModel
                {
                public:
                    DescribeConsumerResponse();
                    ~DescribeConsumerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>投递任务是否生效</p>
                     * @return Effective <p>投递任务是否生效</p>
                     * 
                     */
                    bool GetEffective() const;

                    /**
                     * 判断参数 Effective 是否已赋值
                     * @return Effective 是否已赋值
                     * 
                     */
                    bool EffectiveHasBeenSet() const;

                    /**
                     * 获取<p>是否投递日志的元数据信息</p>
                     * @return NeedContent <p>是否投递日志的元数据信息</p>
                     * 
                     */
                    bool GetNeedContent() const;

                    /**
                     * 判断参数 NeedContent 是否已赋值
                     * @return NeedContent 是否已赋值
                     * 
                     */
                    bool NeedContentHasBeenSet() const;

                    /**
                     * 获取<p>如果需要投递元数据信息，元数据信息的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>如果需要投递元数据信息，元数据信息的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsumerContent GetContent() const;

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
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     * 
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取<p>压缩方式[0:NONE；2:SNAPPY；3:LZ4]</p>
                     * @return Compression <p>压缩方式[0:NONE；2:SNAPPY；3:LZ4]</p>
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * @return RoleArn <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * 
                     */
                    std::string GetRoleArn() const;

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
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取<p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code>  - <code>0</code>: 停止 - <code>1</code>: 运行中 - <code>2</code>: 异常</p>
                     * @return TaskStatus <p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code>  - <code>0</code>: 停止 - <code>1</code>: 运行中 - <code>2</code>: 异常</p>
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>高级配置</p>
                     * @return AdvancedConfig <p>高级配置</p>
                     * 
                     */
                    AdvancedConsumerConfiguration GetAdvancedConfig() const;

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
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                private:

                    /**
                     * <p>投递任务是否生效</p>
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

                    /**
                     * <p>是否投递日志的元数据信息</p>
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * <p>如果需要投递元数据信息，元数据信息的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>CKafka的描述</p>
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * <p>压缩方式[0:NONE；2:SNAPPY；3:LZ4]</p>
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

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
                     * <p>任务运行状态。支持<code>0</code>,<code>1</code>,<code>2</code>  - <code>0</code>: 停止 - <code>1</code>: 运行中 - <code>2</code>: 异常</p>
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_
