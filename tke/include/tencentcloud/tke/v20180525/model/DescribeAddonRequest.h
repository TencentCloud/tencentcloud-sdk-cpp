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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeAddon请求参数结构体
                */
                class DescribeAddonRequest : public AbstractModel
                {
                public:
                    DescribeAddonRequest();
                    ~DescribeAddonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取addon名称（不传时会返回集群下全部的addon）
                     * @return AddonName addon名称（不传时会返回集群下全部的addon）
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置addon名称（不传时会返回集群下全部的addon）
                     * @param _addonName addon名称（不传时会返回集群下全部的addon）
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * addon名称（不传时会返回集群下全部的addon）
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONREQUEST_H_
