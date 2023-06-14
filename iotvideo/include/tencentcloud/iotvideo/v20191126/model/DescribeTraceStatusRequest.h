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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBETRACESTATUSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBETRACESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeTraceStatus请求参数结构体
                */
                class DescribeTraceStatusRequest : public AbstractModel
                {
                public:
                    DescribeTraceStatusRequest();
                    ~DescribeTraceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备TID列表
                     * @return Tids 设备TID列表
                     * 
                     */
                    std::vector<std::string> GetTids() const;

                    /**
                     * 设置设备TID列表
                     * @param _tids 设备TID列表
                     * 
                     */
                    void SetTids(const std::vector<std::string>& _tids);

                    /**
                     * 判断参数 Tids 是否已赋值
                     * @return Tids 是否已赋值
                     * 
                     */
                    bool TidsHasBeenSet() const;

                private:

                    /**
                     * 设备TID列表
                     */
                    std::vector<std::string> m_tids;
                    bool m_tidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBETRACESTATUSREQUEST_H_
