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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSIMPLEINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/ListenerInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 内部接口使用，返回可以查询统计数据的通道和对应的监听器信息
                */
                class ProxySimpleInfo : public AbstractModel
                {
                public:
                    ProxySimpleInfo();
                    ~ProxySimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道ID
                     * @return ProxyId 通道ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID
                     * @param _proxyId 通道ID
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取通道名称
                     * @return ProxyName 通道名称
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置通道名称
                     * @param _proxyName 通道名称
                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取监听器列表
                     * @return ListenerList 监听器列表
                     * 
                     */
                    std::vector<ListenerInfo> GetListenerList() const;

                    /**
                     * 设置监听器列表
                     * @param _listenerList 监听器列表
                     * 
                     */
                    void SetListenerList(const std::vector<ListenerInfo>& _listenerList);

                    /**
                     * 判断参数 ListenerList 是否已赋值
                     * @return ListenerList 是否已赋值
                     * 
                     */
                    bool ListenerListHasBeenSet() const;

                private:

                    /**
                     * 通道ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 通道名称
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 监听器列表
                     */
                    std::vector<ListenerInfo> m_listenerList;
                    bool m_listenerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSIMPLEINFO_H_
