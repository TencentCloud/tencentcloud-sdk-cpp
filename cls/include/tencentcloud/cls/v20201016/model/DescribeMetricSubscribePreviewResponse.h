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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMETRICSUBSCRIBEPREVIEWRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMETRICSUBSCRIBEPREVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/InstanceData.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeMetricSubscribePreview返回参数结构体
                */
                class DescribeMetricSubscribePreviewResponse : public AbstractModel
                {
                public:
                    DescribeMetricSubscribePreviewResponse();
                    ~DescribeMetricSubscribePreviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取成功数量
                     * @return SuccessCount 成功数量
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取失败数量
                     * @return FailCount 失败数量
                     * 
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取成功实例数据
                     * @return SuccessInstances 成功实例数据
                     * 
                     */
                    std::vector<InstanceData> GetSuccessInstances() const;

                    /**
                     * 判断参数 SuccessInstances 是否已赋值
                     * @return SuccessInstances 是否已赋值
                     * 
                     */
                    bool SuccessInstancesHasBeenSet() const;

                    /**
                     * 获取失败实例数据
                     * @return FailInstances 失败实例数据
                     * 
                     */
                    std::vector<InstanceData> GetFailInstances() const;

                    /**
                     * 判断参数 FailInstances 是否已赋值
                     * @return FailInstances 是否已赋值
                     * 
                     */
                    bool FailInstancesHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 成功数量
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败数量
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 成功实例数据
                     */
                    std::vector<InstanceData> m_successInstances;
                    bool m_successInstancesHasBeenSet;

                    /**
                     * 失败实例数据
                     */
                    std::vector<InstanceData> m_failInstances;
                    bool m_failInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMETRICSUBSCRIBEPREVIEWRESPONSE_H_
