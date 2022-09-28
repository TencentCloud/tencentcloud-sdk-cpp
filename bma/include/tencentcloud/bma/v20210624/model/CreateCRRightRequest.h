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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTREQUEST_H_

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
                * CreateCRRight请求参数结构体
                */
                class CreateCRRightRequest : public AbstractModel
                {
                public:
                    CreateCRRightRequest();
                    ~CreateCRRightRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取已存证的作品ID
                     * @return WorkId 已存证的作品ID
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置已存证的作品ID
                     * @param WorkId 已存证的作品ID
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取侵权链接
                     * @return TortUrl 侵权链接
                     */
                    std::string GetTortUrl() const;

                    /**
                     * 设置侵权链接
                     * @param TortUrl 侵权链接
                     */
                    void SetTortUrl(const std::string& _tortUrl);

                    /**
                     * 判断参数 TortUrl 是否已赋值
                     * @return TortUrl 是否已赋值
                     */
                    bool TortUrlHasBeenSet() const;

                    /**
                     * 获取侵权标题
                     * @return TortTitle 侵权标题
                     */
                    std::string GetTortTitle() const;

                    /**
                     * 设置侵权标题
                     * @param TortTitle 侵权标题
                     */
                    void SetTortTitle(const std::string& _tortTitle);

                    /**
                     * 判断参数 TortTitle 是否已赋值
                     * @return TortTitle 是否已赋值
                     */
                    bool TortTitleHasBeenSet() const;

                    /**
                     * 获取侵权平台
                     * @return TortPlat 侵权平台
                     */
                    std::string GetTortPlat() const;

                    /**
                     * 设置侵权平台
                     * @param TortPlat 侵权平台
                     */
                    void SetTortPlat(const std::string& _tortPlat);

                    /**
                     * 判断参数 TortPlat 是否已赋值
                     * @return TortPlat 是否已赋值
                     */
                    bool TortPlatHasBeenSet() const;

                    /**
                     * 获取发函结果回调地址
                     * @return RightUrl 发函结果回调地址
                     */
                    std::string GetRightUrl() const;

                    /**
                     * 设置发函结果回调地址
                     * @param RightUrl 发函结果回调地址
                     */
                    void SetRightUrl(const std::string& _rightUrl);

                    /**
                     * 判断参数 RightUrl 是否已赋值
                     * @return RightUrl 是否已赋值
                     */
                    bool RightUrlHasBeenSet() const;

                    /**
                     * 获取x
                     * @return FileUrl x
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置x
                     * @param FileUrl x
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取x
                     * @return ValidStartDate x
                     */
                    std::string GetValidStartDate() const;

                    /**
                     * 设置x
                     * @param ValidStartDate x
                     */
                    void SetValidStartDate(const std::string& _validStartDate);

                    /**
                     * 判断参数 ValidStartDate 是否已赋值
                     * @return ValidStartDate 是否已赋值
                     */
                    bool ValidStartDateHasBeenSet() const;

                    /**
                     * 获取x
                     * @return ValidEndDate x
                     */
                    std::string GetValidEndDate() const;

                    /**
                     * 设置x
                     * @param ValidEndDate x
                     */
                    void SetValidEndDate(const std::string& _validEndDate);

                    /**
                     * 判断参数 ValidEndDate 是否已赋值
                     * @return ValidEndDate 是否已赋值
                     */
                    bool ValidEndDateHasBeenSet() const;

                    /**
                     * 获取x
                     * @return CommFileUrl x
                     */
                    std::string GetCommFileUrl() const;

                    /**
                     * 设置x
                     * @param CommFileUrl x
                     */
                    void SetCommFileUrl(const std::string& _commFileUrl);

                    /**
                     * 判断参数 CommFileUrl 是否已赋值
                     * @return CommFileUrl 是否已赋值
                     */
                    bool CommFileUrlHasBeenSet() const;

                    /**
                     * 获取x
                     * @return CommValidStartDate x
                     */
                    std::string GetCommValidStartDate() const;

                    /**
                     * 设置x
                     * @param CommValidStartDate x
                     */
                    void SetCommValidStartDate(const std::string& _commValidStartDate);

                    /**
                     * 判断参数 CommValidStartDate 是否已赋值
                     * @return CommValidStartDate 是否已赋值
                     */
                    bool CommValidStartDateHasBeenSet() const;

                    /**
                     * 获取x
                     * @return CommValidEndDate x
                     */
                    std::string GetCommValidEndDate() const;

                    /**
                     * 设置x
                     * @param CommValidEndDate x
                     */
                    void SetCommValidEndDate(const std::string& _commValidEndDate);

                    /**
                     * 判断参数 CommValidEndDate 是否已赋值
                     * @return CommValidEndDate 是否已赋值
                     */
                    bool CommValidEndDateHasBeenSet() const;

                    /**
                     * 获取x
                     * @return HomeFileUrl x
                     */
                    std::string GetHomeFileUrl() const;

                    /**
                     * 设置x
                     * @param HomeFileUrl x
                     */
                    void SetHomeFileUrl(const std::string& _homeFileUrl);

                    /**
                     * 判断参数 HomeFileUrl 是否已赋值
                     * @return HomeFileUrl 是否已赋值
                     */
                    bool HomeFileUrlHasBeenSet() const;

                    /**
                     * 获取x
                     * @return HomeValidStartDate x
                     */
                    std::string GetHomeValidStartDate() const;

                    /**
                     * 设置x
                     * @param HomeValidStartDate x
                     */
                    void SetHomeValidStartDate(const std::string& _homeValidStartDate);

                    /**
                     * 判断参数 HomeValidStartDate 是否已赋值
                     * @return HomeValidStartDate 是否已赋值
                     */
                    bool HomeValidStartDateHasBeenSet() const;

                    /**
                     * 获取x
                     * @return HomeValidEndDate x
                     */
                    std::string GetHomeValidEndDate() const;

                    /**
                     * 设置x
                     * @param HomeValidEndDate x
                     */
                    void SetHomeValidEndDate(const std::string& _homeValidEndDate);

                    /**
                     * 判断参数 HomeValidEndDate 是否已赋值
                     * @return HomeValidEndDate 是否已赋值
                     */
                    bool HomeValidEndDateHasBeenSet() const;

                    /**
                     * 获取x
                     * @return IsProducer x
                     */
                    std::string GetIsProducer() const;

                    /**
                     * 设置x
                     * @param IsProducer x
                     */
                    void SetIsProducer(const std::string& _isProducer);

                    /**
                     * 判断参数 IsProducer 是否已赋值
                     * @return IsProducer 是否已赋值
                     */
                    bool IsProducerHasBeenSet() const;

                    /**
                     * 获取x
                     * @return EvidenceFileUrl x
                     */
                    std::string GetEvidenceFileUrl() const;

                    /**
                     * 设置x
                     * @param EvidenceFileUrl x
                     */
                    void SetEvidenceFileUrl(const std::string& _evidenceFileUrl);

                    /**
                     * 判断参数 EvidenceFileUrl 是否已赋值
                     * @return EvidenceFileUrl 是否已赋值
                     */
                    bool EvidenceFileUrlHasBeenSet() const;

                    /**
                     * 获取x
                     * @return EvidenceValidStartDate x
                     */
                    std::string GetEvidenceValidStartDate() const;

                    /**
                     * 设置x
                     * @param EvidenceValidStartDate x
                     */
                    void SetEvidenceValidStartDate(const std::string& _evidenceValidStartDate);

                    /**
                     * 判断参数 EvidenceValidStartDate 是否已赋值
                     * @return EvidenceValidStartDate 是否已赋值
                     */
                    bool EvidenceValidStartDateHasBeenSet() const;

                    /**
                     * 获取x
                     * @return EvidenceValidEndDate x
                     */
                    std::string GetEvidenceValidEndDate() const;

                    /**
                     * 设置x
                     * @param EvidenceValidEndDate x
                     */
                    void SetEvidenceValidEndDate(const std::string& _evidenceValidEndDate);

                    /**
                     * 判断参数 EvidenceValidEndDate 是否已赋值
                     * @return EvidenceValidEndDate 是否已赋值
                     */
                    bool EvidenceValidEndDateHasBeenSet() const;

                private:

                    /**
                     * 已存证的作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 侵权链接
                     */
                    std::string m_tortUrl;
                    bool m_tortUrlHasBeenSet;

                    /**
                     * 侵权标题
                     */
                    std::string m_tortTitle;
                    bool m_tortTitleHasBeenSet;

                    /**
                     * 侵权平台
                     */
                    std::string m_tortPlat;
                    bool m_tortPlatHasBeenSet;

                    /**
                     * 发函结果回调地址
                     */
                    std::string m_rightUrl;
                    bool m_rightUrlHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_validStartDate;
                    bool m_validStartDateHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_validEndDate;
                    bool m_validEndDateHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_commFileUrl;
                    bool m_commFileUrlHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_commValidStartDate;
                    bool m_commValidStartDateHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_commValidEndDate;
                    bool m_commValidEndDateHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_homeFileUrl;
                    bool m_homeFileUrlHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_homeValidStartDate;
                    bool m_homeValidStartDateHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_homeValidEndDate;
                    bool m_homeValidEndDateHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_isProducer;
                    bool m_isProducerHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_evidenceFileUrl;
                    bool m_evidenceFileUrlHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_evidenceValidStartDate;
                    bool m_evidenceValidStartDateHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_evidenceValidEndDate;
                    bool m_evidenceValidEndDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTREQUEST_H_
