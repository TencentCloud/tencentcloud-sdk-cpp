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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_PACKAGEINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_PACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/PackageTransferOutInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 权益包基本信息
                */
                class PackageInfo : public AbstractModel
                {
                public:
                    PackageInfo();
                    ~PackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权益包ID。
                     * @return PackageId 权益包ID。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置权益包ID。
                     * @param _packageId 权益包ID。
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
                     * 获取权益包内权益点总量。
                     * @return Total 权益包内权益点总量。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置权益包内权益点总量。
                     * @param _total 权益包内权益点总量。
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
                     * 获取权益包内权益点余量。
                     * @return Balance 权益包内权益点余量。
                     * 
                     */
                    uint64_t GetBalance() const;

                    /**
                     * 设置权益包内权益点余量。
                     * @param _balance 权益包内权益点余量。
                     * 
                     */
                    void SetBalance(const uint64_t& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取权益包名称。
                     * @return Type 权益包名称。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置权益包名称。
                     * @param _type 权益包名称。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取权益点是转入时，来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceUin 权益点是转入时，来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSourceUin() const;

                    /**
                     * 设置权益点是转入时，来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceUin 权益点是转入时，来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceUin(const uint64_t& _sourceUin);

                    /**
                     * 判断参数 SourceUin 是否已赋值
                     * @return SourceUin 是否已赋值
                     * 
                     */
                    bool SourceUinHasBeenSet() const;

                    /**
                     * 获取权益点状态。
                     * @return Status 权益点状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置权益点状态。
                     * @param _status 权益点状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取过期时间。
                     * @return ExpireTime 过期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。
                     * @param _expireTime 过期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取生成时间。
                     * @return CreateTime 生成时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置生成时间。
                     * @param _createTime 生成时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取来源类型。
                     * @return SourceType 来源类型。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置来源类型。
                     * @param _sourceType 来源类型。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取转移信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferOutInfos 转移信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PackageTransferOutInfo> GetTransferOutInfos() const;

                    /**
                     * 设置转移信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transferOutInfos 转移信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransferOutInfos(const std::vector<PackageTransferOutInfo>& _transferOutInfos);

                    /**
                     * 判断参数 TransferOutInfos 是否已赋值
                     * @return TransferOutInfos 是否已赋值
                     * 
                     */
                    bool TransferOutInfosHasBeenSet() const;

                private:

                    /**
                     * 权益包ID。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 权益包内权益点总量。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 权益包内权益点余量。
                     */
                    uint64_t m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 权益包名称。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 权益点是转入时，来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sourceUin;
                    bool m_sourceUinHasBeenSet;

                    /**
                     * 权益点状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 过期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 生成时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 来源类型。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 转移信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PackageTransferOutInfo> m_transferOutInfos;
                    bool m_transferOutInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_PACKAGEINFO_H_
