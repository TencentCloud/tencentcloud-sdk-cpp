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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAINSTANCEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CKafkaTopicInfo.h>
#include <tencentcloud/tcss/v20201101/model/CkafkaRouteInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 安全日志kafka可选信息
                */
                class CKafkaInstanceInfo : public AbstractModel
                {
                public:
                    CKafkaInstanceInfo();
                    ~CKafkaInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取主题列表
                     * @return TopicList 主题列表
                     * 
                     */
                    std::vector<CKafkaTopicInfo> GetTopicList() const;

                    /**
                     * 设置主题列表
                     * @param _topicList 主题列表
                     * 
                     */
                    void SetTopicList(const std::vector<CKafkaTopicInfo>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取路由列表
                     * @return RouteList 路由列表
                     * 
                     */
                    std::vector<CkafkaRouteInfo> GetRouteList() const;

                    /**
                     * 设置路由列表
                     * @param _routeList 路由列表
                     * 
                     */
                    void SetRouteList(const std::vector<CkafkaRouteInfo>& _routeList);

                    /**
                     * 判断参数 RouteList 是否已赋值
                     * @return RouteList 是否已赋值
                     * 
                     */
                    bool RouteListHasBeenSet() const;

                    /**
                     * 获取kafka版本号
                     * @return KafkaVersion kafka版本号
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置kafka版本号
                     * @param _kafkaVersion kafka版本号
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 主题列表
                     */
                    std::vector<CKafkaTopicInfo> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * 路由列表
                     */
                    std::vector<CkafkaRouteInfo> m_routeList;
                    bool m_routeListHasBeenSet;

                    /**
                     * kafka版本号
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CKAFKAINSTANCEINFO_H_
