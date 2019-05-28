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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_OVERVIEWRECORD_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_OVERVIEWRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 概览数据
                */
                class OverviewRecord : public AbstractModel
                {
                public:
                    OverviewRecord();
                    ~OverviewRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用恶意量
                     * @return EvilCount 调用恶意量
                     */
                    uint64_t GetEvilCount() const;

                    /**
                     * 设置调用恶意量
                     * @param EvilCount 调用恶意量
                     */
                    void SetEvilCount(const uint64_t& _evilCount);

                    /**
                     * 判断参数 EvilCount 是否已赋值
                     * @return EvilCount 是否已赋值
                     */
                    bool EvilCountHasBeenSet() const;

                    /**
                     * 获取Text表示文本，Image表示图片，Audio表示音频，Video表示视频
                     * @return ServiceType Text表示文本，Image表示图片，Audio表示音频，Video表示视频
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Text表示文本，Image表示图片，Audio表示音频，Video表示视频
                     * @param ServiceType Text表示文本，Image表示图片，Audio表示音频，Video表示视频
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取调用总量
                     * @return TotalCount 调用总量
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置调用总量
                     * @param TotalCount 调用总量
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取恶意量同比增长率
                     * @return Yoy 恶意量同比增长率
                     */
                    std::string GetYoy() const;

                    /**
                     * 设置恶意量同比增长率
                     * @param Yoy 恶意量同比增长率
                     */
                    void SetYoy(const std::string& _yoy);

                    /**
                     * 判断参数 Yoy 是否已赋值
                     * @return Yoy 是否已赋值
                     */
                    bool YoyHasBeenSet() const;

                private:

                    /**
                     * 调用恶意量
                     */
                    uint64_t m_evilCount;
                    bool m_evilCountHasBeenSet;

                    /**
                     * Text表示文本，Image表示图片，Audio表示音频，Video表示视频
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 调用总量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 恶意量同比增长率
                     */
                    std::string m_yoy;
                    bool m_yoyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_OVERVIEWRECORD_H_
