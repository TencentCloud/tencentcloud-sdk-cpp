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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/PathInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ApplyPathLifecyclePolicy请求参数结构体
                */
                class ApplyPathLifecyclePolicyRequest : public AbstractModel
                {
                public:
                    ApplyPathLifecyclePolicyRequest();
                    ~ApplyPathLifecyclePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>生命周期管理策略ID</p>
                     * @return LifecyclePolicyID <p>生命周期管理策略ID</p>
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置<p>生命周期管理策略ID</p>
                     * @param _lifecyclePolicyID <p>生命周期管理策略ID</p>
                     * 
                     */
                    void SetLifecyclePolicyID(const std::string& _lifecyclePolicyID);

                    /**
                     * 判断参数 LifecyclePolicyID 是否已赋值
                     * @return LifecyclePolicyID 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>生命周期管理策略所关联的目录路径列表，每个路径必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。</p><p>示例：</p><ul><li>若挂载的是CFS根目录 /，需关联挂载路径下的 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需关联挂载路径下的 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @return Paths <p>生命周期管理策略所关联的目录路径列表，每个路径必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。</p><p>示例：</p><ul><li>若挂载的是CFS根目录 /，需关联挂载路径下的 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需关联挂载路径下的 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * 
                     */
                    std::vector<PathInfo> GetPaths() const;

                    /**
                     * 设置<p>生命周期管理策略所关联的目录路径列表，每个路径必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。</p><p>示例：</p><ul><li>若挂载的是CFS根目录 /，需关联挂载路径下的 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需关联挂载路径下的 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @param _paths <p>生命周期管理策略所关联的目录路径列表，每个路径必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。</p><p>示例：</p><ul><li>若挂载的是CFS根目录 /，需关联挂载路径下的 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需关联挂载路径下的 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * 
                     */
                    void SetPaths(const std::vector<PathInfo>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * <p>生命周期管理策略ID</p>
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                    /**
                     * <p>生命周期管理策略所关联的目录路径列表，每个路径必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。</p><p>示例：</p><ul><li>若挂载的是CFS根目录 /，需关联挂载路径下的 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需关联挂载路径下的 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     */
                    std::vector<PathInfo> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_APPLYPATHLIFECYCLEPOLICYREQUEST_H_
