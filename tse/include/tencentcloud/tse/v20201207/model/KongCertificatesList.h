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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESLIST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongCertificatesPreview.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * kong证书列表
                */
                class KongCertificatesList : public AbstractModel
                {
                public:
                    KongCertificatesList();
                    ~KongCertificatesList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书列表总数
                     * @return Total 证书列表总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置证书列表总数
                     * @param _total 证书列表总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificatesList 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KongCertificatesPreview> GetCertificatesList() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificatesList 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificatesList(const std::vector<KongCertificatesPreview>& _certificatesList);

                    /**
                     * 判断参数 CertificatesList 是否已赋值
                     * @return CertificatesList 是否已赋值
                     * 
                     */
                    bool CertificatesListHasBeenSet() const;

                    /**
                     * 获取证书列表总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pages 证书列表总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetPages() const;

                    /**
                     * 设置证书列表总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pages 证书列表总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetPages(const int64_t& _pages);

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * @deprecated
                     */
                    bool PagesHasBeenSet() const;

                private:

                    /**
                     * 证书列表总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KongCertificatesPreview> m_certificatesList;
                    bool m_certificatesListHasBeenSet;

                    /**
                     * 证书列表总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESLIST_H_
