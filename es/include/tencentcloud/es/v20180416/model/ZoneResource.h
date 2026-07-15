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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_ZONERESOURCE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_ZONERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/NodeTypeResource.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 可用区资源描述
                */
                class ZoneResource : public AbstractModel
                {
                public:
                    ZoneResource();
                    ~ZoneResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区名称
                     * @return ZoneName 可用区名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区名称
                     * @param _zoneName 可用区名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取是否可售
                     * @return Available 是否可售
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置是否可售
                     * @param _available 是否可售
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取节点规格资源列表
                     * @return NodeTypeList 节点规格资源列表
                     * 
                     */
                    std::vector<NodeTypeResource> GetNodeTypeList() const;

                    /**
                     * 设置节点规格资源列表
                     * @param _nodeTypeList 节点规格资源列表
                     * 
                     */
                    void SetNodeTypeList(const std::vector<NodeTypeResource>& _nodeTypeList);

                    /**
                     * 判断参数 NodeTypeList 是否已赋值
                     * @return NodeTypeList 是否已赋值
                     * 
                     */
                    bool NodeTypeListHasBeenSet() const;

                    /**
                     * 获取可用节点机型族列表
                     * @return AvailNodeFamilies 可用节点机型族列表
                     * 
                     */
                    std::vector<std::string> GetAvailNodeFamilies() const;

                    /**
                     * 设置可用节点机型族列表
                     * @param _availNodeFamilies 可用节点机型族列表
                     * 
                     */
                    void SetAvailNodeFamilies(const std::vector<std::string>& _availNodeFamilies);

                    /**
                     * 判断参数 AvailNodeFamilies 是否已赋值
                     * @return AvailNodeFamilies 是否已赋值
                     * 
                     */
                    bool AvailNodeFamiliesHasBeenSet() const;

                private:

                    /**
                     * 可用区名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 是否可售
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 节点规格资源列表
                     */
                    std::vector<NodeTypeResource> m_nodeTypeList;
                    bool m_nodeTypeListHasBeenSet;

                    /**
                     * 可用节点机型族列表
                     */
                    std::vector<std::string> m_availNodeFamilies;
                    bool m_availNodeFamiliesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ZONERESOURCE_H_
