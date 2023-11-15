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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOC_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * API文档基本信息
                */
                class APIDoc : public AbstractModel
                {
                public:
                    APIDoc();
                    ~APIDoc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API文档ID
                     * @return ApiDocId API文档ID
                     * 
                     */
                    std::string GetApiDocId() const;

                    /**
                     * 设置API文档ID
                     * @param _apiDocId API文档ID
                     * 
                     */
                    void SetApiDocId(const std::string& _apiDocId);

                    /**
                     * 判断参数 ApiDocId 是否已赋值
                     * @return ApiDocId 是否已赋值
                     * 
                     */
                    bool ApiDocIdHasBeenSet() const;

                    /**
                     * 获取API文档名称
                     * @return ApiDocName API文档名称
                     * 
                     */
                    std::string GetApiDocName() const;

                    /**
                     * 设置API文档名称
                     * @param _apiDocName API文档名称
                     * 
                     */
                    void SetApiDocName(const std::string& _apiDocName);

                    /**
                     * 判断参数 ApiDocName 是否已赋值
                     * @return ApiDocName 是否已赋值
                     * 
                     */
                    bool ApiDocNameHasBeenSet() const;

                    /**
                     * 获取API文档构建状态
                     * @return ApiDocStatus API文档构建状态
                     * 
                     */
                    std::string GetApiDocStatus() const;

                    /**
                     * 设置API文档构建状态
                     * @param _apiDocStatus API文档构建状态
                     * 
                     */
                    void SetApiDocStatus(const std::string& _apiDocStatus);

                    /**
                     * 判断参数 ApiDocStatus 是否已赋值
                     * @return ApiDocStatus 是否已赋值
                     * 
                     */
                    bool ApiDocStatusHasBeenSet() const;

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
                     * API文档ID
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                    /**
                     * API文档名称
                     */
                    std::string m_apiDocName;
                    bool m_apiDocNameHasBeenSet;

                    /**
                     * API文档构建状态
                     */
                    std::string m_apiDocStatus;
                    bool m_apiDocStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOC_H_
