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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLSLOGSETRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLSLOGSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeClsLogSet返回参数结构体
                */
                class DescribeClsLogSetResponse : public AbstractModel
                {
                public:
                    DescribeClsLogSetResponse();
                    ~DescribeClsLogSetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集的 ID。
                     * @return LogsetId 日志集的 ID。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取健康检查日志集的 ID。
                     * @return HealthLogsetId 健康检查日志集的 ID。
                     * 
                     */
                    std::string GetHealthLogsetId() const;

                    /**
                     * 判断参数 HealthLogsetId 是否已赋值
                     * @return HealthLogsetId 是否已赋值
                     * 
                     */
                    bool HealthLogsetIdHasBeenSet() const;

                private:

                    /**
                     * 日志集的 ID。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 健康检查日志集的 ID。
                     */
                    std::string m_healthLogsetId;
                    bool m_healthLogsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLSLOGSETRESPONSE_H_
