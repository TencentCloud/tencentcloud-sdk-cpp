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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_ZONESCHEDULEDITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_ZONESCHEDULEDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * proxy调度时各个可用区有无调度任务
                */
                class ZoneScheduledItem : public AbstractModel
                {
                public:
                    ZoneScheduledItem();
                    ~ZoneScheduledItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取有剔除的调度任务且没有切回的可用区时，该值为true，反之为false
                     * @return NodePermWipeFlag 有剔除的调度任务且没有切回的可用区时，该值为true，反之为false
                     * 
                     */
                    bool GetNodePermWipeFlag() const;

                    /**
                     * 设置有剔除的调度任务且没有切回的可用区时，该值为true，反之为false
                     * @param _nodePermWipeFlag 有剔除的调度任务且没有切回的可用区时，该值为true，反之为false
                     * 
                     */
                    void SetNodePermWipeFlag(const bool& _nodePermWipeFlag);

                    /**
                     * 判断参数 NodePermWipeFlag 是否已赋值
                     * @return NodePermWipeFlag 是否已赋值
                     * 
                     */
                    bool NodePermWipeFlagHasBeenSet() const;

                private:

                    /**
                     * 可用区ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 有剔除的调度任务且没有切回的可用区时，该值为true，反之为false
                     */
                    bool m_nodePermWipeFlag;
                    bool m_nodePermWipeFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_ZONESCHEDULEDITEM_H_
