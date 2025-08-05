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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_AUTOSCALEDISKINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_AUTOSCALEDISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * cvm 自动扩盘参数
                */
                class AutoScaleDiskInfo : public AbstractModel
                {
                public:
                    AutoScaleDiskInfo();
                    ~AutoScaleDiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型 hotData,warmData
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 节点类型 hotData,warmData
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型 hotData,warmData
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 节点类型 hotData,warmData
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取0:百分比扩容;1:绝对值扩容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleType 0:百分比扩容;1:绝对值扩容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScaleType() const;

                    /**
                     * 设置0:百分比扩容;1:绝对值扩容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleType 0:百分比扩容;1:绝对值扩容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleType(const uint64_t& _scaleType);

                    /**
                     * 判断参数 ScaleType 是否已赋值
                     * @return ScaleType 是否已赋值
                     * 
                     */
                    bool ScaleTypeHasBeenSet() const;

                    /**
                     * 获取触发阈值,单位%,例如80%
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 触发阈值,单位%,例如80%
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置触发阈值,单位%,例如80%
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threshold 触发阈值,单位%,例如80%
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取触发持续时间,单位分钟,例如60
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 触发持续时间,单位分钟,例如60
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置触发持续时间,单位分钟,例如60
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 触发持续时间,单位分钟,例如60
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取每次扩容比例,单位%,例如20%
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PercentSize 每次扩容比例,单位%,例如20%
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPercentSize() const;

                    /**
                     * 设置每次扩容比例,单位%,例如20%
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percentSize 每次扩容比例,单位%,例如20%
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPercentSize(const uint64_t& _percentSize);

                    /**
                     * 判断参数 PercentSize 是否已赋值
                     * @return PercentSize 是否已赋值
                     * 
                     */
                    bool PercentSizeHasBeenSet() const;

                    /**
                     * 获取绝对值扩容,单位GB,例如100GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixSize 绝对值扩容,单位GB,例如100GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFixSize() const;

                    /**
                     * 设置绝对值扩容,单位GB,例如100GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixSize 绝对值扩容,单位GB,例如100GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixSize(const uint64_t& _fixSize);

                    /**
                     * 判断参数 FixSize 是否已赋值
                     * @return FixSize 是否已赋值
                     * 
                     */
                    bool FixSizeHasBeenSet() const;

                    /**
                     * 获取扩容上限,单位GB,例如500GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxSize 扩容上限,单位GB,例如500GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置扩容上限,单位GB,例如500GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxSize 扩容上限,单位GB,例如500GB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * 节点类型 hotData,warmData
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 0:百分比扩容;1:绝对值扩容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scaleType;
                    bool m_scaleTypeHasBeenSet;

                    /**
                     * 触发阈值,单位%,例如80%
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 触发持续时间,单位分钟,例如60
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 每次扩容比例,单位%,例如20%
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_percentSize;
                    bool m_percentSizeHasBeenSet;

                    /**
                     * 绝对值扩容,单位GB,例如100GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fixSize;
                    bool m_fixSizeHasBeenSet;

                    /**
                     * 扩容上限,单位GB,例如500GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_AUTOSCALEDISKINFO_H_
