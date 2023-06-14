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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSREQUEST_H_

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
                * ListClusterInspectionResults请求参数结构体
                */
                class ListClusterInspectionResultsRequest : public AbstractModel
                {
                public:
                    ListClusterInspectionResultsRequest();
                    ~ListClusterInspectionResultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标集群列表，为空查询用户所有集群

                     * @return ClusterIds 目标集群列表，为空查询用户所有集群

                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置目标集群列表，为空查询用户所有集群

                     * @param _clusterIds 目标集群列表，为空查询用户所有集群

                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取隐藏的字段信息，为了减少无效的字段返回，隐藏字段不会在返回值中返回。可选值：results

                     * @return Hide 隐藏的字段信息，为了减少无效的字段返回，隐藏字段不会在返回值中返回。可选值：results

                     * 
                     */
                    std::vector<std::string> GetHide() const;

                    /**
                     * 设置隐藏的字段信息，为了减少无效的字段返回，隐藏字段不会在返回值中返回。可选值：results

                     * @param _hide 隐藏的字段信息，为了减少无效的字段返回，隐藏字段不会在返回值中返回。可选值：results

                     * 
                     */
                    void SetHide(const std::vector<std::string>& _hide);

                    /**
                     * 判断参数 Hide 是否已赋值
                     * @return Hide 是否已赋值
                     * 
                     */
                    bool HideHasBeenSet() const;

                    /**
                     * 获取指定查询结果的报告名称，默认查询最新的每个集群只查询最新的一条
                     * @return Name 指定查询结果的报告名称，默认查询最新的每个集群只查询最新的一条
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置指定查询结果的报告名称，默认查询最新的每个集群只查询最新的一条
                     * @param _name 指定查询结果的报告名称，默认查询最新的每个集群只查询最新的一条
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 目标集群列表，为空查询用户所有集群

                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 隐藏的字段信息，为了减少无效的字段返回，隐藏字段不会在返回值中返回。可选值：results

                     */
                    std::vector<std::string> m_hide;
                    bool m_hideHasBeenSet;

                    /**
                     * 指定查询结果的报告名称，默认查询最新的每个集群只查询最新的一条
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSREQUEST_H_
