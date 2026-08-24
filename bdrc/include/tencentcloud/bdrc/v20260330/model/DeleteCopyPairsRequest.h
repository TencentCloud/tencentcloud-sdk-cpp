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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DELETECOPYPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DELETECOPYPAIRSREQUEST_H_

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
                * DeleteCopyPairs请求参数结构体
                */
                class DeleteCopyPairsRequest : public AbstractModel
                {
                public:
                    DeleteCopyPairsRequest();
                    ~DeleteCopyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的复制对ID列表（长度 1~10）
                     * @return CopyPairIds 要删除的复制对ID列表（长度 1~10）
                     * 
                     */
                    std::vector<std::string> GetCopyPairIds() const;

                    /**
                     * 设置要删除的复制对ID列表（长度 1~10）
                     * @param _copyPairIds 要删除的复制对ID列表（长度 1~10）
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
                     * 获取要删除复制对的类型，可选值：DISK、INSTANCE、CFS
                     * @return CopyPairType 要删除复制对的类型，可选值：DISK、INSTANCE、CFS
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置要删除复制对的类型，可选值：DISK、INSTANCE、CFS
                     * @param _copyPairType 要删除复制对的类型，可选值：DISK、INSTANCE、CFS
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                    /**
                     * 获取是否一并删除容灾站点云盘，默认 true（容灾盘数据可能处于中间状态，保留也无法正常使用）
                     * @return DeleteTargetResource 是否一并删除容灾站点云盘，默认 true（容灾盘数据可能处于中间状态，保留也无法正常使用）
                     * 
                     */
                    bool GetDeleteTargetResource() const;

                    /**
                     * 设置是否一并删除容灾站点云盘，默认 true（容灾盘数据可能处于中间状态，保留也无法正常使用）
                     * @param _deleteTargetResource 是否一并删除容灾站点云盘，默认 true（容灾盘数据可能处于中间状态，保留也无法正常使用）
                     * 
                     */
                    void SetDeleteTargetResource(const bool& _deleteTargetResource);

                    /**
                     * 判断参数 DeleteTargetResource 是否已赋值
                     * @return DeleteTargetResource 是否已赋值
                     * 
                     */
                    bool DeleteTargetResourceHasBeenSet() const;

                private:

                    /**
                     * 要删除的复制对ID列表（长度 1~10）
                     */
                    std::vector<std::string> m_copyPairIds;
                    bool m_copyPairIdsHasBeenSet;

                    /**
                     * 要删除复制对的类型，可选值：DISK、INSTANCE、CFS
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                    /**
                     * 是否一并删除容灾站点云盘，默认 true（容灾盘数据可能处于中间状态，保留也无法正常使用）
                     */
                    bool m_deleteTargetResource;
                    bool m_deleteTargetResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DELETECOPYPAIRSREQUEST_H_
