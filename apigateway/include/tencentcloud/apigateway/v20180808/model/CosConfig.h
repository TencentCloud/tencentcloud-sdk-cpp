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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_COSCONFIG_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_COSCONFIG_H_

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
                * cos类型的api配置
                */
                class CosConfig : public AbstractModel
                {
                public:
                    CosConfig();
                    ~CosConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API调用后端COS的方式，前端请求方法与Action的可选值为：
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action API调用后端COS的方式，前端请求方法与Action的可选值为：
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置API调用后端COS的方式，前端请求方法与Action的可选值为：
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action API调用后端COS的方式，前端请求方法与Action的可选值为：
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取API后端COS的存储桶名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketName API后端COS的存储桶名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置API后端COS的存储桶名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketName API后端COS的存储桶名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取API调用后端COS的签名开关，默认为false。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authorization API调用后端COS的签名开关，默认为false。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAuthorization() const;

                    /**
                     * 设置API调用后端COS的签名开关，默认为false。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorization API调用后端COS的签名开关，默认为false。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthorization(const bool& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取API后端COS的路径匹配模式，可选值：
BackEndPath ： 后端路径匹配
FullPath ： 全路径匹配

默认值为：BackEndPath
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathMatchMode API后端COS的路径匹配模式，可选值：
BackEndPath ： 后端路径匹配
FullPath ： 全路径匹配

默认值为：BackEndPath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPathMatchMode() const;

                    /**
                     * 设置API后端COS的路径匹配模式，可选值：
BackEndPath ： 后端路径匹配
FullPath ： 全路径匹配

默认值为：BackEndPath
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathMatchMode API后端COS的路径匹配模式，可选值：
BackEndPath ： 后端路径匹配
FullPath ： 全路径匹配

默认值为：BackEndPath
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathMatchMode(const std::string& _pathMatchMode);

                    /**
                     * 判断参数 PathMatchMode 是否已赋值
                     * @return PathMatchMode 是否已赋值
                     * 
                     */
                    bool PathMatchModeHasBeenSet() const;

                private:

                    /**
                     * API调用后端COS的方式，前端请求方法与Action的可选值为：
GET：GetObject
PUT：PutObject
POST：PostObject、AppendObject
HEAD： HeadObject
DELETE： DeleteObject。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * API后端COS的存储桶名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * API调用后端COS的签名开关，默认为false。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * API后端COS的路径匹配模式，可选值：
BackEndPath ： 后端路径匹配
FullPath ： 全路径匹配

默认值为：BackEndPath
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathMatchMode;
                    bool m_pathMatchModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_COSCONFIG_H_
