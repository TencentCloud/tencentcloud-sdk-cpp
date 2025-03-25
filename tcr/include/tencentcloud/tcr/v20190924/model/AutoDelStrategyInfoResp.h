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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_AUTODELSTRATEGYINFORESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_AUTODELSTRATEGYINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/AutoDelStrategyInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 获取自动删除策略
                */
                class AutoDelStrategyInfoResp : public AbstractModel
                {
                public:
                    AutoDelStrategyInfoResp();
                    ~AutoDelStrategyInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数目
                     * @return TotalCount 总数目
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数目
                     * @param _totalCount 总数目
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取自动删除策略列表
                     * @return StrategyInfo 自动删除策略列表
                     * 
                     */
                    std::vector<AutoDelStrategyInfo> GetStrategyInfo() const;

                    /**
                     * 设置自动删除策略列表
                     * @param _strategyInfo 自动删除策略列表
                     * 
                     */
                    void SetStrategyInfo(const std::vector<AutoDelStrategyInfo>& _strategyInfo);

                    /**
                     * 判断参数 StrategyInfo 是否已赋值
                     * @return StrategyInfo 是否已赋值
                     * 
                     */
                    bool StrategyInfoHasBeenSet() const;

                private:

                    /**
                     * 总数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 自动删除策略列表
                     */
                    std::vector<AutoDelStrategyInfo> m_strategyInfo;
                    bool m_strategyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_AUTODELSTRATEGYINFORESP_H_
