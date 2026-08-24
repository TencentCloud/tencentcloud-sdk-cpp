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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYPROTECTGROUPREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYPROTECTGROUPREQUEST_H_

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
                * CreateDisasterRecoveryProtectGroup请求参数结构体
                */
                class CreateDisasterRecoveryProtectGroupRequest : public AbstractModel
                {
                public:
                    CreateDisasterRecoveryProtectGroupRequest();
                    ~CreateDisasterRecoveryProtectGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属容灾站点对id
                     * @return SitePairId 所属容灾站点对id
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置所属容灾站点对id
                     * @param _sitePairId 所属容灾站点对id
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                    /**
                     * 获取容灾保护组的产品类型
                     * @return ProtectGroupType 容灾保护组的产品类型
                     * 
                     */
                    std::string GetProtectGroupType() const;

                    /**
                     * 设置容灾保护组的产品类型
                     * @param _protectGroupType 容灾保护组的产品类型
                     * 
                     */
                    void SetProtectGroupType(const std::string& _protectGroupType);

                    /**
                     * 判断参数 ProtectGroupType 是否已赋值
                     * @return ProtectGroupType 是否已赋值
                     * 
                     */
                    bool ProtectGroupTypeHasBeenSet() const;

                    /**
                     * 获取容灾保护组预期rpo, 单位分钟（当前仅支持15分钟）
                     * @return RecoveryPointObjective 容灾保护组预期rpo, 单位分钟（当前仅支持15分钟）
                     * 
                     */
                    int64_t GetRecoveryPointObjective() const;

                    /**
                     * 设置容灾保护组预期rpo, 单位分钟（当前仅支持15分钟）
                     * @param _recoveryPointObjective 容灾保护组预期rpo, 单位分钟（当前仅支持15分钟）
                     * 
                     */
                    void SetRecoveryPointObjective(const int64_t& _recoveryPointObjective);

                    /**
                     * 判断参数 RecoveryPointObjective 是否已赋值
                     * @return RecoveryPointObjective 是否已赋值
                     * 
                     */
                    bool RecoveryPointObjectiveHasBeenSet() const;

                    /**
                     * 获取容灾保护组的名称，最大长度不能超60个字符。
                     * @return ProtectGroupName 容灾保护组的名称，最大长度不能超60个字符。
                     * 
                     */
                    std::string GetProtectGroupName() const;

                    /**
                     * 设置容灾保护组的名称，最大长度不能超60个字符。
                     * @param _protectGroupName 容灾保护组的名称，最大长度不能超60个字符。
                     * 
                     */
                    void SetProtectGroupName(const std::string& _protectGroupName);

                    /**
                     * 判断参数 ProtectGroupName 是否已赋值
                     * @return ProtectGroupName 是否已赋值
                     * 
                     */
                    bool ProtectGroupNameHasBeenSet() const;

                    /**
                     * 获取数据复制方向， ['POSITIVE', 'REVERSE']
                     * @return DataDirection 数据复制方向， ['POSITIVE', 'REVERSE']
                     * 
                     */
                    std::string GetDataDirection() const;

                    /**
                     * 设置数据复制方向， ['POSITIVE', 'REVERSE']
                     * @param _dataDirection 数据复制方向， ['POSITIVE', 'REVERSE']
                     * 
                     */
                    void SetDataDirection(const std::string& _dataDirection);

                    /**
                     * 判断参数 DataDirection 是否已赋值
                     * @return DataDirection 是否已赋值
                     * 
                     */
                    bool DataDirectionHasBeenSet() const;

                private:

                    /**
                     * 所属容灾站点对id
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 容灾保护组的产品类型
                     */
                    std::string m_protectGroupType;
                    bool m_protectGroupTypeHasBeenSet;

                    /**
                     * 容灾保护组预期rpo, 单位分钟（当前仅支持15分钟）
                     */
                    int64_t m_recoveryPointObjective;
                    bool m_recoveryPointObjectiveHasBeenSet;

                    /**
                     * 容灾保护组的名称，最大长度不能超60个字符。
                     */
                    std::string m_protectGroupName;
                    bool m_protectGroupNameHasBeenSet;

                    /**
                     * 数据复制方向， ['POSITIVE', 'REVERSE']
                     */
                    std::string m_dataDirection;
                    bool m_dataDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEDISASTERRECOVERYPROTECTGROUPREQUEST_H_
