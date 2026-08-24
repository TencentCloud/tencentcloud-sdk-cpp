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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDRILLPAIRSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDRILLPAIRSREQUEST_H_

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
                * DeleteDrillPairs请求参数结构体
                */
                class DeleteDrillPairsRequest : public AbstractModel
                {
                public:
                    DeleteDrillPairsRequest();
                    ~DeleteDrillPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除演练对的类型，其类型枚举跟复制对保持一致。枚举值：DISK / INSTANCE / CFS。
                     * @return DrillPairType 要删除演练对的类型，其类型枚举跟复制对保持一致。枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    std::string GetDrillPairType() const;

                    /**
                     * 设置要删除演练对的类型，其类型枚举跟复制对保持一致。枚举值：DISK / INSTANCE / CFS。
                     * @param _drillPairType 要删除演练对的类型，其类型枚举跟复制对保持一致。枚举值：DISK / INSTANCE / CFS。
                     * 
                     */
                    void SetDrillPairType(const std::string& _drillPairType);

                    /**
                     * 判断参数 DrillPairType 是否已赋值
                     * @return DrillPairType 是否已赋值
                     * 
                     */
                    bool DrillPairTypeHasBeenSet() const;

                    /**
                     * 获取要删除的演练对列表。长度范围 [1, 10]。
                     * @return DrillPairIds 要删除的演练对列表。长度范围 [1, 10]。
                     * 
                     */
                    std::vector<std::string> GetDrillPairIds() const;

                    /**
                     * 设置要删除的演练对列表。长度范围 [1, 10]。
                     * @param _drillPairIds 要删除的演练对列表。长度范围 [1, 10]。
                     * 
                     */
                    void SetDrillPairIds(const std::vector<std::string>& _drillPairIds);

                    /**
                     * 判断参数 DrillPairIds 是否已赋值
                     * @return DrillPairIds 是否已赋值
                     * 
                     */
                    bool DrillPairIdsHasBeenSet() const;

                    /**
                     * 获取要删除的演练组id列表。
                     * @return DrillGroupIds 要删除的演练组id列表。
                     * 
                     */
                    std::vector<std::string> GetDrillGroupIds() const;

                    /**
                     * 设置要删除的演练组id列表。
                     * @param _drillGroupIds 要删除的演练组id列表。
                     * 
                     */
                    void SetDrillGroupIds(const std::vector<std::string>& _drillGroupIds);

                    /**
                     * 判断参数 DrillGroupIds 是否已赋值
                     * @return DrillGroupIds 是否已赋值
                     * 
                     */
                    bool DrillGroupIdsHasBeenSet() const;

                    /**
                     * 获取是否一并删除演练CFS/CVM/DISK演练资源。
                     * @return DeleteDrillResource 是否一并删除演练CFS/CVM/DISK演练资源。
                     * 
                     */
                    bool GetDeleteDrillResource() const;

                    /**
                     * 设置是否一并删除演练CFS/CVM/DISK演练资源。
                     * @param _deleteDrillResource 是否一并删除演练CFS/CVM/DISK演练资源。
                     * 
                     */
                    void SetDeleteDrillResource(const bool& _deleteDrillResource);

                    /**
                     * 判断参数 DeleteDrillResource 是否已赋值
                     * @return DeleteDrillResource 是否已赋值
                     * 
                     */
                    bool DeleteDrillResourceHasBeenSet() const;

                private:

                    /**
                     * 要删除演练对的类型，其类型枚举跟复制对保持一致。枚举值：DISK / INSTANCE / CFS。
                     */
                    std::string m_drillPairType;
                    bool m_drillPairTypeHasBeenSet;

                    /**
                     * 要删除的演练对列表。长度范围 [1, 10]。
                     */
                    std::vector<std::string> m_drillPairIds;
                    bool m_drillPairIdsHasBeenSet;

                    /**
                     * 要删除的演练组id列表。
                     */
                    std::vector<std::string> m_drillGroupIds;
                    bool m_drillGroupIdsHasBeenSet;

                    /**
                     * 是否一并删除演练CFS/CVM/DISK演练资源。
                     */
                    bool m_deleteDrillResource;
                    bool m_deleteDrillResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DELETEDRILLPAIRSREQUEST_H_
