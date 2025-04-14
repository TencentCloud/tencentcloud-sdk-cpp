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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNVERSIONRSBYCONDITIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNVERSIONRSBYCONDITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunVersionRsByCondition请求参数结构体
                */
                class DescribeCloudBaseRunVersionRsByConditionRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunVersionRsByConditionRequest();
                    ~DescribeCloudBaseRunVersionRsByConditionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID；EnvId和ClusterId不能同时为空
                     * @return EnvId 环境ID；EnvId和ClusterId不能同时为空
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID；EnvId和ClusterId不能同时为空
                     * @param _envId 环境ID；EnvId和ClusterId不能同时为空
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取集群ID；EnvId和ClusterId不能同时为空
                     * @return ClusterId 集群ID；EnvId和ClusterId不能同时为空
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID；EnvId和ClusterId不能同时为空
                     * @param _clusterId 集群ID；EnvId和ClusterId不能同时为空
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
                     * 获取过滤网关服务开关
                     * @return FilterGwSwitch 过滤网关服务开关
                     * 
                     */
                    bool GetFilterGwSwitch() const;

                    /**
                     * 设置过滤网关服务开关
                     * @param _filterGwSwitch 过滤网关服务开关
                     * 
                     */
                    void SetFilterGwSwitch(const bool& _filterGwSwitch);

                    /**
                     * 判断参数 FilterGwSwitch 是否已赋值
                     * @return FilterGwSwitch 是否已赋值
                     * 
                     */
                    bool FilterGwSwitchHasBeenSet() const;

                private:

                    /**
                     * 环境ID；EnvId和ClusterId不能同时为空
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 集群ID；EnvId和ClusterId不能同时为空
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 过滤网关服务开关
                     */
                    bool m_filterGwSwitch;
                    bool m_filterGwSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNVERSIONRSBYCONDITIONREQUEST_H_
