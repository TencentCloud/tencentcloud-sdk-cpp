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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMATEREBUILDINDEXTASKRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMATEREBUILDINDEXTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * EstimateRebuildIndexTask返回参数结构体
                */
                class EstimateRebuildIndexTaskResponse : public AbstractModel
                {
                public:
                    EstimateRebuildIndexTaskResponse();
                    ~EstimateRebuildIndexTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预估索引重建需要时间，单位秒
                     * @return RemainTime 预估索引重建需要时间，单位秒
                     * 
                     */
                    uint64_t GetRemainTime() const;

                    /**
                     * 判断参数 RemainTime 是否已赋值
                     * @return RemainTime 是否已赋值
                     * 
                     */
                    bool RemainTimeHasBeenSet() const;

                    /**
                     * 获取预估写流量大小，单位MB
                     * @return WriteTraffic 预估写流量大小，单位MB
                     * 
                     */
                    uint64_t GetWriteTraffic() const;

                    /**
                     * 判断参数 WriteTraffic 是否已赋值
                     * @return WriteTraffic 是否已赋值
                     * 
                     */
                    bool WriteTrafficHasBeenSet() const;

                private:

                    /**
                     * 预估索引重建需要时间，单位秒
                     */
                    uint64_t m_remainTime;
                    bool m_remainTimeHasBeenSet;

                    /**
                     * 预估写流量大小，单位MB
                     */
                    uint64_t m_writeTraffic;
                    bool m_writeTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMATEREBUILDINDEXTASKRESPONSE_H_
