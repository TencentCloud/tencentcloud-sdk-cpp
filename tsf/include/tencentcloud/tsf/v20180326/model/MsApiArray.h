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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MSAPIARRAY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MSAPIARRAY_H_

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
                * 微服务API数组
                */
                class MsApiArray : public AbstractModel
                {
                public:
                    MsApiArray();
                    ~MsApiArray() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>API 请求路径</p>
                     * @return Path <p>API 请求路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>API 请求路径</p>
                     * @param _path <p>API 请求路径</p>
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
                     * 获取<p>请求方法</p>
                     * @return Method <p>请求方法</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>请求方法</p>
                     * @param _method <p>请求方法</p>
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
                     * 获取<p>方法描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>方法描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>方法描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>方法描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>API状态 0:离线 1:在线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>API状态 0:离线 1:在线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>API状态 0:离线 1:在线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>API状态 0:离线 1:在线</p>
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
                     * 获取<p>API ID</p>
                     * @return ApiId <p>API ID</p>
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置<p>API ID</p>
                     * @param _apiId <p>API ID</p>
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
                     * 获取<p>API来源</p><p>枚举值：</p><ul><li>FROM_CONSUL： 服务注册</li><li>FROM_MANUAL： 手动录入</li></ul>
                     * @return SrcTypeName <p>API来源</p><p>枚举值：</p><ul><li>FROM_CONSUL： 服务注册</li><li>FROM_MANUAL： 手动录入</li></ul>
                     * 
                     */
                    std::string GetSrcTypeName() const;

                    /**
                     * 设置<p>API来源</p><p>枚举值：</p><ul><li>FROM_CONSUL： 服务注册</li><li>FROM_MANUAL： 手动录入</li></ul>
                     * @param _srcTypeName <p>API来源</p><p>枚举值：</p><ul><li>FROM_CONSUL： 服务注册</li><li>FROM_MANUAL： 手动录入</li></ul>
                     * 
                     */
                    void SetSrcTypeName(const std::string& _srcTypeName);

                    /**
                     * 判断参数 SrcTypeName 是否已赋值
                     * @return SrcTypeName 是否已赋值
                     * 
                     */
                    bool SrcTypeNameHasBeenSet() const;

                private:

                    /**
                     * <p>API 请求路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>请求方法</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>方法描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>API状态 0:离线 1:在线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>API ID</p>
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * <p>API来源</p><p>枚举值：</p><ul><li>FROM_CONSUL： 服务注册</li><li>FROM_MANUAL： 手动录入</li></ul>
                     */
                    std::string m_srcTypeName;
                    bool m_srcTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MSAPIARRAY_H_
