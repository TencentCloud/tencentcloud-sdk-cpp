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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXSNAPSHOTRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXSNAPSHOTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/SandboxSnapshot.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateSandboxSnapshot返回参数结构体
                */
                class CreateSandboxSnapshotResponse : public AbstractModel
                {
                public:
                    CreateSandboxSnapshotResponse();
                    ~CreateSandboxSnapshotResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>沙箱快照</p>
                     * @return Snapshot <p>沙箱快照</p>
                     * 
                     */
                    SandboxSnapshot GetSnapshot() const;

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱快照</p>
                     */
                    SandboxSnapshot m_snapshot;
                    bool m_snapshotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXSNAPSHOTRESPONSE_H_
