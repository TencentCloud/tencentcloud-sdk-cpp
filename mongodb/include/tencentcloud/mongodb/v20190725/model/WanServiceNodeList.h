/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_WANSERVICENODELIST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_WANSERVICENODELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * mongodb外网服务节点信息。
                */
                class WanServiceNodeList : public AbstractModel
                {
                public:
                    WanServiceNodeList();
                    ~WanServiceNodeList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例节点的vip及端口信息。
                     * @return VipVport 实例节点的vip及端口信息。
                     * 
                     */
                    std::string GetVipVport() const;

                    /**
                     * 设置实例节点的vip及端口信息。
                     * @param _vipVport 实例节点的vip及端口信息。
                     * 
                     */
                    void SetVipVport(const std::string& _vipVport);

                    /**
                     * 判断参数 VipVport 是否已赋值
                     * @return VipVport 是否已赋值
                     * 
                     */
                    bool VipVportHasBeenSet() const;

                    /**
                     * 获取CLB监听器监听端口，取值范围1~65535。
                     * @return ListenerPort CLB监听器监听端口，取值范围1~65535。
                     * 
                     */
                    std::string GetListenerPort() const;

                    /**
                     * 设置CLB监听器监听端口，取值范围1~65535。
                     * @param _listenerPort CLB监听器监听端口，取值范围1~65535。
                     * 
                     */
                    void SetListenerPort(const std::string& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                private:

                    /**
                     * 实例节点的vip及端口信息。
                     */
                    std::string m_vipVport;
                    bool m_vipVportHasBeenSet;

                    /**
                     * CLB监听器监听端口，取值范围1~65535。
                     */
                    std::string m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_WANSERVICENODELIST_H_
