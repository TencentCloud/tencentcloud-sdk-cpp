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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_BRANDDATA_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_BRANDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * 商标信息
                */
                class BrandData : public AbstractModel
                {
                public:
                    BrandData();
                    ~BrandData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取xxx
                     * @return BrandName xxx
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置xxx
                     * @param BrandName xxx
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return BrandCertificateName xxx
                     */
                    std::string GetBrandCertificateName() const;

                    /**
                     * 设置xxx
                     * @param BrandCertificateName xxx
                     */
                    void SetBrandCertificateName(const std::string& _brandCertificateName);

                    /**
                     * 判断参数 BrandCertificateName 是否已赋值
                     * @return BrandCertificateName 是否已赋值
                     */
                    bool BrandCertificateNameHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return BrandStatus xxx
                     */
                    int64_t GetBrandStatus() const;

                    /**
                     * 设置xxx
                     * @param BrandStatus xxx
                     */
                    void SetBrandStatus(const int64_t& _brandStatus);

                    /**
                     * 判断参数 BrandStatus 是否已赋值
                     * @return BrandStatus 是否已赋值
                     */
                    bool BrandStatusHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return BrandNote xxx
                     */
                    std::string GetBrandNote() const;

                    /**
                     * 设置xxx
                     * @param BrandNote xxx
                     */
                    void SetBrandNote(const std::string& _brandNote);

                    /**
                     * 判断参数 BrandNote 是否已赋值
                     * @return BrandNote 是否已赋值
                     */
                    bool BrandNoteHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return TransferName xxx
                     */
                    std::string GetTransferName() const;

                    /**
                     * 设置xxx
                     * @param TransferName xxx
                     */
                    void SetTransferName(const std::string& _transferName);

                    /**
                     * 判断参数 TransferName 是否已赋值
                     * @return TransferName 是否已赋值
                     */
                    bool TransferNameHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return TransferStatus xxx
                     */
                    int64_t GetTransferStatus() const;

                    /**
                     * 设置xxx
                     * @param TransferStatus xxx
                     */
                    void SetTransferStatus(const int64_t& _transferStatus);

                    /**
                     * 判断参数 TransferStatus 是否已赋值
                     * @return TransferStatus 是否已赋值
                     */
                    bool TransferStatusHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return TransferNote xxx
                     */
                    std::string GetTransferNote() const;

                    /**
                     * 设置xxx
                     * @param TransferNote xxx
                     */
                    void SetTransferNote(const std::string& _transferNote);

                    /**
                     * 判断参数 TransferNote 是否已赋值
                     * @return TransferNote 是否已赋值
                     */
                    bool TransferNoteHasBeenSet() const;

                private:

                    /**
                     * xxx
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_brandCertificateName;
                    bool m_brandCertificateNameHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_brandStatus;
                    bool m_brandStatusHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_brandNote;
                    bool m_brandNoteHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_transferName;
                    bool m_transferNameHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_transferStatus;
                    bool m_transferStatusHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_transferNote;
                    bool m_transferNoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_BRANDDATA_H_
