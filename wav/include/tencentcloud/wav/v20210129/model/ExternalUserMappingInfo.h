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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALUSERMAPPINGINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALUSERMAPPINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 外部联系人映射信息
                */
                class ExternalUserMappingInfo : public AbstractModel
                {
                public:
                    ExternalUserMappingInfo();
                    ~ExternalUserMappingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业主体对应的外部联系人userId
                     * @return CorpExternalUserId 企业主体对应的外部联系人userId
                     * 
                     */
                    std::string GetCorpExternalUserId() const;

                    /**
                     * 设置企业主体对应的外部联系人userId
                     * @param _corpExternalUserId 企业主体对应的外部联系人userId
                     * 
                     */
                    void SetCorpExternalUserId(const std::string& _corpExternalUserId);

                    /**
                     * 判断参数 CorpExternalUserId 是否已赋值
                     * @return CorpExternalUserId 是否已赋值
                     * 
                     */
                    bool CorpExternalUserIdHasBeenSet() const;

                    /**
                     * 获取乐销车应用主体对应的外部联系人, 当不存在好友关系时，该字段值为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalUserId 乐销车应用主体对应的外部联系人, 当不存在好友关系时，该字段值为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalUserId() const;

                    /**
                     * 设置乐销车应用主体对应的外部联系人, 当不存在好友关系时，该字段值为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalUserId 乐销车应用主体对应的外部联系人, 当不存在好友关系时，该字段值为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalUserId(const std::string& _externalUserId);

                    /**
                     * 判断参数 ExternalUserId 是否已赋值
                     * @return ExternalUserId 是否已赋值
                     * 
                     */
                    bool ExternalUserIdHasBeenSet() const;

                private:

                    /**
                     * 企业主体对应的外部联系人userId
                     */
                    std::string m_corpExternalUserId;
                    bool m_corpExternalUserIdHasBeenSet;

                    /**
                     * 乐销车应用主体对应的外部联系人, 当不存在好友关系时，该字段值为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalUserId;
                    bool m_externalUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALUSERMAPPINGINFO_H_
