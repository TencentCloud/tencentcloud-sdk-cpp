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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMERISKINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMERISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时风险信息
                */
                class RunTimeRiskInfo : public AbstractModel
                {
                public:
                    RunTimeRiskInfo();
                    ~RunTimeRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数量
                     * @return Cnt 数量
                     * 
                     */
                    uint64_t GetCnt() const;

                    /**
                     * 设置数量
                     * @param _cnt 数量
                     * 
                     */
                    void SetCnt(const uint64_t& _cnt);

                    /**
                     * 判断参数 Cnt 是否已赋值
                     * @return Cnt 是否已赋值
                     * 
                     */
                    bool CntHasBeenSet() const;

                    /**
                     * 获取风险等级：
CRITICAL: 严重
HIGH: 高
MEDIUM：中
LOW: 低
                     * @return Level 风险等级：
CRITICAL: 严重
HIGH: 高
MEDIUM：中
LOW: 低
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级：
CRITICAL: 严重
HIGH: 高
MEDIUM：中
LOW: 低
                     * @param _level 风险等级：
CRITICAL: 严重
HIGH: 高
MEDIUM：中
LOW: 低
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 数量
                     */
                    uint64_t m_cnt;
                    bool m_cntHasBeenSet;

                    /**
                     * 风险等级：
CRITICAL: 严重
HIGH: 高
MEDIUM：中
LOW: 低
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMERISKINFO_H_
