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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESTROYRESOURCEINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESTROYRESOURCEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DestroyResourceInstances请求参数结构体
                */
                class DestroyResourceInstancesRequest : public AbstractModel
                {
                public:
                    DestroyResourceInstancesRequest();
                    ~DestroyResourceInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ResourceId 资源id，在创建订单时，返回的resourceId
                     * @return ResourceId ResourceId 资源id，在创建订单时，返回的resourceId
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置ResourceId 资源id，在创建订单时，返回的resourceId
                     * @param _resourceId ResourceId 资源id，在创建订单时，返回的resourceId
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
                     * 获取资源绑定的包名，为了防止误删除，需要指定绑定时的包名
                     * @return AppPkgName 资源绑定的包名，为了防止误删除，需要指定绑定时的包名
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置资源绑定的包名，为了防止误删除，需要指定绑定时的包名
                     * @param _appPkgName 资源绑定的包名，为了防止误删除，需要指定绑定时的包名
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                private:

                    /**
                     * ResourceId 资源id，在创建订单时，返回的resourceId
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源绑定的包名，为了防止误删除，需要指定绑定时的包名
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESTROYRESOURCEINSTANCESREQUEST_H_
