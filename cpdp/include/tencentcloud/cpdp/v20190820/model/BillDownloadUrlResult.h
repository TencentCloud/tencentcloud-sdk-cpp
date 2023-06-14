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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BILLDOWNLOADURLRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BILLDOWNLOADURLRESULT_H_

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
                * 机构账单文件下载地址响应对象
                */
                class BillDownloadUrlResult : public AbstractModel
                {
                public:
                    BillDownloadUrlResult();
                    ~BillDownloadUrlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对账单下载地址。GET方式访问，返回zip包，解压后为csv格式文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadUrl 对账单下载地址。GET方式访问，返回zip包，解压后为csv格式文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置对账单下载地址。GET方式访问，返回zip包，解压后为csv格式文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadUrl 对账单下载地址。GET方式访问，返回zip包，解压后为csv格式文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                private:

                    /**
                     * 对账单下载地址。GET方式访问，返回zip包，解压后为csv格式文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BILLDOWNLOADURLRESULT_H_
