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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECROBTAINDETAILRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECROBTAINDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCRObtainDetail返回参数结构体
                */
                class DescribeCRObtainDetailResponse : public AbstractModel
                {
                public:
                    DescribeCRObtainDetailResponse();
                    ~DescribeCRObtainDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作品名称
                     * @return WorkName 作品名称
                     * 
                     */
                    std::string GetWorkName() const;

                    /**
                     * 判断参数 WorkName 是否已赋值
                     * @return WorkName 是否已赋值
                     * 
                     */
                    bool WorkNameHasBeenSet() const;

                    /**
                     * 获取侵权链接
                     * @return TortURL 侵权链接
                     * 
                     */
                    std::string GetTortURL() const;

                    /**
                     * 判断参数 TortURL 是否已赋值
                     * @return TortURL 是否已赋值
                     * 
                     */
                    bool TortURLHasBeenSet() const;

                    /**
                     * 获取取证时间
                     * @return ObtainTime 取证时间
                     * 
                     */
                    std::string GetObtainTime() const;

                    /**
                     * 判断参数 ObtainTime 是否已赋值
                     * @return ObtainTime 是否已赋值
                     * 
                     */
                    bool ObtainTimeHasBeenSet() const;

                    /**
                     * 获取取证类型
                     * @return ObtainType 取证类型
                     * 
                     */
                    std::string GetObtainType() const;

                    /**
                     * 判断参数 ObtainType 是否已赋值
                     * @return ObtainType 是否已赋值
                     * 
                     */
                    bool ObtainTypeHasBeenSet() const;

                    /**
                     * 获取取证号
                     * @return ObtainNum 取证号
                     * 
                     */
                    std::string GetObtainNum() const;

                    /**
                     * 判断参数 ObtainNum 是否已赋值
                     * @return ObtainNum 是否已赋值
                     * 
                     */
                    bool ObtainNumHasBeenSet() const;

                    /**
                     * 获取证据地址
                     * @return DepositFile 证据地址
                     * 
                     */
                    std::string GetDepositFile() const;

                    /**
                     * 判断参数 DepositFile 是否已赋值
                     * @return DepositFile 是否已赋值
                     * 
                     */
                    bool DepositFileHasBeenSet() const;

                    /**
                     * 获取公证信息地址
                     * @return DepositCert 公证信息地址
                     * 
                     */
                    std::string GetDepositCert() const;

                    /**
                     * 判断参数 DepositCert 是否已赋值
                     * @return DepositCert 是否已赋值
                     * 
                     */
                    bool DepositCertHasBeenSet() const;

                    /**
                     * 获取内容类型
                     * @return WorkType 内容类型
                     * 
                     */
                    std::string GetWorkType() const;

                    /**
                     * 判断参数 WorkType 是否已赋值
                     * @return WorkType 是否已赋值
                     * 
                     */
                    bool WorkTypeHasBeenSet() const;

                    /**
                     * 获取作品类型
                     * @return WorkCategory 作品类型
                     * 
                     */
                    std::string GetWorkCategory() const;

                    /**
                     * 判断参数 WorkCategory 是否已赋值
                     * @return WorkCategory 是否已赋值
                     * 
                     */
                    bool WorkCategoryHasBeenSet() const;

                    /**
                     * 获取侵权ID
                     * @return TortId 侵权ID
                     * 
                     */
                    int64_t GetTortId() const;

                    /**
                     * 判断参数 TortId 是否已赋值
                     * @return TortId 是否已赋值
                     * 
                     */
                    bool TortIdHasBeenSet() const;

                    /**
                     * 获取侵权编号
                     * @return TortNum 侵权编号
                     * 
                     */
                    std::string GetTortNum() const;

                    /**
                     * 判断参数 TortNum 是否已赋值
                     * @return TortNum 是否已赋值
                     * 
                     */
                    bool TortNumHasBeenSet() const;

                    /**
                     * 获取取证状态
                     * @return ObtainStatus 取证状态
                     * 
                     */
                    int64_t GetObtainStatus() const;

                    /**
                     * 判断参数 ObtainStatus 是否已赋值
                     * @return ObtainStatus 是否已赋值
                     * 
                     */
                    bool ObtainStatusHasBeenSet() const;

                    /**
                     * 获取取证状态说明
                     * @return ObtainNote 取证状态说明
                     * 
                     */
                    std::string GetObtainNote() const;

                    /**
                     * 判断参数 ObtainNote 是否已赋值
                     * @return ObtainNote 是否已赋值
                     * 
                     */
                    bool ObtainNoteHasBeenSet() const;

                    /**
                     * 获取取证时长
                     * @return ObtainDuration 取证时长
                     * 
                     */
                    std::string GetObtainDuration() const;

                    /**
                     * 判断参数 ObtainDuration 是否已赋值
                     * @return ObtainDuration 是否已赋值
                     * 
                     */
                    bool ObtainDurationHasBeenSet() const;

                    /**
                     * 获取取证名称
                     * @return ObtainName 取证名称
                     * 
                     */
                    std::string GetObtainName() const;

                    /**
                     * 判断参数 ObtainName 是否已赋值
                     * @return ObtainName 是否已赋值
                     * 
                     */
                    bool ObtainNameHasBeenSet() const;

                    /**
                     * 获取取证公证信息
                     * @return DepositPdfCert 取证公证信息
                     * 
                     */
                    std::string GetDepositPdfCert() const;

                    /**
                     * 判断参数 DepositPdfCert 是否已赋值
                     * @return DepositPdfCert 是否已赋值
                     * 
                     */
                    bool DepositPdfCertHasBeenSet() const;

                private:

                    /**
                     * 作品名称
                     */
                    std::string m_workName;
                    bool m_workNameHasBeenSet;

                    /**
                     * 侵权链接
                     */
                    std::string m_tortURL;
                    bool m_tortURLHasBeenSet;

                    /**
                     * 取证时间
                     */
                    std::string m_obtainTime;
                    bool m_obtainTimeHasBeenSet;

                    /**
                     * 取证类型
                     */
                    std::string m_obtainType;
                    bool m_obtainTypeHasBeenSet;

                    /**
                     * 取证号
                     */
                    std::string m_obtainNum;
                    bool m_obtainNumHasBeenSet;

                    /**
                     * 证据地址
                     */
                    std::string m_depositFile;
                    bool m_depositFileHasBeenSet;

                    /**
                     * 公证信息地址
                     */
                    std::string m_depositCert;
                    bool m_depositCertHasBeenSet;

                    /**
                     * 内容类型
                     */
                    std::string m_workType;
                    bool m_workTypeHasBeenSet;

                    /**
                     * 作品类型
                     */
                    std::string m_workCategory;
                    bool m_workCategoryHasBeenSet;

                    /**
                     * 侵权ID
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

                    /**
                     * 侵权编号
                     */
                    std::string m_tortNum;
                    bool m_tortNumHasBeenSet;

                    /**
                     * 取证状态
                     */
                    int64_t m_obtainStatus;
                    bool m_obtainStatusHasBeenSet;

                    /**
                     * 取证状态说明
                     */
                    std::string m_obtainNote;
                    bool m_obtainNoteHasBeenSet;

                    /**
                     * 取证时长
                     */
                    std::string m_obtainDuration;
                    bool m_obtainDurationHasBeenSet;

                    /**
                     * 取证名称
                     */
                    std::string m_obtainName;
                    bool m_obtainNameHasBeenSet;

                    /**
                     * 取证公证信息
                     */
                    std::string m_depositPdfCert;
                    bool m_depositPdfCertHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECROBTAINDETAILRESPONSE_H_
