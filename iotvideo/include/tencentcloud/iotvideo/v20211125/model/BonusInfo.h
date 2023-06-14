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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_BONUSINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_BONUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 运营活动资源包信息
                */
                class BonusInfo : public AbstractModel
                {
                public:
                    BonusInfo();
                    ~BonusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源包ID
                     * @return BonusId 资源包ID
                     * 
                     */
                    uint64_t GetBonusId() const;

                    /**
                     * 设置资源包ID
                     * @param _bonusId 资源包ID
                     * 
                     */
                    void SetBonusId(const uint64_t& _bonusId);

                    /**
                     * 判断参数 BonusId 是否已赋值
                     * @return BonusId 是否已赋值
                     * 
                     */
                    bool BonusIdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取资源包配置ID
                     * @return PackageId 资源包配置ID
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置资源包配置ID
                     * @param _packageId 资源包配置ID
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取资源总数
                     * @return Total 资源总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置资源总数
                     * @param _total 资源总数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取资源消耗总数
                     * @return Used 资源消耗总数
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置资源消耗总数
                     * @param _used 资源消耗总数
                     * 
                     */
                    void SetUsed(const uint64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取资源包过期时间
                     * @return ExpireTime 资源包过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置资源包过期时间
                     * @param _expireTime 资源包过期时间
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源包创建时间
                     * @return CreateTime 资源包创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置资源包创建时间
                     * @param _createTime 资源包创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取资源包状态 0.未使用 1.使用中 2.已退款 3.已过期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源包状态 0.未使用 1.使用中 2.已退款 3.已过期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置资源包状态 0.未使用 1.使用中 2.已退款 3.已过期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源包状态 0.未使用 1.使用中 2.已退款 3.已过期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 资源包ID
                     */
                    uint64_t m_bonusId;
                    bool m_bonusIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 资源包配置ID
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 资源总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 资源消耗总数
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 资源包过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源包创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 资源包状态 0.未使用 1.使用中 2.已退款 3.已过期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_BONUSINFO_H_
