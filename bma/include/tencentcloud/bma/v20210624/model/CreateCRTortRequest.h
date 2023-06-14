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
                     * 获取侵权网址
                     * @return TortURL 侵权网址
                     * 
                     */
                    std::string GetTortURL() const;

                    /**
                     * 设置侵权网址
                     * @param _tortURL 侵权网址
                     * 
                     */
                    void SetTortURL(const std::string& _tortURL);

                    /**
                     * 判断参数 TortURL 是否已赋值
                     * @return TortURL 是否已赋值
                     * 
                     */
                    bool TortURLHasBeenSet() const;

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

                private:

                    /**
                     * 作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 侵权网址
                     */
                    std::string m_tortURL;
                    bool m_tortURLHasBeenSet;

                    /**
                     * 侵权平台
                     */
                    std::string m_tortPlat;
                    bool m_tortPlatHasBeenSet;

                    /**
                     * 侵权标题
                     */
                    std::string m_tortTitle;
                    bool m_tortTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRTORTREQUEST_H_
