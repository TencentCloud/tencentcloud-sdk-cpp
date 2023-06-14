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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_ROUTEINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_ROUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 消息路由
                */
                class RouteInfo : public AbstractModel
                {
                public:
                    RouteInfo();
                    ~RouteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无
                     * @return RouteID 无
                     * 
                     */
                    int64_t GetRouteID() const;

                    /**
                     * 设置无
                     * @param _routeID 无
                     * 
                     */
                    void SetRouteID(const int64_t& _routeID);

                    /**
                     * 判断参数 RouteID 是否已赋值
                     * @return RouteID 是否已赋值
                     * 
                     */
                    bool RouteIDHasBeenSet() const;

                    /**
                     * 获取无
                     * @return RouteName 无
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置无
                     * @param _routeName 无
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
                     * 获取无
                     * @return SourceProductID 无
                     * 
                     */
                    std::string GetSourceProductID() const;

                    /**
                     * 设置无
                     * @param _sourceProductID 无
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
                     * 获取无
                     * @return TopicFilter 无
                     * 
                     */
                    std::string GetTopicFilter() const;

                    /**
                     * 设置无
                     * @param _topicFilter 无
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
                     * 获取无
                     * @return Mode 无
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置无
                     * @param _mode 无
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

                    /**
                     * 获取无
                     * @return CreateTime 无
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置无
                     * @param _createTime 无
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Descript 无
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置无
                     * @param _descript 无
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
                     * @return Healthy 无
                     * 
                     */
                    std::string GetHealthy() const;

                    /**
                     * 设置无
                     * @param _healthy 无
                     * 
                     */
                    void SetHealthy(const std::string& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Status 无
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置无
                     * @param _status 无
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
                     * 获取无
                     * @return MessageCount 无
                     * 
                     */
                    int64_t GetMessageCount() const;

                    /**
                     * 设置无
                     * @param _messageCount 无
                     * 
                     */
                    void SetMessageCount(const int64_t& _messageCount);

                    /**
                     * 判断参数 MessageCount 是否已赋值
                     * @return MessageCount 是否已赋值
                     * 
                     */
                    bool MessageCountHasBeenSet() const;

                    /**
                     * 获取无
                     * @return MessageLastTime 无
                     * 
                     */
                    std::string GetMessageLastTime() const;

                    /**
                     * 设置无
                     * @param _messageLastTime 无
                     * 
                     */
                    void SetMessageLastTime(const std::string& _messageLastTime);

                    /**
                     * 判断参数 MessageLastTime 是否已赋值
                     * @return MessageLastTime 是否已赋值
                     * 
                     */
                    bool MessageLastTimeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return SourceProductName 无
                     * 
                     */
                    std::string GetSourceProductName() const;

                    /**
                     * 设置无
                     * @param _sourceProductName 无
                     * 
                     */
                    void SetSourceProductName(const std::string& _sourceProductName);

                    /**
                     * 判断参数 SourceProductName 是否已赋值
                     * @return SourceProductName 是否已赋值
                     * 
                     */
                    bool SourceProductNameHasBeenSet() const;

                    /**
                     * 获取无
                     * @return SourceUnitIDList 无
                     * 
                     */
                    std::vector<std::string> GetSourceUnitIDList() const;

                    /**
                     * 设置无
                     * @param _sourceUnitIDList 无
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
                     * 获取无
                     * @return SourceUnitNameList 无
                     * 
                     */
                    std::vector<std::string> GetSourceUnitNameList() const;

                    /**
                     * 设置无
                     * @param _sourceUnitNameList 无
                     * 
                     */
                    void SetSourceUnitNameList(const std::vector<std::string>& _sourceUnitNameList);

                    /**
                     * 判断参数 SourceUnitNameList 是否已赋值
                     * @return SourceUnitNameList 是否已赋值
                     * 
                     */
                    bool SourceUnitNameListHasBeenSet() const;

                    /**
                     * 获取无
                     * @return SourceDeviceNameList 无
                     * 
                     */
                    std::vector<std::string> GetSourceDeviceNameList() const;

                    /**
                     * 设置无
                     * @param _sourceDeviceNameList 无
                     * 
                     */
                    void SetSourceDeviceNameList(const std::vector<std::string>& _sourceDeviceNameList);

                    /**
                     * 判断参数 SourceDeviceNameList 是否已赋值
                     * @return SourceDeviceNameList 是否已赋值
                     * 
                     */
                    bool SourceDeviceNameListHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    int64_t m_routeID;
                    bool m_routeIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_sourceProductID;
                    bool m_sourceProductIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_targetOptions;
                    bool m_targetOptionsHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_messageCount;
                    bool m_messageCountHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_messageLastTime;
                    bool m_messageLastTimeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_sourceProductName;
                    bool m_sourceProductNameHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_sourceUnitIDList;
                    bool m_sourceUnitIDListHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_sourceUnitNameList;
                    bool m_sourceUnitNameListHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_sourceDeviceNameList;
                    bool m_sourceDeviceNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_ROUTEINFO_H_
