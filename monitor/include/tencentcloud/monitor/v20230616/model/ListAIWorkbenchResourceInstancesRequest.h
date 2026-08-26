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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/PageByNumParams.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchResourceInstances请求参数结构体
                */
                class ListAIWorkbenchResourceInstancesRequest : public AbstractModel
                {
                public:
                    ListAIWorkbenchResourceInstancesRequest();
                    ~ListAIWorkbenchResourceInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源地图 ID</p>
                     * @return ResourceMapId <p>资源地图 ID</p>
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>资源地图 ID</p>
                     * @param _resourceMapId <p>资源地图 ID</p>
                     * 
                     */
                    void SetResourceMapId(const std::string& _resourceMapId);

                    /**
                     * 判断参数 ResourceMapId 是否已赋值
                     * @return ResourceMapId 是否已赋值
                     * 
                     */
                    bool ResourceMapIdHasBeenSet() const;

                    /**
                     * 获取<p>分页参数</p>
                     * @return PageParams <p>分页参数</p>
                     * 
                     */
                    PageByNumParams GetPageParams() const;

                    /**
                     * 设置<p>分页参数</p>
                     * @param _pageParams <p>分页参数</p>
                     * 
                     */
                    void SetPageParams(const PageByNumParams& _pageParams);

                    /**
                     * 判断参数 PageParams 是否已赋值
                     * @return PageParams 是否已赋值
                     * 
                     */
                    bool PageParamsHasBeenSet() const;

                private:

                    /**
                     * <p>资源地图 ID</p>
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>分页参数</p>
                     */
                    PageByNumParams m_pageParams;
                    bool m_pageParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEINSTANCESREQUEST_H_
