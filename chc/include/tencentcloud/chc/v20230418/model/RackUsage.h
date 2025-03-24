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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_RACKUSAGE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_RACKUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机架用量
                */
                class RackUsage : public AbstractModel
                {
                public:
                    RackUsage();
                    ~RackUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机架ID
                     * @return RackId 机架ID
                     * 
                     */
                    uint64_t GetRackId() const;

                    /**
                     * 设置机架ID
                     * @param _rackId 机架ID
                     * 
                     */
                    void SetRackId(const uint64_t& _rackId);

                    /**
                     * 判断参数 RackId 是否已赋值
                     * @return RackId 是否已赋值
                     * 
                     */
                    bool RackIdHasBeenSet() const;

                    /**
                     * 获取已使用的机位数量
                     * @return UsedNum 已使用的机位数量
                     * 
                     */
                    uint64_t GetUsedNum() const;

                    /**
                     * 设置已使用的机位数量
                     * @param _usedNum 已使用的机位数量
                     * 
                     */
                    void SetUsedNum(const uint64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取空闲机位数量
                     * @return UnusedNum 空闲机位数量
                     * 
                     */
                    uint64_t GetUnusedNum() const;

                    /**
                     * 设置空闲机位数量
                     * @param _unusedNum 空闲机位数量
                     * 
                     */
                    void SetUnusedNum(const uint64_t& _unusedNum);

                    /**
                     * 判断参数 UnusedNum 是否已赋值
                     * @return UnusedNum 是否已赋值
                     * 
                     */
                    bool UnusedNumHasBeenSet() const;

                    /**
                     * 获取机架简称
                     * @return RackShortName 机架简称
                     * 
                     */
                    std::string GetRackShortName() const;

                    /**
                     * 设置机架简称
                     * @param _rackShortName 机架简称
                     * 
                     */
                    void SetRackShortName(const std::string& _rackShortName);

                    /**
                     * 判断参数 RackShortName 是否已赋值
                     * @return RackShortName 是否已赋值
                     * 
                     */
                    bool RackShortNameHasBeenSet() const;

                    /**
                     * 获取机位总数
                     * @return TotalNum 机位总数
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置机位总数
                     * @param _totalNum 机位总数
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取机位使用率
                     * @return UsedRate 机位使用率
                     * 
                     */
                    double GetUsedRate() const;

                    /**
                     * 设置机位使用率
                     * @param _usedRate 机位使用率
                     * 
                     */
                    void SetUsedRate(const double& _usedRate);

                    /**
                     * 判断参数 UsedRate 是否已赋值
                     * @return UsedRate 是否已赋值
                     * 
                     */
                    bool UsedRateHasBeenSet() const;

                private:

                    /**
                     * 机架ID
                     */
                    uint64_t m_rackId;
                    bool m_rackIdHasBeenSet;

                    /**
                     * 已使用的机位数量
                     */
                    uint64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * 空闲机位数量
                     */
                    uint64_t m_unusedNum;
                    bool m_unusedNumHasBeenSet;

                    /**
                     * 机架简称
                     */
                    std::string m_rackShortName;
                    bool m_rackShortNameHasBeenSet;

                    /**
                     * 机位总数
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 机位使用率
                     */
                    double m_usedRate;
                    bool m_usedRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_RACKUSAGE_H_
