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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_DESCRIBEVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_DESCRIBEVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * DescribeVideoTask请求参数结构体
                */
                class DescribeVideoTaskRequest : public AbstractModel
                {
                public:
                    DescribeVideoTaskRequest();
                    ~DescribeVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的视频审核的任务ID
                     * @return VodTaskId 需要查询的视频审核的任务ID
                     * 
                     */
                    std::string GetVodTaskId() const;

                    /**
                     * 设置需要查询的视频审核的任务ID
                     * @param _vodTaskId 需要查询的视频审核的任务ID
                     * 
                     */
                    void SetVodTaskId(const std::string& _vodTaskId);

                    /**
                     * 判断参数 VodTaskId 是否已赋值
                     * @return VodTaskId 是否已赋值
                     * 
                     */
                    bool VodTaskIdHasBeenSet() const;

                private:

                    /**
                     * 需要查询的视频审核的任务ID
                     */
                    std::string m_vodTaskId;
                    bool m_vodTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_DESCRIBEVIDEOTASKREQUEST_H_
