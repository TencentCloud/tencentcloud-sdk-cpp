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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECROBTAINREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECROBTAINREQUEST_H_

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
                * CreateCRObtain请求参数结构体
                */
                class CreateCRObtainRequest : public AbstractModel
                {
                public:
                    CreateCRObtainRequest();
                    ~CreateCRObtainRequest() = default;
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
                     * 获取取证类型 1-网页取证 2-过程取证
                     * @return ObtainType 取证类型 1-网页取证 2-过程取证
                     */
                    int64_t GetObtainType() const;

                    /**
                     * 设置取证类型 1-网页取证 2-过程取证
                     * @param ObtainType 取证类型 1-网页取证 2-过程取证
                     */
                    void SetObtainType(const int64_t& _obtainType);

                    /**
                     * 判断参数 ObtainType 是否已赋值
                     * @return ObtainType 是否已赋值
                     */
                    bool ObtainTypeHasBeenSet() const;

                    /**
                     * 获取侵权标题
                     * @return WorkTitle 侵权标题
                     */
                    std::string GetWorkTitle() const;

                    /**
                     * 设置侵权标题
                     * @param WorkTitle 侵权标题
                     */
                    void SetWorkTitle(const std::string& _workTitle);

                    /**
                     * 判断参数 WorkTitle 是否已赋值
                     * @return WorkTitle 是否已赋值
                     */
                    bool WorkTitleHasBeenSet() const;

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
                     * 获取过程取证的取证时长 6-300分钟
                     * @return ObtainDuration 过程取证的取证时长 6-300分钟
                     */
                    int64_t GetObtainDuration() const;

                    /**
                     * 设置过程取证的取证时长 6-300分钟
                     * @param ObtainDuration 过程取证的取证时长 6-300分钟
                     */
                    void SetObtainDuration(const int64_t& _obtainDuration);

                    /**
                     * 判断参数 ObtainDuration 是否已赋值
                     * @return ObtainDuration 是否已赋值
                     */
                    bool ObtainDurationHasBeenSet() const;

                    /**
                     * 获取取证回调地址
                     * @return ObtainUrl 取证回调地址
                     */
                    std::string GetObtainUrl() const;

                    /**
                     * 设置取证回调地址
                     * @param ObtainUrl 取证回调地址
                     */
                    void SetObtainUrl(const std::string& _obtainUrl);

                    /**
                     * 判断参数 ObtainUrl 是否已赋值
                     * @return ObtainUrl 是否已赋值
                     */
                    bool ObtainUrlHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return WorkCategory xxx
                     */
                    std::string GetWorkCategory() const;

                    /**
                     * 设置xxx
                     * @param WorkCategory xxx
                     */
                    void SetWorkCategory(const std::string& _workCategory);

                    /**
                     * 判断参数 WorkCategory 是否已赋值
                     * @return WorkCategory 是否已赋值
                     */
                    bool WorkCategoryHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return WorkType xxx
                     */
                    std::string GetWorkType() const;

                    /**
                     * 设置xxx
                     * @param WorkType xxx
                     */
                    void SetWorkType(const std::string& _workType);

                    /**
                     * 判断参数 WorkType 是否已赋值
                     * @return WorkType 是否已赋值
                     */
                    bool WorkTypeHasBeenSet() const;

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
                     * 取证类型 1-网页取证 2-过程取证
                     */
                    int64_t m_obtainType;
                    bool m_obtainTypeHasBeenSet;

                    /**
                     * 侵权标题
                     */
                    std::string m_workTitle;
                    bool m_workTitleHasBeenSet;

                    /**
                     * 侵权平台
                     */
                    std::string m_tortPlat;
                    bool m_tortPlatHasBeenSet;

                    /**
                     * 过程取证的取证时长 6-300分钟
                     */
                    int64_t m_obtainDuration;
                    bool m_obtainDurationHasBeenSet;

                    /**
                     * 取证回调地址
                     */
                    std::string m_obtainUrl;
                    bool m_obtainUrlHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_workCategory;
                    bool m_workCategoryHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_workType;
                    bool m_workTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECROBTAINREQUEST_H_
