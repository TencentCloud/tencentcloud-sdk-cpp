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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTEVENTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTEVENTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件导出结果
                */
                class ExportEventDTO : public AbstractModel
                {
                public:
                    ExportEventDTO();
                    ~ExportEventDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPath cos文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置cos文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPath cos文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketName 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketName 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取前端下载token token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token 前端下载token token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置前端下载token token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _token 前端下载token token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取secretId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretId secretId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置secretId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretId secretId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取secretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey secretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置secretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey secretKey
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * @return ExpiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * cos文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 前端下载token token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * secretId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * secretKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTEVENTDTO_H_
