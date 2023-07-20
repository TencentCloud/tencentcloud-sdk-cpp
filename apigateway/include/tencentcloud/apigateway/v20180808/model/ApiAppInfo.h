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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 应用信息
                */
                class ApiAppInfo : public AbstractModel
                {
                public:
                    ApiAppInfo();
                    ~ApiAppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiAppName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiAppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiAppName(const std::string& _apiAppName);

                    /**
                     * 判断参数 ApiAppName 是否已赋值
                     * @return ApiAppName 是否已赋值
                     * 
                     */
                    bool ApiAppNameHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ApiAppId 应用ID
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置应用ID
                     * @param _apiAppId 应用ID
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取应用SECRET
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAppSecret 应用SECRET
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiAppSecret() const;

                    /**
                     * 设置应用SECRET
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiAppSecret 应用SECRET
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiAppSecret(const std::string& _apiAppSecret);

                    /**
                     * 判断参数 ApiAppSecret 是否已赋值
                     * @return ApiAppSecret 是否已赋值
                     * 
                     */
                    bool ApiAppSecretHasBeenSet() const;

                    /**
                     * 获取应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAppDesc 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiAppDesc() const;

                    /**
                     * 设置应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiAppDesc 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiAppDesc(const std::string& _apiAppDesc);

                    /**
                     * 判断参数 ApiAppDesc 是否已赋值
                     * @return ApiAppDesc 是否已赋值
                     * 
                     */
                    bool ApiAppDescHasBeenSet() const;

                    /**
                     * 获取创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
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
                     * 获取修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
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
                     * 获取应用KEY
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAppKey 应用KEY
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiAppKey() const;

                    /**
                     * 设置应用KEY
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiAppKey 应用KEY
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiAppKey(const std::string& _apiAppKey);

                    /**
                     * 判断参数 ApiAppKey 是否已赋值
                     * @return ApiAppKey 是否已赋值
                     * 
                     */
                    bool ApiAppKeyHasBeenSet() const;

                private:

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAppName;
                    bool m_apiAppNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * 应用SECRET
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAppSecret;
                    bool m_apiAppSecretHasBeenSet;

                    /**
                     * 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAppDesc;
                    bool m_apiAppDescHasBeenSet;

                    /**
                     * 创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 应用KEY
注意:此字段可能返回null，表示取不到有效值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAppKey;
                    bool m_apiAppKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFO_H_
