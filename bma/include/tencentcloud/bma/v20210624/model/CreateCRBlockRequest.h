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
                     * 获取拦截结果回调地址
                     * @return BlockUrl 拦截结果回调地址
                     */
                    std::string GetBlockUrl() const;

                    /**
                     * 设置拦截结果回调地址
                     * @param BlockUrl 拦截结果回调地址
                     */
                    void SetBlockUrl(const std::string& _blockUrl);

                    /**
                     * 判断参数 BlockUrl 是否已赋值
                     * @return BlockUrl 是否已赋值
                     */
                    bool BlockUrlHasBeenSet() const;

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
                     * 获取xx
                     * @return TortPic xx
                     */
                    std::string GetTortPic() const;

                    /**
                     * 设置xx
                     * @param TortPic xx
                     */
                    void SetTortPic(const std::string& _tortPic);

                    /**
                     * 判断参数 TortPic 是否已赋值
                     * @return TortPic 是否已赋值
                     */
                    bool TortPicHasBeenSet() const;

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
                     * 拦截结果回调地址
                     */
                    std::string m_blockUrl;
                    bool m_blockUrlHasBeenSet;

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
                     * xx
                     */
                    std::string m_tortPic;
                    bool m_tortPicHasBeenSet;

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
                    std::string m_isProducer;
                    bool m_isProducerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRBLOCKREQUEST_H_
