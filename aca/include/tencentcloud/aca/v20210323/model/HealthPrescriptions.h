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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_HEALTHPRESCRIPTIONS_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_HEALTHPRESCRIPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 健康处方
                */
                class HealthPrescriptions : public AbstractModel
                {
                public:
                    HealthPrescriptions();
                    ~HealthPrescriptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param _title 标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取健康处方链接
                     * @return Url 健康处方链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置健康处方链接
                     * @param _url 健康处方链接
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取关键信息
                     * @return KeyInformation 关键信息
                     * 
                     */
                    std::string GetKeyInformation() const;

                    /**
                     * 设置关键信息
                     * @param _keyInformation 关键信息
                     * 
                     */
                    void SetKeyInformation(const std::string& _keyInformation);

                    /**
                     * 判断参数 KeyInformation 是否已赋值
                     * @return KeyInformation 是否已赋值
                     * 
                     */
                    bool KeyInformationHasBeenSet() const;

                private:

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 健康处方链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 关键信息
                     */
                    std::string m_keyInformation;
                    bool m_keyInformationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_HEALTHPRESCRIPTIONS_H_
