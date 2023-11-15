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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UsagePlanBindEnvironment.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 使用计划详情。
                */
                class UsagePlanInfo : public AbstractModel
                {
                public:
                    UsagePlanInfo();
                    ~UsagePlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用计划唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanId 使用计划唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置使用计划唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePlanId 使用计划唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取使用计划名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanName 使用计划名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置使用计划名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePlanName 使用计划名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsagePlanName(const std::string& _usagePlanName);

                    /**
                     * 判断参数 UsagePlanName 是否已赋值
                     * @return UsagePlanName 是否已赋值
                     * 
                     */
                    bool UsagePlanNameHasBeenSet() const;

                    /**
                     * 获取使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanDesc 使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePlanDesc 使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsagePlanDesc(const std::string& _usagePlanDesc);

                    /**
                     * 判断参数 UsagePlanDesc 是否已赋值
                     * @return UsagePlanDesc 是否已赋值
                     * 
                     */
                    bool UsagePlanDescHasBeenSet() const;

                    /**
                     * 获取每秒请求限制数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRequestNumPreSec 每秒请求限制数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置每秒请求限制数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRequestNumPreSec 每秒请求限制数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec);

                    /**
                     * 判断参数 MaxRequestNumPreSec 是否已赋值
                     * @return MaxRequestNumPreSec 是否已赋值
                     * 
                     */
                    bool MaxRequestNumPreSecHasBeenSet() const;

                    /**
                     * 获取最大调用次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRequestNum 最大调用次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 设置最大调用次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRequestNum 最大调用次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRequestNum(const int64_t& _maxRequestNum);

                    /**
                     * 判断参数 MaxRequestNum 是否已赋值
                     * @return MaxRequestNum 是否已赋值
                     * 
                     */
                    bool MaxRequestNumHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindSecretIdTotalCount 绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBindSecretIdTotalCount() const;

                    /**
                     * 设置绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindSecretIdTotalCount 绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindSecretIdTotalCount(const int64_t& _bindSecretIdTotalCount);

                    /**
                     * 判断参数 BindSecretIdTotalCount 是否已赋值
                     * @return BindSecretIdTotalCount 是否已赋值
                     * 
                     */
                    bool BindSecretIdTotalCountHasBeenSet() const;

                    /**
                     * 获取绑定密钥的详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindSecretIds 绑定密钥的详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBindSecretIds() const;

                    /**
                     * 设置绑定密钥的详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindSecretIds 绑定密钥的详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindSecretIds(const std::vector<std::string>& _bindSecretIds);

                    /**
                     * 判断参数 BindSecretIds 是否已赋值
                     * @return BindSecretIds 是否已赋值
                     * 
                     */
                    bool BindSecretIdsHasBeenSet() const;

                    /**
                     * 获取绑定环境数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindEnvironmentTotalCount 绑定环境数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBindEnvironmentTotalCount() const;

                    /**
                     * 设置绑定环境数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindEnvironmentTotalCount 绑定环境数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindEnvironmentTotalCount(const int64_t& _bindEnvironmentTotalCount);

                    /**
                     * 判断参数 BindEnvironmentTotalCount 是否已赋值
                     * @return BindEnvironmentTotalCount 是否已赋值
                     * 
                     */
                    bool BindEnvironmentTotalCountHasBeenSet() const;

                    /**
                     * 获取绑定环境详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindEnvironments 绑定环境详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UsagePlanBindEnvironment> GetBindEnvironments() const;

                    /**
                     * 设置绑定环境详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindEnvironments 绑定环境详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindEnvironments(const std::vector<UsagePlanBindEnvironment>& _bindEnvironments);

                    /**
                     * 判断参数 BindEnvironments 是否已赋值
                     * @return BindEnvironments 是否已赋值
                     * 
                     */
                    bool BindEnvironmentsHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 使用计划唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * 使用计划名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * 使用计划描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * 每秒请求限制数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                    /**
                     * 最大调用次数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bindSecretIdTotalCount;
                    bool m_bindSecretIdTotalCountHasBeenSet;

                    /**
                     * 绑定密钥的详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bindSecretIds;
                    bool m_bindSecretIdsHasBeenSet;

                    /**
                     * 绑定环境数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bindEnvironmentTotalCount;
                    bool m_bindEnvironmentTotalCountHasBeenSet;

                    /**
                     * 绑定环境详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UsagePlanBindEnvironment> m_bindEnvironments;
                    bool m_bindEnvironmentsHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANINFO_H_
