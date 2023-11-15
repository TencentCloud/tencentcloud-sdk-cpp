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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_REPORTAPPMESSAGE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_REPORTAPPMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/MessageProfile.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 单条消息上报请求
                */
                class ReportAppMessage : public AbstractModel
                {
                public:
                    ReportAppMessage();
                    ~ReportAppMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间Id
                     * @return WorkspaceId 工作空间Id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间Id
                     * @param _workspaceId 工作空间Id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取消息定义
                     * @return Profile 消息定义
                     * 
                     */
                    MessageProfile GetProfile() const;

                    /**
                     * 设置消息定义
                     * @param _profile 消息定义
                     * 
                     */
                    void SetProfile(const MessageProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取数据上报时间
                     * @return ReportTs 数据上报时间
                     * 
                     */
                    int64_t GetReportTs() const;

                    /**
                     * 设置数据上报时间
                     * @param _reportTs 数据上报时间
                     * 
                     */
                    void SetReportTs(const int64_t& _reportTs);

                    /**
                     * 判断参数 ReportTs 是否已赋值
                     * @return ReportTs 是否已赋值
                     * 
                     */
                    bool ReportTsHasBeenSet() const;

                    /**
                     * 获取属性定义 - KV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @return Properties 属性定义 - KV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置属性定义 - KV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @param _properties 属性定义 - KV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取事件定义 - KKV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @return EventSet 事件定义 - KKV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    std::string GetEventSet() const;

                    /**
                     * 设置事件定义 - KKV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @param _eventSet 事件定义 - KKV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    void SetEventSet(const std::string& _eventSet);

                    /**
                     * 判断参数 EventSet 是否已赋值
                     * @return EventSet 是否已赋值
                     * 
                     */
                    bool EventSetHasBeenSet() const;

                    /**
                     * 获取服务定义 - KKV,若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @return ServiceSet 服务定义 - KKV,若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    std::string GetServiceSet() const;

                    /**
                     * 设置服务定义 - KKV,若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @param _serviceSet 服务定义 - KKV,若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    void SetServiceSet(const std::string& _serviceSet);

                    /**
                     * 判断参数 ServiceSet 是否已赋值
                     * @return ServiceSet 是否已赋值
                     * 
                     */
                    bool ServiceSetHasBeenSet() const;

                    /**
                     * 获取扩展字段2，如：算法上报id，若为json格式，需在前加上x-json:
                     * @return ExtendTwo 扩展字段2，如：算法上报id，若为json格式，需在前加上x-json:
                     * 
                     */
                    std::string GetExtendTwo() const;

                    /**
                     * 设置扩展字段2，如：算法上报id，若为json格式，需在前加上x-json:
                     * @param _extendTwo 扩展字段2，如：算法上报id，若为json格式，需在前加上x-json:
                     * 
                     */
                    void SetExtendTwo(const std::string& _extendTwo);

                    /**
                     * 判断参数 ExtendTwo 是否已赋值
                     * @return ExtendTwo 是否已赋值
                     * 
                     */
                    bool ExtendTwoHasBeenSet() const;

                    /**
                     * 获取透传信息，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @return Echo 透传信息，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    std::string GetEcho() const;

                    /**
                     * 设置透传信息，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * @param _echo 透传信息，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     * 
                     */
                    void SetEcho(const std::string& _echo);

                    /**
                     * 判断参数 Echo 是否已赋值
                     * @return Echo 是否已赋值
                     * 
                     */
                    bool EchoHasBeenSet() const;

                private:

                    /**
                     * 工作空间Id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 消息定义
                     */
                    MessageProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 数据上报时间
                     */
                    int64_t m_reportTs;
                    bool m_reportTsHasBeenSet;

                    /**
                     * 属性定义 - KV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 事件定义 - KKV，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     */
                    std::string m_eventSet;
                    bool m_eventSetHasBeenSet;

                    /**
                     * 服务定义 - KKV,若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     */
                    std::string m_serviceSet;
                    bool m_serviceSetHasBeenSet;

                    /**
                     * 扩展字段2，如：算法上报id，若为json格式，需在前加上x-json:
                     */
                    std::string m_extendTwo;
                    bool m_extendTwoHasBeenSet;

                    /**
                     * 透传信息，若为json格式，需在前加上x-json:，有效字段为x-json:后的字段
                     */
                    std::string m_echo;
                    bool m_echoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_REPORTAPPMESSAGE_H_
