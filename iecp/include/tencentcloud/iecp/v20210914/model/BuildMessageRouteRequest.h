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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_BUILDMESSAGEROUTEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_BUILDMESSAGEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * BuildMessageRoute请求参数结构体
                */
                class BuildMessageRouteRequest : public AbstractModel
                {
                public:
                    BuildMessageRouteRequest();
                    ~BuildMessageRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取路由名字
                     * @return RouteName 路由名字
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置路由名字
                     * @param _routeName 路由名字
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取源产品id
                     * @return SourceProductID 源产品id
                     * 
                     */
                    std::string GetSourceProductID() const;

                    /**
                     * 设置源产品id
                     * @param _sourceProductID 源产品id
                     * 
                     */
                    void SetSourceProductID(const std::string& _sourceProductID);

                    /**
                     * 判断参数 SourceProductID 是否已赋值
                     * @return SourceProductID 是否已赋值
                     * 
                     */
                    bool SourceProductIDHasBeenSet() const;

                    /**
                     * 获取源设备名列表
                     * @return SourceDeviceNameList 源设备名列表
                     * 
                     */
                    std::vector<std::string> GetSourceDeviceNameList() const;

                    /**
                     * 设置源设备名列表
                     * @param _sourceDeviceNameList 源设备名列表
                     * 
                     */
                    void SetSourceDeviceNameList(const std::vector<std::string>& _sourceDeviceNameList);

                    /**
                     * 判断参数 SourceDeviceNameList 是否已赋值
                     * @return SourceDeviceNameList 是否已赋值
                     * 
                     */
                    bool SourceDeviceNameListHasBeenSet() const;

                    /**
                     * 获取第一个字符为 "0"或"1"，"1"表示自定义topic
                     * @return TopicFilter 第一个字符为 "0"或"1"，"1"表示自定义topic
                     * 
                     */
                    std::string GetTopicFilter() const;

                    /**
                     * 设置第一个字符为 "0"或"1"，"1"表示自定义topic
                     * @param _topicFilter 第一个字符为 "0"或"1"，"1"表示自定义topic
                     * 
                     */
                    void SetTopicFilter(const std::string& _topicFilter);

                    /**
                     * 判断参数 TopicFilter 是否已赋值
                     * @return TopicFilter 是否已赋值
                     * 
                     */
                    bool TopicFilterHasBeenSet() const;

                    /**
                     * 获取http或mqtt-broker
                     * @return Mode http或mqtt-broker
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置http或mqtt-broker
                     * @param _mode http或mqtt-broker
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取源单元id列表
                     * @return SourceUnitIDList 源单元id列表
                     * 
                     */
                    std::vector<std::string> GetSourceUnitIDList() const;

                    /**
                     * 设置源单元id列表
                     * @param _sourceUnitIDList 源单元id列表
                     * 
                     */
                    void SetSourceUnitIDList(const std::vector<std::string>& _sourceUnitIDList);

                    /**
                     * 判断参数 SourceUnitIDList 是否已赋值
                     * @return SourceUnitIDList 是否已赋值
                     * 
                     */
                    bool SourceUnitIDListHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Descript 描述
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置描述
                     * @param _descript 描述
                     * 
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     * 
                     */
                    bool DescriptHasBeenSet() const;

                    /**
                     * 获取无
                     * @return TargetOptions 无
                     * 
                     */
                    std::string GetTargetOptions() const;

                    /**
                     * 设置无
                     * @param _targetOptions 无
                     * 
                     */
                    void SetTargetOptions(const std::string& _targetOptions);

                    /**
                     * 判断参数 TargetOptions 是否已赋值
                     * @return TargetOptions 是否已赋值
                     * 
                     */
                    bool TargetOptionsHasBeenSet() const;

                private:

                    /**
                     * 路由名字
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * 源产品id
                     */
                    std::string m_sourceProductID;
                    bool m_sourceProductIDHasBeenSet;

                    /**
                     * 源设备名列表
                     */
                    std::vector<std::string> m_sourceDeviceNameList;
                    bool m_sourceDeviceNameListHasBeenSet;

                    /**
                     * 第一个字符为 "0"或"1"，"1"表示自定义topic
                     */
                    std::string m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                    /**
                     * http或mqtt-broker
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 源单元id列表
                     */
                    std::vector<std::string> m_sourceUnitIDList;
                    bool m_sourceUnitIDListHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_targetOptions;
                    bool m_targetOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_BUILDMESSAGEROUTEREQUEST_H_
