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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEMATERIALSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEMATERIALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/SortBy.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeMaterials请求参数结构体
                */
                class DescribeMaterialsRequest : public AbstractModel
                {
                public:
                    DescribeMaterialsRequest();
                    ~DescribeMaterialsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取媒体 ID 列表，一次最多可拉取20个媒体的信息。
                     * @return MaterialIds 媒体 ID 列表，一次最多可拉取20个媒体的信息。
                     * 
                     */
                    std::vector<std::string> GetMaterialIds() const;

                    /**
                     * 设置媒体 ID 列表，一次最多可拉取20个媒体的信息。
                     * @param _materialIds 媒体 ID 列表，一次最多可拉取20个媒体的信息。
                     * 
                     */
                    void SetMaterialIds(const std::vector<std::string>& _materialIds);

                    /**
                     * 判断参数 MaterialIds 是否已赋值
                     * @return MaterialIds 是否已赋值
                     * 
                     */
                    bool MaterialIdsHasBeenSet() const;

                    /**
                     * 获取列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     * @return Sort 列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     * @param _sort 列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 媒体 ID 列表，一次最多可拉取20个媒体的信息。
                     */
                    std::vector<std::string> m_materialIds;
                    bool m_materialIdsHasBeenSet;

                    /**
                     * 列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以获取任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEMATERIALSREQUEST_H_
