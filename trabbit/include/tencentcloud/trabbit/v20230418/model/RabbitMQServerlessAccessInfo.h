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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSACCESSINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 公网访问信息
                */
                class RabbitMQServerlessAccessInfo : public AbstractModel
                {
                public:
                    RabbitMQServerlessAccessInfo();
                    ~RabbitMQServerlessAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网域名
                     * @return PublicAccessEndpoint 公网域名
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置公网域名
                     * @param _publicAccessEndpoint 公网域名
                     * 
                     */
                    void SetPublicAccessEndpoint(const std::string& _publicAccessEndpoint);

                    /**
                     * 判断参数 PublicAccessEndpoint 是否已赋值
                     * @return PublicAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointHasBeenSet() const;

                    /**
                     * 获取公网状态
                     * @return PublicDataStreamStatus 公网状态
                     * 
                     */
                    std::string GetPublicDataStreamStatus() const;

                    /**
                     * 设置公网状态
                     * @param _publicDataStreamStatus 公网状态
                     * 
                     */
                    void SetPublicDataStreamStatus(const std::string& _publicDataStreamStatus);

                    /**
                     * 判断参数 PublicDataStreamStatus 是否已赋值
                     * @return PublicDataStreamStatus 是否已赋值
                     * 
                     */
                    bool PublicDataStreamStatusHasBeenSet() const;

                private:

                    /**
                     * 公网域名
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * 公网状态
                     */
                    std::string m_publicDataStreamStatus;
                    bool m_publicDataStreamStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSACCESSINFO_H_
