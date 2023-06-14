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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSTRATEGYCONF_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSTRATEGYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * 分批发布策略配置
                */
                class DeployStrategyConf : public AbstractModel
                {
                public:
                    DeployStrategyConf();
                    ~DeployStrategyConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总分批数
                     * @return TotalBatchCount 总分批数
                     * 
                     */
                    int64_t GetTotalBatchCount() const;

                    /**
                     * 设置总分批数
                     * @param _totalBatchCount 总分批数
                     * 
                     */
                    void SetTotalBatchCount(const int64_t& _totalBatchCount);

                    /**
                     * 判断参数 TotalBatchCount 是否已赋值
                     * @return TotalBatchCount 是否已赋值
                     * 
                     */
                    bool TotalBatchCountHasBeenSet() const;

                    /**
                     * 获取beta分批实例数
                     * @return BetaBatchNum beta分批实例数
                     * 
                     */
                    int64_t GetBetaBatchNum() const;

                    /**
                     * 设置beta分批实例数
                     * @param _betaBatchNum beta分批实例数
                     * 
                     */
                    void SetBetaBatchNum(const int64_t& _betaBatchNum);

                    /**
                     * 判断参数 BetaBatchNum 是否已赋值
                     * @return BetaBatchNum 是否已赋值
                     * 
                     */
                    bool BetaBatchNumHasBeenSet() const;

                    /**
                     * 获取分批策略：0-全自动，1-全手动，beta分批一定是手动的，这里的策略指定的是剩余批次
                     * @return DeployStrategyType 分批策略：0-全自动，1-全手动，beta分批一定是手动的，这里的策略指定的是剩余批次
                     * 
                     */
                    int64_t GetDeployStrategyType() const;

                    /**
                     * 设置分批策略：0-全自动，1-全手动，beta分批一定是手动的，这里的策略指定的是剩余批次
                     * @param _deployStrategyType 分批策略：0-全自动，1-全手动，beta分批一定是手动的，这里的策略指定的是剩余批次
                     * 
                     */
                    void SetDeployStrategyType(const int64_t& _deployStrategyType);

                    /**
                     * 判断参数 DeployStrategyType 是否已赋值
                     * @return DeployStrategyType 是否已赋值
                     * 
                     */
                    bool DeployStrategyTypeHasBeenSet() const;

                    /**
                     * 获取每批暂停间隔
                     * @return BatchInterval 每批暂停间隔
                     * 
                     */
                    int64_t GetBatchInterval() const;

                    /**
                     * 设置每批暂停间隔
                     * @param _batchInterval 每批暂停间隔
                     * 
                     */
                    void SetBatchInterval(const int64_t& _batchInterval);

                    /**
                     * 判断参数 BatchInterval 是否已赋值
                     * @return BatchInterval 是否已赋值
                     * 
                     */
                    bool BatchIntervalHasBeenSet() const;

                private:

                    /**
                     * 总分批数
                     */
                    int64_t m_totalBatchCount;
                    bool m_totalBatchCountHasBeenSet;

                    /**
                     * beta分批实例数
                     */
                    int64_t m_betaBatchNum;
                    bool m_betaBatchNumHasBeenSet;

                    /**
                     * 分批策略：0-全自动，1-全手动，beta分批一定是手动的，这里的策略指定的是剩余批次
                     */
                    int64_t m_deployStrategyType;
                    bool m_deployStrategyTypeHasBeenSet;

                    /**
                     * 每批暂停间隔
                     */
                    int64_t m_batchInterval;
                    bool m_batchIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_DEPLOYSTRATEGYCONF_H_
