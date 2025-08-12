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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPRELEASEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPRELEASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeGroupRelease请求参数结构体
                */
                class DescribeGroupReleaseRequest : public AbstractModel
                {
                public:
                    DescribeGroupReleaseRequest();
                    ~DescribeGroupReleaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @return GroupId 部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @param _groupId 部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPRELEASEREQUEST_H_
