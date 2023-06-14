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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_RESOURCEREQUIREMENTS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_RESOURCEREQUIREMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/Resource.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * ResourceRequirements 描述了计算资源需求。
                */
                class ResourceRequirements : public AbstractModel
                {
                public:
                    ResourceRequirements();
                    ~ResourceRequirements() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Limits 描述了允许的最大计算资源量。
                     * @return Limits Limits 描述了允许的最大计算资源量。
                     * 
                     */
                    std::vector<Resource> GetLimits() const;

                    /**
                     * 设置Limits 描述了允许的最大计算资源量。
                     * @param _limits Limits 描述了允许的最大计算资源量。
                     * 
                     */
                    void SetLimits(const std::vector<Resource>& _limits);

                    /**
                     * 判断参数 Limits 是否已赋值
                     * @return Limits 是否已赋值
                     * 
                     */
                    bool LimitsHasBeenSet() const;

                    /**
                     * 获取Requests 描述所需的最小计算资源量。
                     * @return Requests Requests 描述所需的最小计算资源量。
                     * 
                     */
                    std::vector<Resource> GetRequests() const;

                    /**
                     * 设置Requests 描述所需的最小计算资源量。
                     * @param _requests Requests 描述所需的最小计算资源量。
                     * 
                     */
                    void SetRequests(const std::vector<Resource>& _requests);

                    /**
                     * 判断参数 Requests 是否已赋值
                     * @return Requests 是否已赋值
                     * 
                     */
                    bool RequestsHasBeenSet() const;

                private:

                    /**
                     * Limits 描述了允许的最大计算资源量。
                     */
                    std::vector<Resource> m_limits;
                    bool m_limitsHasBeenSet;

                    /**
                     * Requests 描述所需的最小计算资源量。
                     */
                    std::vector<Resource> m_requests;
                    bool m_requestsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_RESOURCEREQUIREMENTS_H_
