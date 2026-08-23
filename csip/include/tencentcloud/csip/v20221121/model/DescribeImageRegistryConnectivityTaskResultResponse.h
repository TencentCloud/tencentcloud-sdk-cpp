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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEREGISTRYCONNECTIVITYTASKRESULTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEREGISTRYCONNECTIVITYTASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageRegistryConnectivityTaskResult.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeImageRegistryConnectivityTaskResult返回参数结构体
                */
                class DescribeImageRegistryConnectivityTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeImageRegistryConnectivityTaskResultResponse();
                    ~DescribeImageRegistryConnectivityTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>链接检查结果</p>
                     * @return ConnDetectResult <p>链接检查结果</p>
                     * 
                     */
                    std::vector<ImageRegistryConnectivityTaskResult> GetConnDetectResult() const;

                    /**
                     * 判断参数 ConnDetectResult 是否已赋值
                     * @return ConnDetectResult 是否已赋值
                     * 
                     */
                    bool ConnDetectResultHasBeenSet() const;

                    /**
                     * 获取<p>任务是否结束</p><p>枚举值：</p><ul><li>1： 任务已结束</li><li>0： 任务未结束</li></ul>
                     * @return Finished <p>任务是否结束</p><p>枚举值：</p><ul><li>1： 任务已结束</li><li>0： 任务未结束</li></ul>
                     * 
                     */
                    uint64_t GetFinished() const;

                    /**
                     * 判断参数 Finished 是否已赋值
                     * @return Finished 是否已赋值
                     * 
                     */
                    bool FinishedHasBeenSet() const;

                private:

                    /**
                     * <p>链接检查结果</p>
                     */
                    std::vector<ImageRegistryConnectivityTaskResult> m_connDetectResult;
                    bool m_connDetectResultHasBeenSet;

                    /**
                     * <p>任务是否结束</p><p>枚举值：</p><ul><li>1： 任务已结束</li><li>0： 任务未结束</li></ul>
                     */
                    uint64_t m_finished;
                    bool m_finishedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIMAGEREGISTRYCONNECTIVITYTASKRESULTRESPONSE_H_
