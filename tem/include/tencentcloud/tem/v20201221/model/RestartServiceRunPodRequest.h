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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_RESTARTSERVICERUNPODREQUEST_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_RESTARTSERVICERUNPODREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RestartServiceRunPod请求参数结构体
                */
                class RestartServiceRunPodRequest : public AbstractModel
                {
                public:
                    RestartServiceRunPodRequest();
                    ~RestartServiceRunPodRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return NamespaceId 环境id
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置环境id
                     * @param _namespaceId 环境id
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取服务名id
                     * @return ServiceId 服务名id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务名id
                     * @param _serviceId 服务名id
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
                     * 获取名字
                     * @return PodName 名字
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置名字
                     * @param _podName 名字
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
                     * 获取单页条数
                     * @return Limit 单页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页条数
                     * @param _limit 单页条数
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
                     * 获取分页下标
                     * @return Offset 分页下标
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页下标
                     * @param _offset 分页下标
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
                     * 获取pod状态
                     * @return Status pod状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置pod状态
                     * @param _status pod状态
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
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 服务名id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 单页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页下标
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * pod状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_RESTARTSERVICERUNPODREQUEST_H_
