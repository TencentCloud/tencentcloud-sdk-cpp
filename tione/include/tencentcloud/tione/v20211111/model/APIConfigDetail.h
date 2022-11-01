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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_APICONFIGDETAIL_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_APICONFIGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 接口描述信息
                */
                class APIConfigDetail : public AbstractModel
                {
                public:
                    APIConfigDetail();
                    ~APIConfigDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接口id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 接口id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetId() const;

                    /**
                     * 设置接口id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id 接口id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取接口所属服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceGroupId 接口所属服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置接口所属服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceGroupId 接口所属服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取接口描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 接口描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置接口描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 接口描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelativeUrl 相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelativeUrl() const;

                    /**
                     * 设置相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelativeUrl 相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelativeUrl(const std::string& _relativeUrl);

                    /**
                     * 判断参数 RelativeUrl 是否已赋值
                     * @return RelativeUrl 是否已赋值
                     */
                    bool RelativeUrlHasBeenSet() const;

                    /**
                     * 获取服务类型 HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 服务类型 HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务类型 HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceType 服务类型 HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取GET POST
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpMethod GET POST
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpMethod() const;

                    /**
                     * 设置GET POST
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpMethod GET POST
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpMethod(const std::string& _httpMethod);

                    /**
                     * 判断参数 HttpMethod 是否已赋值
                     * @return HttpMethod 是否已赋值
                     */
                    bool HttpMethodHasBeenSet() const;

                    /**
                     * 获取请求示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpInputExample 请求示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpInputExample() const;

                    /**
                     * 设置请求示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpInputExample 请求示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpInputExample(const std::string& _httpInputExample);

                    /**
                     * 判断参数 HttpInputExample 是否已赋值
                     * @return HttpInputExample 是否已赋值
                     */
                    bool HttpInputExampleHasBeenSet() const;

                    /**
                     * 获取回包示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpOutputExample 回包示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpOutputExample() const;

                    /**
                     * 设置回包示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpOutputExample 回包示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpOutputExample(const std::string& _httpOutputExample);

                    /**
                     * 判断参数 HttpOutputExample 是否已赋值
                     * @return HttpOutputExample 是否已赋值
                     */
                    bool HttpOutputExampleHasBeenSet() const;

                    /**
                     * 获取更新成员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedBy 更新成员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdatedBy() const;

                    /**
                     * 设置更新成员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedBy 更新成员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedBy(const std::string& _updatedBy);

                    /**
                     * 判断参数 UpdatedBy 是否已赋值
                     * @return UpdatedBy 是否已赋值
                     */
                    bool UpdatedByHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uin 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取子账号subuin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin 子账号subuin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置子账号subuin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubUin 子账号subuin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     */
                    bool SubUinHasBeenSet() const;

                private:

                    /**
                     * 接口id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 接口所属服务组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 接口描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 相对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relativeUrl;
                    bool m_relativeUrlHasBeenSet;

                    /**
                     * 服务类型 HTTP HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * GET POST
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpMethod;
                    bool m_httpMethodHasBeenSet;

                    /**
                     * 请求示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpInputExample;
                    bool m_httpInputExampleHasBeenSet;

                    /**
                     * 回包示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpOutputExample;
                    bool m_httpOutputExampleHasBeenSet;

                    /**
                     * 更新成员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedBy;
                    bool m_updatedByHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号subuin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_APICONFIGDETAIL_H_
