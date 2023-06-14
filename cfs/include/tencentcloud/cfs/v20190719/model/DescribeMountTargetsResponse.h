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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMOUNTTARGETSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMOUNTTARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/MountInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeMountTargets返回参数结构体
                */
                class DescribeMountTargetsResponse : public AbstractModel
                {
                public:
                    DescribeMountTargetsResponse();
                    ~DescribeMountTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取挂载点详情
                     * @return MountTargets 挂载点详情
                     * 
                     */
                    std::vector<MountInfo> GetMountTargets() const;

                    /**
                     * 判断参数 MountTargets 是否已赋值
                     * @return MountTargets 是否已赋值
                     * 
                     */
                    bool MountTargetsHasBeenSet() const;

                    /**
                     * 获取挂载点数量
                     * @return NumberOfMountTargets 挂载点数量
                     * 
                     */
                    int64_t GetNumberOfMountTargets() const;

                    /**
                     * 判断参数 NumberOfMountTargets 是否已赋值
                     * @return NumberOfMountTargets 是否已赋值
                     * 
                     */
                    bool NumberOfMountTargetsHasBeenSet() const;

                private:

                    /**
                     * 挂载点详情
                     */
                    std::vector<MountInfo> m_mountTargets;
                    bool m_mountTargetsHasBeenSet;

                    /**
                     * 挂载点数量
                     */
                    int64_t m_numberOfMountTargets;
                    bool m_numberOfMountTargetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMOUNTTARGETSRESPONSE_H_
