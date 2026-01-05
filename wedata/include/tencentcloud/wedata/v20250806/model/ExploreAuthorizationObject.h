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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONOBJECT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONOBJECT_H_

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
                * 数据探索文件授权主体
                */
                class ExploreAuthorizationObject : public AbstractModel
                {
                public:
                    ExploreAuthorizationObject();
                    ~ExploreAuthorizationObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权资源信息，包含resourceId和resourceType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 授权资源信息，包含resourceId和resourceType
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExploreFileResource GetResource() const;

                    /**
                     * 设置授权资源信息，包含resourceId和resourceType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 授权资源信息，包含resourceId和resourceType
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
                     * @return AuthorizeSubjects 授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExploreAuthorizeSubject> GetAuthorizeSubjects() const;

                    /**
                     * 设置授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorizeSubjects 授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthorizeSubjects(const std::vector<ExploreAuthorizeSubject>& _authorizeSubjects);

                    /**
                     * 判断参数 AuthorizeSubjects 是否已赋值
                     * @return AuthorizeSubjects 是否已赋值
                     * 
                     */
                    bool AuthorizeSubjectsHasBeenSet() const;

                private:

                    /**
                     * 授权资源信息，包含resourceId和resourceType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExploreFileResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 授权详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExploreAuthorizeSubject> m_authorizeSubjects;
                    bool m_authorizeSubjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONOBJECT_H_
