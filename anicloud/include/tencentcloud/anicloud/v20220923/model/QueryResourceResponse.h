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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCERESPONSE_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/anicloud/v20220923/model/Resource.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            namespace Model
            {
                /**
                * QueryResource返回参数结构体
                */
                class QueryResourceResponse : public AbstractModel
                {
                public:
                    QueryResourceResponse();
                    ~QueryResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resources 资源信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Resource> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 资源信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Resource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCERESPONSE_H_
