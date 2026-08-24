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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_RUNCOPYPAIRTASKSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_RUNCOPYPAIRTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * RunCopyPairTasks请求参数结构体
                */
                class RunCopyPairTasksRequest : public AbstractModel
                {
                public:
                    RunCopyPairTasksRequest();
                    ~RunCopyPairTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取复制对ID列表
                     * @return CopyPairIds 复制对ID列表
                     * 
                     */
                    std::vector<std::string> GetCopyPairIds() const;

                    /**
                     * 设置复制对ID列表
                     * @param _copyPairIds 复制对ID列表
                     * 
                     */
                    void SetCopyPairIds(const std::vector<std::string>& _copyPairIds);

                    /**
                     * 判断参数 CopyPairIds 是否已赋值
                     * @return CopyPairIds 是否已赋值
                     * 
                     */
                    bool CopyPairIdsHasBeenSet() const;

                    /**
                     * 获取要启动复制对的类型（DISK/INSTANCE/CFS）
                     * @return CopyPairType 要启动复制对的类型（DISK/INSTANCE/CFS）
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置要启动复制对的类型（DISK/INSTANCE/CFS）
                     * @param _copyPairType 要启动复制对的类型（DISK/INSTANCE/CFS）
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                private:

                    /**
                     * 复制对ID列表
                     */
                    std::vector<std::string> m_copyPairIds;
                    bool m_copyPairIdsHasBeenSet;

                    /**
                     * 要启动复制对的类型（DISK/INSTANCE/CFS）
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RUNCOPYPAIRTASKSREQUEST_H_
