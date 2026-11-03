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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTSTORAGESRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTSTORAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CFSFileSystemInfo.h>
#include <tencentcloud/dlc/v20210125/model/COSBucketInfo.h>
#include <tencentcloud/dlc/v20210125/model/CFSTurboFileSystemInfo.h>
#include <tencentcloud/dlc/v20210125/model/GooseFSClustersInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ListStorages返回参数结构体
                */
                class ListStoragesResponse : public AbstractModel
                {
                public:
                    ListStoragesResponse();
                    ~ListStoragesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CFS列表</p>
                     * @return CFSFileSystems <p>CFS列表</p>
                     * 
                     */
                    std::vector<CFSFileSystemInfo> GetCFSFileSystems() const;

                    /**
                     * 判断参数 CFSFileSystems 是否已赋值
                     * @return CFSFileSystems 是否已赋值
                     * 
                     */
                    bool CFSFileSystemsHasBeenSet() const;

                    /**
                     * 获取<p>COS列表</p>
                     * @return COSBuckets <p>COS列表</p>
                     * 
                     */
                    std::vector<COSBucketInfo> GetCOSBuckets() const;

                    /**
                     * 判断参数 COSBuckets 是否已赋值
                     * @return COSBuckets 是否已赋值
                     * 
                     */
                    bool COSBucketsHasBeenSet() const;

                    /**
                     * 获取<p>CFS Turbo 文件系统列表</p>
                     * @return CFSTurboFileSystems <p>CFS Turbo 文件系统列表</p>
                     * 
                     */
                    std::vector<CFSTurboFileSystemInfo> GetCFSTurboFileSystems() const;

                    /**
                     * 判断参数 CFSTurboFileSystems 是否已赋值
                     * @return CFSTurboFileSystems 是否已赋值
                     * 
                     */
                    bool CFSTurboFileSystemsHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS 集群列表（状态为 ACTIVE 的可用集群）</p>
                     * @return GooseFSClusters <p>GooseFS 集群列表（状态为 ACTIVE 的可用集群）</p>
                     * 
                     */
                    std::vector<GooseFSClustersInfo> GetGooseFSClusters() const;

                    /**
                     * 判断参数 GooseFSClusters 是否已赋值
                     * @return GooseFSClusters 是否已赋值
                     * 
                     */
                    bool GooseFSClustersHasBeenSet() const;

                private:

                    /**
                     * <p>CFS列表</p>
                     */
                    std::vector<CFSFileSystemInfo> m_cFSFileSystems;
                    bool m_cFSFileSystemsHasBeenSet;

                    /**
                     * <p>COS列表</p>
                     */
                    std::vector<COSBucketInfo> m_cOSBuckets;
                    bool m_cOSBucketsHasBeenSet;

                    /**
                     * <p>CFS Turbo 文件系统列表</p>
                     */
                    std::vector<CFSTurboFileSystemInfo> m_cFSTurboFileSystems;
                    bool m_cFSTurboFileSystemsHasBeenSet;

                    /**
                     * <p>GooseFS 集群列表（状态为 ACTIVE 的可用集群）</p>
                     */
                    std::vector<GooseFSClustersInfo> m_gooseFSClusters;
                    bool m_gooseFSClustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTSTORAGESRESPONSE_H_
