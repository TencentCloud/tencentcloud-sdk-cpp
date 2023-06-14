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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APIVERSIONARRAY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APIVERSIONARRAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * API版本数组
                */
                class ApiVersionArray : public AbstractModel
                {
                public:
                    ApiVersionArray();
                    ~ApiVersionArray() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取App ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId App ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置App ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId App ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取App 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName App 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置App 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName App 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取App 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgVersion App 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPkgVersion() const;

                    /**
                     * 设置App 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pkgVersion App 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPkgVersion(const std::string& _pkgVersion);

                    /**
                     * 判断参数 PkgVersion 是否已赋值
                     * @return PkgVersion 是否已赋值
                     * 
                     */
                    bool PkgVersionHasBeenSet() const;

                private:

                    /**
                     * App ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * App 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * App 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgVersion;
                    bool m_pkgVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIVERSIONARRAY_H_
