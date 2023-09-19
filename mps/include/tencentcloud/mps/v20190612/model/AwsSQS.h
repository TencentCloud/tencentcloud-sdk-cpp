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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AWSSQS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AWSSQS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Aws SQS 队列信息
                */
                class AwsSQS : public AbstractModel
                {
                public:
                    AwsSQS();
                    ~AwsSQS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SQS 队列区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SQSRegion SQS 队列区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSQSRegion() const;

                    /**
                     * 设置SQS 队列区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sQSRegion SQS 队列区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSQSRegion(const std::string& _sQSRegion);

                    /**
                     * 判断参数 SQSRegion 是否已赋值
                     * @return SQSRegion 是否已赋值
                     * 
                     */
                    bool SQSRegionHasBeenSet() const;

                    /**
                     * 获取SQS 队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SQSQueueName SQS 队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSQSQueueName() const;

                    /**
                     * 设置SQS 队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sQSQueueName SQS 队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSQSQueueName(const std::string& _sQSQueueName);

                    /**
                     * 判断参数 SQSQueueName 是否已赋值
                     * @return SQSQueueName 是否已赋值
                     * 
                     */
                    bool SQSQueueNameHasBeenSet() const;

                    /**
                     * 获取读写SQS的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3SecretId 读写SQS的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3SecretId() const;

                    /**
                     * 设置读写SQS的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3SecretId 读写SQS的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3SecretId(const std::string& _s3SecretId);

                    /**
                     * 判断参数 S3SecretId 是否已赋值
                     * @return S3SecretId 是否已赋值
                     * 
                     */
                    bool S3SecretIdHasBeenSet() const;

                    /**
                     * 获取读写SQS的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return S3SecretKey 读写SQS的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetS3SecretKey() const;

                    /**
                     * 设置读写SQS的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _s3SecretKey 读写SQS的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetS3SecretKey(const std::string& _s3SecretKey);

                    /**
                     * 判断参数 S3SecretKey 是否已赋值
                     * @return S3SecretKey 是否已赋值
                     * 
                     */
                    bool S3SecretKeyHasBeenSet() const;

                private:

                    /**
                     * SQS 队列区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sQSRegion;
                    bool m_sQSRegionHasBeenSet;

                    /**
                     * SQS 队列名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sQSQueueName;
                    bool m_sQSQueueNameHasBeenSet;

                    /**
                     * 读写SQS的秘钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3SecretId;
                    bool m_s3SecretIdHasBeenSet;

                    /**
                     * 读写SQS的秘钥key。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_s3SecretKey;
                    bool m_s3SecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AWSSQS_H_
