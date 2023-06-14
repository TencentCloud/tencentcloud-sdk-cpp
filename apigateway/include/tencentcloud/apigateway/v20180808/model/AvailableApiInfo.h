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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_AVAILABLEAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_AVAILABLEAPIINFO_H_

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
                * 插件相关的API信息。
                */
                class AvailableApiInfo : public AbstractModel
                {
                public:
                    AvailableApiInfo();
                    ~AvailableApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API ID。
                     * @return ApiId API ID。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID。
                     * @param _apiId API ID。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取API名称。
                     * @return ApiName API名称。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API名称。
                     * @param _apiName API名称。
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取API类型。
                     * @return ApiType API类型。
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API类型。
                     * @param _apiType API类型。
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API路径。
                     * @return Path API路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API路径。
                     * @param _path API路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API方法。
                     * @return Method API方法。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API方法。
                     * @param _method API方法。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取API是否绑定其他插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachedOtherPlugin API是否绑定其他插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAttachedOtherPlugin() const;

                    /**
                     * 设置API是否绑定其他插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachedOtherPlugin API是否绑定其他插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachedOtherPlugin(const bool& _attachedOtherPlugin);

                    /**
                     * 判断参数 AttachedOtherPlugin 是否已赋值
                     * @return AttachedOtherPlugin 是否已赋值
                     * 
                     */
                    bool AttachedOtherPluginHasBeenSet() const;

                    /**
                     * 获取API是否绑定当前插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAttached API是否绑定当前插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAttached() const;

                    /**
                     * 设置API是否绑定当前插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAttached API是否绑定当前插件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAttached(const bool& _isAttached);

                    /**
                     * 判断参数 IsAttached 是否已赋值
                     * @return IsAttached 是否已赋值
                     * 
                     */
                    bool IsAttachedHasBeenSet() const;

                private:

                    /**
                     * API ID。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API名称。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API类型。
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API方法。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * API是否绑定其他插件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_attachedOtherPlugin;
                    bool m_attachedOtherPluginHasBeenSet;

                    /**
                     * API是否绑定当前插件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAttached;
                    bool m_isAttachedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_AVAILABLEAPIINFO_H_
