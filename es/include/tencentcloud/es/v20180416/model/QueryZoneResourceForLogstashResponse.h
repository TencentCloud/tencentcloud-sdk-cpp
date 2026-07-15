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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_QUERYZONERESOURCEFORLOGSTASHRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_QUERYZONERESOURCEFORLOGSTASHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/LogstashZoneResource.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * QueryZoneResourceForLogstash返回参数结构体
                */
                class QueryZoneResourceForLogstashResponse : public AbstractModel
                {
                public:
                    QueryZoneResourceForLogstashResponse();
                    ~QueryZoneResourceForLogstashResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区资源描述列表
                     * @return ZoneResources 可用区资源描述列表
                     * 
                     */
                    std::vector<LogstashZoneResource> GetZoneResources() const;

                    /**
                     * 判断参数 ZoneResources 是否已赋值
                     * @return ZoneResources 是否已赋值
                     * 
                     */
                    bool ZoneResourcesHasBeenSet() const;

                private:

                    /**
                     * 可用区资源描述列表
                     */
                    std::vector<LogstashZoneResource> m_zoneResources;
                    bool m_zoneResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_QUERYZONERESOURCEFORLOGSTASHRESPONSE_H_
