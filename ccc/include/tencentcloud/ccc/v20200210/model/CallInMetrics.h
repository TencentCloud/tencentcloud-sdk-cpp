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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CALLINMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CALLINMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 呼入实时指标
                */
                class CallInMetrics : public AbstractModel
                {
                public:
                    CallInMetrics();
                    ~CallInMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IVR驻留数量
                     * @return IvrCount IVR驻留数量
                     * 
                     */
                    int64_t GetIvrCount() const;

                    /**
                     * 设置IVR驻留数量
                     * @param _ivrCount IVR驻留数量
                     * 
                     */
                    void SetIvrCount(const int64_t& _ivrCount);

                    /**
                     * 判断参数 IvrCount 是否已赋值
                     * @return IvrCount 是否已赋值
                     * 
                     */
                    bool IvrCountHasBeenSet() const;

                    /**
                     * 获取排队中数量
                     * @return QueueCount 排队中数量
                     * 
                     */
                    int64_t GetQueueCount() const;

                    /**
                     * 设置排队中数量
                     * @param _queueCount 排队中数量
                     * 
                     */
                    void SetQueueCount(const int64_t& _queueCount);

                    /**
                     * 判断参数 QueueCount 是否已赋值
                     * @return QueueCount 是否已赋值
                     * 
                     */
                    bool QueueCountHasBeenSet() const;

                    /**
                     * 获取振铃中数量
                     * @return RingCount 振铃中数量
                     * 
                     */
                    int64_t GetRingCount() const;

                    /**
                     * 设置振铃中数量
                     * @param _ringCount 振铃中数量
                     * 
                     */
                    void SetRingCount(const int64_t& _ringCount);

                    /**
                     * 判断参数 RingCount 是否已赋值
                     * @return RingCount 是否已赋值
                     * 
                     */
                    bool RingCountHasBeenSet() const;

                    /**
                     * 获取接通中数量
                     * @return AcceptCount 接通中数量
                     * 
                     */
                    int64_t GetAcceptCount() const;

                    /**
                     * 设置接通中数量
                     * @param _acceptCount 接通中数量
                     * 
                     */
                    void SetAcceptCount(const int64_t& _acceptCount);

                    /**
                     * 判断参数 AcceptCount 是否已赋值
                     * @return AcceptCount 是否已赋值
                     * 
                     */
                    bool AcceptCountHasBeenSet() const;

                    /**
                     * 获取客服转接外线中数量
                     * @return TransferOuterCount 客服转接外线中数量
                     * 
                     */
                    int64_t GetTransferOuterCount() const;

                    /**
                     * 设置客服转接外线中数量
                     * @param _transferOuterCount 客服转接外线中数量
                     * 
                     */
                    void SetTransferOuterCount(const int64_t& _transferOuterCount);

                    /**
                     * 判断参数 TransferOuterCount 是否已赋值
                     * @return TransferOuterCount 是否已赋值
                     * 
                     */
                    bool TransferOuterCountHasBeenSet() const;

                    /**
                     * 获取最大排队时长
                     * @return MaxQueueDuration 最大排队时长
                     * 
                     */
                    int64_t GetMaxQueueDuration() const;

                    /**
                     * 设置最大排队时长
                     * @param _maxQueueDuration 最大排队时长
                     * 
                     */
                    void SetMaxQueueDuration(const int64_t& _maxQueueDuration);

                    /**
                     * 判断参数 MaxQueueDuration 是否已赋值
                     * @return MaxQueueDuration 是否已赋值
                     * 
                     */
                    bool MaxQueueDurationHasBeenSet() const;

                    /**
                     * 获取平均排队时长
                     * @return AvgQueueDuration 平均排队时长
                     * 
                     */
                    int64_t GetAvgQueueDuration() const;

                    /**
                     * 设置平均排队时长
                     * @param _avgQueueDuration 平均排队时长
                     * 
                     */
                    void SetAvgQueueDuration(const int64_t& _avgQueueDuration);

                    /**
                     * 判断参数 AvgQueueDuration 是否已赋值
                     * @return AvgQueueDuration 是否已赋值
                     * 
                     */
                    bool AvgQueueDurationHasBeenSet() const;

                    /**
                     * 获取最大振铃时长
                     * @return MaxRingDuration 最大振铃时长
                     * 
                     */
                    int64_t GetMaxRingDuration() const;

                    /**
                     * 设置最大振铃时长
                     * @param _maxRingDuration 最大振铃时长
                     * 
                     */
                    void SetMaxRingDuration(const int64_t& _maxRingDuration);

                    /**
                     * 判断参数 MaxRingDuration 是否已赋值
                     * @return MaxRingDuration 是否已赋值
                     * 
                     */
                    bool MaxRingDurationHasBeenSet() const;

                    /**
                     * 获取平均振铃时长
                     * @return AvgRingDuration 平均振铃时长
                     * 
                     */
                    int64_t GetAvgRingDuration() const;

                    /**
                     * 设置平均振铃时长
                     * @param _avgRingDuration 平均振铃时长
                     * 
                     */
                    void SetAvgRingDuration(const int64_t& _avgRingDuration);

                    /**
                     * 判断参数 AvgRingDuration 是否已赋值
                     * @return AvgRingDuration 是否已赋值
                     * 
                     */
                    bool AvgRingDurationHasBeenSet() const;

                    /**
                     * 获取最大接通时长
                     * @return MaxAcceptDuration 最大接通时长
                     * 
                     */
                    int64_t GetMaxAcceptDuration() const;

                    /**
                     * 设置最大接通时长
                     * @param _maxAcceptDuration 最大接通时长
                     * 
                     */
                    void SetMaxAcceptDuration(const int64_t& _maxAcceptDuration);

                    /**
                     * 判断参数 MaxAcceptDuration 是否已赋值
                     * @return MaxAcceptDuration 是否已赋值
                     * 
                     */
                    bool MaxAcceptDurationHasBeenSet() const;

                    /**
                     * 获取平均接通时长
                     * @return AvgAcceptDuration 平均接通时长
                     * 
                     */
                    int64_t GetAvgAcceptDuration() const;

                    /**
                     * 设置平均接通时长
                     * @param _avgAcceptDuration 平均接通时长
                     * 
                     */
                    void SetAvgAcceptDuration(const int64_t& _avgAcceptDuration);

                    /**
                     * 判断参数 AvgAcceptDuration 是否已赋值
                     * @return AvgAcceptDuration 是否已赋值
                     * 
                     */
                    bool AvgAcceptDurationHasBeenSet() const;

                private:

                    /**
                     * IVR驻留数量
                     */
                    int64_t m_ivrCount;
                    bool m_ivrCountHasBeenSet;

                    /**
                     * 排队中数量
                     */
                    int64_t m_queueCount;
                    bool m_queueCountHasBeenSet;

                    /**
                     * 振铃中数量
                     */
                    int64_t m_ringCount;
                    bool m_ringCountHasBeenSet;

                    /**
                     * 接通中数量
                     */
                    int64_t m_acceptCount;
                    bool m_acceptCountHasBeenSet;

                    /**
                     * 客服转接外线中数量
                     */
                    int64_t m_transferOuterCount;
                    bool m_transferOuterCountHasBeenSet;

                    /**
                     * 最大排队时长
                     */
                    int64_t m_maxQueueDuration;
                    bool m_maxQueueDurationHasBeenSet;

                    /**
                     * 平均排队时长
                     */
                    int64_t m_avgQueueDuration;
                    bool m_avgQueueDurationHasBeenSet;

                    /**
                     * 最大振铃时长
                     */
                    int64_t m_maxRingDuration;
                    bool m_maxRingDurationHasBeenSet;

                    /**
                     * 平均振铃时长
                     */
                    int64_t m_avgRingDuration;
                    bool m_avgRingDurationHasBeenSet;

                    /**
                     * 最大接通时长
                     */
                    int64_t m_maxAcceptDuration;
                    bool m_maxAcceptDurationHasBeenSet;

                    /**
                     * 平均接通时长
                     */
                    int64_t m_avgAcceptDuration;
                    bool m_avgAcceptDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CALLINMETRICS_H_
