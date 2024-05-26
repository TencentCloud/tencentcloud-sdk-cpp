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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLPKGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLPKGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeCall设备信息
                */
                class TWeCallPkgInfo : public AbstractModel
                {
                public:
                    TWeCallPkgInfo();
                    ~TWeCallPkgInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgId 包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pkgId 包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgType 包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPkgType() const;

                    /**
                     * 设置包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pkgType 包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPkgType(const int64_t& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     * 
                     */
                    bool PkgTypeHasBeenSet() const;

                    /**
                     * 获取生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 生效时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseUsedNum 已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLicenseUsedNum() const;

                    /**
                     * 设置已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenseUsedNum 已使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenseUsedNum(const int64_t& _licenseUsedNum);

                    /**
                     * 判断参数 LicenseUsedNum 是否已赋值
                     * @return LicenseUsedNum 是否已赋值
                     * 
                     */
                    bool LicenseUsedNumHasBeenSet() const;

                    /**
                     * 获取总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseTotalNum 总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLicenseTotalNum() const;

                    /**
                     * 设置总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenseTotalNum 总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenseTotalNum(const int64_t& _licenseTotalNum);

                    /**
                     * 判断参数 LicenseTotalNum 是否已赋值
                     * @return LicenseTotalNum 是否已赋值
                     * 
                     */
                    bool LicenseTotalNumHasBeenSet() const;

                private:

                    /**
                     * 包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 包类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                    /**
                     * 生效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 已使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_licenseUsedNum;
                    bool m_licenseUsedNumHasBeenSet;

                    /**
                     * 总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_licenseTotalNum;
                    bool m_licenseTotalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLPKGINFO_H_
