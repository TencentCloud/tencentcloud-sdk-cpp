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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_EXPECTEDTHRESHOLD_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_EXPECTEDTHRESHOLD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 用户期望门限
                */
                class ExpectedThreshold : public AbstractModel
                {
                public:
                    ExpectedThreshold();
                    ~ExpectedThreshold() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取期望发起加速的时延阈值
                     * @return RTT 期望发起加速的时延阈值
                     */
                    double GetRTT() const;

                    /**
                     * 设置期望发起加速的时延阈值
                     * @param RTT 期望发起加速的时延阈值
                     */
                    void SetRTT(const double& _rTT);

                    /**
                     * 判断参数 RTT 是否已赋值
                     * @return RTT 是否已赋值
                     */
                    bool RTTHasBeenSet() const;

                    /**
                     * 获取期望发起加速的丢包率阈值
                     * @return Loss 期望发起加速的丢包率阈值
                     */
                    double GetLoss() const;

                    /**
                     * 设置期望发起加速的丢包率阈值
                     * @param Loss 期望发起加速的丢包率阈值
                     */
                    void SetLoss(const double& _loss);

                    /**
                     * 判断参数 Loss 是否已赋值
                     * @return Loss 是否已赋值
                     */
                    bool LossHasBeenSet() const;

                    /**
                     * 获取期望发起加速的抖动阈值
                     * @return Jitter 期望发起加速的抖动阈值
                     */
                    double GetJitter() const;

                    /**
                     * 设置期望发起加速的抖动阈值
                     * @param Jitter 期望发起加速的抖动阈值
                     */
                    void SetJitter(const double& _jitter);

                    /**
                     * 判断参数 Jitter 是否已赋值
                     * @return Jitter 是否已赋值
                     */
                    bool JitterHasBeenSet() const;

                private:

                    /**
                     * 期望发起加速的时延阈值
                     */
                    double m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * 期望发起加速的丢包率阈值
                     */
                    double m_loss;
                    bool m_lossHasBeenSet;

                    /**
                     * 期望发起加速的抖动阈值
                     */
                    double m_jitter;
                    bool m_jitterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_EXPECTEDTHRESHOLD_H_
