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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_QPSTHRESHOLD_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_QPSTHRESHOLD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关限流插件Qps阈值
                */
                class QpsThreshold : public AbstractModel
                {
                public:
                    QpsThreshold();
                    ~QpsThreshold() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取qps阈值控制维度,包含:second、minute、hour、day、month、year
                     * @return Unit qps阈值控制维度,包含:second、minute、hour、day、month、year
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置qps阈值控制维度,包含:second、minute、hour、day、month、year
                     * @param _unit qps阈值控制维度,包含:second、minute、hour、day、month、year
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取阈值
                     * @return Max 阈值
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置阈值
                     * @param _max 阈值
                     * 
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * qps阈值控制维度,包含:second、minute、hour、day、month、year
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 阈值
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_QPSTHRESHOLD_H_
