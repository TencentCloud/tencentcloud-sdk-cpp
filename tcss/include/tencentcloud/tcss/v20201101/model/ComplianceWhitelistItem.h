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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEWHITELISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEWHITELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一条白名单记录。
                */
                class ComplianceWhitelistItem : public AbstractModel
                {
                public:
                    ComplianceWhitelistItem();
                    ~ComplianceWhitelistItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单项的ID。
                     * @return WhitelistItemId 白名单项的ID。
                     * 
                     */
                    uint64_t GetWhitelistItemId() const;

                    /**
                     * 设置白名单项的ID。
                     * @param _whitelistItemId 白名单项的ID。
                     * 
                     */
                    void SetWhitelistItemId(const uint64_t& _whitelistItemId);

                    /**
                     * 判断参数 WhitelistItemId 是否已赋值
                     * @return WhitelistItemId 是否已赋值
                     * 
                     */
                    bool WhitelistItemIdHasBeenSet() const;

                    /**
                     * 获取客户检测项的ID。
                     * @return CustomerPolicyItemId 客户检测项的ID。
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置客户检测项的ID。
                     * @param _customerPolicyItemId 客户检测项的ID。
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取检测项的名称。
                     * @return Name 检测项的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检测项的名称。
                     * @param _name 检测项的名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取合规标准的名称。
                     * @return StandardName 合规标准的名称。
                     * 
                     */
                    std::string GetStandardName() const;

                    /**
                     * 设置合规标准的名称。
                     * @param _standardName 合规标准的名称。
                     * 
                     */
                    void SetStandardName(const std::string& _standardName);

                    /**
                     * 判断参数 StandardName 是否已赋值
                     * @return StandardName 是否已赋值
                     * 
                     */
                    bool StandardNameHasBeenSet() const;

                    /**
                     * 获取合规标准的ID。
                     * @return StandardId 合规标准的ID。
                     * 
                     */
                    uint64_t GetStandardId() const;

                    /**
                     * 设置合规标准的ID。
                     * @param _standardId 合规标准的ID。
                     * 
                     */
                    void SetStandardId(const uint64_t& _standardId);

                    /**
                     * 判断参数 StandardId 是否已赋值
                     * @return StandardId 是否已赋值
                     * 
                     */
                    bool StandardIdHasBeenSet() const;

                    /**
                     * 获取检测项影响的资产的数目。
                     * @return AffectedAssetCount 检测项影响的资产的数目。
                     * 
                     */
                    uint64_t GetAffectedAssetCount() const;

                    /**
                     * 设置检测项影响的资产的数目。
                     * @param _affectedAssetCount 检测项影响的资产的数目。
                     * 
                     */
                    void SetAffectedAssetCount(const uint64_t& _affectedAssetCount);

                    /**
                     * 判断参数 AffectedAssetCount 是否已赋值
                     * @return AffectedAssetCount 是否已赋值
                     * 
                     */
                    bool AffectedAssetCountHasBeenSet() const;

                    /**
                     * 获取最后更新的时间
                     * @return LastUpdateTime 最后更新的时间
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后更新的时间
                     * @param _lastUpdateTime 最后更新的时间
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取加入到白名单的时间
                     * @return InsertTime 加入到白名单的时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置加入到白名单的时间
                     * @param _insertTime 加入到白名单的时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * 白名单项的ID。
                     */
                    uint64_t m_whitelistItemId;
                    bool m_whitelistItemIdHasBeenSet;

                    /**
                     * 客户检测项的ID。
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * 检测项的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合规标准的名称。
                     */
                    std::string m_standardName;
                    bool m_standardNameHasBeenSet;

                    /**
                     * 合规标准的ID。
                     */
                    uint64_t m_standardId;
                    bool m_standardIdHasBeenSet;

                    /**
                     * 检测项影响的资产的数目。
                     */
                    uint64_t m_affectedAssetCount;
                    bool m_affectedAssetCountHasBeenSet;

                    /**
                     * 最后更新的时间
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 加入到白名单的时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEWHITELISTITEM_H_
