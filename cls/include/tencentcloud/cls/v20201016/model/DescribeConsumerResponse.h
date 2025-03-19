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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>
#include <tencentcloud/cls/v20201016/model/Ckafka.h>


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
                     * 获取投递任务是否生效
                     * @return Effective 投递任务是否生效
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
                     * 获取是否投递日志的元数据信息
                     * @return NeedContent 是否投递日志的元数据信息
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
                     * 获取如果需要投递元数据信息，元数据信息的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 如果需要投递元数据信息，元数据信息的描述
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
                     * 获取CKafka的描述
                     * @return Ckafka CKafka的描述
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
                     * 获取压缩方式[0:NONE；2:SNAPPY；3:LZ4]
                     * @return Compression 压缩方式[0:NONE；2:SNAPPY；3:LZ4]
                     * 
                     */
                    int64_t GetCompression() const;

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                private:

                    /**
                     * 投递任务是否生效
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

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
                     * CKafka的描述
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * 压缩方式[0:NONE；2:SNAPPY；3:LZ4]
                     */
                    int64_t m_compression;
                    bool m_compressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONSUMERRESPONSE_H_
