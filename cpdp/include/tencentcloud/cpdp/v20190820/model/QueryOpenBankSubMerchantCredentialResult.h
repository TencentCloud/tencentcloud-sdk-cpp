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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTCREDENTIALRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTCREDENTIALRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 子商户资质文件查询
                */
                class QueryOpenBankSubMerchantCredentialResult : public AbstractModel
                {
                public:
                    QueryOpenBankSubMerchantCredentialResult();
                    ~QueryOpenBankSubMerchantCredentialResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上传状态
                     * @return UploadStatus 上传状态
                     * 
                     */
                    std::string GetUploadStatus() const;

                    /**
                     * 设置上传状态
                     * @param _uploadStatus 上传状态
                     * 
                     */
                    void SetUploadStatus(const std::string& _uploadStatus);

                    /**
                     * 判断参数 UploadStatus 是否已赋值
                     * @return UploadStatus 是否已赋值
                     * 
                     */
                    bool UploadStatusHasBeenSet() const;

                    /**
                     * 获取上传描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UploadMessage 上传描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUploadMessage() const;

                    /**
                     * 设置上传描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uploadMessage 上传描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUploadMessage(const std::string& _uploadMessage);

                    /**
                     * 判断参数 UploadMessage 是否已赋值
                     * @return UploadMessage 是否已赋值
                     * 
                     */
                    bool UploadMessageHasBeenSet() const;

                private:

                    /**
                     * 上传状态
                     */
                    std::string m_uploadStatus;
                    bool m_uploadStatusHasBeenSet;

                    /**
                     * 上传描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uploadMessage;
                    bool m_uploadMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTCREDENTIALRESULT_H_
