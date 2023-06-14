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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSP_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSP_H_

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
                * 创建api返回
                */
                class CreateApiRsp : public AbstractModel
                {
                public:
                    CreateApiRsp();
                    ~CreateApiRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取api id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId api id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置api id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId api id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 请求方法
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间
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
                     * 获取导入状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 导入状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置导入状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 导入状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取api name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiName api name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置api name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiName api name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                private:

                    /**
                     * api id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 导入状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * api name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIRSP_H_
