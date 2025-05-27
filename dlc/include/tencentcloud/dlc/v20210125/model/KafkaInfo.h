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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_KAFKAINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_KAFKAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionLocation.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Kafka连接信息
                */
                class KafkaInfo : public AbstractModel
                {
                public:
                    KafkaInfo();
                    ~KafkaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取kafka实例Id
                     * @return InstanceId kafka实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置kafka实例Id
                     * @param _instanceId kafka实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取kafka数据源的网络信息
                     * @return Location kafka数据源的网络信息
                     * 
                     */
                    DatasourceConnectionLocation GetLocation() const;

                    /**
                     * 设置kafka数据源的网络信息
                     * @param _location kafka数据源的网络信息
                     * 
                     */
                    void SetLocation(const DatasourceConnectionLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * kafka实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * kafka数据源的网络信息
                     */
                    DatasourceConnectionLocation m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_KAFKAINFO_H_
