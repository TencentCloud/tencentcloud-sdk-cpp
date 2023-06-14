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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRBLOCKREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRBLOCKREQUEST_H_

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
                * CreateCRBlock请求参数结构体
                */
                class CreateCRBlockRequest : public AbstractModel
                {
                public:
                    CreateCRBlockRequest();
                    ~CreateCRBlockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作品ID
                     * @return WorkId 作品ID
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置作品ID
                     * @param _workId 作品ID
                     * 
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取侵权链接
                     * @return TortUrl 侵权链接
                     * 
                     */
                    std::string GetTortUrl() const;

                    /**
                     * 设置侵权链接
                     * @param _tortUrl 侵权链接
                     * 
                     */
                    void SetTortUrl(const std::string& _tortUrl);

                    /**
                     * 判断参数 TortUrl 是否已赋值
                     * @return TortUrl 是否已赋值
                     * 
                     */
                    bool TortUrlHasBeenSet() const;

                    /**
                     * 获取侵权标题
                     * @return TortTitle 侵权标题
                     * 
                     */
                    std::string GetTortTitle() const;

                    /**
                     * 设置侵权标题
                     * @param _tortTitle 侵权标题
                     * 
                     */
                    void SetTortTitle(const std::string& _tortTitle);

                    /**
                     * 判断参数 TortTitle 是否已赋值
                     * @return TortTitle 是否已赋值
                     * 
                     */
                    bool TortTitleHasBeenSet() const;

                    /**
                     * 获取侵权平台
                     * @return TortPlat 侵权平台
                     * 
                     */
                    std::string GetTortPlat() const;

                    /**
                     * 设置侵权平台
                     * @param _tortPlat 侵权平台
                     * 
                     */
                    void SetTortPlat(const std::string& _tortPlat);

                    /**
                     * 判断参数 TortPlat 是否已赋值
                     * @return TortPlat 是否已赋值
                     * 
                     */
                    bool TortPlatHasBeenSet() const;

                    /**
                     * 获取拦截结果回调地址
                     * @return BlockUrl 拦截结果回调地址
                     * 
                     */
                    std::string GetBlockUrl() const;

                    /**
                     * 设置拦截结果回调地址
                     * @param _blockUrl 拦截结果回调地址
                     * 
                     */
                    void SetBlockUrl(const std::string& _blockUrl);

                    /**
                     * 判断参数 BlockUrl 是否已赋值
                     * @return BlockUrl 是否已赋值
                     * 
                     */
                    bool BlockUrlHasBeenSet() const;

                    /**
                     * 获取授权书下载地址
                     * @return FileUrl 授权书下载地址
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置授权书下载地址
                     * @param _fileUrl 授权书下载地址
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取授权书生效日期
                     * @return ValidStartDate 授权书生效日期
                     * 
                     */
                    std::string GetValidStartDate() const;

                    /**
                     * 设置授权书生效日期
                     * @param _validStartDate 授权书生效日期
                     * 
                     */
                    void SetValidStartDate(const std::string& _validStartDate);

                    /**
                     * 判断参数 ValidStartDate 是否已赋值
                     * @return ValidStartDate 是否已赋值
                     * 
                     */
                    bool ValidStartDateHasBeenSet() const;

                    /**
                     * 获取授权书截止日期
                     * @return ValidEndDate 授权书截止日期
                     * 
                     */
                    std::string GetValidEndDate() const;

                    /**
                     * 设置授权书截止日期
                     * @param _validEndDate 授权书截止日期
                     * 
                     */
                    void SetValidEndDate(const std::string& _validEndDate);

                    /**
                     * 判断参数 ValidEndDate 是否已赋值
                     * @return ValidEndDate 是否已赋值
                     * 
                     */
                    bool ValidEndDateHasBeenSet() const;

                    /**
                     * 获取侵权截图
                     * @return TortPic 侵权截图
                     * 
                     */
                    std::string GetTortPic() const;

                    /**
                     * 设置侵权截图
                     * @param _tortPic 侵权截图
                     * 
                     */
                    void SetTortPic(const std::string& _tortPic);

                    /**
                     * 判断参数 TortPic 是否已赋值
                     * @return TortPic 是否已赋值
                     * 
                     */
                    bool TortPicHasBeenSet() const;

                    /**
                     * 获取委托书下载地址
                     * @return CommFileUrl 委托书下载地址
                     * 
                     */
                    std::string GetCommFileUrl() const;

                    /**
                     * 设置委托书下载地址
                     * @param _commFileUrl 委托书下载地址
                     * 
                     */
                    void SetCommFileUrl(const std::string& _commFileUrl);

                    /**
                     * 判断参数 CommFileUrl 是否已赋值
                     * @return CommFileUrl 是否已赋值
                     * 
                     */
                    bool CommFileUrlHasBeenSet() const;

                    /**
                     * 获取委托书生效日期
                     * @return CommValidStartDate 委托书生效日期
                     * 
                     */
                    std::string GetCommValidStartDate() const;

                    /**
                     * 设置委托书生效日期
                     * @param _commValidStartDate 委托书生效日期
                     * 
                     */
                    void SetCommValidStartDate(const std::string& _commValidStartDate);

                    /**
                     * 判断参数 CommValidStartDate 是否已赋值
                     * @return CommValidStartDate 是否已赋值
                     * 
                     */
                    bool CommValidStartDateHasBeenSet() const;

                    /**
                     * 获取委托书截止日期
                     * @return CommValidEndDate 委托书截止日期
                     * 
                     */
                    std::string GetCommValidEndDate() const;

                    /**
                     * 设置委托书截止日期
                     * @param _commValidEndDate 委托书截止日期
                     * 
                     */
                    void SetCommValidEndDate(const std::string& _commValidEndDate);

                    /**
                     * 判断参数 CommValidEndDate 是否已赋值
                     * @return CommValidEndDate 是否已赋值
                     * 
                     */
                    bool CommValidEndDateHasBeenSet() const;

                    /**
                     * 获取是否著作权人：0-否 1-是
                     * @return IsProducer 是否著作权人：0-否 1-是
                     * 
                     */
                    std::string GetIsProducer() const;

                    /**
                     * 设置是否著作权人：0-否 1-是
                     * @param _isProducer 是否著作权人：0-否 1-是
                     * 
                     */
                    void SetIsProducer(const std::string& _isProducer);

                    /**
                     * 判断参数 IsProducer 是否已赋值
                     * @return IsProducer 是否已赋值
                     * 
                     */
                    bool IsProducerHasBeenSet() const;

                    /**
                     * 获取存证证书下载地址
                     * @return EvidenceFileUrl 存证证书下载地址
                     * 
                     */
                    std::string GetEvidenceFileUrl() const;

                    /**
                     * 设置存证证书下载地址
                     * @param _evidenceFileUrl 存证证书下载地址
                     * 
                     */
                    void SetEvidenceFileUrl(const std::string& _evidenceFileUrl);

                    /**
                     * 判断参数 EvidenceFileUrl 是否已赋值
                     * @return EvidenceFileUrl 是否已赋值
                     * 
                     */
                    bool EvidenceFileUrlHasBeenSet() const;

                    /**
                     * 获取存证证书生效日期
                     * @return EvidenceValidStartDate 存证证书生效日期
                     * 
                     */
                    std::string GetEvidenceValidStartDate() const;

                    /**
                     * 设置存证证书生效日期
                     * @param _evidenceValidStartDate 存证证书生效日期
                     * 
                     */
                    void SetEvidenceValidStartDate(const std::string& _evidenceValidStartDate);

                    /**
                     * 判断参数 EvidenceValidStartDate 是否已赋值
                     * @return EvidenceValidStartDate 是否已赋值
                     * 
                     */
                    bool EvidenceValidStartDateHasBeenSet() const;

                    /**
                     * 获取存证证书截止日期
                     * @return EvidenceValidEndDate 存证证书截止日期
                     * 
                     */
                    std::string GetEvidenceValidEndDate() const;

                    /**
                     * 设置存证证书截止日期
                     * @param _evidenceValidEndDate 存证证书截止日期
                     * 
                     */
                    void SetEvidenceValidEndDate(const std::string& _evidenceValidEndDate);

                    /**
                     * 判断参数 EvidenceValidEndDate 是否已赋值
                     * @return EvidenceValidEndDate 是否已赋值
                     * 
                     */
                    bool EvidenceValidEndDateHasBeenSet() const;

                private:

                    /**
                     * 作品ID
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
                     * 拦截结果回调地址
                     */
                    std::string m_blockUrl;
                    bool m_blockUrlHasBeenSet;

                    /**
                     * 授权书下载地址
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 授权书生效日期
                     */
                    std::string m_validStartDate;
                    bool m_validStartDateHasBeenSet;

                    /**
                     * 授权书截止日期
                     */
                    std::string m_validEndDate;
                    bool m_validEndDateHasBeenSet;

                    /**
                     * 侵权截图
                     */
                    std::string m_tortPic;
                    bool m_tortPicHasBeenSet;

                    /**
                     * 委托书下载地址
                     */
                    std::string m_commFileUrl;
                    bool m_commFileUrlHasBeenSet;

                    /**
                     * 委托书生效日期
                     */
                    std::string m_commValidStartDate;
                    bool m_commValidStartDateHasBeenSet;

                    /**
                     * 委托书截止日期
                     */
                    std::string m_commValidEndDate;
                    bool m_commValidEndDateHasBeenSet;

                    /**
                     * 是否著作权人：0-否 1-是
                     */
                    std::string m_isProducer;
                    bool m_isProducerHasBeenSet;

                    /**
                     * 存证证书下载地址
                     */
                    std::string m_evidenceFileUrl;
                    bool m_evidenceFileUrlHasBeenSet;

                    /**
                     * 存证证书生效日期
                     */
                    std::string m_evidenceValidStartDate;
                    bool m_evidenceValidStartDateHasBeenSet;

                    /**
                     * 存证证书截止日期
                     */
                    std::string m_evidenceValidEndDate;
                    bool m_evidenceValidEndDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRBLOCKREQUEST_H_
