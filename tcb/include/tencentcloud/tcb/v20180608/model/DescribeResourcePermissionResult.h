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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBERESOURCEPERMISSIONRESULT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBERESOURCEPERMISSIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ResourcePermission.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 查询资源权限返回结果
                */
                class DescribeResourcePermissionResult : public AbstractModel
                {
                public:
                    DescribeResourcePermissionResult();
                    ~DescribeResourcePermissionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询到的资源总数
                     * @return TotalCount 查询到的资源总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置查询到的资源总数
                     * @param _totalCount 查询到的资源总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取资源权限列表
                     * @return PermissionList 资源权限列表
                     * 
                     */
                    std::vector<ResourcePermission> GetPermissionList() const;

                    /**
                     * 设置资源权限列表
                     * @param _permissionList 资源权限列表
                     * 
                     */
                    void SetPermissionList(const std::vector<ResourcePermission>& _permissionList);

                    /**
                     * 判断参数 PermissionList 是否已赋值
                     * @return PermissionList 是否已赋值
                     * 
                     */
                    bool PermissionListHasBeenSet() const;

                private:

                    /**
                     * 查询到的资源总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 资源权限列表
                     */
                    std::vector<ResourcePermission> m_permissionList;
                    bool m_permissionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBERESOURCEPERMISSIONRESULT_H_
