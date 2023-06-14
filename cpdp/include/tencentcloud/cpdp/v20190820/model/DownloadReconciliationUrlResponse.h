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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADRECONCILIATIONURLRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADRECONCILIATIONURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DownloadReconciliationUrl返回参数结构体
                */
                class DownloadReconciliationUrlResponse : public AbstractModel
                {
                public:
                    DownloadReconciliationUrlResponse();
                    ~DownloadReconciliationUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下载地址
                     * @return DownloadUrl 下载地址
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取hash类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HashType hash类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHashType() const;

                    /**
                     * 判断参数 HashType 是否已赋值
                     * @return HashType 是否已赋值
                     * 
                     */
                    bool HashTypeHasBeenSet() const;

                    /**
                     * 获取hash值
                     * @return HashValue hash值
                     * 
                     */
                    std::string GetHashValue() const;

                    /**
                     * 判断参数 HashValue 是否已赋值
                     * @return HashValue 是否已赋值
                     * 
                     */
                    bool HashValueHasBeenSet() const;

                private:

                    /**
                     * 下载地址
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * hash类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hashType;
                    bool m_hashTypeHasBeenSet;

                    /**
                     * hash值
                     */
                    std::string m_hashValue;
                    bool m_hashValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADRECONCILIATIONURLRESPONSE_H_
