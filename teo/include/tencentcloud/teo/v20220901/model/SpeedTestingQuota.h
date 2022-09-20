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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGQUOTA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 拨测配额数据。
                */
                class SpeedTestingQuota : public AbstractModel
                {
                public:
                    SpeedTestingQuota();
                    ~SpeedTestingQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点总拨测次数。
                     * @return TotalTestRuns 站点总拨测次数。
                     */
                    int64_t GetTotalTestRuns() const;

                    /**
                     * 设置站点总拨测次数。
                     * @param TotalTestRuns 站点总拨测次数。
                     */
                    void SetTotalTestRuns(const int64_t& _totalTestRuns);

                    /**
                     * 判断参数 TotalTestRuns 是否已赋值
                     * @return TotalTestRuns 是否已赋值
                     */
                    bool TotalTestRunsHasBeenSet() const;

                    /**
                     * 获取站点剩余可用拨测次数。
                     * @return AvailableTestRuns 站点剩余可用拨测次数。
                     */
                    int64_t GetAvailableTestRuns() const;

                    /**
                     * 设置站点剩余可用拨测次数。
                     * @param AvailableTestRuns 站点剩余可用拨测次数。
                     */
                    void SetAvailableTestRuns(const int64_t& _availableTestRuns);

                    /**
                     * 判断参数 AvailableTestRuns 是否已赋值
                     * @return AvailableTestRuns 是否已赋值
                     */
                    bool AvailableTestRunsHasBeenSet() const;

                private:

                    /**
                     * 站点总拨测次数。
                     */
                    int64_t m_totalTestRuns;
                    bool m_totalTestRunsHasBeenSet;

                    /**
                     * 站点剩余可用拨测次数。
                     */
                    int64_t m_availableTestRuns;
                    bool m_availableTestRunsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGQUOTA_H_
