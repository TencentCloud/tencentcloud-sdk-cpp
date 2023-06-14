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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAQUERYDATA_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAQUERYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 该类型为DescribeCaptchaData 方法返回数据类型
                */
                class CaptchaQueryData : public AbstractModel
                {
                public:
                    CaptchaQueryData();
                    ~CaptchaQueryData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数量
                     * @return Cnt 数量
                     * 
                     */
                    int64_t GetCnt() const;

                    /**
                     * 设置数量
                     * @param _cnt 数量
                     * 
                     */
                    void SetCnt(const int64_t& _cnt);

                    /**
                     * 判断参数 Cnt 是否已赋值
                     * @return Cnt 是否已赋值
                     * 
                     */
                    bool CntHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return Date 时间
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置时间
                     * @param _date 时间
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 数量
                     */
                    int64_t m_cnt;
                    bool m_cntHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAQUERYDATA_H_
