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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETEFIELDTRANSFORMRULEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETEFIELDTRANSFORMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DeleteFieldTransformRule请求参数结构体
                */
                class DeleteFieldTransformRuleRequest : public AbstractModel
                {
                public:
                    DeleteFieldTransformRuleRequest();
                    ~DeleteFieldTransformRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则id</p>
                     * @return Id <p>规则id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>规则id</p>
                     * @param _id <p>规则id</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * <p>规则id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETEFIELDTRANSFORMRULEREQUEST_H_
