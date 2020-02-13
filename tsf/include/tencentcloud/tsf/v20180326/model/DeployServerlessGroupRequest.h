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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYSERVERLESSGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYSERVERLESSGROUPREQUEST_H_

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
                * DeployServerlessGroup请求参数结构体
                */
                class DeployServerlessGroupRequest : public AbstractModel
                {
                public:
                    DeployServerlessGroupRequest();
                    ~DeployServerlessGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param GroupId 部署组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取程序包ID
                     * @return PkgId 程序包ID
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置程序包ID
                     * @param PkgId 程序包ID
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取所需实例内存大小，取值为 1Gi 2Gi 4Gi 8Gi 16Gi，缺省为 1Gi，不传表示维持原态
                     * @return Memory 所需实例内存大小，取值为 1Gi 2Gi 4Gi 8Gi 16Gi，缺省为 1Gi，不传表示维持原态
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置所需实例内存大小，取值为 1Gi 2Gi 4Gi 8Gi 16Gi，缺省为 1Gi，不传表示维持原态
                     * @param Memory 所需实例内存大小，取值为 1Gi 2Gi 4Gi 8Gi 16Gi，缺省为 1Gi，不传表示维持原态
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取要求最小实例数，取值范围 [1, 4]，缺省为 1，不传表示维持原态
                     * @return InstanceRequest 要求最小实例数，取值范围 [1, 4]，缺省为 1，不传表示维持原态
                     */
                    uint64_t GetInstanceRequest() const;

                    /**
                     * 设置要求最小实例数，取值范围 [1, 4]，缺省为 1，不传表示维持原态
                     * @param InstanceRequest 要求最小实例数，取值范围 [1, 4]，缺省为 1，不传表示维持原态
                     */
                    void SetInstanceRequest(const uint64_t& _instanceRequest);

                    /**
                     * 判断参数 InstanceRequest 是否已赋值
                     * @return InstanceRequest 是否已赋值
                     */
                    bool InstanceRequestHasBeenSet() const;

                    /**
                     * 获取部署组启动参数，不传表示维持原态
                     * @return StartupParameters 部署组启动参数，不传表示维持原态
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置部署组启动参数，不传表示维持原态
                     * @param StartupParameters 部署组启动参数，不传表示维持原态
                     */
                    void SetStartupParameters(const std::string& _startupParameters);

                    /**
                     * 判断参数 StartupParameters 是否已赋值
                     * @return StartupParameters 是否已赋值
                     */
                    bool StartupParametersHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 程序包ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 所需实例内存大小，取值为 1Gi 2Gi 4Gi 8Gi 16Gi，缺省为 1Gi，不传表示维持原态
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 要求最小实例数，取值范围 [1, 4]，缺省为 1，不传表示维持原态
                     */
                    uint64_t m_instanceRequest;
                    bool m_instanceRequestHasBeenSet;

                    /**
                     * 部署组启动参数，不传表示维持原态
                     */
                    std::string m_startupParameters;
                    bool m_startupParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYSERVERLESSGROUPREQUEST_H_
