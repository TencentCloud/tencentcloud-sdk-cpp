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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEMAPSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEMAPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ResourceMapInfo.h>
#include <tencentcloud/monitor/v20230616/model/PageByNumResult.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchResourceMaps返回参数结构体
                */
                class ListAIWorkbenchResourceMapsResponse : public AbstractModel
                {
                public:
                    ListAIWorkbenchResourceMapsResponse();
                    ~ListAIWorkbenchResourceMapsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源地图列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceMaps <p>资源地图列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceMapInfo> GetResourceMaps() const;

                    /**
                     * 判断参数 ResourceMaps 是否已赋值
                     * @return ResourceMaps 是否已赋值
                     * 
                     */
                    bool ResourceMapsHasBeenSet() const;

                    /**
                     * 获取<p>分页结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageResult <p>分页结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PageByNumResult GetPageResult() const;

                    /**
                     * 判断参数 PageResult 是否已赋值
                     * @return PageResult 是否已赋值
                     * 
                     */
                    bool PageResultHasBeenSet() const;

                private:

                    /**
                     * <p>资源地图列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceMapInfo> m_resourceMaps;
                    bool m_resourceMapsHasBeenSet;

                    /**
                     * <p>分页结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PageByNumResult m_pageResult;
                    bool m_pageResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHRESOURCEMAPSRESPONSE_H_
