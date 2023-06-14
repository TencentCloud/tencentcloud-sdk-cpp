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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIGFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIGFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 极速高清参数配置。
                */
                class TEHDConfigForUpdate : public AbstractModel
                {
                public:
                    TEHDConfigForUpdate();
                    ~TEHDConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取极速高清类型，可选值：<li>TEHD-100 表示极速高清-100;</li> <li>OFF 表示关闭极速高清。</li>不填表示不修改。
                     * @return Type 极速高清类型，可选值：<li>TEHD-100 表示极速高清-100;</li> <li>OFF 表示关闭极速高清。</li>不填表示不修改。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置极速高清类型，可选值：<li>TEHD-100 表示极速高清-100;</li> <li>OFF 表示关闭极速高清。</li>不填表示不修改。
                     * @param _type 极速高清类型，可选值：<li>TEHD-100 表示极速高清-100;</li> <li>OFF 表示关闭极速高清。</li>不填表示不修改。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取视频码率上限，不填代表不修改。
                     * @return MaxVideoBitrate 视频码率上限，不填代表不修改。
                     * 
                     */
                    uint64_t GetMaxVideoBitrate() const;

                    /**
                     * 设置视频码率上限，不填代表不修改。
                     * @param _maxVideoBitrate 视频码率上限，不填代表不修改。
                     * 
                     */
                    void SetMaxVideoBitrate(const uint64_t& _maxVideoBitrate);

                    /**
                     * 判断参数 MaxVideoBitrate 是否已赋值
                     * @return MaxVideoBitrate 是否已赋值
                     * 
                     */
                    bool MaxVideoBitrateHasBeenSet() const;

                private:

                    /**
                     * 极速高清类型，可选值：<li>TEHD-100 表示极速高清-100;</li> <li>OFF 表示关闭极速高清。</li>不填表示不修改。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 视频码率上限，不填代表不修改。
                     */
                    uint64_t m_maxVideoBitrate;
                    bool m_maxVideoBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIGFORUPDATE_H_
