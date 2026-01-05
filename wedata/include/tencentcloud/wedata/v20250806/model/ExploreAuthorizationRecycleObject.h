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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONRECYCLEOBJECT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONRECYCLEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExploreFileResource.h>
#include <tencentcloud/wedata/v20250806/model/ExploreAuthorizeSubject.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据探索文件回收策略
                */
                class ExploreAuthorizationRecycleObject : public AbstractModel
                {
                public:
                    ExploreAuthorizationRecycleObject();
                    ~ExploreAuthorizationRecycleObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 文件资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExploreFileResource GetResource() const;

                    /**
                     * 设置文件资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 文件资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const ExploreFileResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecycleSubjects 授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExploreAuthorizeSubject> GetRecycleSubjects() const;

                    /**
                     * 设置授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recycleSubjects 授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecycleSubjects(const std::vector<ExploreAuthorizeSubject>& _recycleSubjects);

                    /**
                     * 判断参数 RecycleSubjects 是否已赋值
                     * @return RecycleSubjects 是否已赋值
                     * 
                     */
                    bool RecycleSubjectsHasBeenSet() const;

                private:

                    /**
                     * 文件资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExploreFileResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExploreAuthorizeSubject> m_recycleSubjects;
                    bool m_recycleSubjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONRECYCLEOBJECT_H_
