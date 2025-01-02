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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERCOUNT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * TriggerCount描述不同类型触发器的数量
                */
                class TriggerCount : public AbstractModel
                {
                public:
                    TriggerCount();
                    ~TriggerCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cos触发器数量
                     * @return Cos Cos触发器数量
                     * 
                     */
                    int64_t GetCos() const;

                    /**
                     * 设置Cos触发器数量
                     * @param _cos Cos触发器数量
                     * 
                     */
                    void SetCos(const int64_t& _cos);

                    /**
                     * 判断参数 Cos 是否已赋值
                     * @return Cos 是否已赋值
                     * 
                     */
                    bool CosHasBeenSet() const;

                    /**
                     * 获取Timer触发器数量
                     * @return Timer Timer触发器数量
                     * 
                     */
                    int64_t GetTimer() const;

                    /**
                     * 设置Timer触发器数量
                     * @param _timer Timer触发器数量
                     * 
                     */
                    void SetTimer(const int64_t& _timer);

                    /**
                     * 判断参数 Timer 是否已赋值
                     * @return Timer 是否已赋值
                     * 
                     */
                    bool TimerHasBeenSet() const;

                    /**
                     * 获取Cmq触发器数量
                     * @return Cmq Cmq触发器数量
                     * 
                     */
                    int64_t GetCmq() const;

                    /**
                     * 设置Cmq触发器数量
                     * @param _cmq Cmq触发器数量
                     * 
                     */
                    void SetCmq(const int64_t& _cmq);

                    /**
                     * 判断参数 Cmq 是否已赋值
                     * @return Cmq 是否已赋值
                     * 
                     */
                    bool CmqHasBeenSet() const;

                    /**
                     * 获取触发器总数
                     * @return Total 触发器总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置触发器总数
                     * @param _total 触发器总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Ckafka触发器数量
                     * @return Ckafka Ckafka触发器数量
                     * 
                     */
                    int64_t GetCkafka() const;

                    /**
                     * 设置Ckafka触发器数量
                     * @param _ckafka Ckafka触发器数量
                     * 
                     */
                    void SetCkafka(const int64_t& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     * 
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取Apigw触发器数量
                     * @return Apigw Apigw触发器数量
                     * 
                     */
                    int64_t GetApigw() const;

                    /**
                     * 设置Apigw触发器数量
                     * @param _apigw Apigw触发器数量
                     * 
                     */
                    void SetApigw(const int64_t& _apigw);

                    /**
                     * 判断参数 Apigw 是否已赋值
                     * @return Apigw 是否已赋值
                     * 
                     */
                    bool ApigwHasBeenSet() const;

                    /**
                     * 获取Cls触发器数量
                     * @return Cls Cls触发器数量
                     * 
                     */
                    int64_t GetCls() const;

                    /**
                     * 设置Cls触发器数量
                     * @param _cls Cls触发器数量
                     * 
                     */
                    void SetCls(const int64_t& _cls);

                    /**
                     * 判断参数 Cls 是否已赋值
                     * @return Cls 是否已赋值
                     * 
                     */
                    bool ClsHasBeenSet() const;

                    /**
                     * 获取Clb触发器数量
                     * @return Clb Clb触发器数量
                     * 
                     */
                    int64_t GetClb() const;

                    /**
                     * 设置Clb触发器数量
                     * @param _clb Clb触发器数量
                     * 
                     */
                    void SetClb(const int64_t& _clb);

                    /**
                     * 判断参数 Clb 是否已赋值
                     * @return Clb 是否已赋值
                     * 
                     */
                    bool ClbHasBeenSet() const;

                    /**
                     * 获取Mps触发器数量
                     * @return Mps Mps触发器数量
                     * 
                     */
                    int64_t GetMps() const;

                    /**
                     * 设置Mps触发器数量
                     * @param _mps Mps触发器数量
                     * 
                     */
                    void SetMps(const int64_t& _mps);

                    /**
                     * 判断参数 Mps 是否已赋值
                     * @return Mps 是否已赋值
                     * 
                     */
                    bool MpsHasBeenSet() const;

                    /**
                     * 获取Cm触发器数量
                     * @return Cm Cm触发器数量
                     * 
                     */
                    int64_t GetCm() const;

                    /**
                     * 设置Cm触发器数量
                     * @param _cm Cm触发器数量
                     * 
                     */
                    void SetCm(const int64_t& _cm);

                    /**
                     * 判断参数 Cm 是否已赋值
                     * @return Cm 是否已赋值
                     * 
                     */
                    bool CmHasBeenSet() const;

                    /**
                     * 获取Vod触发器数量
                     * @return Vod Vod触发器数量
                     * 
                     */
                    int64_t GetVod() const;

                    /**
                     * 设置Vod触发器数量
                     * @param _vod Vod触发器数量
                     * 
                     */
                    void SetVod(const int64_t& _vod);

                    /**
                     * 判断参数 Vod 是否已赋值
                     * @return Vod 是否已赋值
                     * 
                     */
                    bool VodHasBeenSet() const;

                    /**
                     * 获取Eb触发器数量
                     * @return Eb Eb触发器数量
                     * 
                     */
                    int64_t GetEb() const;

                    /**
                     * 设置Eb触发器数量
                     * @param _eb Eb触发器数量
                     * 
                     */
                    void SetEb(const int64_t& _eb);

                    /**
                     * 判断参数 Eb 是否已赋值
                     * @return Eb 是否已赋值
                     * 
                     */
                    bool EbHasBeenSet() const;

                private:

                    /**
                     * Cos触发器数量
                     */
                    int64_t m_cos;
                    bool m_cosHasBeenSet;

                    /**
                     * Timer触发器数量
                     */
                    int64_t m_timer;
                    bool m_timerHasBeenSet;

                    /**
                     * Cmq触发器数量
                     */
                    int64_t m_cmq;
                    bool m_cmqHasBeenSet;

                    /**
                     * 触发器总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Ckafka触发器数量
                     */
                    int64_t m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * Apigw触发器数量
                     */
                    int64_t m_apigw;
                    bool m_apigwHasBeenSet;

                    /**
                     * Cls触发器数量
                     */
                    int64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * Clb触发器数量
                     */
                    int64_t m_clb;
                    bool m_clbHasBeenSet;

                    /**
                     * Mps触发器数量
                     */
                    int64_t m_mps;
                    bool m_mpsHasBeenSet;

                    /**
                     * Cm触发器数量
                     */
                    int64_t m_cm;
                    bool m_cmHasBeenSet;

                    /**
                     * Vod触发器数量
                     */
                    int64_t m_vod;
                    bool m_vodHasBeenSet;

                    /**
                     * Eb触发器数量
                     */
                    int64_t m_eb;
                    bool m_ebHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERCOUNT_H_
