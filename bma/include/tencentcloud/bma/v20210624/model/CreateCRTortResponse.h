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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRTORTRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRTORTRESPONSE_H_

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
                * CreateCRTort返回参数结构体
                */
                class CreateCRTortResponse : public AbstractModel
                {
                public:
                    CreateCRTortResponse();
                    ~CreateCRTortResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作品ID
                     * @return WorkId 作品ID
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

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
                     * 获取侵权标题
                     * @return TortTitle 侵权标题
                     * 
                     */
                    std::string GetTortTitle() const;

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
                     * 判断参数 TortPlat 是否已赋值
                     * @return TortPlat 是否已赋值
                     * 
                     */
                    bool TortPlatHasBeenSet() const;

                    /**
                     * 获取侵权网址
                     * @return TortURL 侵权网址
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
                     * 获取侵权域名
                     * @return TortDomain 侵权域名
                     * 
                     */
                    std::string GetTortDomain() const;

                    /**
                     * 判断参数 TortDomain 是否已赋值
                     * @return TortDomain 是否已赋值
                     * 
                     */
                    bool TortDomainHasBeenSet() const;

                    /**
                     * 获取侵权主体
                     * @return TortBodyName 侵权主体
                     * 
                     */
                    std::string GetTortBodyName() const;

                    /**
                     * 判断参数 TortBodyName 是否已赋值
                     * @return TortBodyName 是否已赋值
                     * 
                     */
                    bool TortBodyNameHasBeenSet() const;

                private:

                    /**
                     * 作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 侵权ID
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

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
                     * 侵权网址
                     */
                    std::string m_tortURL;
                    bool m_tortURLHasBeenSet;

                    /**
                     * 侵权域名
                     */
                    std::string m_tortDomain;
                    bool m_tortDomainHasBeenSet;

                    /**
                     * 侵权主体
                     */
                    std::string m_tortBodyName;
                    bool m_tortBodyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRTORTRESPONSE_H_
