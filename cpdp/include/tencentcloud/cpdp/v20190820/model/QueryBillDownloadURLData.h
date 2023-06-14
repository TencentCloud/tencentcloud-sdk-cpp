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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLDATA_H_

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
                * 智能代发-单笔代发转账对账单返回数据
                */
                class QueryBillDownloadURLData : public AbstractModel
                {
                public:
                    QueryBillDownloadURLData();
                    ~QueryBillDownloadURLData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统一对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillDownloadURL 统一对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillDownloadURL() const;

                    /**
                     * 设置统一对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billDownloadURL 统一对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillDownloadURL(const std::string& _billDownloadURL);

                    /**
                     * 判断参数 BillDownloadURL 是否已赋值
                     * @return BillDownloadURL 是否已赋值
                     * 
                     */
                    bool BillDownloadURLHasBeenSet() const;

                    /**
                     * 获取渠道原始对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalBillDownloadURL 渠道原始对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalBillDownloadURL() const;

                    /**
                     * 设置渠道原始对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalBillDownloadURL 渠道原始对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalBillDownloadURL(const std::string& _originalBillDownloadURL);

                    /**
                     * 判断参数 OriginalBillDownloadURL 是否已赋值
                     * @return OriginalBillDownloadURL 是否已赋值
                     * 
                     */
                    bool OriginalBillDownloadURLHasBeenSet() const;

                private:

                    /**
                     * 统一对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billDownloadURL;
                    bool m_billDownloadURLHasBeenSet;

                    /**
                     * 渠道原始对账单下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalBillDownloadURL;
                    bool m_originalBillDownloadURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBILLDOWNLOADURLDATA_H_
