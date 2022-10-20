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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSPERSECOND_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSPERSECOND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * RPS模式的施压配置
                */
                class RequestsPerSecond : public AbstractModel
                {
                public:
                    RequestsPerSecond();
                    ~RequestsPerSecond() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大RPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRequestsPerSecond 最大RPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxRequestsPerSecond() const;

                    /**
                     * 设置最大RPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxRequestsPerSecond 最大RPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond);

                    /**
                     * 判断参数 MaxRequestsPerSecond 是否已赋值
                     * @return MaxRequestsPerSecond 是否已赋值
                     */
                    bool MaxRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取施压时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationSeconds 施压时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置施压时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DurationSeconds 施压时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     */
                    bool DurationSecondsHasBeenSet() const;

                    /**
                     * 获取deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetVirtualUsers deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTargetVirtualUsers() const;

                    /**
                     * 设置deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetVirtualUsers deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetVirtualUsers(const int64_t& _targetVirtualUsers);

                    /**
                     * 判断参数 TargetVirtualUsers 是否已赋值
                     * @return TargetVirtualUsers 是否已赋值
                     */
                    bool TargetVirtualUsersHasBeenSet() const;

                    /**
                     * 获取资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resources 资源数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetResources() const;

                    /**
                     * 设置资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Resources 资源数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResources(const int64_t& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取起始RPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartRequestsPerSecond 起始RPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStartRequestsPerSecond() const;

                    /**
                     * 设置起始RPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartRequestsPerSecond 起始RPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartRequestsPerSecond(const int64_t& _startRequestsPerSecond);

                    /**
                     * 判断参数 StartRequestsPerSecond 是否已赋值
                     * @return StartRequestsPerSecond 是否已赋值
                     */
                    bool StartRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取目标RPS，入参无效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetRequestsPerSecond 目标RPS，入参无效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTargetRequestsPerSecond() const;

                    /**
                     * 设置目标RPS，入参无效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetRequestsPerSecond 目标RPS，入参无效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetRequestsPerSecond(const int64_t& _targetRequestsPerSecond);

                    /**
                     * 判断参数 TargetRequestsPerSecond 是否已赋值
                     * @return TargetRequestsPerSecond 是否已赋值
                     */
                    bool TargetRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取优雅关停的等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GracefulStopSeconds 优雅关停的等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGracefulStopSeconds() const;

                    /**
                     * 设置优雅关停的等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GracefulStopSeconds 优雅关停的等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGracefulStopSeconds(const int64_t& _gracefulStopSeconds);

                    /**
                     * 判断参数 GracefulStopSeconds 是否已赋值
                     * @return GracefulStopSeconds 是否已赋值
                     */
                    bool GracefulStopSecondsHasBeenSet() const;

                private:

                    /**
                     * 最大RPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRequestsPerSecond;
                    bool m_maxRequestsPerSecondHasBeenSet;

                    /**
                     * 施压时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                    /**
                     * deprecated
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetVirtualUsers;
                    bool m_targetVirtualUsersHasBeenSet;

                    /**
                     * 资源数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 起始RPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startRequestsPerSecond;
                    bool m_startRequestsPerSecondHasBeenSet;

                    /**
                     * 目标RPS，入参无效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetRequestsPerSecond;
                    bool m_targetRequestsPerSecondHasBeenSet;

                    /**
                     * 优雅关停的等待时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gracefulStopSeconds;
                    bool m_gracefulStopSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSPERSECOND_H_
