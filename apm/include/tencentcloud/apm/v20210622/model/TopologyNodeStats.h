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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODESTATS_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODESTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 拓扑图应用节点状态
                */
                class TopologyNodeStats : public AbstractModel
                {
                public:
                    TopologyNodeStats();
                    ~TopologyNodeStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点总数
                     * @return Total 节点总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置节点总数
                     * @param _total 节点总数
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
                     * 获取健康节点数量
                     * @return Healthy 健康节点数量
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置健康节点数量
                     * @param _healthy 健康节点数量
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取警告节点数量
                     * @return Warning 警告节点数量
                     * 
                     */
                    int64_t GetWarning() const;

                    /**
                     * 设置警告节点数量
                     * @param _warning 警告节点数量
                     * 
                     */
                    void SetWarning(const int64_t& _warning);

                    /**
                     * 判断参数 Warning 是否已赋值
                     * @return Warning 是否已赋值
                     * 
                     */
                    bool WarningHasBeenSet() const;

                    /**
                     * 获取异常节点数量
                     * @return Error 异常节点数量
                     * 
                     */
                    int64_t GetError() const;

                    /**
                     * 设置异常节点数量
                     * @param _error 异常节点数量
                     * 
                     */
                    void SetError(const int64_t& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 节点总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 健康节点数量
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 警告节点数量
                     */
                    int64_t m_warning;
                    bool m_warningHasBeenSet;

                    /**
                     * 异常节点数量
                     */
                    int64_t m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODESTATS_H_
