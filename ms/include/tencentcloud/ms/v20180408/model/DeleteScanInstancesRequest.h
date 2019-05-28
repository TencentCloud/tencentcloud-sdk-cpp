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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DELETESCANINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DELETESCANINSTANCESREQUEST_H_

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
                * DeleteScanInstances请求参数结构体
                */
                class DeleteScanInstancesRequest : public AbstractModel
                {
                public:
                    DeleteScanInstancesRequest();
                    ~DeleteScanInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除一个或多个扫描的app，最大支持20个
                     * @return AppSids 删除一个或多个扫描的app，最大支持20个
                     */
                    std::vector<std::string> GetAppSids() const;

                    /**
                     * 设置删除一个或多个扫描的app，最大支持20个
                     * @param AppSids 删除一个或多个扫描的app，最大支持20个
                     */
                    void SetAppSids(const std::vector<std::string>& _appSids);

                    /**
                     * 判断参数 AppSids 是否已赋值
                     * @return AppSids 是否已赋值
                     */
                    bool AppSidsHasBeenSet() const;

                private:

                    /**
                     * 删除一个或多个扫描的app，最大支持20个
                     */
                    std::vector<std::string> m_appSids;
                    bool m_appSidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DELETESCANINSTANCESREQUEST_H_
