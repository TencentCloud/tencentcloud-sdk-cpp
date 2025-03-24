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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DISTRIBUTION_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/RackUsage.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机架用量分布
                */
                class Distribution : public AbstractModel
                {
                public:
                    Distribution();
                    ~Distribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机架编号
                     * @return RackNumber 机架编号
                     * 
                     */
                    std::string GetRackNumber() const;

                    /**
                     * 设置机架编号
                     * @param _rackNumber 机架编号
                     * 
                     */
                    void SetRackNumber(const std::string& _rackNumber);

                    /**
                     * 判断参数 RackNumber 是否已赋值
                     * @return RackNumber 是否已赋值
                     * 
                     */
                    bool RackNumberHasBeenSet() const;

                    /**
                     * 获取机架的用量分布
                     * @return RackUsageSet 机架的用量分布
                     * 
                     */
                    std::vector<RackUsage> GetRackUsageSet() const;

                    /**
                     * 设置机架的用量分布
                     * @param _rackUsageSet 机架的用量分布
                     * 
                     */
                    void SetRackUsageSet(const std::vector<RackUsage>& _rackUsageSet);

                    /**
                     * 判断参数 RackUsageSet 是否已赋值
                     * @return RackUsageSet 是否已赋值
                     * 
                     */
                    bool RackUsageSetHasBeenSet() const;

                private:

                    /**
                     * 机架编号
                     */
                    std::string m_rackNumber;
                    bool m_rackNumberHasBeenSet;

                    /**
                     * 机架的用量分布
                     */
                    std::vector<RackUsage> m_rackUsageSet;
                    bool m_rackUsageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DISTRIBUTION_H_
