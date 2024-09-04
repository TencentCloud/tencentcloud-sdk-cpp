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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_TERMINATEWORKSPACESREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_TERMINATEWORKSPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * TerminateWorkspaces请求参数结构体
                */
                class TerminateWorkspacesRequest : public AbstractModel
                {
                public:
                    TerminateWorkspacesRequest();
                    ~TerminateWorkspacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间ID
                     * @return SpaceIds 工作空间ID
                     * 
                     */
                    std::vector<std::string> GetSpaceIds() const;

                    /**
                     * 设置工作空间ID
                     * @param _spaceIds 工作空间ID
                     * 
                     */
                    void SetSpaceIds(const std::vector<std::string>& _spaceIds);

                    /**
                     * 判断参数 SpaceIds 是否已赋值
                     * @return SpaceIds 是否已赋值
                     * 
                     */
                    bool SpaceIdsHasBeenSet() const;

                    /**
                     * 获取释放空间挂载的包年包月数据盘。true表示销毁空间同时释放包年包月数据盘，false表示只销毁空间。
                     * @return ReleasePrepaidDataDisks 释放空间挂载的包年包月数据盘。true表示销毁空间同时释放包年包月数据盘，false表示只销毁空间。
                     * 
                     */
                    bool GetReleasePrepaidDataDisks() const;

                    /**
                     * 设置释放空间挂载的包年包月数据盘。true表示销毁空间同时释放包年包月数据盘，false表示只销毁空间。
                     * @param _releasePrepaidDataDisks 释放空间挂载的包年包月数据盘。true表示销毁空间同时释放包年包月数据盘，false表示只销毁空间。
                     * 
                     */
                    void SetReleasePrepaidDataDisks(const bool& _releasePrepaidDataDisks);

                    /**
                     * 判断参数 ReleasePrepaidDataDisks 是否已赋值
                     * @return ReleasePrepaidDataDisks 是否已赋值
                     * 
                     */
                    bool ReleasePrepaidDataDisksHasBeenSet() const;

                private:

                    /**
                     * 工作空间ID
                     */
                    std::vector<std::string> m_spaceIds;
                    bool m_spaceIdsHasBeenSet;

                    /**
                     * 释放空间挂载的包年包月数据盘。true表示销毁空间同时释放包年包月数据盘，false表示只销毁空间。
                     */
                    bool m_releasePrepaidDataDisks;
                    bool m_releasePrepaidDataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_TERMINATEWORKSPACESREQUEST_H_
