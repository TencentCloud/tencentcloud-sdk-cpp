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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRWHITELISTREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRWHITELISTREQUEST_H_

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
                * ModifyCRWhiteList请求参数结构体
                */
                class ModifyCRWhiteListRequest : public AbstractModel
                {
                public:
                    ModifyCRWhiteListRequest();
                    ~ModifyCRWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单ID
                     * @return WhiteListId 白名单ID
                     */
                    int64_t GetWhiteListId() const;

                    /**
                     * 设置白名单ID
                     * @param WhiteListId 白名单ID
                     */
                    void SetWhiteListId(const int64_t& _whiteListId);

                    /**
                     * 判断参数 WhiteListId 是否已赋值
                     * @return WhiteListId 是否已赋值
                     */
                    bool WhiteListIdHasBeenSet() const;

                    /**
                     * 获取平台名称
                     * @return PlatForm 平台名称
                     */
                    std::string GetPlatForm() const;

                    /**
                     * 设置平台名称
                     * @param PlatForm 平台名称
                     */
                    void SetPlatForm(const std::string& _platForm);

                    /**
                     * 判断参数 PlatForm 是否已赋值
                     * @return PlatForm 是否已赋值
                     */
                    bool PlatFormHasBeenSet() const;

                    /**
                     * 获取平台站点链接
                     * @return PlatUrl 平台站点链接
                     */
                    std::string GetPlatUrl() const;

                    /**
                     * 设置平台站点链接
                     * @param PlatUrl 平台站点链接
                     */
                    void SetPlatUrl(const std::string& _platUrl);

                    /**
                     * 判断参数 PlatUrl 是否已赋值
                     * @return PlatUrl 是否已赋值
                     */
                    bool PlatUrlHasBeenSet() const;

                    /**
                     * 获取作者ID
                     * @return AuthorId 作者ID
                     */
                    std::string GetAuthorId() const;

                    /**
                     * 设置作者ID
                     * @param AuthorId 作者ID
                     */
                    void SetAuthorId(const std::string& _authorId);

                    /**
                     * 判断参数 AuthorId 是否已赋值
                     * @return AuthorId 是否已赋值
                     */
                    bool AuthorIdHasBeenSet() const;

                    /**
                     * 获取作品ID
                     * @return WorksId 作品ID
                     */
                    int64_t GetWorksId() const;

                    /**
                     * 设置作品ID
                     * @param WorksId 作品ID
                     */
                    void SetWorksId(const int64_t& _worksId);

                    /**
                     * 判断参数 WorksId 是否已赋值
                     * @return WorksId 是否已赋值
                     */
                    bool WorksIdHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return WorkId xxx
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置xxx
                     * @param WorkId xxx
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return WhiteSites xxx
                     */
                    std::string GetWhiteSites() const;

                    /**
                     * 设置xxx
                     * @param WhiteSites xxx
                     */
                    void SetWhiteSites(const std::string& _whiteSites);

                    /**
                     * 判断参数 WhiteSites 是否已赋值
                     * @return WhiteSites 是否已赋值
                     */
                    bool WhiteSitesHasBeenSet() const;

                private:

                    /**
                     * 白名单ID
                     */
                    int64_t m_whiteListId;
                    bool m_whiteListIdHasBeenSet;

                    /**
                     * 平台名称
                     */
                    std::string m_platForm;
                    bool m_platFormHasBeenSet;

                    /**
                     * 平台站点链接
                     */
                    std::string m_platUrl;
                    bool m_platUrlHasBeenSet;

                    /**
                     * 作者ID
                     */
                    std::string m_authorId;
                    bool m_authorIdHasBeenSet;

                    /**
                     * 作品ID
                     */
                    int64_t m_worksId;
                    bool m_worksIdHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_whiteSites;
                    bool m_whiteSitesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRWHITELISTREQUEST_H_
