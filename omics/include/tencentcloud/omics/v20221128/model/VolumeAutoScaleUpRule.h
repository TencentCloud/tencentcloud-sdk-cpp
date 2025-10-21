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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUMEAUTOSCALEUPRULE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUMEAUTOSCALEUPRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 缓存卷自动扩容策略
                */
                class VolumeAutoScaleUpRule : public AbstractModel
                {
                public:
                    VolumeAutoScaleUpRule();
                    ~VolumeAutoScaleUpRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动扩容策略开启，关闭
示例值：open,close
                     * @return Status 自动扩容策略开启，关闭
示例值：open,close
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置自动扩容策略开启，关闭
示例值：open,close
                     * @param _status 自动扩容策略开启，关闭
示例值：open,close
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群用量占比，到达这个值后开始扩容,范围[10-90]
                     * @return ScaleThreshold 集群用量占比，到达这个值后开始扩容,范围[10-90]
                     * 
                     */
                    int64_t GetScaleThreshold() const;

                    /**
                     * 设置集群用量占比，到达这个值后开始扩容,范围[10-90]
                     * @param _scaleThreshold 集群用量占比，到达这个值后开始扩容,范围[10-90]
                     * 
                     */
                    void SetScaleThreshold(const int64_t& _scaleThreshold);

                    /**
                     * 判断参数 ScaleThreshold 是否已赋值
                     * @return ScaleThreshold 是否已赋值
                     * 
                     */
                    bool ScaleThresholdHasBeenSet() const;

                    /**
                     * 获取扩容后使用量跟集群总量比例,范围[10-90]
                     * @return TargetThreshold 扩容后使用量跟集群总量比例,范围[10-90]
                     * 
                     */
                    int64_t GetTargetThreshold() const;

                    /**
                     * 设置扩容后使用量跟集群总量比例,范围[10-90]
                     * @param _targetThreshold 扩容后使用量跟集群总量比例,范围[10-90]
                     * 
                     */
                    void SetTargetThreshold(const int64_t& _targetThreshold);

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                private:

                    /**
                     * 自动扩容策略开启，关闭
示例值：open,close
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群用量占比，到达这个值后开始扩容,范围[10-90]
                     */
                    int64_t m_scaleThreshold;
                    bool m_scaleThresholdHasBeenSet;

                    /**
                     * 扩容后使用量跟集群总量比例,范围[10-90]
                     */
                    int64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_VOLUMEAUTOSCALEUPRULE_H_
