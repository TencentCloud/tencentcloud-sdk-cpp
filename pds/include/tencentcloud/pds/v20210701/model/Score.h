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

#ifndef TENCENTCLOUD_PDS_V20210701_MODEL_SCORE_H_
#define TENCENTCLOUD_PDS_V20210701_MODEL_SCORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pds
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 信誉分，1-5从低到高
                */
                class Score : public AbstractModel
                {
                public:
                    Score();
                    ~Score() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取信誉分，1-5从低到高
                     * @return Star 信誉分，1-5从低到高
                     * 
                     */
                    int64_t GetStar() const;

                    /**
                     * 设置信誉分，1-5从低到高
                     * @param _star 信誉分，1-5从低到高
                     * 
                     */
                    void SetStar(const int64_t& _star);

                    /**
                     * 判断参数 Star 是否已赋值
                     * @return Star 是否已赋值
                     * 
                     */
                    bool StarHasBeenSet() const;

                private:

                    /**
                     * 信誉分，1-5从低到高
                     */
                    int64_t m_star;
                    bool m_starHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PDS_V20210701_MODEL_SCORE_H_
