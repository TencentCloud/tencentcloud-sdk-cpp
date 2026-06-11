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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_TERMINATEREMOTEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_TERMINATEREMOTEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TerminateRemoteDisks请求参数结构体
                */
                class TerminateRemoteDisksRequest : public AbstractModel
                {
                public:
                    TerminateRemoteDisksRequest();
                    ~TerminateRemoteDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一个或多个单副本SSD硬盘ID。</p>
                     * @return RemoteDiskIds <p>一个或多个单副本SSD硬盘ID。</p>
                     * 
                     */
                    std::vector<std::string> GetRemoteDiskIds() const;

                    /**
                     * 设置<p>一个或多个单副本SSD硬盘ID。</p>
                     * @param _remoteDiskIds <p>一个或多个单副本SSD硬盘ID。</p>
                     * 
                     */
                    void SetRemoteDiskIds(const std::vector<std::string>& _remoteDiskIds);

                    /**
                     * 判断参数 RemoteDiskIds 是否已赋值
                     * @return RemoteDiskIds 是否已赋值
                     * 
                     */
                    bool RemoteDiskIdsHasBeenSet() const;

                private:

                    /**
                     * <p>一个或多个单副本SSD硬盘ID。</p>
                     */
                    std::vector<std::string> m_remoteDiskIds;
                    bool m_remoteDiskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_TERMINATEREMOTEDISKSREQUEST_H_
