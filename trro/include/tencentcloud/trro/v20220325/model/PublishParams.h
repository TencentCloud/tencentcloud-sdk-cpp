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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_PUBLISHPARAMS_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_PUBLISHPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 转推参数，一个任务最多支持10个推流URL。
                */
                class PublishParams : public AbstractModel
                {
                public:
                    PublishParams();
                    ~PublishParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云直播推流地址url
                     * @return PublishUrl 腾讯云直播推流地址url
                     * 
                     */
                    std::string GetPublishUrl() const;

                    /**
                     * 设置腾讯云直播推流地址url
                     * @param _publishUrl 腾讯云直播推流地址url
                     * 
                     */
                    void SetPublishUrl(const std::string& _publishUrl);

                    /**
                     * 判断参数 PublishUrl 是否已赋值
                     * @return PublishUrl 是否已赋值
                     * 
                     */
                    bool PublishUrlHasBeenSet() const;

                    /**
                     * 获取是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。
                     * @return IsTencentUrl 是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。
                     * 
                     */
                    int64_t GetIsTencentUrl() const;

                    /**
                     * 设置是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。
                     * @param _isTencentUrl 是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。
                     * 
                     */
                    void SetIsTencentUrl(const int64_t& _isTencentUrl);

                    /**
                     * 判断参数 IsTencentUrl 是否已赋值
                     * @return IsTencentUrl 是否已赋值
                     * 
                     */
                    bool IsTencentUrlHasBeenSet() const;

                private:

                    /**
                     * 腾讯云直播推流地址url
                     */
                    std::string m_publishUrl;
                    bool m_publishUrlHasBeenSet;

                    /**
                     * 是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。
                     */
                    int64_t m_isTencentUrl;
                    bool m_isTencentUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_PUBLISHPARAMS_H_
