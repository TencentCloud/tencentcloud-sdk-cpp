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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONPODSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONPODSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeApplicationPods请求参数结构体
                */
                class DescribeApplicationPodsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationPodsRequest();
                    ~DescribeApplicationPodsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvironmentId 环境id
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境id
                     * @param _environmentId 环境id
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return ApplicationId 应用id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用id
                     * @param _applicationId 应用id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取单页条数，默认值20
                     * @return Limit 单页条数，默认值20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页条数，默认值20
                     * @param _limit 单页条数，默认值20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页下标，默认值0
                     * @return Offset 分页下标，默认值0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页下标，默认值0
                     * @param _offset 分页下标，默认值0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取实例状态 
- Running 
- Pending 
- Error
                     * @return Status 实例状态 
- Running 
- Pending 
- Error
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态 
- Running 
- Pending 
- Error
                     * @param _status 实例状态 
- Running 
- Pending 
- Error
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例名字
                     * @return PodName 实例名字
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置实例名字
                     * @param _podName 实例名字
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
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 应用id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 单页条数，默认值20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页下标，默认值0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 实例状态 
- Running 
- Pending 
- Error
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例名字
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONPODSREQUEST_H_
