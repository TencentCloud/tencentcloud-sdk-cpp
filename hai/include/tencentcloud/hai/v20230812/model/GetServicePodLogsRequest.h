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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_GETSERVICEPODLOGSREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_GETSERVICEPODLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * GetServicePodLogs请求参数结构体
                */
                class GetServicePodLogsRequest : public AbstractModel
                {
                public:
                    GetServicePodLogsRequest();
                    ~GetServicePodLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务Id</p>
                     * @return ServiceId <p>服务Id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务Id</p>
                     * @param _serviceId <p>服务Id</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Pod名称</p>
                     * @return PodName <p>Pod名称</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod名称</p>
                     * @param _podName <p>Pod名称</p>
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>日志行数</p>
                     * @return TailLines <p>日志行数</p>
                     * 
                     */
                    std::string GetTailLines() const;

                    /**
                     * 设置<p>日志行数</p>
                     * @param _tailLines <p>日志行数</p>
                     * 
                     */
                    void SetTailLines(const std::string& _tailLines);

                    /**
                     * 判断参数 TailLines 是否已赋值
                     * @return TailLines 是否已赋值
                     * 
                     */
                    bool TailLinesHasBeenSet() const;

                private:

                    /**
                     * <p>服务Id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Pod名称</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>日志行数</p>
                     */
                    std::string m_tailLines;
                    bool m_tailLinesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_GETSERVICEPODLOGSREQUEST_H_
