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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYAPPLICATIONSERVICEREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYAPPLICATIONSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/EksService.h>
#include <tencentcloud/tem/v20210701/model/ServicePortMapping.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * ModifyApplicationService请求参数结构体
                */
                class ModifyApplicationServiceRequest : public AbstractModel
                {
                public:
                    ModifyApplicationServiceRequest();
                    ~ModifyApplicationServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务id
                     * @return ApplicationId 服务id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置服务id
                     * @param _applicationId 服务id
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
                     * 获取环境ID
                     * @return EnvironmentId 环境ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
                     * @param _environmentId 环境ID
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

                    /**
                     * 获取全量访问方式设置
                     * @return Service 全量访问方式设置
                     * 
                     */
                    EksService GetService() const;

                    /**
                     * 设置全量访问方式设置
                     * @param _service 全量访问方式设置
                     * 
                     */
                    void SetService(const EksService& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取单条访问方式设置
                     * @return Data 单条访问方式设置
                     * 
                     */
                    ServicePortMapping GetData() const;

                    /**
                     * 设置单条访问方式设置
                     * @param _data 单条访问方式设置
                     * 
                     */
                    void SetData(const ServicePortMapping& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 服务id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 全量访问方式设置
                     */
                    EksService m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 单条访问方式设置
                     */
                    ServicePortMapping m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYAPPLICATIONSERVICEREQUEST_H_
