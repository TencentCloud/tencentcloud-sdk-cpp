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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * proxy节点可用区内个数
                */
                class ProxyZone : public AbstractModel
                {
                public:
                    ProxyZone();
                    ~ProxyZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取proxy节点可用区
                     * @return ProxyNodeZone proxy节点可用区
                     * 
                     */
                    std::string GetProxyNodeZone() const;

                    /**
                     * 设置proxy节点可用区
                     * @param _proxyNodeZone proxy节点可用区
                     * 
                     */
                    void SetProxyNodeZone(const std::string& _proxyNodeZone);

                    /**
                     * 判断参数 ProxyNodeZone 是否已赋值
                     * @return ProxyNodeZone 是否已赋值
                     * 
                     */
                    bool ProxyNodeZoneHasBeenSet() const;

                    /**
                     * 获取proxy节点数量
                     * @return ProxyNodeCount proxy节点数量
                     * 
                     */
                    int64_t GetProxyNodeCount() const;

                    /**
                     * 设置proxy节点数量
                     * @param _proxyNodeCount proxy节点数量
                     * 
                     */
                    void SetProxyNodeCount(const int64_t& _proxyNodeCount);

                    /**
                     * 判断参数 ProxyNodeCount 是否已赋值
                     * @return ProxyNodeCount 是否已赋值
                     * 
                     */
                    bool ProxyNodeCountHasBeenSet() const;

                private:

                    /**
                     * proxy节点可用区
                     */
                    std::string m_proxyNodeZone;
                    bool m_proxyNodeZoneHasBeenSet;

                    /**
                     * proxy节点数量
                     */
                    int64_t m_proxyNodeCount;
                    bool m_proxyNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONE_H_
