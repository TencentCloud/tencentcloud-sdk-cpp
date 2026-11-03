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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILSYNCFAILURE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILSYNCFAILURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 自定义安全护栏资源同步失败信息
                */
                class CustomGuardrailSyncFailure : public AbstractModel
                {
                public:
                    CustomGuardrailSyncFailure();
                    ~CustomGuardrailSyncFailure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源类型；策略级错误时为 policy</p>
                     * @return ResourceType <p>资源类型；策略级错误时为 policy</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型；策略级错误时为 policy</p>
                     * @param _resourceType <p>资源类型；策略级错误时为 policy</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源 ID</p>
                     * @return ResourceId <p>资源 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源 ID</p>
                     * @param _resourceId <p>资源 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>底层 Kong Route ID</p>
                     * @return RouteId <p>底层 Kong Route ID</p>
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置<p>底层 Kong Route ID</p>
                     * @param _routeId <p>底层 Kong Route ID</p>
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取<p>错误摘要</p>
                     * @return Error <p>错误摘要</p>
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置<p>错误摘要</p>
                     * @param _error <p>错误摘要</p>
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型；策略级错误时为 policy</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>底层 Kong Route ID</p>
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>错误摘要</p>
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILSYNCFAILURE_H_
