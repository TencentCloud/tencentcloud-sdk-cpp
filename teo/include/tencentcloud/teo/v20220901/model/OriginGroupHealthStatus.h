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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginHealthStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站组健康状态。
                */
                class OriginGroupHealthStatus : public AbstractModel
                {
                public:
                    OriginGroupHealthStatus();
                    ~OriginGroupHealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站组 ID。
                     * @return OriginGroupID 源站组 ID。
                     * 
                     */
                    std::string GetOriginGroupID() const;

                    /**
                     * 设置源站组 ID。
                     * @param _originGroupID 源站组 ID。
                     * 
                     */
                    void SetOriginGroupID(const std::string& _originGroupID);

                    /**
                     * 判断参数 OriginGroupID 是否已赋值
                     * @return OriginGroupID 是否已赋值
                     * 
                     */
                    bool OriginGroupIDHasBeenSet() const;

                    /**
                     * 获取源站组名。
                     * @return OriginGroupName 源站组名。
                     * 
                     */
                    std::string GetOriginGroupName() const;

                    /**
                     * 设置源站组名。
                     * @param _originGroupName 源站组名。
                     * 
                     */
                    void SetOriginGroupName(const std::string& _originGroupName);

                    /**
                     * 判断参数 OriginGroupName 是否已赋值
                     * @return OriginGroupName 是否已赋值
                     * 
                     */
                    bool OriginGroupNameHasBeenSet() const;

                    /**
                     * 获取源站组类型，取值有：
<li>HTTP：HTTP 专用型；</li>
<li>GENERAL：通用型。</li>
                     * @return OriginType 源站组类型，取值有：
<li>HTTP：HTTP 专用型；</li>
<li>GENERAL：通用型。</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站组类型，取值有：
<li>HTTP：HTTP 专用型；</li>
<li>GENERAL：通用型。</li>
                     * @param _originType 源站组类型，取值有：
<li>HTTP：HTTP 专用型；</li>
<li>GENERAL：通用型。</li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取优先级。
                     * @return Priority 优先级。
                     * 
                     */
                    std::string GetPriority() const;

                    /**
                     * 设置优先级。
                     * @param _priority 优先级。
                     * 
                     */
                    void SetPriority(const std::string& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取源站组里各源站的健康状态。
                     * @return OriginHealthStatus 源站组里各源站的健康状态。
                     * 
                     */
                    std::vector<OriginHealthStatus> GetOriginHealthStatus() const;

                    /**
                     * 设置源站组里各源站的健康状态。
                     * @param _originHealthStatus 源站组里各源站的健康状态。
                     * 
                     */
                    void SetOriginHealthStatus(const std::vector<OriginHealthStatus>& _originHealthStatus);

                    /**
                     * 判断参数 OriginHealthStatus 是否已赋值
                     * @return OriginHealthStatus 是否已赋值
                     * 
                     */
                    bool OriginHealthStatusHasBeenSet() const;

                private:

                    /**
                     * 源站组 ID。
                     */
                    std::string m_originGroupID;
                    bool m_originGroupIDHasBeenSet;

                    /**
                     * 源站组名。
                     */
                    std::string m_originGroupName;
                    bool m_originGroupNameHasBeenSet;

                    /**
                     * 源站组类型，取值有：
<li>HTTP：HTTP 专用型；</li>
<li>GENERAL：通用型。</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 优先级。
                     */
                    std::string m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 源站组里各源站的健康状态。
                     */
                    std::vector<OriginHealthStatus> m_originHealthStatus;
                    bool m_originHealthStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPHEALTHSTATUS_H_
