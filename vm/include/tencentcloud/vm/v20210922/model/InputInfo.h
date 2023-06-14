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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_INPUTINFO_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_INPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 输入信息详情
                */
                class InputInfo : public AbstractModel
                {
                public:
                    InputInfo();
                    ~InputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取传入的类型可选：URL，COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 传入的类型可选：URL，COS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置传入的类型可选：URL，COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 传入的类型可选：URL，COS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Url地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url Url地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Url地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url Url地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取桶信息。当输入当时COS时，该字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketInfo 桶信息。当输入当时COS时，该字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketInfo() const;

                    /**
                     * 设置桶信息。当输入当时COS时，该字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketInfo 桶信息。当输入当时COS时，该字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucketInfo(const std::string& _bucketInfo);

                    /**
                     * 判断参数 BucketInfo 是否已赋值
                     * @return BucketInfo 是否已赋值
                     * 
                     */
                    bool BucketInfoHasBeenSet() const;

                private:

                    /**
                     * 传入的类型可选：URL，COS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Url地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 桶信息。当输入当时COS时，该字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketInfo;
                    bool m_bucketInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_INPUTINFO_H_
