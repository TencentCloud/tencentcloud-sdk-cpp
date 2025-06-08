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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_INVOICESEALINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_INVOICESEALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 印章信息
                */
                class InvoiceSealInfo : public AbstractModel
                {
                public:
                    InvoiceSealInfo();
                    ~InvoiceSealInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否有公司印章（0：没有，1：有）
                     * @return CompanySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    std::string GetCompanySealMark() const;

                    /**
                     * 设置是否有公司印章（0：没有，1：有）
                     * @param _companySealMark 是否有公司印章（0：没有，1：有）
                     * 
                     */
                    void SetCompanySealMark(const std::string& _companySealMark);

                    /**
                     * 判断参数 CompanySealMark 是否已赋值
                     * @return CompanySealMark 是否已赋值
                     * 
                     */
                    bool CompanySealMarkHasBeenSet() const;

                    /**
                     * 获取是否有监制印章（0：没有，1：有）
                     * @return SupervisionSealMark 是否有监制印章（0：没有，1：有）
                     * 
                     */
                    std::string GetSupervisionSealMark() const;

                    /**
                     * 设置是否有监制印章（0：没有，1：有）
                     * @param _supervisionSealMark 是否有监制印章（0：没有，1：有）
                     * 
                     */
                    void SetSupervisionSealMark(const std::string& _supervisionSealMark);

                    /**
                     * 判断参数 SupervisionSealMark 是否已赋值
                     * @return SupervisionSealMark 是否已赋值
                     * 
                     */
                    bool SupervisionSealMarkHasBeenSet() const;

                    /**
                     * 获取公司印章信息
                     * @return CompanySealMarkInfo 公司印章信息
                     * 
                     */
                    std::vector<std::string> GetCompanySealMarkInfo() const;

                    /**
                     * 设置公司印章信息
                     * @param _companySealMarkInfo 公司印章信息
                     * 
                     */
                    void SetCompanySealMarkInfo(const std::vector<std::string>& _companySealMarkInfo);

                    /**
                     * 判断参数 CompanySealMarkInfo 是否已赋值
                     * @return CompanySealMarkInfo 是否已赋值
                     * 
                     */
                    bool CompanySealMarkInfoHasBeenSet() const;

                    /**
                     * 获取监制印章信息
                     * @return SupervisionSealMarkInfo 监制印章信息
                     * 
                     */
                    std::vector<std::string> GetSupervisionSealMarkInfo() const;

                    /**
                     * 设置监制印章信息
                     * @param _supervisionSealMarkInfo 监制印章信息
                     * 
                     */
                    void SetSupervisionSealMarkInfo(const std::vector<std::string>& _supervisionSealMarkInfo);

                    /**
                     * 判断参数 SupervisionSealMarkInfo 是否已赋值
                     * @return SupervisionSealMarkInfo 是否已赋值
                     * 
                     */
                    bool SupervisionSealMarkInfoHasBeenSet() const;

                private:

                    /**
                     * 是否有公司印章（0：没有，1：有）
                     */
                    std::string m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                    /**
                     * 是否有监制印章（0：没有，1：有）
                     */
                    std::string m_supervisionSealMark;
                    bool m_supervisionSealMarkHasBeenSet;

                    /**
                     * 公司印章信息
                     */
                    std::vector<std::string> m_companySealMarkInfo;
                    bool m_companySealMarkInfoHasBeenSet;

                    /**
                     * 监制印章信息
                     */
                    std::vector<std::string> m_supervisionSealMarkInfo;
                    bool m_supervisionSealMarkInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_INVOICESEALINFO_H_
