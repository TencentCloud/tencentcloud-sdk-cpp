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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_SCFPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_SCFPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 云函数参数
                */
                class SCFParams : public AbstractModel
                {
                public:
                    SCFParams();
                    ~SCFParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchTimeout 批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBatchTimeout() const;

                    /**
                     * 设置批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchTimeout 批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchTimeout(const int64_t& _batchTimeout);

                    /**
                     * 判断参数 BatchTimeout 是否已赋值
                     * @return BatchTimeout 是否已赋值
                     * 
                     */
                    bool BatchTimeoutHasBeenSet() const;

                    /**
                     * 获取批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchEventCount 批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBatchEventCount() const;

                    /**
                     * 设置批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchEventCount 批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchEventCount(const int64_t& _batchEventCount);

                    /**
                     * 判断参数 BatchEventCount 是否已赋值
                     * @return BatchEventCount 是否已赋值
                     * 
                     */
                    bool BatchEventCountHasBeenSet() const;

                    /**
                     * 获取开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableBatchDelivery 开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableBatchDelivery() const;

                    /**
                     * 设置开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableBatchDelivery 开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableBatchDelivery(const bool& _enableBatchDelivery);

                    /**
                     * 判断参数 EnableBatchDelivery 是否已赋值
                     * @return EnableBatchDelivery 是否已赋值
                     * 
                     */
                    bool EnableBatchDeliveryHasBeenSet() const;

                private:

                    /**
                     * 批量投递最长等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_batchTimeout;
                    bool m_batchTimeoutHasBeenSet;

                    /**
                     * 批量投递最大事件条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_batchEventCount;
                    bool m_batchEventCountHasBeenSet;

                    /**
                     * 开启批量投递使能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableBatchDelivery;
                    bool m_enableBatchDeliveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_SCFPARAMS_H_
