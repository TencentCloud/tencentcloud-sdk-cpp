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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRTORTREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRTORTREQUEST_H_

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
                * CreateCRTort请求参数结构体
                */
                class CreateCRTortRequest : public AbstractModel
                {
                public:
                    CreateCRTortRequest();
                    ~CreateCRTortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取xx
                     * @return WorkId xx
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置xx
                     * @param WorkId xx
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return TortURL xx
                     */
                    std::string GetTortURL() const;

                    /**
                     * 设置xx
                     * @param TortURL xx
                     */
                    void SetTortURL(const std::string& _tortURL);

                    /**
                     * 判断参数 TortURL 是否已赋值
                     * @return TortURL 是否已赋值
                     */
                    bool TortURLHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return TortPlat xx
                     */
                    std::string GetTortPlat() const;

                    /**
                     * 设置xx
                     * @param TortPlat xx
                     */
                    void SetTortPlat(const std::string& _tortPlat);

                    /**
                     * 判断参数 TortPlat 是否已赋值
                     * @return TortPlat 是否已赋值
                     */
                    bool TortPlatHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return TortTitle xx
                     */
                    std::string GetTortTitle() const;

                    /**
                     * 设置xx
                     * @param TortTitle xx
                     */
                    void SetTortTitle(const std::string& _tortTitle);

                    /**
                     * 判断参数 TortTitle 是否已赋值
                     * @return TortTitle 是否已赋值
                     */
                    bool TortTitleHasBeenSet() const;

                private:

                    /**
                     * xx
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_tortURL;
                    bool m_tortURLHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_tortPlat;
                    bool m_tortPlatHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_tortTitle;
                    bool m_tortTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRTORTREQUEST_H_
