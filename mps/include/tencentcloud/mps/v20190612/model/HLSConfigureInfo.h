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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_HLSCONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_HLSCONFIGUREINFO_H_

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
                * HLS配置参数
                */
                class HLSConfigureInfo : public AbstractModel
                {
                public:
                    HLSConfigureInfo();
                    ~HLSConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单个 TS 文件时长，单位：秒，取值范围 5-30 秒。

不填默认为 30 秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemDuration 单个 TS 文件时长，单位：秒，取值范围 5-30 秒。

不填默认为 30 秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetItemDuration() const;

                    /**
                     * 设置单个 TS 文件时长，单位：秒，取值范围 5-30 秒。

不填默认为 30 秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemDuration 单个 TS 文件时长，单位：秒，取值范围 5-30 秒。

不填默认为 30 秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemDuration(const int64_t& _itemDuration);

                    /**
                     * 判断参数 ItemDuration 是否已赋值
                     * @return ItemDuration 是否已赋值
                     * 
                     */
                    bool ItemDurationHasBeenSet() const;

                    /**
                     * 获取录制周期，单位：秒，取值范围 10 分钟到  12 小时。

不填默认为 10分钟（3600 秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interval 录制周期，单位：秒，取值范围 10 分钟到  12 小时。

不填默认为 10分钟（3600 秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置录制周期，单位：秒，取值范围 10 分钟到  12 小时。

不填默认为 10分钟（3600 秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interval 录制周期，单位：秒，取值范围 10 分钟到  12 小时。

不填默认为 10分钟（3600 秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取续录等待时间，单位：秒。取值范围为60秒-1800秒。
不填默认为0（不启用续录）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinueTimeout 续录等待时间，单位：秒。取值范围为60秒-1800秒。
不填默认为0（不启用续录）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetContinueTimeout() const;

                    /**
                     * 设置续录等待时间，单位：秒。取值范围为60秒-1800秒。
不填默认为0（不启用续录）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continueTimeout 续录等待时间，单位：秒。取值范围为60秒-1800秒。
不填默认为0（不启用续录）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContinueTimeout(const int64_t& _continueTimeout);

                    /**
                     * 判断参数 ContinueTimeout 是否已赋值
                     * @return ContinueTimeout 是否已赋值
                     * 
                     */
                    bool ContinueTimeoutHasBeenSet() const;

                private:

                    /**
                     * 单个 TS 文件时长，单位：秒，取值范围 5-30 秒。

不填默认为 30 秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_itemDuration;
                    bool m_itemDurationHasBeenSet;

                    /**
                     * 录制周期，单位：秒，取值范围 10 分钟到  12 小时。

不填默认为 10分钟（3600 秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 续录等待时间，单位：秒。取值范围为60秒-1800秒。
不填默认为0（不启用续录）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_continueTimeout;
                    bool m_continueTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HLSCONFIGUREINFO_H_
